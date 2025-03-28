// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/devops_20210625.hpp>
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

using namespace Alibabacloud_Devops20210625;

Alibabacloud_Devops20210625::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("devops"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Devops20210625::Client::getEndpoint(shared_ptr<string> productId,
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

AddGroupMemberResponse Alibabacloud_Devops20210625::Client::addGroupMemberWithOptions(shared_ptr<string> groupId,
                                                                                      shared_ptr<AddGroupMemberRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->accessLevel)) {
    body->insert(pair<string, long>("accessLevel", *request->accessLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunPks)) {
    body->insert(pair<string, string>("aliyunPks", *request->aliyunPks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddGroupMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/members/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddGroupMemberResponse(callApi(params, req, runtime));
  }
  else {
    return AddGroupMemberResponse(execute(params, req, runtime));
  }
}

AddGroupMemberResponse Alibabacloud_Devops20210625::Client::addGroupMember(shared_ptr<string> groupId, shared_ptr<AddGroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addGroupMemberWithOptions(groupId, request, headers, runtime);
}

AddPipelineRelationsResponse Alibabacloud_Devops20210625::Client::addPipelineRelationsWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<string> pipelineId,
                                                                                                  shared_ptr<AddPipelineRelationsRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->relObjectIds)) {
    query->insert(pair<string, string>("relObjectIds", *request->relObjectIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relObjectType)) {
    query->insert(pair<string, string>("relObjectType", *request->relObjectType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddPipelineRelations"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/pipelineRelations"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddPipelineRelationsResponse(callApi(params, req, runtime));
  }
  else {
    return AddPipelineRelationsResponse(execute(params, req, runtime));
  }
}

AddPipelineRelationsResponse Alibabacloud_Devops20210625::Client::addPipelineRelations(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<AddPipelineRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addPipelineRelationsWithOptions(organizationId, pipelineId, request, headers, runtime);
}

AddRepositoryMemberResponse Alibabacloud_Devops20210625::Client::addRepositoryMemberWithOptions(shared_ptr<string> repositoryId,
                                                                                                shared_ptr<AddRepositoryMemberRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->accessLevel)) {
    body->insert(pair<string, long>("accessLevel", *request->accessLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunPks)) {
    body->insert(pair<string, string>("aliyunPks", *request->aliyunPks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddRepositoryMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/members"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddRepositoryMemberResponse(callApi(params, req, runtime));
  }
  else {
    return AddRepositoryMemberResponse(execute(params, req, runtime));
  }
}

AddRepositoryMemberResponse Alibabacloud_Devops20210625::Client::addRepositoryMember(shared_ptr<string> repositoryId, shared_ptr<AddRepositoryMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addRepositoryMemberWithOptions(repositoryId, request, headers, runtime);
}

AddWebhookResponse Alibabacloud_Devops20210625::Client::addWebhookWithOptions(shared_ptr<string> repositoryId,
                                                                              shared_ptr<AddWebhookRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSslVerification)) {
    body->insert(pair<string, bool>("enableSslVerification", *request->enableSslVerification));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mergeRequestsEvents)) {
    body->insert(pair<string, bool>("mergeRequestsEvents", *request->mergeRequestsEvents));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->noteEvents)) {
    body->insert(pair<string, bool>("noteEvents", *request->noteEvents));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->pushEvents)) {
    body->insert(pair<string, bool>("pushEvents", *request->pushEvents));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretToken)) {
    body->insert(pair<string, string>("secretToken", *request->secretToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->tagPushEvents)) {
    body->insert(pair<string, bool>("tagPushEvents", *request->tagPushEvents));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddWebhook"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/webhooks/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddWebhookResponse(callApi(params, req, runtime));
  }
  else {
    return AddWebhookResponse(execute(params, req, runtime));
  }
}

AddWebhookResponse Alibabacloud_Devops20210625::Client::addWebhook(shared_ptr<string> repositoryId, shared_ptr<AddWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addWebhookWithOptions(repositoryId, request, headers, runtime);
}

CancelExecutionReleaseStageResponse Alibabacloud_Devops20210625::Client::cancelExecutionReleaseStageWithOptions(shared_ptr<string> appName,
                                                                                                                shared_ptr<string> releaseWorkflowSn,
                                                                                                                shared_ptr<string> releaseStageSn,
                                                                                                                shared_ptr<string> executionNumber,
                                                                                                                shared_ptr<CancelExecutionReleaseStageRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelExecutionReleaseStage"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/releaseWorkflows/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(releaseWorkflowSn)) + string("/releaseStages/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(releaseStageSn)) + string("/executions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(executionNumber)) + string("%3Acancel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CancelExecutionReleaseStageResponse(callApi(params, req, runtime));
  }
  else {
    return CancelExecutionReleaseStageResponse(execute(params, req, runtime));
  }
}

CancelExecutionReleaseStageResponse Alibabacloud_Devops20210625::Client::cancelExecutionReleaseStage(shared_ptr<string> appName,
                                                                                                     shared_ptr<string> releaseWorkflowSn,
                                                                                                     shared_ptr<string> releaseStageSn,
                                                                                                     shared_ptr<string> executionNumber,
                                                                                                     shared_ptr<CancelExecutionReleaseStageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelExecutionReleaseStageWithOptions(appName, releaseWorkflowSn, releaseStageSn, executionNumber, request, headers, runtime);
}

CloseMergeRequestResponse Alibabacloud_Devops20210625::Client::closeMergeRequestWithOptions(shared_ptr<string> repositoryId,
                                                                                            shared_ptr<string> localId,
                                                                                            shared_ptr<CloseMergeRequestRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseMergeRequest"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/merge_requests/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(localId)) + string("/close"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CloseMergeRequestResponse(callApi(params, req, runtime));
  }
  else {
    return CloseMergeRequestResponse(execute(params, req, runtime));
  }
}

CloseMergeRequestResponse Alibabacloud_Devops20210625::Client::closeMergeRequest(shared_ptr<string> repositoryId, shared_ptr<string> localId, shared_ptr<CloseMergeRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return closeMergeRequestWithOptions(repositoryId, localId, request, headers, runtime);
}

CreateAppMembersResponse Alibabacloud_Devops20210625::Client::createAppMembersWithOptions(shared_ptr<string> appName,
                                                                                          shared_ptr<CreateAppMembersRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppMembersRequestPlayerList>>(request->playerList)) {
    body->insert(pair<string, vector<CreateAppMembersRequestPlayerList>>("playerList", *request->playerList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->roleNames)) {
    body->insert(pair<string, vector<string>>("roleNames", *request->roleNames));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppMembers"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/members"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAppMembersResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAppMembersResponse(execute(params, req, runtime));
  }
}

CreateAppMembersResponse Alibabacloud_Devops20210625::Client::createAppMembers(shared_ptr<string> appName, shared_ptr<CreateAppMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAppMembersWithOptions(appName, request, headers, runtime);
}

CreateBranchResponse Alibabacloud_Devops20210625::Client::createBranchWithOptions(shared_ptr<string> repositoryId,
                                                                                  shared_ptr<CreateBranchRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->branchName)) {
    body->insert(pair<string, string>("branchName", *request->branchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ref)) {
    body->insert(pair<string, string>("ref", *request->ref));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBranch"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/branches"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateBranchResponse(callApi(params, req, runtime));
  }
  else {
    return CreateBranchResponse(execute(params, req, runtime));
  }
}

CreateBranchResponse Alibabacloud_Devops20210625::Client::createBranch(shared_ptr<string> repositoryId, shared_ptr<CreateBranchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createBranchWithOptions(repositoryId, request, headers, runtime);
}

CreateChangeRequestResponse Alibabacloud_Devops20210625::Client::createChangeRequestWithOptions(shared_ptr<string> appName,
                                                                                                shared_ptr<CreateChangeRequestRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCodeRepoSn)) {
    body->insert(pair<string, string>("appCodeRepoSn", *request->appCodeRepoSn));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoDeleteBranchWhenEnd)) {
    body->insert(pair<string, bool>("autoDeleteBranchWhenEnd", *request->autoDeleteBranchWhenEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->branchName)) {
    body->insert(pair<string, string>("branchName", *request->branchName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->createBranch)) {
    body->insert(pair<string, bool>("createBranch", *request->createBranch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccountId)) {
    body->insert(pair<string, string>("ownerAccountId", *request->ownerAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    body->insert(pair<string, string>("ownerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateChangeRequest"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/changeRequests"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateChangeRequestResponse(callApi(params, req, runtime));
  }
  else {
    return CreateChangeRequestResponse(execute(params, req, runtime));
  }
}

CreateChangeRequestResponse Alibabacloud_Devops20210625::Client::createChangeRequest(shared_ptr<string> appName, shared_ptr<CreateChangeRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createChangeRequestWithOptions(appName, request, headers, runtime);
}

CreateCheckRunResponse Alibabacloud_Devops20210625::Client::createCheckRunWithOptions(shared_ptr<CreateCheckRunRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateCheckRunRequestAnnotations>>(request->annotations)) {
    body->insert(pair<string, vector<CreateCheckRunRequestAnnotations>>("annotations", *request->annotations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->completedAt)) {
    body->insert(pair<string, string>("completedAt", *request->completedAt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conclusion)) {
    body->insert(pair<string, string>("conclusion", *request->conclusion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detailsUrl)) {
    body->insert(pair<string, string>("detailsUrl", *request->detailsUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalId)) {
    body->insert(pair<string, string>("externalId", *request->externalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->headSha)) {
    body->insert(pair<string, string>("headSha", *request->headSha));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<CreateCheckRunRequestOutput>(request->output)) {
    body->insert(pair<string, CreateCheckRunRequestOutput>("output", *request->output));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startedAt)) {
    body->insert(pair<string, string>("startedAt", *request->startedAt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCheckRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/check_runs/create_check_run"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateCheckRunResponse(callApi(params, req, runtime));
  }
  else {
    return CreateCheckRunResponse(execute(params, req, runtime));
  }
}

CreateCheckRunResponse Alibabacloud_Devops20210625::Client::createCheckRun(shared_ptr<CreateCheckRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createCheckRunWithOptions(request, headers, runtime);
}

CreateCommentResponse Alibabacloud_Devops20210625::Client::createCommentWithOptions(shared_ptr<CreateCommentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->localId)) {
    query->insert(pair<string, long>("localId", *request->localId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commentType)) {
    body->insert(pair<string, string>("commentType", *request->commentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->draft)) {
    body->insert(pair<string, bool>("draft", *request->draft));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    body->insert(pair<string, string>("filePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromPachSetBizId)) {
    body->insert(pair<string, string>("fromPachSetBizId", *request->fromPachSetBizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lineNumber)) {
    body->insert(pair<string, long>("lineNumber", *request->lineNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentCommentBizId)) {
    body->insert(pair<string, string>("parentCommentBizId", *request->parentCommentBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->patchSetBizId)) {
    body->insert(pair<string, string>("patchSetBizId", *request->patchSetBizId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->resolved)) {
    body->insert(pair<string, bool>("resolved", *request->resolved));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toPatchSetBizId)) {
    body->insert(pair<string, string>("toPatchSetBizId", *request->toPatchSetBizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateComment"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/code_reviews/comments/create_comment"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateCommentResponse(callApi(params, req, runtime));
  }
  else {
    return CreateCommentResponse(execute(params, req, runtime));
  }
}

CreateCommentResponse Alibabacloud_Devops20210625::Client::createComment(shared_ptr<CreateCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createCommentWithOptions(request, headers, runtime);
}

CreateCommitStatusResponse Alibabacloud_Devops20210625::Client::createCommitStatusWithOptions(shared_ptr<CreateCommitStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sha)) {
    query->insert(pair<string, string>("sha", *request->sha));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->context)) {
    body->insert(pair<string, string>("context", *request->context));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    body->insert(pair<string, string>("state", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUrl)) {
    body->insert(pair<string, string>("targetUrl", *request->targetUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCommitStatus"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/repository/commit_statuses/create_commit_status"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateCommitStatusResponse(callApi(params, req, runtime));
  }
  else {
    return CreateCommitStatusResponse(execute(params, req, runtime));
  }
}

CreateCommitStatusResponse Alibabacloud_Devops20210625::Client::createCommitStatus(shared_ptr<CreateCommitStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createCommitStatusWithOptions(request, headers, runtime);
}

CreateCommitWithMultipleFilesResponse Alibabacloud_Devops20210625::Client::createCommitWithMultipleFilesWithOptions(shared_ptr<CreateCommitWithMultipleFilesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateCommitWithMultipleFilesRequestActions>>(request->actions)) {
    body->insert(pair<string, vector<CreateCommitWithMultipleFilesRequestActions>>("actions", *request->actions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->branch)) {
    body->insert(pair<string, string>("branch", *request->branch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commitMessage)) {
    body->insert(pair<string, string>("commitMessage", *request->commitMessage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCommitWithMultipleFiles"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/repository/commits/files"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateCommitWithMultipleFilesResponse(callApi(params, req, runtime));
  }
  else {
    return CreateCommitWithMultipleFilesResponse(execute(params, req, runtime));
  }
}

CreateCommitWithMultipleFilesResponse Alibabacloud_Devops20210625::Client::createCommitWithMultipleFiles(shared_ptr<CreateCommitWithMultipleFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createCommitWithMultipleFilesWithOptions(request, headers, runtime);
}

CreateDeployKeyResponse Alibabacloud_Devops20210625::Client::createDeployKeyWithOptions(shared_ptr<string> repositoryId,
                                                                                        shared_ptr<CreateDeployKeyRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    body->insert(pair<string, string>("key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeployKey"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/keys/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateDeployKeyResponse(callApi(params, req, runtime));
  }
  else {
    return CreateDeployKeyResponse(execute(params, req, runtime));
  }
}

CreateDeployKeyResponse Alibabacloud_Devops20210625::Client::createDeployKey(shared_ptr<string> repositoryId, shared_ptr<CreateDeployKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDeployKeyWithOptions(repositoryId, request, headers, runtime);
}

CreateFileResponse Alibabacloud_Devops20210625::Client::createFileWithOptions(shared_ptr<string> repositoryId,
                                                                              shared_ptr<CreateFileRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->branchName)) {
    body->insert(pair<string, string>("branchName", *request->branchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commitMessage)) {
    body->insert(pair<string, string>("commitMessage", *request->commitMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encoding)) {
    body->insert(pair<string, string>("encoding", *request->encoding));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    body->insert(pair<string, string>("filePath", *request->filePath));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFile"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/files"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateFileResponse(callApi(params, req, runtime));
  }
  else {
    return CreateFileResponse(execute(params, req, runtime));
  }
}

CreateFileResponse Alibabacloud_Devops20210625::Client::createFile(shared_ptr<string> repositoryId, shared_ptr<CreateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFileWithOptions(repositoryId, request, headers, runtime);
}

CreateFlowTagResponse Alibabacloud_Devops20210625::Client::createFlowTagWithOptions(shared_ptr<string> organizationId,
                                                                                    shared_ptr<CreateFlowTagRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->color)) {
    query->insert(pair<string, string>("color", *request->color));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flowTagGroupId)) {
    query->insert(pair<string, long>("flowTagGroupId", *request->flowTagGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFlowTag"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/flow/tags"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateFlowTagResponse(callApi(params, req, runtime));
  }
  else {
    return CreateFlowTagResponse(execute(params, req, runtime));
  }
}

CreateFlowTagResponse Alibabacloud_Devops20210625::Client::createFlowTag(shared_ptr<string> organizationId, shared_ptr<CreateFlowTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFlowTagWithOptions(organizationId, request, headers, runtime);
}

CreateFlowTagGroupResponse Alibabacloud_Devops20210625::Client::createFlowTagGroupWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<CreateFlowTagGroupRequest> request,
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
    {"action", boost::any(string("CreateFlowTagGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/flow/tagGroups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateFlowTagGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateFlowTagGroupResponse(execute(params, req, runtime));
  }
}

CreateFlowTagGroupResponse Alibabacloud_Devops20210625::Client::createFlowTagGroup(shared_ptr<string> organizationId, shared_ptr<CreateFlowTagGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFlowTagGroupWithOptions(organizationId, request, headers, runtime);
}

CreateHostGroupResponse Alibabacloud_Devops20210625::Client::createHostGroupWithOptions(shared_ptr<string> organizationId,
                                                                                        shared_ptr<CreateHostGroupRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunRegion)) {
    body->insert(pair<string, string>("aliyunRegion", *request->aliyunRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsLabelKey)) {
    body->insert(pair<string, string>("ecsLabelKey", *request->ecsLabelKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsLabelValue)) {
    body->insert(pair<string, string>("ecsLabelValue", *request->ecsLabelValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsType)) {
    body->insert(pair<string, string>("ecsType", *request->ecsType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    body->insert(pair<string, string>("envId", *request->envId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->machineInfos)) {
    body->insert(pair<string, string>("machineInfos", *request->machineInfos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceConnectionId)) {
    body->insert(pair<string, long>("serviceConnectionId", *request->serviceConnectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagIds)) {
    body->insert(pair<string, string>("tagIds", *request->tagIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHostGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/hostGroups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateHostGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateHostGroupResponse(execute(params, req, runtime));
  }
}

CreateHostGroupResponse Alibabacloud_Devops20210625::Client::createHostGroup(shared_ptr<string> organizationId, shared_ptr<CreateHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createHostGroupWithOptions(organizationId, request, headers, runtime);
}

CreateMergeRequestResponse Alibabacloud_Devops20210625::Client::createMergeRequestWithOptions(shared_ptr<string> repositoryId,
                                                                                              shared_ptr<CreateMergeRequestRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createFrom)) {
    body->insert(pair<string, string>("createFrom", *request->createFrom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->reviewerIds)) {
    body->insert(pair<string, vector<string>>("reviewerIds", *request->reviewerIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceBranch)) {
    body->insert(pair<string, string>("sourceBranch", *request->sourceBranch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sourceProjectId)) {
    body->insert(pair<string, long>("sourceProjectId", *request->sourceProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetBranch)) {
    body->insert(pair<string, string>("targetBranch", *request->targetBranch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->targetProjectId)) {
    body->insert(pair<string, long>("targetProjectId", *request->targetProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workItemIds)) {
    body->insert(pair<string, string>("workItemIds", *request->workItemIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMergeRequest"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/merge_requests"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateMergeRequestResponse(callApi(params, req, runtime));
  }
  else {
    return CreateMergeRequestResponse(execute(params, req, runtime));
  }
}

CreateMergeRequestResponse Alibabacloud_Devops20210625::Client::createMergeRequest(shared_ptr<string> repositoryId, shared_ptr<CreateMergeRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createMergeRequestWithOptions(repositoryId, request, headers, runtime);
}

CreateOAuthTokenResponse Alibabacloud_Devops20210625::Client::createOAuthTokenWithOptions(shared_ptr<CreateOAuthTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    body->insert(pair<string, string>("clientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSecret)) {
    body->insert(pair<string, string>("clientSecret", *request->clientSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantType)) {
    body->insert(pair<string, string>("grantType", *request->grantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->login)) {
    body->insert(pair<string, string>("login", *request->login));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("scope", *request->scope));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOAuthToken"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/login/oauth/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateOAuthTokenResponse(callApi(params, req, runtime));
  }
  else {
    return CreateOAuthTokenResponse(execute(params, req, runtime));
  }
}

CreateOAuthTokenResponse Alibabacloud_Devops20210625::Client::createOAuthToken(shared_ptr<CreateOAuthTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createOAuthTokenWithOptions(request, headers, runtime);
}

CreatePipelineResponse Alibabacloud_Devops20210625::Client::createPipelineWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<CreatePipelineRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePipeline"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreatePipelineResponse(callApi(params, req, runtime));
  }
  else {
    return CreatePipelineResponse(execute(params, req, runtime));
  }
}

CreatePipelineResponse Alibabacloud_Devops20210625::Client::createPipeline(shared_ptr<string> organizationId, shared_ptr<CreatePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPipelineWithOptions(organizationId, request, headers, runtime);
}

CreatePipelineGroupResponse Alibabacloud_Devops20210625::Client::createPipelineGroupWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<CreatePipelineGroupRequest> request,
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
    {"action", boost::any(string("CreatePipelineGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelineGroups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreatePipelineGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreatePipelineGroupResponse(execute(params, req, runtime));
  }
}

CreatePipelineGroupResponse Alibabacloud_Devops20210625::Client::createPipelineGroup(shared_ptr<string> organizationId, shared_ptr<CreatePipelineGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPipelineGroupWithOptions(organizationId, request, headers, runtime);
}

CreateProjectResponse Alibabacloud_Devops20210625::Client::createProjectWithOptions(shared_ptr<string> organizationId,
                                                                                    shared_ptr<CreateProjectRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customCode)) {
    body->insert(pair<string, string>("customCode", *request->customCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateIdentifier)) {
    body->insert(pair<string, string>("templateIdentifier", *request->templateIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProject"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/projects/createProject"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateProjectResponse(callApi(params, req, runtime));
  }
  else {
    return CreateProjectResponse(execute(params, req, runtime));
  }
}

CreateProjectResponse Alibabacloud_Devops20210625::Client::createProject(shared_ptr<string> organizationId, shared_ptr<CreateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProjectWithOptions(organizationId, request, headers, runtime);
}

CreateProjectLabelResponse Alibabacloud_Devops20210625::Client::createProjectLabelWithOptions(shared_ptr<CreateProjectLabelRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->color)) {
    body->insert(pair<string, string>("color", *request->color));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProjectLabel"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/labels"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateProjectLabelResponse(callApi(params, req, runtime));
  }
  else {
    return CreateProjectLabelResponse(execute(params, req, runtime));
  }
}

CreateProjectLabelResponse Alibabacloud_Devops20210625::Client::createProjectLabel(shared_ptr<CreateProjectLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProjectLabelWithOptions(request, headers, runtime);
}

CreateProtectdBranchResponse Alibabacloud_Devops20210625::Client::createProtectdBranchWithOptions(shared_ptr<string> repositoryId,
                                                                                                  shared_ptr<CreateProtectdBranchRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->allowMergeRoles)) {
    body->insert(pair<string, vector<long>>("allowMergeRoles", *request->allowMergeRoles));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->allowMergeUserIds)) {
    body->insert(pair<string, vector<string>>("allowMergeUserIds", *request->allowMergeUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->allowPushRoles)) {
    body->insert(pair<string, vector<long>>("allowPushRoles", *request->allowPushRoles));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->allowPushUserIds)) {
    body->insert(pair<string, vector<string>>("allowPushUserIds", *request->allowPushUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->branch)) {
    body->insert(pair<string, string>("branch", *request->branch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<CreateProtectdBranchRequestMergeRequestSetting>(request->mergeRequestSetting)) {
    body->insert(pair<string, CreateProtectdBranchRequestMergeRequestSetting>("mergeRequestSetting", *request->mergeRequestSetting));
  }
  if (!Darabonba_Util::Client::isUnset<CreateProtectdBranchRequestTestSettingDTO>(request->testSettingDTO)) {
    body->insert(pair<string, CreateProtectdBranchRequestTestSettingDTO>("testSettingDTO", *request->testSettingDTO));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProtectdBranch"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/protect_branches"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateProtectdBranchResponse(callApi(params, req, runtime));
  }
  else {
    return CreateProtectdBranchResponse(execute(params, req, runtime));
  }
}

CreateProtectdBranchResponse Alibabacloud_Devops20210625::Client::createProtectdBranch(shared_ptr<string> repositoryId, shared_ptr<CreateProtectdBranchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProtectdBranchWithOptions(repositoryId, request, headers, runtime);
}

CreatePushRuleResponse Alibabacloud_Devops20210625::Client::createPushRuleWithOptions(shared_ptr<string> repositoryId,
                                                                                      shared_ptr<CreatePushRuleRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreatePushRuleRequestRuleInfos>>(request->ruleInfos)) {
    body->insert(pair<string, vector<CreatePushRuleRequestRuleInfos>>("ruleInfos", *request->ruleInfos));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePushRule"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/push_rule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreatePushRuleResponse(callApi(params, req, runtime));
  }
  else {
    return CreatePushRuleResponse(execute(params, req, runtime));
  }
}

CreatePushRuleResponse Alibabacloud_Devops20210625::Client::createPushRule(shared_ptr<string> repositoryId, shared_ptr<CreatePushRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPushRuleWithOptions(repositoryId, request, headers, runtime);
}

CreateRepositoryResponse Alibabacloud_Devops20210625::Client::createRepositoryWithOptions(shared_ptr<CreateRepositoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->createParentPath)) {
    query->insert(pair<string, bool>("createParentPath", *request->createParentPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sync)) {
    query->insert(pair<string, bool>("sync", *request->sync));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarUrl)) {
    body->insert(pair<string, string>("avatarUrl", *request->avatarUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gitignoreType)) {
    body->insert(pair<string, string>("gitignoreType", *request->gitignoreType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->importAccount)) {
    body->insert(pair<string, string>("importAccount", *request->importAccount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->importDemoProject)) {
    body->insert(pair<string, bool>("importDemoProject", *request->importDemoProject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->importRepoType)) {
    body->insert(pair<string, string>("importRepoType", *request->importRepoType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->importToken)) {
    body->insert(pair<string, string>("importToken", *request->importToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->importTokenEncrypted)) {
    body->insert(pair<string, string>("importTokenEncrypted", *request->importTokenEncrypted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->importUrl)) {
    body->insert(pair<string, string>("importUrl", *request->importUrl));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->initStandardService)) {
    body->insert(pair<string, bool>("initStandardService", *request->initStandardService));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isCryptoEnabled)) {
    body->insert(pair<string, bool>("isCryptoEnabled", *request->isCryptoEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localImportUrl)) {
    body->insert(pair<string, string>("localImportUrl", *request->localImportUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->namespaceId)) {
    body->insert(pair<string, long>("namespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    body->insert(pair<string, string>("path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readmeType)) {
    body->insert(pair<string, string>("readmeType", *request->readmeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibilityLevel)) {
    body->insert(pair<string, long>("visibilityLevel", *request->visibilityLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepository"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateRepositoryResponse(callApi(params, req, runtime));
  }
  else {
    return CreateRepositoryResponse(execute(params, req, runtime));
  }
}

CreateRepositoryResponse Alibabacloud_Devops20210625::Client::createRepository(shared_ptr<CreateRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRepositoryWithOptions(request, headers, runtime);
}

CreateRepositoryGroupResponse Alibabacloud_Devops20210625::Client::createRepositoryGroupWithOptions(shared_ptr<CreateRepositoryGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarUrl)) {
    body->insert(pair<string, string>("avatarUrl", *request->avatarUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentId)) {
    body->insert(pair<string, long>("parentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    body->insert(pair<string, string>("path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibilityLevel)) {
    body->insert(pair<string, long>("visibilityLevel", *request->visibilityLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepositoryGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/groups/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateRepositoryGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateRepositoryGroupResponse(execute(params, req, runtime));
  }
}

CreateRepositoryGroupResponse Alibabacloud_Devops20210625::Client::createRepositoryGroup(shared_ptr<CreateRepositoryGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRepositoryGroupWithOptions(request, headers, runtime);
}

CreateResourceMemberResponse Alibabacloud_Devops20210625::Client::createResourceMemberWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<string> resourceType,
                                                                                                  shared_ptr<string> resourceId,
                                                                                                  shared_ptr<CreateResourceMemberRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("accountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    body->insert(pair<string, string>("roleName", *request->roleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceType)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceId)) + string("/members"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateResourceMemberResponse(callApi(params, req, runtime));
  }
  else {
    return CreateResourceMemberResponse(execute(params, req, runtime));
  }
}

CreateResourceMemberResponse Alibabacloud_Devops20210625::Client::createResourceMember(shared_ptr<string> organizationId,
                                                                                       shared_ptr<string> resourceType,
                                                                                       shared_ptr<string> resourceId,
                                                                                       shared_ptr<CreateResourceMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createResourceMemberWithOptions(organizationId, resourceType, resourceId, request, headers, runtime);
}

CreateServiceAuthResponse Alibabacloud_Devops20210625::Client::createServiceAuthWithOptions(shared_ptr<string> organizationId,
                                                                                            shared_ptr<CreateServiceAuthRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceAuthType)) {
    query->insert(pair<string, string>("serviceAuthType", *request->serviceAuthType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceAuth"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/serviceAuths"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateServiceAuthResponse(callApi(params, req, runtime));
  }
  else {
    return CreateServiceAuthResponse(execute(params, req, runtime));
  }
}

CreateServiceAuthResponse Alibabacloud_Devops20210625::Client::createServiceAuth(shared_ptr<string> organizationId, shared_ptr<CreateServiceAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceAuthWithOptions(organizationId, request, headers, runtime);
}

CreateServiceConnectionResponse Alibabacloud_Devops20210625::Client::createServiceConnectionWithOptions(shared_ptr<string> organizationId,
                                                                                                        shared_ptr<CreateServiceConnectionRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authType)) {
    body->insert(pair<string, string>("authType", *request->authType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionName)) {
    body->insert(pair<string, string>("connectionName", *request->connectionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionType)) {
    body->insert(pair<string, string>("connectionType", *request->connectionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceAuthId)) {
    body->insert(pair<string, long>("serviceAuthId", *request->serviceAuthId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceConnection"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/createServiceConnection"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateServiceConnectionResponse(callApi(params, req, runtime));
  }
  else {
    return CreateServiceConnectionResponse(execute(params, req, runtime));
  }
}

CreateServiceConnectionResponse Alibabacloud_Devops20210625::Client::createServiceConnection(shared_ptr<string> organizationId, shared_ptr<CreateServiceConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceConnectionWithOptions(organizationId, request, headers, runtime);
}

CreateServiceCredentialResponse Alibabacloud_Devops20210625::Client::createServiceCredentialWithOptions(shared_ptr<string> organizationId,
                                                                                                        shared_ptr<CreateServiceCredentialRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceCredential"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/serviceCredentials"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateServiceCredentialResponse(callApi(params, req, runtime));
  }
  else {
    return CreateServiceCredentialResponse(execute(params, req, runtime));
  }
}

CreateServiceCredentialResponse Alibabacloud_Devops20210625::Client::createServiceCredential(shared_ptr<string> organizationId, shared_ptr<CreateServiceCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceCredentialWithOptions(organizationId, request, headers, runtime);
}

CreateSprintResponse Alibabacloud_Devops20210625::Client::createSprintWithOptions(shared_ptr<string> organizationId,
                                                                                  shared_ptr<CreateSprintRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    body->insert(pair<string, string>("endDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceIdentifier)) {
    body->insert(pair<string, string>("spaceIdentifier", *request->spaceIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->staffIds)) {
    body->insert(pair<string, vector<string>>("staffIds", *request->staffIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    body->insert(pair<string, string>("startDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSprint"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/sprints/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSprintResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSprintResponse(execute(params, req, runtime));
  }
}

CreateSprintResponse Alibabacloud_Devops20210625::Client::createSprint(shared_ptr<string> organizationId, shared_ptr<CreateSprintRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSprintWithOptions(organizationId, request, headers, runtime);
}

CreateSshKeyResponse Alibabacloud_Devops20210625::Client::createSshKeyWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSshKey"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/sshKey"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSshKeyResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSshKeyResponse(execute(params, req, runtime));
  }
}

CreateSshKeyResponse Alibabacloud_Devops20210625::Client::createSshKey(shared_ptr<string> organizationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSshKeyWithOptions(organizationId, headers, runtime);
}

CreateTagResponse Alibabacloud_Devops20210625::Client::createTagWithOptions(shared_ptr<string> repositoryId,
                                                                            shared_ptr<CreateTagRequest> request,
                                                                            shared_ptr<map<string, string>> headers,
                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    body->insert(pair<string, string>("message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ref)) {
    body->insert(pair<string, string>("ref", *request->ref));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    body->insert(pair<string, string>("tagName", *request->tagName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTag"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/tags/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateTagResponse(callApi(params, req, runtime));
  }
  else {
    return CreateTagResponse(execute(params, req, runtime));
  }
}

CreateTagResponse Alibabacloud_Devops20210625::Client::createTag(shared_ptr<string> repositoryId, shared_ptr<CreateTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTagWithOptions(repositoryId, request, headers, runtime);
}

CreateTestCaseResponse Alibabacloud_Devops20210625::Client::createTestCaseWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<CreateTestCaseRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assignedTo)) {
    body->insert(pair<string, string>("assignedTo", *request->assignedTo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryIdentifier)) {
    body->insert(pair<string, string>("directoryIdentifier", *request->directoryIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTestCaseRequestFieldValueList>>(request->fieldValueList)) {
    body->insert(pair<string, vector<CreateTestCaseRequestFieldValueList>>("fieldValueList", *request->fieldValueList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->priority)) {
    body->insert(pair<string, string>("priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceIdentifier)) {
    body->insert(pair<string, string>("spaceIdentifier", *request->spaceIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    body->insert(pair<string, string>("subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tags)) {
    body->insert(pair<string, vector<string>>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTestCaseRequestTestcaseStepContentInfo>(request->testcaseStepContentInfo)) {
    body->insert(pair<string, CreateTestCaseRequestTestcaseStepContentInfo>("testcaseStepContentInfo", *request->testcaseStepContentInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTestCase"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/testhub/testcase"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateTestCaseResponse(callApi(params, req, runtime));
  }
  else {
    return CreateTestCaseResponse(execute(params, req, runtime));
  }
}

CreateTestCaseResponse Alibabacloud_Devops20210625::Client::createTestCase(shared_ptr<string> organizationId, shared_ptr<CreateTestCaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTestCaseWithOptions(organizationId, request, headers, runtime);
}

CreateUserKeyResponse Alibabacloud_Devops20210625::Client::createUserKeyWithOptions(shared_ptr<CreateUserKeyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expireTime)) {
    body->insert(pair<string, string>("expireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyScope)) {
    body->insert(pair<string, string>("keyScope", *request->keyScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publicKey)) {
    body->insert(pair<string, string>("publicKey", *request->publicKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUserKey"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/user/keys/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateUserKeyResponse(callApi(params, req, runtime));
  }
  else {
    return CreateUserKeyResponse(execute(params, req, runtime));
  }
}

CreateUserKeyResponse Alibabacloud_Devops20210625::Client::createUserKey(shared_ptr<CreateUserKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createUserKeyWithOptions(request, headers, runtime);
}

CreateVariableGroupResponse Alibabacloud_Devops20210625::Client::createVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<CreateVariableGroupRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variables)) {
    body->insert(pair<string, string>("variables", *request->variables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVariableGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/variableGroups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateVariableGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateVariableGroupResponse(execute(params, req, runtime));
  }
}

CreateVariableGroupResponse Alibabacloud_Devops20210625::Client::createVariableGroup(shared_ptr<string> organizationId, shared_ptr<CreateVariableGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createVariableGroupWithOptions(organizationId, request, headers, runtime);
}

CreateWorkitemResponse Alibabacloud_Devops20210625::Client::createWorkitemWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<CreateWorkitemRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assignedTo)) {
    body->insert(pair<string, string>("assignedTo", *request->assignedTo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->descriptionFormat)) {
    body->insert(pair<string, string>("descriptionFormat", *request->descriptionFormat));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateWorkitemRequestFieldValueList>>(request->fieldValueList)) {
    body->insert(pair<string, vector<CreateWorkitemRequestFieldValueList>>("fieldValueList", *request->fieldValueList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parent)) {
    body->insert(pair<string, string>("parent", *request->parent));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->participant)) {
    body->insert(pair<string, vector<string>>("participant", *request->participant));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->space)) {
    body->insert(pair<string, string>("space", *request->space));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceIdentifier)) {
    body->insert(pair<string, string>("spaceIdentifier", *request->spaceIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceType)) {
    body->insert(pair<string, string>("spaceType", *request->spaceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->sprint)) {
    body->insert(pair<string, vector<string>>("sprint", *request->sprint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    body->insert(pair<string, string>("subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tracker)) {
    body->insert(pair<string, vector<string>>("tracker", *request->tracker));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->verifier)) {
    body->insert(pair<string, vector<string>>("verifier", *request->verifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workitemType)) {
    body->insert(pair<string, string>("workitemType", *request->workitemType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkitem"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateWorkitemResponse(callApi(params, req, runtime));
  }
  else {
    return CreateWorkitemResponse(execute(params, req, runtime));
  }
}

CreateWorkitemResponse Alibabacloud_Devops20210625::Client::createWorkitem(shared_ptr<string> organizationId, shared_ptr<CreateWorkitemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createWorkitemWithOptions(organizationId, request, headers, runtime);
}

CreateWorkitemCommentResponse Alibabacloud_Devops20210625::Client::createWorkitemCommentWithOptions(shared_ptr<string> organizationId,
                                                                                                    shared_ptr<CreateWorkitemCommentRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formatType)) {
    body->insert(pair<string, string>("formatType", *request->formatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentId)) {
    body->insert(pair<string, string>("parentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workitemIdentifier)) {
    body->insert(pair<string, string>("workitemIdentifier", *request->workitemIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkitemComment"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/comment"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateWorkitemCommentResponse(callApi(params, req, runtime));
  }
  else {
    return CreateWorkitemCommentResponse(execute(params, req, runtime));
  }
}

CreateWorkitemCommentResponse Alibabacloud_Devops20210625::Client::createWorkitemComment(shared_ptr<string> organizationId, shared_ptr<CreateWorkitemCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createWorkitemCommentWithOptions(organizationId, request, headers, runtime);
}

CreateWorkitemEstimateResponse Alibabacloud_Devops20210625::Client::createWorkitemEstimateWithOptions(shared_ptr<string> organizationId,
                                                                                                      shared_ptr<CreateWorkitemEstimateRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordUserIdentifier)) {
    body->insert(pair<string, string>("recordUserIdentifier", *request->recordUserIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spentTime)) {
    body->insert(pair<string, string>("spentTime", *request->spentTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workitemIdentifier)) {
    body->insert(pair<string, string>("workitemIdentifier", *request->workitemIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkitemEstimate"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/estimate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateWorkitemEstimateResponse(callApi(params, req, runtime));
  }
  else {
    return CreateWorkitemEstimateResponse(execute(params, req, runtime));
  }
}

CreateWorkitemEstimateResponse Alibabacloud_Devops20210625::Client::createWorkitemEstimate(shared_ptr<string> organizationId, shared_ptr<CreateWorkitemEstimateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createWorkitemEstimateWithOptions(organizationId, request, headers, runtime);
}

CreateWorkitemRecordResponse Alibabacloud_Devops20210625::Client::createWorkitemRecordWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<CreateWorkitemRecordRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actualTime)) {
    body->insert(pair<string, string>("actualTime", *request->actualTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtEnd)) {
    body->insert(pair<string, string>("gmtEnd", *request->gmtEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtStart)) {
    body->insert(pair<string, string>("gmtStart", *request->gmtStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordUserIdentifier)) {
    body->insert(pair<string, string>("recordUserIdentifier", *request->recordUserIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workitemIdentifier)) {
    body->insert(pair<string, string>("workitemIdentifier", *request->workitemIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkitemRecord"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/record"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateWorkitemRecordResponse(callApi(params, req, runtime));
  }
  else {
    return CreateWorkitemRecordResponse(execute(params, req, runtime));
  }
}

CreateWorkitemRecordResponse Alibabacloud_Devops20210625::Client::createWorkitemRecord(shared_ptr<string> organizationId, shared_ptr<CreateWorkitemRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createWorkitemRecordWithOptions(organizationId, request, headers, runtime);
}

CreateWorkitemV2Response Alibabacloud_Devops20210625::Client::createWorkitemV2WithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<CreateWorkitemV2Request> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assignedTo)) {
    body->insert(pair<string, string>("assignedTo", *request->assignedTo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateWorkitemV2RequestFieldValueList>>(request->fieldValueList)) {
    body->insert(pair<string, vector<CreateWorkitemV2RequestFieldValueList>>("fieldValueList", *request->fieldValueList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentIdentifier)) {
    body->insert(pair<string, string>("parentIdentifier", *request->parentIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->participants)) {
    body->insert(pair<string, vector<string>>("participants", *request->participants));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceIdentifier)) {
    body->insert(pair<string, string>("spaceIdentifier", *request->spaceIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sprintIdentifier)) {
    body->insert(pair<string, string>("sprintIdentifier", *request->sprintIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    body->insert(pair<string, string>("subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tags)) {
    body->insert(pair<string, vector<string>>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->trackers)) {
    body->insert(pair<string, vector<string>>("trackers", *request->trackers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifier)) {
    body->insert(pair<string, string>("verifier", *request->verifier));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->versions)) {
    body->insert(pair<string, vector<string>>("versions", *request->versions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workitemTypeIdentifier)) {
    body->insert(pair<string, string>("workitemTypeIdentifier", *request->workitemTypeIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkitemV2"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitem"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateWorkitemV2Response(callApi(params, req, runtime));
  }
  else {
    return CreateWorkitemV2Response(execute(params, req, runtime));
  }
}

CreateWorkitemV2Response Alibabacloud_Devops20210625::Client::createWorkitemV2(shared_ptr<string> organizationId, shared_ptr<CreateWorkitemV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createWorkitemV2WithOptions(organizationId, request, headers, runtime);
}

DeleteAppMemberResponse Alibabacloud_Devops20210625::Client::deleteAppMemberWithOptions(shared_ptr<string> appName,
                                                                                        shared_ptr<DeleteAppMemberRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subjectId)) {
    query->insert(pair<string, string>("subjectId", *request->subjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subjectType)) {
    query->insert(pair<string, string>("subjectType", *request->subjectType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAppMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/members"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAppMemberResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAppMemberResponse(execute(params, req, runtime));
  }
}

DeleteAppMemberResponse Alibabacloud_Devops20210625::Client::deleteAppMember(shared_ptr<string> appName, shared_ptr<DeleteAppMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAppMemberWithOptions(appName, request, headers, runtime);
}

DeleteBranchResponse Alibabacloud_Devops20210625::Client::deleteBranchWithOptions(shared_ptr<string> repositoryId,
                                                                                  shared_ptr<DeleteBranchRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->branchName)) {
    query->insert(pair<string, string>("branchName", *request->branchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBranch"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/branches/delete"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteBranchResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteBranchResponse(execute(params, req, runtime));
  }
}

DeleteBranchResponse Alibabacloud_Devops20210625::Client::deleteBranch(shared_ptr<string> repositoryId, shared_ptr<DeleteBranchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteBranchWithOptions(repositoryId, request, headers, runtime);
}

DeleteFileResponse Alibabacloud_Devops20210625::Client::deleteFileWithOptions(shared_ptr<string> repositoryId,
                                                                              shared_ptr<DeleteFileRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->branchName)) {
    query->insert(pair<string, string>("branchName", *request->branchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commitMessage)) {
    query->insert(pair<string, string>("commitMessage", *request->commitMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    query->insert(pair<string, string>("filePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFile"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/files/delete"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteFileResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteFileResponse(execute(params, req, runtime));
  }
}

DeleteFileResponse Alibabacloud_Devops20210625::Client::deleteFile(shared_ptr<string> repositoryId, shared_ptr<DeleteFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFileWithOptions(repositoryId, request, headers, runtime);
}

DeleteFlowTagResponse Alibabacloud_Devops20210625::Client::deleteFlowTagWithOptions(shared_ptr<string> organizationId,
                                                                                    shared_ptr<string> id,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFlowTag"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/flow/tags/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteFlowTagResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteFlowTagResponse(execute(params, req, runtime));
  }
}

DeleteFlowTagResponse Alibabacloud_Devops20210625::Client::deleteFlowTag(shared_ptr<string> organizationId, shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFlowTagWithOptions(organizationId, id, headers, runtime);
}

DeleteFlowTagGroupResponse Alibabacloud_Devops20210625::Client::deleteFlowTagGroupWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<string> id,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFlowTagGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/flow/tagGroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteFlowTagGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteFlowTagGroupResponse(execute(params, req, runtime));
  }
}

DeleteFlowTagGroupResponse Alibabacloud_Devops20210625::Client::deleteFlowTagGroup(shared_ptr<string> organizationId, shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFlowTagGroupWithOptions(organizationId, id, headers, runtime);
}

DeleteGroupMemberResponse Alibabacloud_Devops20210625::Client::deleteGroupMemberWithOptions(shared_ptr<string> groupId,
                                                                                            shared_ptr<DeleteGroupMemberRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunPk)) {
    query->insert(pair<string, string>("aliyunPk", *request->aliyunPk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->memberType)) {
    body->insert(pair<string, string>("memberType", *request->memberType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGroupMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/members/remove/aliyun_pk"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteGroupMemberResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteGroupMemberResponse(execute(params, req, runtime));
  }
}

DeleteGroupMemberResponse Alibabacloud_Devops20210625::Client::deleteGroupMember(shared_ptr<string> groupId, shared_ptr<DeleteGroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGroupMemberWithOptions(groupId, request, headers, runtime);
}

DeleteHostGroupResponse Alibabacloud_Devops20210625::Client::deleteHostGroupWithOptions(shared_ptr<string> organizationId,
                                                                                        shared_ptr<string> id,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHostGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/hostGroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteHostGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteHostGroupResponse(execute(params, req, runtime));
  }
}

DeleteHostGroupResponse Alibabacloud_Devops20210625::Client::deleteHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteHostGroupWithOptions(organizationId, id, headers, runtime);
}

DeletePipelineResponse Alibabacloud_Devops20210625::Client::deletePipelineWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<string> pipelineId,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePipeline"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeletePipelineResponse(callApi(params, req, runtime));
  }
  else {
    return DeletePipelineResponse(execute(params, req, runtime));
  }
}

DeletePipelineResponse Alibabacloud_Devops20210625::Client::deletePipeline(shared_ptr<string> organizationId, shared_ptr<string> pipelineId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePipelineWithOptions(organizationId, pipelineId, headers, runtime);
}

DeletePipelineGroupResponse Alibabacloud_Devops20210625::Client::deletePipelineGroupWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> groupId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePipelineGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelineGroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeletePipelineGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeletePipelineGroupResponse(execute(params, req, runtime));
  }
}

DeletePipelineGroupResponse Alibabacloud_Devops20210625::Client::deletePipelineGroup(shared_ptr<string> organizationId, shared_ptr<string> groupId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePipelineGroupWithOptions(organizationId, groupId, headers, runtime);
}

DeletePipelineRelationsResponse Alibabacloud_Devops20210625::Client::deletePipelineRelationsWithOptions(shared_ptr<string> organizationId,
                                                                                                        shared_ptr<string> pipelineId,
                                                                                                        shared_ptr<DeletePipelineRelationsRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->relObjectId)) {
    query->insert(pair<string, string>("relObjectId", *request->relObjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relObjectType)) {
    query->insert(pair<string, string>("relObjectType", *request->relObjectType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePipelineRelations"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/pipelineRelations"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeletePipelineRelationsResponse(callApi(params, req, runtime));
  }
  else {
    return DeletePipelineRelationsResponse(execute(params, req, runtime));
  }
}

DeletePipelineRelationsResponse Alibabacloud_Devops20210625::Client::deletePipelineRelations(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<DeletePipelineRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePipelineRelationsWithOptions(organizationId, pipelineId, request, headers, runtime);
}

DeleteProjectResponse Alibabacloud_Devops20210625::Client::deleteProjectWithOptions(shared_ptr<string> organizationId,
                                                                                    shared_ptr<DeleteProjectRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("identifier", *request->identifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProject"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/projects/delete"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteProjectResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteProjectResponse(execute(params, req, runtime));
  }
}

DeleteProjectResponse Alibabacloud_Devops20210625::Client::deleteProject(shared_ptr<string> organizationId, shared_ptr<DeleteProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProjectWithOptions(organizationId, request, headers, runtime);
}

DeleteProjectLabelResponse Alibabacloud_Devops20210625::Client::deleteProjectLabelWithOptions(shared_ptr<string> labelId,
                                                                                              shared_ptr<DeleteProjectLabelRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProjectLabel"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/labels/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(labelId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteProjectLabelResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteProjectLabelResponse(execute(params, req, runtime));
  }
}

DeleteProjectLabelResponse Alibabacloud_Devops20210625::Client::deleteProjectLabel(shared_ptr<string> labelId, shared_ptr<DeleteProjectLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProjectLabelWithOptions(labelId, request, headers, runtime);
}

DeleteProtectedBranchResponse Alibabacloud_Devops20210625::Client::deleteProtectedBranchWithOptions(shared_ptr<string> repositoryId,
                                                                                                    shared_ptr<string> protectedBranchId,
                                                                                                    shared_ptr<DeleteProtectedBranchRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProtectedBranch"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/protect_branches/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(protectedBranchId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteProtectedBranchResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteProtectedBranchResponse(execute(params, req, runtime));
  }
}

DeleteProtectedBranchResponse Alibabacloud_Devops20210625::Client::deleteProtectedBranch(shared_ptr<string> repositoryId, shared_ptr<string> protectedBranchId, shared_ptr<DeleteProtectedBranchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProtectedBranchWithOptions(repositoryId, protectedBranchId, request, headers, runtime);
}

DeletePushRuleResponse Alibabacloud_Devops20210625::Client::deletePushRuleWithOptions(shared_ptr<string> repositoryId,
                                                                                      shared_ptr<string> pushRuleId,
                                                                                      shared_ptr<DeletePushRuleRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePushRule"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/push_rule/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pushRuleId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeletePushRuleResponse(callApi(params, req, runtime));
  }
  else {
    return DeletePushRuleResponse(execute(params, req, runtime));
  }
}

DeletePushRuleResponse Alibabacloud_Devops20210625::Client::deletePushRule(shared_ptr<string> repositoryId, shared_ptr<string> pushRuleId, shared_ptr<DeletePushRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePushRuleWithOptions(repositoryId, pushRuleId, request, headers, runtime);
}

DeleteRepositoryResponse Alibabacloud_Devops20210625::Client::deleteRepositoryWithOptions(shared_ptr<string> repositoryId,
                                                                                          shared_ptr<DeleteRepositoryRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("reason", *request->reason));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepository"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/remove"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRepositoryResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRepositoryResponse(execute(params, req, runtime));
  }
}

DeleteRepositoryResponse Alibabacloud_Devops20210625::Client::deleteRepository(shared_ptr<string> repositoryId, shared_ptr<DeleteRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepositoryWithOptions(repositoryId, request, headers, runtime);
}

DeleteRepositoryGroupResponse Alibabacloud_Devops20210625::Client::deleteRepositoryGroupWithOptions(shared_ptr<string> groupId,
                                                                                                    shared_ptr<DeleteRepositoryGroupRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("reason", *request->reason));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepositoryGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/remove"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRepositoryGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRepositoryGroupResponse(execute(params, req, runtime));
  }
}

DeleteRepositoryGroupResponse Alibabacloud_Devops20210625::Client::deleteRepositoryGroup(shared_ptr<string> groupId, shared_ptr<DeleteRepositoryGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepositoryGroupWithOptions(groupId, request, headers, runtime);
}

DeleteRepositoryMemberResponse Alibabacloud_Devops20210625::Client::deleteRepositoryMemberWithOptions(shared_ptr<string> repositoryId,
                                                                                                      shared_ptr<string> aliyunPk,
                                                                                                      shared_ptr<DeleteRepositoryMemberRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->memberType)) {
    body->insert(pair<string, string>("memberType", *request->memberType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepositoryMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/members/delete/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(aliyunPk)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRepositoryMemberResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRepositoryMemberResponse(execute(params, req, runtime));
  }
}

DeleteRepositoryMemberResponse Alibabacloud_Devops20210625::Client::deleteRepositoryMember(shared_ptr<string> repositoryId, shared_ptr<string> aliyunPk, shared_ptr<DeleteRepositoryMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepositoryMemberWithOptions(repositoryId, aliyunPk, request, headers, runtime);
}

DeleteRepositoryWebhookResponse Alibabacloud_Devops20210625::Client::deleteRepositoryWebhookWithOptions(shared_ptr<string> repositoryId,
                                                                                                        shared_ptr<string> hookId,
                                                                                                        shared_ptr<DeleteRepositoryWebhookRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepositoryWebhook"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/hooks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(hookId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRepositoryWebhookResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRepositoryWebhookResponse(execute(params, req, runtime));
  }
}

DeleteRepositoryWebhookResponse Alibabacloud_Devops20210625::Client::deleteRepositoryWebhook(shared_ptr<string> repositoryId, shared_ptr<string> hookId, shared_ptr<DeleteRepositoryWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepositoryWebhookWithOptions(repositoryId, hookId, request, headers, runtime);
}

DeleteResourceMemberResponse Alibabacloud_Devops20210625::Client::deleteResourceMemberWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<string> resourceType,
                                                                                                  shared_ptr<string> resourceId,
                                                                                                  shared_ptr<string> accountId,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceType)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceId)) + string("/members/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(accountId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteResourceMemberResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteResourceMemberResponse(execute(params, req, runtime));
  }
}

DeleteResourceMemberResponse Alibabacloud_Devops20210625::Client::deleteResourceMember(shared_ptr<string> organizationId,
                                                                                       shared_ptr<string> resourceType,
                                                                                       shared_ptr<string> resourceId,
                                                                                       shared_ptr<string> accountId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceMemberWithOptions(organizationId, resourceType, resourceId, accountId, headers, runtime);
}

DeleteTagResponse Alibabacloud_Devops20210625::Client::deleteTagWithOptions(shared_ptr<string> repositoryId,
                                                                            shared_ptr<DeleteTagRequest> request,
                                                                            shared_ptr<map<string, string>> headers,
                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("tagName", *request->tagName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTag"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/tags/delete"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteTagResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteTagResponse(execute(params, req, runtime));
  }
}

DeleteTagResponse Alibabacloud_Devops20210625::Client::deleteTag(shared_ptr<string> repositoryId, shared_ptr<DeleteTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTagWithOptions(repositoryId, request, headers, runtime);
}

DeleteUserKeyResponse Alibabacloud_Devops20210625::Client::deleteUserKeyWithOptions(shared_ptr<string> keyId,
                                                                                    shared_ptr<DeleteUserKeyRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserKey"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/user/keys/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(keyId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteUserKeyResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteUserKeyResponse(execute(params, req, runtime));
  }
}

DeleteUserKeyResponse Alibabacloud_Devops20210625::Client::deleteUserKey(shared_ptr<string> keyId, shared_ptr<DeleteUserKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteUserKeyWithOptions(keyId, request, headers, runtime);
}

DeleteVariableGroupResponse Alibabacloud_Devops20210625::Client::deleteVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> id,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVariableGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/variableGroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteVariableGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteVariableGroupResponse(execute(params, req, runtime));
  }
}

DeleteVariableGroupResponse Alibabacloud_Devops20210625::Client::deleteVariableGroup(shared_ptr<string> organizationId, shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteVariableGroupWithOptions(organizationId, id, headers, runtime);
}

DeleteWorkitemResponse Alibabacloud_Devops20210625::Client::deleteWorkitemWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<DeleteWorkitemRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("identifier", *request->identifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkitem"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitem/delete"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteWorkitemResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteWorkitemResponse(execute(params, req, runtime));
  }
}

DeleteWorkitemResponse Alibabacloud_Devops20210625::Client::deleteWorkitem(shared_ptr<string> organizationId, shared_ptr<DeleteWorkitemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteWorkitemWithOptions(organizationId, request, headers, runtime);
}

DeleteWorkitemAllCommentResponse Alibabacloud_Devops20210625::Client::deleteWorkitemAllCommentWithOptions(shared_ptr<string> organizationId,
                                                                                                          shared_ptr<DeleteWorkitemAllCommentRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("identifier", *request->identifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkitemAllComment"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/deleteAllComment"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteWorkitemAllCommentResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteWorkitemAllCommentResponse(execute(params, req, runtime));
  }
}

DeleteWorkitemAllCommentResponse Alibabacloud_Devops20210625::Client::deleteWorkitemAllComment(shared_ptr<string> organizationId, shared_ptr<DeleteWorkitemAllCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteWorkitemAllCommentWithOptions(organizationId, request, headers, runtime);
}

DeleteWorkitemCommentResponse Alibabacloud_Devops20210625::Client::deleteWorkitemCommentWithOptions(shared_ptr<string> organizationId,
                                                                                                    shared_ptr<DeleteWorkitemCommentRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->commentId)) {
    body->insert(pair<string, long>("commentId", *request->commentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    body->insert(pair<string, string>("identifier", *request->identifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkitemComment"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/deleteComent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteWorkitemCommentResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteWorkitemCommentResponse(execute(params, req, runtime));
  }
}

DeleteWorkitemCommentResponse Alibabacloud_Devops20210625::Client::deleteWorkitemComment(shared_ptr<string> organizationId, shared_ptr<DeleteWorkitemCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteWorkitemCommentWithOptions(organizationId, request, headers, runtime);
}

EnableDeployKeyResponse Alibabacloud_Devops20210625::Client::enableDeployKeyWithOptions(shared_ptr<string> repositoryId,
                                                                                        shared_ptr<string> keyId,
                                                                                        shared_ptr<EnableDeployKeyRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableDeployKey"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/keys/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(keyId)) + string("/enable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return EnableDeployKeyResponse(callApi(params, req, runtime));
  }
  else {
    return EnableDeployKeyResponse(execute(params, req, runtime));
  }
}

EnableDeployKeyResponse Alibabacloud_Devops20210625::Client::enableDeployKey(shared_ptr<string> repositoryId, shared_ptr<string> keyId, shared_ptr<EnableDeployKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableDeployKeyWithOptions(repositoryId, keyId, request, headers, runtime);
}

ExecuteChangeRequestReleaseStageResponse Alibabacloud_Devops20210625::Client::executeChangeRequestReleaseStageWithOptions(shared_ptr<string> appName,
                                                                                                                          shared_ptr<string> releaseWorkflowSn,
                                                                                                                          shared_ptr<string> releaseStageSn,
                                                                                                                          shared_ptr<ExecuteChangeRequestReleaseStageRequest> request,
                                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->params)) {
    body->insert(pair<string, map<string, boost::any>>("params", *request->params));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteChangeRequestReleaseStage"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/releaseWorkflows/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(releaseWorkflowSn)) + string("/releaseStages/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(releaseStageSn)) + string("%3Aexecute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExecuteChangeRequestReleaseStageResponse(callApi(params, req, runtime));
  }
  else {
    return ExecuteChangeRequestReleaseStageResponse(execute(params, req, runtime));
  }
}

ExecuteChangeRequestReleaseStageResponse Alibabacloud_Devops20210625::Client::executeChangeRequestReleaseStage(shared_ptr<string> appName,
                                                                                                               shared_ptr<string> releaseWorkflowSn,
                                                                                                               shared_ptr<string> releaseStageSn,
                                                                                                               shared_ptr<ExecuteChangeRequestReleaseStageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeChangeRequestReleaseStageWithOptions(appName, releaseWorkflowSn, releaseStageSn, request, headers, runtime);
}

ExportInsightCustomValueResponse Alibabacloud_Devops20210625::Client::exportInsightCustomValueWithOptions(shared_ptr<string> organizationId,
                                                                                                          shared_ptr<ExportInsightCustomValueRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportInsightCustomValue"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/data/customValues"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportInsightCustomValueResponse(callApi(params, req, runtime));
  }
  else {
    return ExportInsightCustomValueResponse(execute(params, req, runtime));
  }
}

ExportInsightCustomValueResponse Alibabacloud_Devops20210625::Client::exportInsightCustomValue(shared_ptr<string> organizationId, shared_ptr<ExportInsightCustomValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportInsightCustomValueWithOptions(organizationId, request, headers, runtime);
}

ExportInsightExpectedWorkTimeResponse Alibabacloud_Devops20210625::Client::exportInsightExpectedWorkTimeWithOptions(shared_ptr<string> organizationId,
                                                                                                                    shared_ptr<ExportInsightExpectedWorkTimeRequest> request,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportInsightExpectedWorkTime"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/data/expectedWorkTimes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportInsightExpectedWorkTimeResponse(callApi(params, req, runtime));
  }
  else {
    return ExportInsightExpectedWorkTimeResponse(execute(params, req, runtime));
  }
}

ExportInsightExpectedWorkTimeResponse Alibabacloud_Devops20210625::Client::exportInsightExpectedWorkTime(shared_ptr<string> organizationId, shared_ptr<ExportInsightExpectedWorkTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportInsightExpectedWorkTimeWithOptions(organizationId, request, headers, runtime);
}

ExportInsightFieldResponse Alibabacloud_Devops20210625::Client::exportInsightFieldWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<ExportInsightFieldRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportInsightField"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/data/fields"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportInsightFieldResponse(callApi(params, req, runtime));
  }
  else {
    return ExportInsightFieldResponse(execute(params, req, runtime));
  }
}

ExportInsightFieldResponse Alibabacloud_Devops20210625::Client::exportInsightField(shared_ptr<string> organizationId, shared_ptr<ExportInsightFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportInsightFieldWithOptions(organizationId, request, headers, runtime);
}

ExportInsightSpaceResponse Alibabacloud_Devops20210625::Client::exportInsightSpaceWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<ExportInsightSpaceRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportInsightSpace"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/data/spaces"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportInsightSpaceResponse(callApi(params, req, runtime));
  }
  else {
    return ExportInsightSpaceResponse(execute(params, req, runtime));
  }
}

ExportInsightSpaceResponse Alibabacloud_Devops20210625::Client::exportInsightSpace(shared_ptr<string> organizationId, shared_ptr<ExportInsightSpaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportInsightSpaceWithOptions(organizationId, request, headers, runtime);
}

ExportInsightSpaceRefResponse Alibabacloud_Devops20210625::Client::exportInsightSpaceRefWithOptions(shared_ptr<string> organizationId,
                                                                                                    shared_ptr<ExportInsightSpaceRefRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportInsightSpaceRef"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/data/spaceRefs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportInsightSpaceRefResponse(callApi(params, req, runtime));
  }
  else {
    return ExportInsightSpaceRefResponse(execute(params, req, runtime));
  }
}

ExportInsightSpaceRefResponse Alibabacloud_Devops20210625::Client::exportInsightSpaceRef(shared_ptr<string> organizationId, shared_ptr<ExportInsightSpaceRefRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportInsightSpaceRefWithOptions(organizationId, request, headers, runtime);
}

ExportInsightSprintResponse Alibabacloud_Devops20210625::Client::exportInsightSprintWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<ExportInsightSprintRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportInsightSprint"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/data/sprints"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportInsightSprintResponse(callApi(params, req, runtime));
  }
  else {
    return ExportInsightSprintResponse(execute(params, req, runtime));
  }
}

ExportInsightSprintResponse Alibabacloud_Devops20210625::Client::exportInsightSprint(shared_ptr<string> organizationId, shared_ptr<ExportInsightSprintRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportInsightSprintWithOptions(organizationId, request, headers, runtime);
}

ExportInsightTagRefResponse Alibabacloud_Devops20210625::Client::exportInsightTagRefWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<ExportInsightTagRefRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportInsightTagRef"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/data/tagRefs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportInsightTagRefResponse(callApi(params, req, runtime));
  }
  else {
    return ExportInsightTagRefResponse(execute(params, req, runtime));
  }
}

ExportInsightTagRefResponse Alibabacloud_Devops20210625::Client::exportInsightTagRef(shared_ptr<string> organizationId, shared_ptr<ExportInsightTagRefRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportInsightTagRefWithOptions(organizationId, request, headers, runtime);
}

ExportInsightWorkTimeResponse Alibabacloud_Devops20210625::Client::exportInsightWorkTimeWithOptions(shared_ptr<string> organizationId,
                                                                                                    shared_ptr<ExportInsightWorkTimeRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportInsightWorkTime"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/data/workTimes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportInsightWorkTimeResponse(callApi(params, req, runtime));
  }
  else {
    return ExportInsightWorkTimeResponse(execute(params, req, runtime));
  }
}

ExportInsightWorkTimeResponse Alibabacloud_Devops20210625::Client::exportInsightWorkTime(shared_ptr<string> organizationId, shared_ptr<ExportInsightWorkTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportInsightWorkTimeWithOptions(organizationId, request, headers, runtime);
}

ExportInsightWorkitemStatusResponse Alibabacloud_Devops20210625::Client::exportInsightWorkitemStatusWithOptions(shared_ptr<string> organizationId,
                                                                                                                shared_ptr<ExportInsightWorkitemStatusRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportInsightWorkitemStatus"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/data/workitemStatuses"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportInsightWorkitemStatusResponse(callApi(params, req, runtime));
  }
  else {
    return ExportInsightWorkitemStatusResponse(execute(params, req, runtime));
  }
}

ExportInsightWorkitemStatusResponse Alibabacloud_Devops20210625::Client::exportInsightWorkitemStatus(shared_ptr<string> organizationId, shared_ptr<ExportInsightWorkitemStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportInsightWorkitemStatusWithOptions(organizationId, request, headers, runtime);
}

ExportInsightWorkitemStatusJoinWorkitemDefectExtraResponse Alibabacloud_Devops20210625::Client::exportInsightWorkitemStatusJoinWorkitemDefectExtraWithOptions(shared_ptr<string> organizationId,
                                                                                                                                                              shared_ptr<ExportInsightWorkitemStatusJoinWorkitemDefectExtraRequest> request,
                                                                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportInsightWorkitemStatusJoinWorkitemDefectExtra"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/data/workitemStatusJoinWorkitemDefectExtras"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportInsightWorkitemStatusJoinWorkitemDefectExtraResponse(callApi(params, req, runtime));
  }
  else {
    return ExportInsightWorkitemStatusJoinWorkitemDefectExtraResponse(execute(params, req, runtime));
  }
}

ExportInsightWorkitemStatusJoinWorkitemDefectExtraResponse Alibabacloud_Devops20210625::Client::exportInsightWorkitemStatusJoinWorkitemDefectExtra(shared_ptr<string> organizationId, shared_ptr<ExportInsightWorkitemStatusJoinWorkitemDefectExtraRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportInsightWorkitemStatusJoinWorkitemDefectExtraWithOptions(organizationId, request, headers, runtime);
}

ExportInsightWorkitemVersionResponse Alibabacloud_Devops20210625::Client::exportInsightWorkitemVersionWithOptions(shared_ptr<string> organizationId,
                                                                                                                  shared_ptr<ExportInsightWorkitemVersionRequest> request,
                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportInsightWorkitemVersion"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/data/workitemVersions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportInsightWorkitemVersionResponse(callApi(params, req, runtime));
  }
  else {
    return ExportInsightWorkitemVersionResponse(execute(params, req, runtime));
  }
}

ExportInsightWorkitemVersionResponse Alibabacloud_Devops20210625::Client::exportInsightWorkitemVersion(shared_ptr<string> organizationId, shared_ptr<ExportInsightWorkitemVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportInsightWorkitemVersionWithOptions(organizationId, request, headers, runtime);
}

ExportWorkitemActivityResponse Alibabacloud_Devops20210625::Client::exportWorkitemActivityWithOptions(shared_ptr<string> organizationId,
                                                                                                      shared_ptr<ExportWorkitemActivityRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportWorkitemActivity"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/data/workitemActivities"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportWorkitemActivityResponse(callApi(params, req, runtime));
  }
  else {
    return ExportWorkitemActivityResponse(execute(params, req, runtime));
  }
}

ExportWorkitemActivityResponse Alibabacloud_Devops20210625::Client::exportWorkitemActivity(shared_ptr<string> organizationId, shared_ptr<ExportWorkitemActivityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportWorkitemActivityWithOptions(organizationId, request, headers, runtime);
}

GetApplicationResponse Alibabacloud_Devops20210625::Client::getApplicationWithOptions(shared_ptr<string> appName,
                                                                                      shared_ptr<GetApplicationRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApplication"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetApplicationResponse(callApi(params, req, runtime));
  }
  else {
    return GetApplicationResponse(execute(params, req, runtime));
  }
}

GetApplicationResponse Alibabacloud_Devops20210625::Client::getApplication(shared_ptr<string> appName, shared_ptr<GetApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getApplicationWithOptions(appName, request, headers, runtime);
}

GetBranchInfoResponse Alibabacloud_Devops20210625::Client::getBranchInfoWithOptions(shared_ptr<string> repositoryId,
                                                                                    shared_ptr<GetBranchInfoRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->branchName)) {
    query->insert(pair<string, string>("branchName", *request->branchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBranchInfo"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/branches/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetBranchInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetBranchInfoResponse(execute(params, req, runtime));
  }
}

GetBranchInfoResponse Alibabacloud_Devops20210625::Client::getBranchInfo(shared_ptr<string> repositoryId, shared_ptr<GetBranchInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getBranchInfoWithOptions(repositoryId, request, headers, runtime);
}

GetCheckRunResponse Alibabacloud_Devops20210625::Client::getCheckRunWithOptions(shared_ptr<GetCheckRunRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkRunId)) {
    query->insert(pair<string, long>("checkRunId", *request->checkRunId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCheckRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/check_runs/get_check_run"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCheckRunResponse(callApi(params, req, runtime));
  }
  else {
    return GetCheckRunResponse(execute(params, req, runtime));
  }
}

GetCheckRunResponse Alibabacloud_Devops20210625::Client::getCheckRun(shared_ptr<GetCheckRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCheckRunWithOptions(request, headers, runtime);
}

GetCodeupOrganizationResponse Alibabacloud_Devops20210625::Client::getCodeupOrganizationWithOptions(shared_ptr<string> identity,
                                                                                                    shared_ptr<GetCodeupOrganizationRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCodeupOrganization"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(identity)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCodeupOrganizationResponse(callApi(params, req, runtime));
  }
  else {
    return GetCodeupOrganizationResponse(execute(params, req, runtime));
  }
}

GetCodeupOrganizationResponse Alibabacloud_Devops20210625::Client::getCodeupOrganization(shared_ptr<string> identity, shared_ptr<GetCodeupOrganizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCodeupOrganizationWithOptions(identity, request, headers, runtime);
}

GetCompareDetailResponse Alibabacloud_Devops20210625::Client::getCompareDetailWithOptions(shared_ptr<string> repositoryId,
                                                                                          shared_ptr<GetCompareDetailRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->from)) {
    query->insert(pair<string, string>("from", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxDiffByte)) {
    query->insert(pair<string, long>("maxDiffByte", *request->maxDiffByte));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxDiffFile)) {
    query->insert(pair<string, long>("maxDiffFile", *request->maxDiffFile));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mergeBase)) {
    query->insert(pair<string, bool>("mergeBase", *request->mergeBase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->to)) {
    query->insert(pair<string, string>("to", *request->to));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCompareDetail"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/commits/compare/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCompareDetailResponse(callApi(params, req, runtime));
  }
  else {
    return GetCompareDetailResponse(execute(params, req, runtime));
  }
}

GetCompareDetailResponse Alibabacloud_Devops20210625::Client::getCompareDetail(shared_ptr<string> repositoryId, shared_ptr<GetCompareDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCompareDetailWithOptions(repositoryId, request, headers, runtime);
}

GetCustomFieldOptionResponse Alibabacloud_Devops20210625::Client::getCustomFieldOptionWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<string> fieldId,
                                                                                                  shared_ptr<GetCustomFieldOptionRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceIdentifier)) {
    query->insert(pair<string, string>("spaceIdentifier", *request->spaceIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceType)) {
    query->insert(pair<string, string>("spaceType", *request->spaceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workitemTypeIdentifier)) {
    query->insert(pair<string, string>("workitemTypeIdentifier", *request->workitemTypeIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomFieldOption"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/fields/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(fieldId)) + string("/getCustomOption"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCustomFieldOptionResponse(callApi(params, req, runtime));
  }
  else {
    return GetCustomFieldOptionResponse(execute(params, req, runtime));
  }
}

GetCustomFieldOptionResponse Alibabacloud_Devops20210625::Client::getCustomFieldOption(shared_ptr<string> organizationId, shared_ptr<string> fieldId, shared_ptr<GetCustomFieldOptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCustomFieldOptionWithOptions(organizationId, fieldId, request, headers, runtime);
}

GetFileBlobsResponse Alibabacloud_Devops20210625::Client::getFileBlobsWithOptions(shared_ptr<string> repositoryId,
                                                                                  shared_ptr<GetFileBlobsRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    query->insert(pair<string, string>("filePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    query->insert(pair<string, long>("from", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ref)) {
    query->insert(pair<string, string>("ref", *request->ref));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    query->insert(pair<string, long>("to", *request->to));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileBlobs"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/files/blobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetFileBlobsResponse(callApi(params, req, runtime));
  }
  else {
    return GetFileBlobsResponse(execute(params, req, runtime));
  }
}

GetFileBlobsResponse Alibabacloud_Devops20210625::Client::getFileBlobs(shared_ptr<string> repositoryId, shared_ptr<GetFileBlobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFileBlobsWithOptions(repositoryId, request, headers, runtime);
}

GetFileLastCommitResponse Alibabacloud_Devops20210625::Client::getFileLastCommitWithOptions(shared_ptr<string> repositoryId,
                                                                                            shared_ptr<GetFileLastCommitRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    query->insert(pair<string, string>("filePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sha)) {
    query->insert(pair<string, string>("sha", *request->sha));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showSignature)) {
    query->insert(pair<string, bool>("showSignature", *request->showSignature));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileLastCommit"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/files/lastCommit"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetFileLastCommitResponse(callApi(params, req, runtime));
  }
  else {
    return GetFileLastCommitResponse(execute(params, req, runtime));
  }
}

GetFileLastCommitResponse Alibabacloud_Devops20210625::Client::getFileLastCommit(shared_ptr<string> repositoryId, shared_ptr<GetFileLastCommitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFileLastCommitWithOptions(repositoryId, request, headers, runtime);
}

GetFlowTagGroupResponse Alibabacloud_Devops20210625::Client::getFlowTagGroupWithOptions(shared_ptr<string> organizationId,
                                                                                        shared_ptr<string> id,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFlowTagGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/flow/tagGroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetFlowTagGroupResponse(callApi(params, req, runtime));
  }
  else {
    return GetFlowTagGroupResponse(execute(params, req, runtime));
  }
}

GetFlowTagGroupResponse Alibabacloud_Devops20210625::Client::getFlowTagGroup(shared_ptr<string> organizationId, shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFlowTagGroupWithOptions(organizationId, id, headers, runtime);
}

GetGroupByPathResponse Alibabacloud_Devops20210625::Client::getGroupByPathWithOptions(shared_ptr<GetGroupByPathRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identity)) {
    query->insert(pair<string, string>("identity", *request->identity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGroupByPath"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/4/groups/find_by_path"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetGroupByPathResponse(callApi(params, req, runtime));
  }
  else {
    return GetGroupByPathResponse(execute(params, req, runtime));
  }
}

GetGroupByPathResponse Alibabacloud_Devops20210625::Client::getGroupByPath(shared_ptr<GetGroupByPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGroupByPathWithOptions(request, headers, runtime);
}

GetGroupDetailResponse Alibabacloud_Devops20210625::Client::getGroupDetailWithOptions(shared_ptr<GetGroupDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("groupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGroupDetail"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/groups/get_detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetGroupDetailResponse(callApi(params, req, runtime));
  }
  else {
    return GetGroupDetailResponse(execute(params, req, runtime));
  }
}

GetGroupDetailResponse Alibabacloud_Devops20210625::Client::getGroupDetail(shared_ptr<GetGroupDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGroupDetailWithOptions(request, headers, runtime);
}

GetHostGroupResponse Alibabacloud_Devops20210625::Client::getHostGroupWithOptions(shared_ptr<string> organizationId,
                                                                                  shared_ptr<string> id,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHostGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/hostGroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHostGroupResponse(callApi(params, req, runtime));
  }
  else {
    return GetHostGroupResponse(execute(params, req, runtime));
  }
}

GetHostGroupResponse Alibabacloud_Devops20210625::Client::getHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHostGroupWithOptions(organizationId, id, headers, runtime);
}

GetMergeRequestResponse Alibabacloud_Devops20210625::Client::getMergeRequestWithOptions(shared_ptr<string> repositoryId,
                                                                                        shared_ptr<string> localId,
                                                                                        shared_ptr<GetMergeRequestRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMergeRequest"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/merge_requests/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(localId)) + string("/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMergeRequestResponse(callApi(params, req, runtime));
  }
  else {
    return GetMergeRequestResponse(execute(params, req, runtime));
  }
}

GetMergeRequestResponse Alibabacloud_Devops20210625::Client::getMergeRequest(shared_ptr<string> repositoryId, shared_ptr<string> localId, shared_ptr<GetMergeRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMergeRequestWithOptions(repositoryId, localId, request, headers, runtime);
}

GetMergeRequestChangeTreeResponse Alibabacloud_Devops20210625::Client::getMergeRequestChangeTreeWithOptions(shared_ptr<GetMergeRequestChangeTreeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromPatchSetBizId)) {
    query->insert(pair<string, string>("fromPatchSetBizId", *request->fromPatchSetBizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->localId)) {
    query->insert(pair<string, long>("localId", *request->localId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toPatchSetBizId)) {
    query->insert(pair<string, string>("toPatchSetBizId", *request->toPatchSetBizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMergeRequestChangeTree"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/merge_requests/diffs/change_tree"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMergeRequestChangeTreeResponse(callApi(params, req, runtime));
  }
  else {
    return GetMergeRequestChangeTreeResponse(execute(params, req, runtime));
  }
}

GetMergeRequestChangeTreeResponse Alibabacloud_Devops20210625::Client::getMergeRequestChangeTree(shared_ptr<GetMergeRequestChangeTreeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMergeRequestChangeTreeWithOptions(request, headers, runtime);
}

GetOrganizationMemberResponse Alibabacloud_Devops20210625::Client::getOrganizationMemberWithOptions(shared_ptr<string> organizationId,
                                                                                                    shared_ptr<string> accountId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrganizationMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/members/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(accountId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetOrganizationMemberResponse(callApi(params, req, runtime));
  }
  else {
    return GetOrganizationMemberResponse(execute(params, req, runtime));
  }
}

GetOrganizationMemberResponse Alibabacloud_Devops20210625::Client::getOrganizationMember(shared_ptr<string> organizationId, shared_ptr<string> accountId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getOrganizationMemberWithOptions(organizationId, accountId, headers, runtime);
}

GetPipelineResponse Alibabacloud_Devops20210625::Client::getPipelineWithOptions(shared_ptr<string> organizationId,
                                                                                shared_ptr<string> pipelineId,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipeline"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPipelineResponse(callApi(params, req, runtime));
  }
  else {
    return GetPipelineResponse(execute(params, req, runtime));
  }
}

GetPipelineResponse Alibabacloud_Devops20210625::Client::getPipeline(shared_ptr<string> organizationId, shared_ptr<string> pipelineId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPipelineWithOptions(organizationId, pipelineId, headers, runtime);
}

GetPipelineArtifactUrlResponse Alibabacloud_Devops20210625::Client::getPipelineArtifactUrlWithOptions(shared_ptr<string> organizationId,
                                                                                                      shared_ptr<GetPipelineArtifactUrlRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    query->insert(pair<string, string>("filePath", *request->filePath));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipelineArtifactUrl"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipeline/getArtifactDownloadUrl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPipelineArtifactUrlResponse(callApi(params, req, runtime));
  }
  else {
    return GetPipelineArtifactUrlResponse(execute(params, req, runtime));
  }
}

GetPipelineArtifactUrlResponse Alibabacloud_Devops20210625::Client::getPipelineArtifactUrl(shared_ptr<string> organizationId, shared_ptr<GetPipelineArtifactUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPipelineArtifactUrlWithOptions(organizationId, request, headers, runtime);
}

GetPipelineEmasArtifactUrlResponse Alibabacloud_Devops20210625::Client::getPipelineEmasArtifactUrlWithOptions(shared_ptr<string> organizationId,
                                                                                                              shared_ptr<string> emasJobInstanceId,
                                                                                                              shared_ptr<string> md5,
                                                                                                              shared_ptr<string> pipelineId,
                                                                                                              shared_ptr<string> pipelineRunId,
                                                                                                              shared_ptr<GetPipelineEmasArtifactUrlRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceConnectionId)) {
    query->insert(pair<string, long>("serviceConnectionId", *request->serviceConnectionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipelineEmasArtifactUrl"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipeline/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/pipelineRun/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId)) + string("/emas/artifact/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(emasJobInstanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(md5)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPipelineEmasArtifactUrlResponse(callApi(params, req, runtime));
  }
  else {
    return GetPipelineEmasArtifactUrlResponse(execute(params, req, runtime));
  }
}

GetPipelineEmasArtifactUrlResponse Alibabacloud_Devops20210625::Client::getPipelineEmasArtifactUrl(shared_ptr<string> organizationId,
                                                                                                   shared_ptr<string> emasJobInstanceId,
                                                                                                   shared_ptr<string> md5,
                                                                                                   shared_ptr<string> pipelineId,
                                                                                                   shared_ptr<string> pipelineRunId,
                                                                                                   shared_ptr<GetPipelineEmasArtifactUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPipelineEmasArtifactUrlWithOptions(organizationId, emasJobInstanceId, md5, pipelineId, pipelineRunId, request, headers, runtime);
}

GetPipelineGroupResponse Alibabacloud_Devops20210625::Client::getPipelineGroupWithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<string> groupId,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipelineGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelineGroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPipelineGroupResponse(callApi(params, req, runtime));
  }
  else {
    return GetPipelineGroupResponse(execute(params, req, runtime));
  }
}

GetPipelineGroupResponse Alibabacloud_Devops20210625::Client::getPipelineGroup(shared_ptr<string> organizationId, shared_ptr<string> groupId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPipelineGroupWithOptions(organizationId, groupId, headers, runtime);
}

GetPipelineRunResponse Alibabacloud_Devops20210625::Client::getPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<string> pipelineId,
                                                                                      shared_ptr<string> pipelineRunId,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipelineRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/pipelineRuns/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPipelineRunResponse(callApi(params, req, runtime));
  }
  else {
    return GetPipelineRunResponse(execute(params, req, runtime));
  }
}

GetPipelineRunResponse Alibabacloud_Devops20210625::Client::getPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> pipelineRunId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPipelineRunWithOptions(organizationId, pipelineId, pipelineRunId, headers, runtime);
}

GetPipelineScanReportUrlResponse Alibabacloud_Devops20210625::Client::getPipelineScanReportUrlWithOptions(shared_ptr<string> organizationId,
                                                                                                          shared_ptr<GetPipelineScanReportUrlRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reportPath)) {
    body->insert(pair<string, string>("reportPath", *request->reportPath));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipelineScanReportUrl"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipeline/getPipelineScanReportUrl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPipelineScanReportUrlResponse(callApi(params, req, runtime));
  }
  else {
    return GetPipelineScanReportUrlResponse(execute(params, req, runtime));
  }
}

GetPipelineScanReportUrlResponse Alibabacloud_Devops20210625::Client::getPipelineScanReportUrl(shared_ptr<string> organizationId, shared_ptr<GetPipelineScanReportUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPipelineScanReportUrlWithOptions(organizationId, request, headers, runtime);
}

GetProjectInfoResponse Alibabacloud_Devops20210625::Client::getProjectInfoWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<string> projectId,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectInfo"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/project/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetProjectInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetProjectInfoResponse(execute(params, req, runtime));
  }
}

GetProjectInfoResponse Alibabacloud_Devops20210625::Client::getProjectInfo(shared_ptr<string> organizationId, shared_ptr<string> projectId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectInfoWithOptions(organizationId, projectId, headers, runtime);
}

GetProjectMemberResponse Alibabacloud_Devops20210625::Client::getProjectMemberWithOptions(shared_ptr<string> repositoryId,
                                                                                          shared_ptr<string> aliyunPk,
                                                                                          shared_ptr<GetProjectMemberRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/members/get/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(aliyunPk)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetProjectMemberResponse(callApi(params, req, runtime));
  }
  else {
    return GetProjectMemberResponse(execute(params, req, runtime));
  }
}

GetProjectMemberResponse Alibabacloud_Devops20210625::Client::getProjectMember(shared_ptr<string> repositoryId, shared_ptr<string> aliyunPk, shared_ptr<GetProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectMemberWithOptions(repositoryId, aliyunPk, request, headers, runtime);
}

GetReleaseStagePipelineRunResponse Alibabacloud_Devops20210625::Client::getReleaseStagePipelineRunWithOptions(shared_ptr<string> appName,
                                                                                                              shared_ptr<string> releaseWorkflowSn,
                                                                                                              shared_ptr<string> releaseStageSn,
                                                                                                              shared_ptr<string> executionNumber,
                                                                                                              shared_ptr<GetReleaseStagePipelineRunRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetReleaseStagePipelineRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/releaseWorkflows/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(releaseWorkflowSn)) + string("/releaseStages/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(releaseStageSn)) + string("/executions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(executionNumber)) + string("%3AgetPipelineRun"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetReleaseStagePipelineRunResponse(callApi(params, req, runtime));
  }
  else {
    return GetReleaseStagePipelineRunResponse(execute(params, req, runtime));
  }
}

GetReleaseStagePipelineRunResponse Alibabacloud_Devops20210625::Client::getReleaseStagePipelineRun(shared_ptr<string> appName,
                                                                                                   shared_ptr<string> releaseWorkflowSn,
                                                                                                   shared_ptr<string> releaseStageSn,
                                                                                                   shared_ptr<string> executionNumber,
                                                                                                   shared_ptr<GetReleaseStagePipelineRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getReleaseStagePipelineRunWithOptions(appName, releaseWorkflowSn, releaseStageSn, executionNumber, request, headers, runtime);
}

GetRepositoryResponse Alibabacloud_Devops20210625::Client::getRepositoryWithOptions(shared_ptr<GetRepositoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identity)) {
    query->insert(pair<string, string>("identity", *request->identity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepository"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/get"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRepositoryResponse(callApi(params, req, runtime));
  }
  else {
    return GetRepositoryResponse(execute(params, req, runtime));
  }
}

GetRepositoryResponse Alibabacloud_Devops20210625::Client::getRepository(shared_ptr<GetRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepositoryWithOptions(request, headers, runtime);
}

GetRepositoryCommitResponse Alibabacloud_Devops20210625::Client::getRepositoryCommitWithOptions(shared_ptr<string> repositoryId,
                                                                                                shared_ptr<string> sha,
                                                                                                shared_ptr<GetRepositoryCommitRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showSignature)) {
    query->insert(pair<string, bool>("showSignature", *request->showSignature));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepositoryCommit"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/commits/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sha)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRepositoryCommitResponse(callApi(params, req, runtime));
  }
  else {
    return GetRepositoryCommitResponse(execute(params, req, runtime));
  }
}

GetRepositoryCommitResponse Alibabacloud_Devops20210625::Client::getRepositoryCommit(shared_ptr<string> repositoryId, shared_ptr<string> sha, shared_ptr<GetRepositoryCommitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepositoryCommitWithOptions(repositoryId, sha, request, headers, runtime);
}

GetRepositoryTagResponse Alibabacloud_Devops20210625::Client::getRepositoryTagWithOptions(shared_ptr<string> repositoryId,
                                                                                          shared_ptr<GetRepositoryTagRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("tagName", *request->tagName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepositoryTag"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/tag/info"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRepositoryTagResponse(callApi(params, req, runtime));
  }
  else {
    return GetRepositoryTagResponse(execute(params, req, runtime));
  }
}

GetRepositoryTagResponse Alibabacloud_Devops20210625::Client::getRepositoryTag(shared_ptr<string> repositoryId, shared_ptr<GetRepositoryTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepositoryTagWithOptions(repositoryId, request, headers, runtime);
}

GetSearchCodePreviewResponse Alibabacloud_Devops20210625::Client::getSearchCodePreviewWithOptions(shared_ptr<GetSearchCodePreviewRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    query->insert(pair<string, string>("docId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDsl)) {
    query->insert(pair<string, bool>("isDsl", *request->isDsl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSearchCodePreview"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/search/code_preview"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSearchCodePreviewResponse(callApi(params, req, runtime));
  }
  else {
    return GetSearchCodePreviewResponse(execute(params, req, runtime));
  }
}

GetSearchCodePreviewResponse Alibabacloud_Devops20210625::Client::getSearchCodePreview(shared_ptr<GetSearchCodePreviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSearchCodePreviewWithOptions(request, headers, runtime);
}

GetSprintInfoResponse Alibabacloud_Devops20210625::Client::getSprintInfoWithOptions(shared_ptr<string> organizationId,
                                                                                    shared_ptr<string> sprintId,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSprintInfo"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/sprints/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sprintId)) + string("/getSprintinfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSprintInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetSprintInfoResponse(execute(params, req, runtime));
  }
}

GetSprintInfoResponse Alibabacloud_Devops20210625::Client::getSprintInfo(shared_ptr<string> organizationId, shared_ptr<string> sprintId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSprintInfoWithOptions(organizationId, sprintId, headers, runtime);
}

GetTestResultListResponse Alibabacloud_Devops20210625::Client::getTestResultListWithOptions(shared_ptr<string> organizationId,
                                                                                            shared_ptr<string> testPlanIdentifier,
                                                                                            shared_ptr<GetTestResultListRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->conditions)) {
    body->insert(pair<string, string>("conditions", *request->conditions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryIdentifier)) {
    body->insert(pair<string, string>("directoryIdentifier", *request->directoryIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTestResultList"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/testhub/testplan/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(testPlanIdentifier)) + string("/testresults"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTestResultListResponse(callApi(params, req, runtime));
  }
  else {
    return GetTestResultListResponse(execute(params, req, runtime));
  }
}

GetTestResultListResponse Alibabacloud_Devops20210625::Client::getTestResultList(shared_ptr<string> organizationId, shared_ptr<string> testPlanIdentifier, shared_ptr<GetTestResultListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTestResultListWithOptions(organizationId, testPlanIdentifier, request, headers, runtime);
}

GetTestcaseListResponse Alibabacloud_Devops20210625::Client::getTestcaseListWithOptions(shared_ptr<string> organizationId,
                                                                                        shared_ptr<GetTestcaseListRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->conditions)) {
    body->insert(pair<string, string>("conditions", *request->conditions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryIdentifier)) {
    body->insert(pair<string, string>("directoryIdentifier", *request->directoryIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxResult)) {
    body->insert(pair<string, string>("maxResult", *request->maxResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceIdentifier)) {
    body->insert(pair<string, string>("spaceIdentifier", *request->spaceIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTestcaseList"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/testhub/testcases"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTestcaseListResponse(callApi(params, req, runtime));
  }
  else {
    return GetTestcaseListResponse(execute(params, req, runtime));
  }
}

GetTestcaseListResponse Alibabacloud_Devops20210625::Client::getTestcaseList(shared_ptr<string> organizationId, shared_ptr<GetTestcaseListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTestcaseListWithOptions(organizationId, request, headers, runtime);
}

GetUserInfoResponse Alibabacloud_Devops20210625::Client::getUserInfoWithOptions(shared_ptr<GetUserInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserInfo"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/users/current"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetUserInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetUserInfoResponse(execute(params, req, runtime));
  }
}

GetUserInfoResponse Alibabacloud_Devops20210625::Client::getUserInfo(shared_ptr<GetUserInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserInfoWithOptions(request, headers, runtime);
}

GetVMDeployOrderResponse Alibabacloud_Devops20210625::Client::getVMDeployOrderWithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<string> pipelineId,
                                                                                          shared_ptr<string> deployOrderId,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVMDeployOrder"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/deploy/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployOrderId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetVMDeployOrderResponse(callApi(params, req, runtime));
  }
  else {
    return GetVMDeployOrderResponse(execute(params, req, runtime));
  }
}

GetVMDeployOrderResponse Alibabacloud_Devops20210625::Client::getVMDeployOrder(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> deployOrderId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getVMDeployOrderWithOptions(organizationId, pipelineId, deployOrderId, headers, runtime);
}

GetVariableGroupResponse Alibabacloud_Devops20210625::Client::getVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<string> id,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVariableGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/variableGroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetVariableGroupResponse(callApi(params, req, runtime));
  }
  else {
    return GetVariableGroupResponse(execute(params, req, runtime));
  }
}

GetVariableGroupResponse Alibabacloud_Devops20210625::Client::getVariableGroup(shared_ptr<string> organizationId, shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getVariableGroupWithOptions(organizationId, id, headers, runtime);
}

GetWorkItemActivityResponse Alibabacloud_Devops20210625::Client::getWorkItemActivityWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> workitemId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkItemActivity"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workitemId)) + string("/getActivity"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWorkItemActivityResponse(callApi(params, req, runtime));
  }
  else {
    return GetWorkItemActivityResponse(execute(params, req, runtime));
  }
}

GetWorkItemActivityResponse Alibabacloud_Devops20210625::Client::getWorkItemActivity(shared_ptr<string> organizationId, shared_ptr<string> workitemId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWorkItemActivityWithOptions(organizationId, workitemId, headers, runtime);
}

GetWorkItemInfoResponse Alibabacloud_Devops20210625::Client::getWorkItemInfoWithOptions(shared_ptr<string> organizationId,
                                                                                        shared_ptr<string> workitemId,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkItemInfo"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workitemId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWorkItemInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetWorkItemInfoResponse(execute(params, req, runtime));
  }
}

GetWorkItemInfoResponse Alibabacloud_Devops20210625::Client::getWorkItemInfo(shared_ptr<string> organizationId, shared_ptr<string> workitemId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWorkItemInfoWithOptions(organizationId, workitemId, headers, runtime);
}

GetWorkItemWorkFlowInfoResponse Alibabacloud_Devops20210625::Client::getWorkItemWorkFlowInfoWithOptions(shared_ptr<string> organizationId,
                                                                                                        shared_ptr<string> workitemId,
                                                                                                        shared_ptr<GetWorkItemWorkFlowInfoRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configurationId)) {
    query->insert(pair<string, string>("configurationId", *request->configurationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkItemWorkFlowInfo"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workitemId)) + string("/getWorkflowInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWorkItemWorkFlowInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetWorkItemWorkFlowInfoResponse(execute(params, req, runtime));
  }
}

GetWorkItemWorkFlowInfoResponse Alibabacloud_Devops20210625::Client::getWorkItemWorkFlowInfo(shared_ptr<string> organizationId, shared_ptr<string> workitemId, shared_ptr<GetWorkItemWorkFlowInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWorkItemWorkFlowInfoWithOptions(organizationId, workitemId, request, headers, runtime);
}

GetWorkitemAttachmentCreatemetaResponse Alibabacloud_Devops20210625::Client::getWorkitemAttachmentCreatemetaWithOptions(shared_ptr<string> organizationId,
                                                                                                                        shared_ptr<string> workitemIdentifier,
                                                                                                                        shared_ptr<GetWorkitemAttachmentCreatemetaRequest> request,
                                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkitemAttachmentCreatemeta"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitem/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workitemIdentifier)) + string("/attachment/createmeta"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWorkitemAttachmentCreatemetaResponse(callApi(params, req, runtime));
  }
  else {
    return GetWorkitemAttachmentCreatemetaResponse(execute(params, req, runtime));
  }
}

GetWorkitemAttachmentCreatemetaResponse Alibabacloud_Devops20210625::Client::getWorkitemAttachmentCreatemeta(shared_ptr<string> organizationId, shared_ptr<string> workitemIdentifier, shared_ptr<GetWorkitemAttachmentCreatemetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWorkitemAttachmentCreatemetaWithOptions(organizationId, workitemIdentifier, request, headers, runtime);
}

GetWorkitemCommentListResponse Alibabacloud_Devops20210625::Client::getWorkitemCommentListWithOptions(shared_ptr<string> organizationId,
                                                                                                      shared_ptr<string> workitemId,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkitemCommentList"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workitemId)) + string("/commentList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWorkitemCommentListResponse(callApi(params, req, runtime));
  }
  else {
    return GetWorkitemCommentListResponse(execute(params, req, runtime));
  }
}

GetWorkitemCommentListResponse Alibabacloud_Devops20210625::Client::getWorkitemCommentList(shared_ptr<string> organizationId, shared_ptr<string> workitemId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWorkitemCommentListWithOptions(organizationId, workitemId, headers, runtime);
}

GetWorkitemFileResponse Alibabacloud_Devops20210625::Client::getWorkitemFileWithOptions(shared_ptr<string> organizationId,
                                                                                        shared_ptr<string> workitemIdentifier,
                                                                                        shared_ptr<string> fileIdentifier,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkitemFile"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitem/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workitemIdentifier)) + string("/files/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(fileIdentifier)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWorkitemFileResponse(callApi(params, req, runtime));
  }
  else {
    return GetWorkitemFileResponse(execute(params, req, runtime));
  }
}

GetWorkitemFileResponse Alibabacloud_Devops20210625::Client::getWorkitemFile(shared_ptr<string> organizationId, shared_ptr<string> workitemIdentifier, shared_ptr<string> fileIdentifier) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWorkitemFileWithOptions(organizationId, workitemIdentifier, fileIdentifier, headers, runtime);
}

GetWorkitemRelationsResponse Alibabacloud_Devops20210625::Client::getWorkitemRelationsWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<string> workitemId,
                                                                                                  shared_ptr<GetWorkitemRelationsRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->relationType)) {
    query->insert(pair<string, string>("relationType", *request->relationType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkitemRelations"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workitemId)) + string("/getRelations"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWorkitemRelationsResponse(callApi(params, req, runtime));
  }
  else {
    return GetWorkitemRelationsResponse(execute(params, req, runtime));
  }
}

GetWorkitemRelationsResponse Alibabacloud_Devops20210625::Client::getWorkitemRelations(shared_ptr<string> organizationId, shared_ptr<string> workitemId, shared_ptr<GetWorkitemRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWorkitemRelationsWithOptions(organizationId, workitemId, request, headers, runtime);
}

GetWorkitemTimeTypeListResponse Alibabacloud_Devops20210625::Client::getWorkitemTimeTypeListWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkitemTimeTypeList"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/type/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWorkitemTimeTypeListResponse(callApi(params, req, runtime));
  }
  else {
    return GetWorkitemTimeTypeListResponse(execute(params, req, runtime));
  }
}

GetWorkitemTimeTypeListResponse Alibabacloud_Devops20210625::Client::getWorkitemTimeTypeList(shared_ptr<string> organizationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWorkitemTimeTypeListWithOptions(organizationId, headers, runtime);
}

JoinPipelineGroupResponse Alibabacloud_Devops20210625::Client::joinPipelineGroupWithOptions(shared_ptr<string> organizationId,
                                                                                            shared_ptr<JoinPipelineGroupRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("groupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineIds)) {
    query->insert(pair<string, string>("pipelineIds", *request->pipelineIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("JoinPipelineGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelineGroups/join"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return JoinPipelineGroupResponse(callApi(params, req, runtime));
  }
  else {
    return JoinPipelineGroupResponse(execute(params, req, runtime));
  }
}

JoinPipelineGroupResponse Alibabacloud_Devops20210625::Client::joinPipelineGroup(shared_ptr<string> organizationId, shared_ptr<JoinPipelineGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return joinPipelineGroupWithOptions(organizationId, request, headers, runtime);
}

LinkMergeRequestLabelResponse Alibabacloud_Devops20210625::Client::linkMergeRequestLabelWithOptions(shared_ptr<LinkMergeRequestLabelRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->localId)) {
    query->insert(pair<string, long>("localId", *request->localId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->labelIds)) {
    body->insert(pair<string, vector<string>>("labelIds", *request->labelIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LinkMergeRequestLabel"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/merge_requests/link_labels"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return LinkMergeRequestLabelResponse(callApi(params, req, runtime));
  }
  else {
    return LinkMergeRequestLabelResponse(execute(params, req, runtime));
  }
}

LinkMergeRequestLabelResponse Alibabacloud_Devops20210625::Client::linkMergeRequestLabel(shared_ptr<LinkMergeRequestLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return linkMergeRequestLabelWithOptions(request, headers, runtime);
}

ListAllReleaseWorkflowsResponse Alibabacloud_Devops20210625::Client::listAllReleaseWorkflowsWithOptions(shared_ptr<string> appName,
                                                                                                        shared_ptr<ListAllReleaseWorkflowsRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAllReleaseWorkflows"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/releaseWorkflows"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAllReleaseWorkflowsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAllReleaseWorkflowsResponse(execute(params, req, runtime));
  }
}

ListAllReleaseWorkflowsResponse Alibabacloud_Devops20210625::Client::listAllReleaseWorkflows(shared_ptr<string> appName, shared_ptr<ListAllReleaseWorkflowsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAllReleaseWorkflowsWithOptions(appName, request, headers, runtime);
}

ListAppReleaseStageExecutionIntegratedMetadataResponse Alibabacloud_Devops20210625::Client::listAppReleaseStageExecutionIntegratedMetadataWithOptions(shared_ptr<string> appName,
                                                                                                                                                      shared_ptr<string> releaseWorkflowSn,
                                                                                                                                                      shared_ptr<string> releaseStageSn,
                                                                                                                                                      shared_ptr<string> executionNumber,
                                                                                                                                                      shared_ptr<ListAppReleaseStageExecutionIntegratedMetadataRequest> request,
                                                                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppReleaseStageExecutionIntegratedMetadata"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/releaseWorkflows/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(releaseWorkflowSn)) + string("/releaseStages/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(releaseStageSn)) + string("/executions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(executionNumber)) + string("/integratedMetadata"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAppReleaseStageExecutionIntegratedMetadataResponse(callApi(params, req, runtime));
  }
  else {
    return ListAppReleaseStageExecutionIntegratedMetadataResponse(execute(params, req, runtime));
  }
}

ListAppReleaseStageExecutionIntegratedMetadataResponse Alibabacloud_Devops20210625::Client::listAppReleaseStageExecutionIntegratedMetadata(shared_ptr<string> appName,
                                                                                                                                           shared_ptr<string> releaseWorkflowSn,
                                                                                                                                           shared_ptr<string> releaseStageSn,
                                                                                                                                           shared_ptr<string> executionNumber,
                                                                                                                                           shared_ptr<ListAppReleaseStageExecutionIntegratedMetadataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAppReleaseStageExecutionIntegratedMetadataWithOptions(appName, releaseWorkflowSn, releaseStageSn, executionNumber, request, headers, runtime);
}

ListAppReleaseStageExecutionsResponse Alibabacloud_Devops20210625::Client::listAppReleaseStageExecutionsWithOptions(shared_ptr<string> appName,
                                                                                                                    shared_ptr<string> releaseWorkflowSn,
                                                                                                                    shared_ptr<string> releaseStageSn,
                                                                                                                    shared_ptr<ListAppReleaseStageExecutionsRequest> request,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("orderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pagination)) {
    query->insert(pair<string, string>("pagination", *request->pagination));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->perPage)) {
    query->insert(pair<string, long>("perPage", *request->perPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppReleaseStageExecutions"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/releaseWorkflows/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(releaseWorkflowSn)) + string("/releaseStages/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(releaseStageSn)) + string("/executions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAppReleaseStageExecutionsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAppReleaseStageExecutionsResponse(execute(params, req, runtime));
  }
}

ListAppReleaseStageExecutionsResponse Alibabacloud_Devops20210625::Client::listAppReleaseStageExecutions(shared_ptr<string> appName,
                                                                                                         shared_ptr<string> releaseWorkflowSn,
                                                                                                         shared_ptr<string> releaseStageSn,
                                                                                                         shared_ptr<ListAppReleaseStageExecutionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAppReleaseStageExecutionsWithOptions(appName, releaseWorkflowSn, releaseStageSn, request, headers, runtime);
}

ListApplicationMembersResponse Alibabacloud_Devops20210625::Client::listApplicationMembersWithOptions(shared_ptr<string> appName,
                                                                                                      shared_ptr<ListApplicationMembersRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplicationMembers"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/members"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListApplicationMembersResponse(callApi(params, req, runtime));
  }
  else {
    return ListApplicationMembersResponse(execute(params, req, runtime));
  }
}

ListApplicationMembersResponse Alibabacloud_Devops20210625::Client::listApplicationMembers(shared_ptr<string> appName, shared_ptr<ListApplicationMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listApplicationMembersWithOptions(appName, request, headers, runtime);
}

ListApplicationsResponse Alibabacloud_Devops20210625::Client::listApplicationsWithOptions(shared_ptr<ListApplicationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("orderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pagination)) {
    query->insert(pair<string, string>("pagination", *request->pagination));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->perPage)) {
    query->insert(pair<string, long>("perPage", *request->perPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplications"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps%3Asearch"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListApplicationsResponse(callApi(params, req, runtime));
  }
  else {
    return ListApplicationsResponse(execute(params, req, runtime));
  }
}

ListApplicationsResponse Alibabacloud_Devops20210625::Client::listApplications(shared_ptr<ListApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listApplicationsWithOptions(request, headers, runtime);
}

ListChangeRequestWorkflowExecutionsResponse Alibabacloud_Devops20210625::Client::listChangeRequestWorkflowExecutionsWithOptions(shared_ptr<string> appName,
                                                                                                                                shared_ptr<string> sn,
                                                                                                                                shared_ptr<ListChangeRequestWorkflowExecutionsRequest> request,
                                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("orderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->perPage)) {
    query->insert(pair<string, long>("perPage", *request->perPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseStageSn)) {
    query->insert(pair<string, string>("releaseStageSn", *request->releaseStageSn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseWorkflowSn)) {
    query->insert(pair<string, string>("releaseWorkflowSn", *request->releaseWorkflowSn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChangeRequestWorkflowExecutions"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/changeRequests/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sn)) + string("/executions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListChangeRequestWorkflowExecutionsResponse(callApi(params, req, runtime));
  }
  else {
    return ListChangeRequestWorkflowExecutionsResponse(execute(params, req, runtime));
  }
}

ListChangeRequestWorkflowExecutionsResponse Alibabacloud_Devops20210625::Client::listChangeRequestWorkflowExecutions(shared_ptr<string> appName, shared_ptr<string> sn, shared_ptr<ListChangeRequestWorkflowExecutionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listChangeRequestWorkflowExecutionsWithOptions(appName, sn, request, headers, runtime);
}

ListChangeRequestsResponse Alibabacloud_Devops20210625::Client::listChangeRequestsWithOptions(shared_ptr<string> appName,
                                                                                              shared_ptr<ListChangeRequestsRequest> tmpReq,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListChangeRequestsShrinkRequest> request = make_shared<ListChangeRequestsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->appNameList)) {
    request->appNameListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->appNameList, make_shared<string>("appNameList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->ownerIdList)) {
    request->ownerIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ownerIdList, make_shared<string>("ownerIdList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->stateList)) {
    request->stateListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->stateList, make_shared<string>("stateList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appNameListShrink)) {
    query->insert(pair<string, string>("appNameList", *request->appNameListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayNameKeyword)) {
    query->insert(pair<string, string>("displayNameKeyword", *request->displayNameKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("orderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerIdListShrink)) {
    query->insert(pair<string, string>("ownerIdList", *request->ownerIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pagination)) {
    query->insert(pair<string, string>("pagination", *request->pagination));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->perPage)) {
    query->insert(pair<string, long>("perPage", *request->perPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stateListShrink)) {
    query->insert(pair<string, string>("stateList", *request->stateListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChangeRequests"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/changeRequests"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListChangeRequestsResponse(callApi(params, req, runtime));
  }
  else {
    return ListChangeRequestsResponse(execute(params, req, runtime));
  }
}

ListChangeRequestsResponse Alibabacloud_Devops20210625::Client::listChangeRequests(shared_ptr<string> appName, shared_ptr<ListChangeRequestsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listChangeRequestsWithOptions(appName, request, headers, runtime);
}

ListCheckRunsResponse Alibabacloud_Devops20210625::Client::listCheckRunsWithOptions(shared_ptr<ListCheckRunsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ref)) {
    query->insert(pair<string, string>("ref", *request->ref));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCheckRuns"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/check_runs/list_check_runs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListCheckRunsResponse(callApi(params, req, runtime));
  }
  else {
    return ListCheckRunsResponse(execute(params, req, runtime));
  }
}

ListCheckRunsResponse Alibabacloud_Devops20210625::Client::listCheckRuns(shared_ptr<ListCheckRunsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCheckRunsWithOptions(request, headers, runtime);
}

ListCommitStatusesResponse Alibabacloud_Devops20210625::Client::listCommitStatusesWithOptions(shared_ptr<ListCommitStatusesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sha)) {
    query->insert(pair<string, string>("sha", *request->sha));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCommitStatuses"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/repository/commit_statuses/list_commit_statuses"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListCommitStatusesResponse(callApi(params, req, runtime));
  }
  else {
    return ListCommitStatusesResponse(execute(params, req, runtime));
  }
}

ListCommitStatusesResponse Alibabacloud_Devops20210625::Client::listCommitStatuses(shared_ptr<ListCommitStatusesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCommitStatusesWithOptions(request, headers, runtime);
}

ListFlowTagGroupsResponse Alibabacloud_Devops20210625::Client::listFlowTagGroupsWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFlowTagGroups"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/flow/tagGroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListFlowTagGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListFlowTagGroupsResponse(execute(params, req, runtime));
  }
}

ListFlowTagGroupsResponse Alibabacloud_Devops20210625::Client::listFlowTagGroups(shared_ptr<string> organizationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFlowTagGroupsWithOptions(organizationId, headers, runtime);
}

ListGroupMemberResponse Alibabacloud_Devops20210625::Client::listGroupMemberWithOptions(shared_ptr<string> groupId,
                                                                                        shared_ptr<ListGroupMemberRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGroupMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListGroupMemberResponse(callApi(params, req, runtime));
  }
  else {
    return ListGroupMemberResponse(execute(params, req, runtime));
  }
}

ListGroupMemberResponse Alibabacloud_Devops20210625::Client::listGroupMember(shared_ptr<string> groupId, shared_ptr<ListGroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGroupMemberWithOptions(groupId, request, headers, runtime);
}

ListGroupRepositoriesResponse Alibabacloud_Devops20210625::Client::listGroupRepositoriesWithOptions(shared_ptr<string> groupId,
                                                                                                    shared_ptr<ListGroupRepositoriesRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("search", *request->search));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGroupRepositories"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/projects"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListGroupRepositoriesResponse(callApi(params, req, runtime));
  }
  else {
    return ListGroupRepositoriesResponse(execute(params, req, runtime));
  }
}

ListGroupRepositoriesResponse Alibabacloud_Devops20210625::Client::listGroupRepositories(shared_ptr<string> groupId, shared_ptr<ListGroupRepositoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGroupRepositoriesWithOptions(groupId, request, headers, runtime);
}

ListHostGroupsResponse Alibabacloud_Devops20210625::Client::listHostGroupsWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<ListHostGroupsRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createEndTime)) {
    query->insert(pair<string, long>("createEndTime", *request->createEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createStartTime)) {
    query->insert(pair<string, long>("createStartTime", *request->createStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorAccountIds)) {
    query->insert(pair<string, string>("creatorAccountIds", *request->creatorAccountIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    query->insert(pair<string, string>("ids", *request->ids));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->pageOrder)) {
    query->insert(pair<string, string>("pageOrder", *request->pageOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSort)) {
    query->insert(pair<string, string>("pageSort", *request->pageSort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHostGroups"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/hostGroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHostGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListHostGroupsResponse(execute(params, req, runtime));
  }
}

ListHostGroupsResponse Alibabacloud_Devops20210625::Client::listHostGroups(shared_ptr<string> organizationId, shared_ptr<ListHostGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHostGroupsWithOptions(organizationId, request, headers, runtime);
}

ListJoinedOrganizationsResponse Alibabacloud_Devops20210625::Client::listJoinedOrganizationsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJoinedOrganizations"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/users/joinedOrgs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListJoinedOrganizationsResponse(callApi(params, req, runtime));
  }
  else {
    return ListJoinedOrganizationsResponse(execute(params, req, runtime));
  }
}

ListJoinedOrganizationsResponse Alibabacloud_Devops20210625::Client::listJoinedOrganizations() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listJoinedOrganizationsWithOptions(headers, runtime);
}

ListMergeRequestCommentsResponse Alibabacloud_Devops20210625::Client::listMergeRequestCommentsWithOptions(shared_ptr<ListMergeRequestCommentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->localId)) {
    query->insert(pair<string, long>("localId", *request->localId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commentType)) {
    body->insert(pair<string, string>("commentType", *request->commentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    body->insert(pair<string, string>("filePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->patchSetBizIds)) {
    body->insert(pair<string, vector<string>>("patchSetBizIds", *request->patchSetBizIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->resolved)) {
    body->insert(pair<string, bool>("resolved", *request->resolved));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    body->insert(pair<string, string>("state", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMergeRequestComments"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/merge_requests/comments/list_comments"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMergeRequestCommentsResponse(callApi(params, req, runtime));
  }
  else {
    return ListMergeRequestCommentsResponse(execute(params, req, runtime));
  }
}

ListMergeRequestCommentsResponse Alibabacloud_Devops20210625::Client::listMergeRequestComments(shared_ptr<ListMergeRequestCommentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMergeRequestCommentsWithOptions(request, headers, runtime);
}

ListMergeRequestFilesReadsResponse Alibabacloud_Devops20210625::Client::listMergeRequestFilesReadsWithOptions(shared_ptr<ListMergeRequestFilesReadsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromPatchSetBizId)) {
    query->insert(pair<string, string>("fromPatchSetBizId", *request->fromPatchSetBizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->localId)) {
    query->insert(pair<string, long>("localId", *request->localId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toPatchSetBizId)) {
    query->insert(pair<string, string>("toPatchSetBizId", *request->toPatchSetBizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMergeRequestFilesReads"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/merge_requests/diffs/files_read_infos"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMergeRequestFilesReadsResponse(callApi(params, req, runtime));
  }
  else {
    return ListMergeRequestFilesReadsResponse(execute(params, req, runtime));
  }
}

ListMergeRequestFilesReadsResponse Alibabacloud_Devops20210625::Client::listMergeRequestFilesReads(shared_ptr<ListMergeRequestFilesReadsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMergeRequestFilesReadsWithOptions(request, headers, runtime);
}

ListMergeRequestLabelsResponse Alibabacloud_Devops20210625::Client::listMergeRequestLabelsWithOptions(shared_ptr<ListMergeRequestLabelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->localId)) {
    query->insert(pair<string, long>("localId", *request->localId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMergeRequestLabels"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/merge_requests/labels"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMergeRequestLabelsResponse(callApi(params, req, runtime));
  }
  else {
    return ListMergeRequestLabelsResponse(execute(params, req, runtime));
  }
}

ListMergeRequestLabelsResponse Alibabacloud_Devops20210625::Client::listMergeRequestLabels(shared_ptr<ListMergeRequestLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMergeRequestLabelsWithOptions(request, headers, runtime);
}

ListMergeRequestPatchSetsResponse Alibabacloud_Devops20210625::Client::listMergeRequestPatchSetsWithOptions(shared_ptr<ListMergeRequestPatchSetsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->localId)) {
    query->insert(pair<string, long>("localId", *request->localId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMergeRequestPatchSets"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/merge_requests/diffs/list_patchsets"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMergeRequestPatchSetsResponse(callApi(params, req, runtime));
  }
  else {
    return ListMergeRequestPatchSetsResponse(execute(params, req, runtime));
  }
}

ListMergeRequestPatchSetsResponse Alibabacloud_Devops20210625::Client::listMergeRequestPatchSets(shared_ptr<ListMergeRequestPatchSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMergeRequestPatchSetsWithOptions(request, headers, runtime);
}

ListMergeRequestsResponse Alibabacloud_Devops20210625::Client::listMergeRequestsWithOptions(shared_ptr<ListMergeRequestsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorIds)) {
    query->insert(pair<string, string>("authorIds", *request->authorIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createdAfter)) {
    query->insert(pair<string, string>("createdAfter", *request->createdAfter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createdBefore)) {
    query->insert(pair<string, string>("createdBefore", *request->createdBefore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupIds)) {
    query->insert(pair<string, string>("groupIds", *request->groupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelIds)) {
    query->insert(pair<string, string>("labelIds", *request->labelIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("orderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIds)) {
    query->insert(pair<string, string>("projectIds", *request->projectIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reviewerIds)) {
    query->insert(pair<string, string>("reviewerIds", *request->reviewerIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("state", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMergeRequests"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/merge_requests/advanced_search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMergeRequestsResponse(callApi(params, req, runtime));
  }
  else {
    return ListMergeRequestsResponse(execute(params, req, runtime));
  }
}

ListMergeRequestsResponse Alibabacloud_Devops20210625::Client::listMergeRequests(shared_ptr<ListMergeRequestsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMergeRequestsWithOptions(request, headers, runtime);
}

ListOrganizationMembersResponse Alibabacloud_Devops20210625::Client::listOrganizationMembersWithOptions(shared_ptr<string> organizationId,
                                                                                                        shared_ptr<ListOrganizationMembersRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->containsExternInfo)) {
    query->insert(pair<string, bool>("containsExternInfo", *request->containsExternInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externUid)) {
    query->insert(pair<string, string>("externUid", *request->externUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->joinTimeFrom)) {
    query->insert(pair<string, long>("joinTimeFrom", *request->joinTimeFrom));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->joinTimeTo)) {
    query->insert(pair<string, long>("joinTimeTo", *request->joinTimeTo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationMemberName)) {
    query->insert(pair<string, string>("organizationMemberName", *request->organizationMemberName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->provider)) {
    query->insert(pair<string, string>("provider", *request->provider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("state", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOrganizationMembers"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/members"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListOrganizationMembersResponse(callApi(params, req, runtime));
  }
  else {
    return ListOrganizationMembersResponse(execute(params, req, runtime));
  }
}

ListOrganizationMembersResponse Alibabacloud_Devops20210625::Client::listOrganizationMembers(shared_ptr<string> organizationId, shared_ptr<ListOrganizationMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listOrganizationMembersWithOptions(organizationId, request, headers, runtime);
}

ListOrganizationsResponse Alibabacloud_Devops20210625::Client::listOrganizationsWithOptions(shared_ptr<ListOrganizationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->accessLevel)) {
    query->insert(pair<string, long>("accessLevel", *request->accessLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minAccessLevel)) {
    query->insert(pair<string, long>("minAccessLevel", *request->minAccessLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOrganizations"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organizations/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListOrganizationsResponse(callApi(params, req, runtime));
  }
  else {
    return ListOrganizationsResponse(execute(params, req, runtime));
  }
}

ListOrganizationsResponse Alibabacloud_Devops20210625::Client::listOrganizations(shared_ptr<ListOrganizationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listOrganizationsWithOptions(request, headers, runtime);
}

ListPipelineGroupPipelinesResponse Alibabacloud_Devops20210625::Client::listPipelineGroupPipelinesWithOptions(shared_ptr<string> organizationId,
                                                                                                              shared_ptr<string> groupId,
                                                                                                              shared_ptr<ListPipelineGroupPipelinesRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createEndTime)) {
    query->insert(pair<string, long>("createEndTime", *request->createEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createStartTime)) {
    query->insert(pair<string, long>("createStartTime", *request->createStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->executeEndTime)) {
    query->insert(pair<string, long>("executeEndTime", *request->executeEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->executeStartTime)) {
    query->insert(pair<string, long>("executeStartTime", *request->executeStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineName)) {
    query->insert(pair<string, string>("pipelineName", *request->pipelineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultStatusList)) {
    query->insert(pair<string, string>("resultStatusList", *request->resultStatusList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelineGroupPipelines"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelineGroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/pipelines"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPipelineGroupPipelinesResponse(callApi(params, req, runtime));
  }
  else {
    return ListPipelineGroupPipelinesResponse(execute(params, req, runtime));
  }
}

ListPipelineGroupPipelinesResponse Alibabacloud_Devops20210625::Client::listPipelineGroupPipelines(shared_ptr<string> organizationId, shared_ptr<string> groupId, shared_ptr<ListPipelineGroupPipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelineGroupPipelinesWithOptions(organizationId, groupId, request, headers, runtime);
}

ListPipelineGroupsResponse Alibabacloud_Devops20210625::Client::listPipelineGroupsWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<ListPipelineGroupsRequest> request,
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelineGroups"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelineGroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPipelineGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListPipelineGroupsResponse(execute(params, req, runtime));
  }
}

ListPipelineGroupsResponse Alibabacloud_Devops20210625::Client::listPipelineGroups(shared_ptr<string> organizationId, shared_ptr<ListPipelineGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelineGroupsWithOptions(organizationId, request, headers, runtime);
}

ListPipelineJobHistorysResponse Alibabacloud_Devops20210625::Client::listPipelineJobHistorysWithOptions(shared_ptr<string> organizationId,
                                                                                                        shared_ptr<string> pipelineId,
                                                                                                        shared_ptr<ListPipelineJobHistorysRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelineJobHistorys"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipeline/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/job/historys"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPipelineJobHistorysResponse(callApi(params, req, runtime));
  }
  else {
    return ListPipelineJobHistorysResponse(execute(params, req, runtime));
  }
}

ListPipelineJobHistorysResponse Alibabacloud_Devops20210625::Client::listPipelineJobHistorys(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<ListPipelineJobHistorysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelineJobHistorysWithOptions(organizationId, pipelineId, request, headers, runtime);
}

ListPipelineJobsResponse Alibabacloud_Devops20210625::Client::listPipelineJobsWithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<string> pipelineId,
                                                                                          shared_ptr<ListPipelineJobsRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("category", *request->category));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelineJobs"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipeline/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/jobs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPipelineJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListPipelineJobsResponse(execute(params, req, runtime));
  }
}

ListPipelineJobsResponse Alibabacloud_Devops20210625::Client::listPipelineJobs(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<ListPipelineJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelineJobsWithOptions(organizationId, pipelineId, request, headers, runtime);
}

ListPipelineRelationsResponse Alibabacloud_Devops20210625::Client::listPipelineRelationsWithOptions(shared_ptr<string> organizationId,
                                                                                                    shared_ptr<string> pipelineId,
                                                                                                    shared_ptr<ListPipelineRelationsRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->relObjectType)) {
    query->insert(pair<string, string>("relObjectType", *request->relObjectType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelineRelations"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/pipelineRelations"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPipelineRelationsResponse(callApi(params, req, runtime));
  }
  else {
    return ListPipelineRelationsResponse(execute(params, req, runtime));
  }
}

ListPipelineRelationsResponse Alibabacloud_Devops20210625::Client::listPipelineRelations(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<ListPipelineRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelineRelationsWithOptions(organizationId, pipelineId, request, headers, runtime);
}

ListPipelineRunsResponse Alibabacloud_Devops20210625::Client::listPipelineRunsWithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<string> pipelineId,
                                                                                          shared_ptr<ListPipelineRunsRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->triggerMode)) {
    query->insert(pair<string, long>("triggerMode", *request->triggerMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelineRuns"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/pipelineRuns"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPipelineRunsResponse(callApi(params, req, runtime));
  }
  else {
    return ListPipelineRunsResponse(execute(params, req, runtime));
  }
}

ListPipelineRunsResponse Alibabacloud_Devops20210625::Client::listPipelineRuns(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<ListPipelineRunsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelineRunsWithOptions(organizationId, pipelineId, request, headers, runtime);
}

ListPipelinesResponse Alibabacloud_Devops20210625::Client::listPipelinesWithOptions(shared_ptr<string> organizationId,
                                                                                    shared_ptr<ListPipelinesRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createEndTime)) {
    query->insert(pair<string, long>("createEndTime", *request->createEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createStartTime)) {
    query->insert(pair<string, long>("createStartTime", *request->createStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorAccountIds)) {
    query->insert(pair<string, string>("creatorAccountIds", *request->creatorAccountIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executeAccountIds)) {
    query->insert(pair<string, string>("executeAccountIds", *request->executeAccountIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->executeEndTime)) {
    query->insert(pair<string, long>("executeEndTime", *request->executeEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->executeStartTime)) {
    query->insert(pair<string, long>("executeStartTime", *request->executeStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineName)) {
    query->insert(pair<string, string>("pipelineName", *request->pipelineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusList)) {
    query->insert(pair<string, string>("statusList", *request->statusList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelines"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPipelinesResponse(callApi(params, req, runtime));
  }
  else {
    return ListPipelinesResponse(execute(params, req, runtime));
  }
}

ListPipelinesResponse Alibabacloud_Devops20210625::Client::listPipelines(shared_ptr<string> organizationId, shared_ptr<ListPipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelinesWithOptions(organizationId, request, headers, runtime);
}

ListProjectLabelsResponse Alibabacloud_Devops20210625::Client::listProjectLabelsWithOptions(shared_ptr<ListProjectLabelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("orderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withCounts)) {
    query->insert(pair<string, bool>("withCounts", *request->withCounts));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectLabels"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/labels"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListProjectLabelsResponse(callApi(params, req, runtime));
  }
  else {
    return ListProjectLabelsResponse(execute(params, req, runtime));
  }
}

ListProjectLabelsResponse Alibabacloud_Devops20210625::Client::listProjectLabels(shared_ptr<ListProjectLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectLabelsWithOptions(request, headers, runtime);
}

ListProjectMembersResponse Alibabacloud_Devops20210625::Client::listProjectMembersWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<string> projectId,
                                                                                              shared_ptr<ListProjectMembersRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("targetType", *request->targetType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectMembers"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/listMembers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListProjectMembersResponse(callApi(params, req, runtime));
  }
  else {
    return ListProjectMembersResponse(execute(params, req, runtime));
  }
}

ListProjectMembersResponse Alibabacloud_Devops20210625::Client::listProjectMembers(shared_ptr<string> organizationId, shared_ptr<string> projectId, shared_ptr<ListProjectMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectMembersWithOptions(organizationId, projectId, request, headers, runtime);
}

ListProjectTemplatesResponse Alibabacloud_Devops20210625::Client::listProjectTemplatesWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<ListProjectTemplatesRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("category", *request->category));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectTemplates"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/projects/listTemplates"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListProjectTemplatesResponse(callApi(params, req, runtime));
  }
  else {
    return ListProjectTemplatesResponse(execute(params, req, runtime));
  }
}

ListProjectTemplatesResponse Alibabacloud_Devops20210625::Client::listProjectTemplates(shared_ptr<string> organizationId, shared_ptr<ListProjectTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectTemplatesWithOptions(organizationId, request, headers, runtime);
}

ListProjectWorkitemTypesResponse Alibabacloud_Devops20210625::Client::listProjectWorkitemTypesWithOptions(shared_ptr<string> organizationId,
                                                                                                          shared_ptr<string> projectId,
                                                                                                          shared_ptr<ListProjectWorkitemTypesRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceType)) {
    query->insert(pair<string, string>("spaceType", *request->spaceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectWorkitemTypes"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/getWorkitemType"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListProjectWorkitemTypesResponse(callApi(params, req, runtime));
  }
  else {
    return ListProjectWorkitemTypesResponse(execute(params, req, runtime));
  }
}

ListProjectWorkitemTypesResponse Alibabacloud_Devops20210625::Client::listProjectWorkitemTypes(shared_ptr<string> organizationId, shared_ptr<string> projectId, shared_ptr<ListProjectWorkitemTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectWorkitemTypesWithOptions(organizationId, projectId, request, headers, runtime);
}

ListProjectsResponse Alibabacloud_Devops20210625::Client::listProjectsWithOptions(shared_ptr<string> organizationId,
                                                                                  shared_ptr<ListProjectsRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conditions)) {
    query->insert(pair<string, string>("conditions", *request->conditions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraConditions)) {
    query->insert(pair<string, string>("extraConditions", *request->extraConditions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("scope", *request->scope));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjects"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/listProjects"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListProjectsResponse(callApi(params, req, runtime));
  }
  else {
    return ListProjectsResponse(execute(params, req, runtime));
  }
}

ListProjectsResponse Alibabacloud_Devops20210625::Client::listProjects(shared_ptr<string> organizationId, shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectsWithOptions(organizationId, request, headers, runtime);
}

ListProtectedBranchesResponse Alibabacloud_Devops20210625::Client::listProtectedBranchesWithOptions(shared_ptr<string> repositoryId,
                                                                                                    shared_ptr<ListProtectedBranchesRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProtectedBranches"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/protect_branches"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListProtectedBranchesResponse(callApi(params, req, runtime));
  }
  else {
    return ListProtectedBranchesResponse(execute(params, req, runtime));
  }
}

ListProtectedBranchesResponse Alibabacloud_Devops20210625::Client::listProtectedBranches(shared_ptr<string> repositoryId, shared_ptr<ListProtectedBranchesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProtectedBranchesWithOptions(repositoryId, request, headers, runtime);
}

ListPushRulesResponse Alibabacloud_Devops20210625::Client::listPushRulesWithOptions(shared_ptr<string> repositoryId,
                                                                                    shared_ptr<ListPushRulesRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPushRules"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/push_rule/push_rules/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPushRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListPushRulesResponse(execute(params, req, runtime));
  }
}

ListPushRulesResponse Alibabacloud_Devops20210625::Client::listPushRules(shared_ptr<string> repositoryId, shared_ptr<ListPushRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPushRulesWithOptions(repositoryId, request, headers, runtime);
}

ListRepositoriesResponse Alibabacloud_Devops20210625::Client::listRepositoriesWithOptions(shared_ptr<ListRepositoriesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->archived)) {
    query->insert(pair<string, bool>("archived", *request->archived));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minAccessLevel)) {
    query->insert(pair<string, long>("minAccessLevel", *request->minAccessLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("orderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->perPage)) {
    query->insert(pair<string, long>("perPage", *request->perPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositories"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRepositoriesResponse(callApi(params, req, runtime));
  }
  else {
    return ListRepositoriesResponse(execute(params, req, runtime));
  }
}

ListRepositoriesResponse Alibabacloud_Devops20210625::Client::listRepositories(shared_ptr<ListRepositoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoriesWithOptions(request, headers, runtime);
}

ListRepositoryBranchesResponse Alibabacloud_Devops20210625::Client::listRepositoryBranchesWithOptions(shared_ptr<string> repositoryId,
                                                                                                      shared_ptr<ListRepositoryBranchesRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryBranches"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/branches"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRepositoryBranchesResponse(callApi(params, req, runtime));
  }
  else {
    return ListRepositoryBranchesResponse(execute(params, req, runtime));
  }
}

ListRepositoryBranchesResponse Alibabacloud_Devops20210625::Client::listRepositoryBranches(shared_ptr<string> repositoryId, shared_ptr<ListRepositoryBranchesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryBranchesWithOptions(repositoryId, request, headers, runtime);
}

ListRepositoryCommitDiffResponse Alibabacloud_Devops20210625::Client::listRepositoryCommitDiffWithOptions(shared_ptr<string> repositoryId,
                                                                                                          shared_ptr<string> sha,
                                                                                                          shared_ptr<ListRepositoryCommitDiffRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->contextLine)) {
    query->insert(pair<string, long>("contextLine", *request->contextLine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryCommitDiff"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/commits/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sha)) + string("/diff"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRepositoryCommitDiffResponse(callApi(params, req, runtime));
  }
  else {
    return ListRepositoryCommitDiffResponse(execute(params, req, runtime));
  }
}

ListRepositoryCommitDiffResponse Alibabacloud_Devops20210625::Client::listRepositoryCommitDiff(shared_ptr<string> repositoryId, shared_ptr<string> sha, shared_ptr<ListRepositoryCommitDiffRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryCommitDiffWithOptions(repositoryId, sha, request, headers, runtime);
}

ListRepositoryCommitsResponse Alibabacloud_Devops20210625::Client::listRepositoryCommitsWithOptions(shared_ptr<string> repositoryId,
                                                                                                    shared_ptr<ListRepositoryCommitsRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->end)) {
    query->insert(pair<string, string>("end", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refName)) {
    query->insert(pair<string, string>("refName", *request->refName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showCommentsCount)) {
    query->insert(pair<string, bool>("showCommentsCount", *request->showCommentsCount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showSignature)) {
    query->insert(pair<string, bool>("showSignature", *request->showSignature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->start)) {
    query->insert(pair<string, string>("start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryCommits"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/commits"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRepositoryCommitsResponse(callApi(params, req, runtime));
  }
  else {
    return ListRepositoryCommitsResponse(execute(params, req, runtime));
  }
}

ListRepositoryCommitsResponse Alibabacloud_Devops20210625::Client::listRepositoryCommits(shared_ptr<string> repositoryId, shared_ptr<ListRepositoryCommitsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryCommitsWithOptions(repositoryId, request, headers, runtime);
}

ListRepositoryGroupsResponse Alibabacloud_Devops20210625::Client::listRepositoryGroupsWithOptions(shared_ptr<ListRepositoryGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includePersonal)) {
    query->insert(pair<string, bool>("includePersonal", *request->includePersonal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("orderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentId)) {
    query->insert(pair<string, long>("parentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryGroups"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/groups/get/all"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRepositoryGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListRepositoryGroupsResponse(execute(params, req, runtime));
  }
}

ListRepositoryGroupsResponse Alibabacloud_Devops20210625::Client::listRepositoryGroups(shared_ptr<ListRepositoryGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryGroupsWithOptions(request, headers, runtime);
}

ListRepositoryMemberWithInheritedResponse Alibabacloud_Devops20210625::Client::listRepositoryMemberWithInheritedWithOptions(shared_ptr<string> repositoryId,
                                                                                                                            shared_ptr<ListRepositoryMemberWithInheritedRequest> request,
                                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryMemberWithInherited"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/members/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRepositoryMemberWithInheritedResponse(callApi(params, req, runtime));
  }
  else {
    return ListRepositoryMemberWithInheritedResponse(execute(params, req, runtime));
  }
}

ListRepositoryMemberWithInheritedResponse Alibabacloud_Devops20210625::Client::listRepositoryMemberWithInherited(shared_ptr<string> repositoryId, shared_ptr<ListRepositoryMemberWithInheritedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryMemberWithInheritedWithOptions(repositoryId, request, headers, runtime);
}

ListRepositoryTagsResponse Alibabacloud_Devops20210625::Client::listRepositoryTagsWithOptions(shared_ptr<string> repositoryId,
                                                                                              shared_ptr<ListRepositoryTagsRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryTags"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/tag/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRepositoryTagsResponse(callApi(params, req, runtime));
  }
  else {
    return ListRepositoryTagsResponse(execute(params, req, runtime));
  }
}

ListRepositoryTagsResponse Alibabacloud_Devops20210625::Client::listRepositoryTags(shared_ptr<string> repositoryId, shared_ptr<ListRepositoryTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryTagsWithOptions(repositoryId, request, headers, runtime);
}

ListRepositoryTreeResponse Alibabacloud_Devops20210625::Client::listRepositoryTreeWithOptions(shared_ptr<string> repositoryId,
                                                                                              shared_ptr<ListRepositoryTreeRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refName)) {
    query->insert(pair<string, string>("refName", *request->refName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryTree"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/files/tree"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRepositoryTreeResponse(callApi(params, req, runtime));
  }
  else {
    return ListRepositoryTreeResponse(execute(params, req, runtime));
  }
}

ListRepositoryTreeResponse Alibabacloud_Devops20210625::Client::listRepositoryTree(shared_ptr<string> repositoryId, shared_ptr<ListRepositoryTreeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryTreeWithOptions(repositoryId, request, headers, runtime);
}

ListRepositoryWebhookResponse Alibabacloud_Devops20210625::Client::listRepositoryWebhookWithOptions(shared_ptr<string> repositoryId,
                                                                                                    shared_ptr<ListRepositoryWebhookRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryWebhook"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/webhooks/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRepositoryWebhookResponse(callApi(params, req, runtime));
  }
  else {
    return ListRepositoryWebhookResponse(execute(params, req, runtime));
  }
}

ListRepositoryWebhookResponse Alibabacloud_Devops20210625::Client::listRepositoryWebhook(shared_ptr<string> repositoryId, shared_ptr<ListRepositoryWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryWebhookWithOptions(repositoryId, request, headers, runtime);
}

ListResourceMembersResponse Alibabacloud_Devops20210625::Client::listResourceMembersWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> resourceType,
                                                                                                shared_ptr<string> resourceId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceMembers"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceType)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceId)) + string("/members"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListResourceMembersResponse(callApi(params, req, runtime));
  }
  else {
    return ListResourceMembersResponse(execute(params, req, runtime));
  }
}

ListResourceMembersResponse Alibabacloud_Devops20210625::Client::listResourceMembers(shared_ptr<string> organizationId, shared_ptr<string> resourceType, shared_ptr<string> resourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourceMembersWithOptions(organizationId, resourceType, resourceId, headers, runtime);
}

ListSearchCommitResponse Alibabacloud_Devops20210625::Client::listSearchCommitWithOptions(shared_ptr<ListSearchCommitRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    body->insert(pair<string, string>("order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<ListSearchCommitRequestRepoPath>(request->repoPath)) {
    body->insert(pair<string, ListSearchCommitRequestRepoPath>("repoPath", *request->repoPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    body->insert(pair<string, string>("sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSearchCommit"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/search/commit"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSearchCommitResponse(callApi(params, req, runtime));
  }
  else {
    return ListSearchCommitResponse(execute(params, req, runtime));
  }
}

ListSearchCommitResponse Alibabacloud_Devops20210625::Client::listSearchCommit(shared_ptr<ListSearchCommitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSearchCommitWithOptions(request, headers, runtime);
}

ListSearchRepositoryResponse Alibabacloud_Devops20210625::Client::listSearchRepositoryWithOptions(shared_ptr<ListSearchRepositoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunPk)) {
    body->insert(pair<string, string>("aliyunPk", *request->aliyunPk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    body->insert(pair<string, string>("order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<ListSearchRepositoryRequestRepoPath>(request->repoPath)) {
    body->insert(pair<string, ListSearchRepositoryRequestRepoPath>("repoPath", *request->repoPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    body->insert(pair<string, string>("sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibilityLevel)) {
    body->insert(pair<string, long>("visibilityLevel", *request->visibilityLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSearchRepository"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/search/repo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSearchRepositoryResponse(callApi(params, req, runtime));
  }
  else {
    return ListSearchRepositoryResponse(execute(params, req, runtime));
  }
}

ListSearchRepositoryResponse Alibabacloud_Devops20210625::Client::listSearchRepository(shared_ptr<ListSearchRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSearchRepositoryWithOptions(request, headers, runtime);
}

ListSearchSourceCodeResponse Alibabacloud_Devops20210625::Client::listSearchSourceCodeWithOptions(shared_ptr<ListSearchSourceCodeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ListSearchSourceCodeRequestFilePath>(request->filePath)) {
    body->insert(pair<string, ListSearchSourceCodeRequestFilePath>("filePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isCodeBlock)) {
    body->insert(pair<string, bool>("isCodeBlock", *request->isCodeBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    body->insert(pair<string, string>("order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<ListSearchSourceCodeRequestRepoPath>(request->repoPath)) {
    body->insert(pair<string, ListSearchSourceCodeRequestRepoPath>("repoPath", *request->repoPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    body->insert(pair<string, string>("sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSearchSourceCode"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/search/code"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSearchSourceCodeResponse(callApi(params, req, runtime));
  }
  else {
    return ListSearchSourceCodeResponse(execute(params, req, runtime));
  }
}

ListSearchSourceCodeResponse Alibabacloud_Devops20210625::Client::listSearchSourceCode(shared_ptr<ListSearchSourceCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSearchSourceCodeWithOptions(request, headers, runtime);
}

ListServiceAuthsResponse Alibabacloud_Devops20210625::Client::listServiceAuthsWithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<ListServiceAuthsRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceAuthType)) {
    query->insert(pair<string, string>("serviceAuthType", *request->serviceAuthType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceAuths"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/serviceAuths"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListServiceAuthsResponse(callApi(params, req, runtime));
  }
  else {
    return ListServiceAuthsResponse(execute(params, req, runtime));
  }
}

ListServiceAuthsResponse Alibabacloud_Devops20210625::Client::listServiceAuths(shared_ptr<string> organizationId, shared_ptr<ListServiceAuthsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceAuthsWithOptions(organizationId, request, headers, runtime);
}

ListServiceConnectionsResponse Alibabacloud_Devops20210625::Client::listServiceConnectionsWithOptions(shared_ptr<string> organizationId,
                                                                                                      shared_ptr<ListServiceConnectionsRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sericeConnectionType)) {
    query->insert(pair<string, string>("sericeConnectionType", *request->sericeConnectionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceConnections"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/serviceConnections"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListServiceConnectionsResponse(callApi(params, req, runtime));
  }
  else {
    return ListServiceConnectionsResponse(execute(params, req, runtime));
  }
}

ListServiceConnectionsResponse Alibabacloud_Devops20210625::Client::listServiceConnections(shared_ptr<string> organizationId, shared_ptr<ListServiceConnectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceConnectionsWithOptions(organizationId, request, headers, runtime);
}

ListServiceCredentialsResponse Alibabacloud_Devops20210625::Client::listServiceCredentialsWithOptions(shared_ptr<string> organizationId,
                                                                                                      shared_ptr<ListServiceCredentialsRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCredentialType)) {
    query->insert(pair<string, string>("serviceCredentialType", *request->serviceCredentialType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceCredentials"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/serviceCredentials"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListServiceCredentialsResponse(callApi(params, req, runtime));
  }
  else {
    return ListServiceCredentialsResponse(execute(params, req, runtime));
  }
}

ListServiceCredentialsResponse Alibabacloud_Devops20210625::Client::listServiceCredentials(shared_ptr<string> organizationId, shared_ptr<ListServiceCredentialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceCredentialsWithOptions(organizationId, request, headers, runtime);
}

ListSprintsResponse Alibabacloud_Devops20210625::Client::listSprintsWithOptions(shared_ptr<string> organizationId,
                                                                                shared_ptr<ListSprintsRequest> request,
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
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceIdentifier)) {
    query->insert(pair<string, string>("spaceIdentifier", *request->spaceIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceType)) {
    query->insert(pair<string, string>("spaceType", *request->spaceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSprints"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/sprints/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSprintsResponse(callApi(params, req, runtime));
  }
  else {
    return ListSprintsResponse(execute(params, req, runtime));
  }
}

ListSprintsResponse Alibabacloud_Devops20210625::Client::listSprints(shared_ptr<string> organizationId, shared_ptr<ListSprintsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSprintsWithOptions(organizationId, request, headers, runtime);
}

ListTestCaseFieldsResponse Alibabacloud_Devops20210625::Client::listTestCaseFieldsWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<ListTestCaseFieldsRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceIdentifier)) {
    query->insert(pair<string, string>("spaceIdentifier", *request->spaceIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTestCaseFields"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/testhub/testcase/fields"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTestCaseFieldsResponse(callApi(params, req, runtime));
  }
  else {
    return ListTestCaseFieldsResponse(execute(params, req, runtime));
  }
}

ListTestCaseFieldsResponse Alibabacloud_Devops20210625::Client::listTestCaseFields(shared_ptr<string> organizationId, shared_ptr<ListTestCaseFieldsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTestCaseFieldsWithOptions(organizationId, request, headers, runtime);
}

ListUserDrawRecordByPkResponse Alibabacloud_Devops20210625::Client::listUserDrawRecordByPkWithOptions(shared_ptr<ListUserDrawRecordByPkRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunPk)) {
    query->insert(pair<string, string>("aliyunPk", *request->aliyunPk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drawGroup)) {
    query->insert(pair<string, string>("drawGroup", *request->drawGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drawPoolName)) {
    query->insert(pair<string, string>("drawPoolName", *request->drawPoolName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserDrawRecordByPk"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/listUserDrawRecords"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListUserDrawRecordByPkResponse(callApi(params, req, runtime));
  }
  else {
    return ListUserDrawRecordByPkResponse(execute(params, req, runtime));
  }
}

ListUserDrawRecordByPkResponse Alibabacloud_Devops20210625::Client::listUserDrawRecordByPk(shared_ptr<ListUserDrawRecordByPkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUserDrawRecordByPkWithOptions(request, headers, runtime);
}

ListUserKeysResponse Alibabacloud_Devops20210625::Client::listUserKeysWithOptions(shared_ptr<ListUserKeysRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("orderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserKeys"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/user/keys"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListUserKeysResponse(callApi(params, req, runtime));
  }
  else {
    return ListUserKeysResponse(execute(params, req, runtime));
  }
}

ListUserKeysResponse Alibabacloud_Devops20210625::Client::listUserKeys(shared_ptr<ListUserKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUserKeysWithOptions(request, headers, runtime);
}

ListUserResourcesResponse Alibabacloud_Devops20210625::Client::listUserResourcesWithOptions(shared_ptr<ListUserResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIds)) {
    query->insert(pair<string, string>("userIds", *request->userIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserResources"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/user/vision/user_resources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListUserResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return ListUserResourcesResponse(execute(params, req, runtime));
  }
}

ListUserResourcesResponse Alibabacloud_Devops20210625::Client::listUserResources(shared_ptr<ListUserResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUserResourcesWithOptions(request, headers, runtime);
}

ListVariableGroupsResponse Alibabacloud_Devops20210625::Client::listVariableGroupsWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<ListVariableGroupsRequest> request,
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
  if (!Darabonba_Util::Client::isUnset<string>(request->pageOrder)) {
    query->insert(pair<string, string>("pageOrder", *request->pageOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSort)) {
    query->insert(pair<string, string>("pageSort", *request->pageSort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVariableGroups"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/variableGroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListVariableGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListVariableGroupsResponse(execute(params, req, runtime));
  }
}

ListVariableGroupsResponse Alibabacloud_Devops20210625::Client::listVariableGroups(shared_ptr<string> organizationId, shared_ptr<ListVariableGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listVariableGroupsWithOptions(organizationId, request, headers, runtime);
}

ListWorkItemAllFieldsResponse Alibabacloud_Devops20210625::Client::listWorkItemAllFieldsWithOptions(shared_ptr<string> organizationId,
                                                                                                    shared_ptr<ListWorkItemAllFieldsRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceIdentifier)) {
    query->insert(pair<string, string>("spaceIdentifier", *request->spaceIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceType)) {
    query->insert(pair<string, string>("spaceType", *request->spaceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workitemTypeIdentifier)) {
    query->insert(pair<string, string>("workitemTypeIdentifier", *request->workitemTypeIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkItemAllFields"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/fields/listAll"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWorkItemAllFieldsResponse(callApi(params, req, runtime));
  }
  else {
    return ListWorkItemAllFieldsResponse(execute(params, req, runtime));
  }
}

ListWorkItemAllFieldsResponse Alibabacloud_Devops20210625::Client::listWorkItemAllFields(shared_ptr<string> organizationId, shared_ptr<ListWorkItemAllFieldsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkItemAllFieldsWithOptions(organizationId, request, headers, runtime);
}

ListWorkItemWorkFlowStatusResponse Alibabacloud_Devops20210625::Client::listWorkItemWorkFlowStatusWithOptions(shared_ptr<string> organizationId,
                                                                                                              shared_ptr<ListWorkItemWorkFlowStatusRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceIdentifier)) {
    query->insert(pair<string, string>("spaceIdentifier", *request->spaceIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceType)) {
    query->insert(pair<string, string>("spaceType", *request->spaceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workitemCategoryIdentifier)) {
    query->insert(pair<string, string>("workitemCategoryIdentifier", *request->workitemCategoryIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workitemTypeIdentifier)) {
    query->insert(pair<string, string>("workitemTypeIdentifier", *request->workitemTypeIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkItemWorkFlowStatus"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/workflow/listWorkflowStatus"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWorkItemWorkFlowStatusResponse(callApi(params, req, runtime));
  }
  else {
    return ListWorkItemWorkFlowStatusResponse(execute(params, req, runtime));
  }
}

ListWorkItemWorkFlowStatusResponse Alibabacloud_Devops20210625::Client::listWorkItemWorkFlowStatus(shared_ptr<string> organizationId, shared_ptr<ListWorkItemWorkFlowStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkItemWorkFlowStatusWithOptions(organizationId, request, headers, runtime);
}

ListWorkitemAttachmentsResponse Alibabacloud_Devops20210625::Client::listWorkitemAttachmentsWithOptions(shared_ptr<string> organizationId,
                                                                                                        shared_ptr<string> workitemIdentifier,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkitemAttachments"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitem/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workitemIdentifier)) + string("/attachments"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWorkitemAttachmentsResponse(callApi(params, req, runtime));
  }
  else {
    return ListWorkitemAttachmentsResponse(execute(params, req, runtime));
  }
}

ListWorkitemAttachmentsResponse Alibabacloud_Devops20210625::Client::listWorkitemAttachments(shared_ptr<string> organizationId, shared_ptr<string> workitemIdentifier) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkitemAttachmentsWithOptions(organizationId, workitemIdentifier, headers, runtime);
}

ListWorkitemEstimateResponse Alibabacloud_Devops20210625::Client::listWorkitemEstimateWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<string> workitemId,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkitemEstimate"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workitemId)) + string("/estimate/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWorkitemEstimateResponse(callApi(params, req, runtime));
  }
  else {
    return ListWorkitemEstimateResponse(execute(params, req, runtime));
  }
}

ListWorkitemEstimateResponse Alibabacloud_Devops20210625::Client::listWorkitemEstimate(shared_ptr<string> organizationId, shared_ptr<string> workitemId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkitemEstimateWithOptions(organizationId, workitemId, headers, runtime);
}

ListWorkitemTimeResponse Alibabacloud_Devops20210625::Client::listWorkitemTimeWithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<string> workitemId,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkitemTime"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workitemId)) + string("/time/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWorkitemTimeResponse(callApi(params, req, runtime));
  }
  else {
    return ListWorkitemTimeResponse(execute(params, req, runtime));
  }
}

ListWorkitemTimeResponse Alibabacloud_Devops20210625::Client::listWorkitemTime(shared_ptr<string> organizationId, shared_ptr<string> workitemId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkitemTimeWithOptions(organizationId, workitemId, headers, runtime);
}

ListWorkitemsResponse Alibabacloud_Devops20210625::Client::listWorkitemsWithOptions(shared_ptr<string> organizationId,
                                                                                    shared_ptr<ListWorkitemsRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conditions)) {
    query->insert(pair<string, string>("conditions", *request->conditions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraConditions)) {
    query->insert(pair<string, string>("extraConditions", *request->extraConditions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupCondition)) {
    query->insert(pair<string, string>("groupCondition", *request->groupCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxResults)) {
    query->insert(pair<string, string>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("orderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchType)) {
    query->insert(pair<string, string>("searchType", *request->searchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceIdentifier)) {
    query->insert(pair<string, string>("spaceIdentifier", *request->spaceIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceType)) {
    query->insert(pair<string, string>("spaceType", *request->spaceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkitems"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/listWorkitems"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWorkitemsResponse(callApi(params, req, runtime));
  }
  else {
    return ListWorkitemsResponse(execute(params, req, runtime));
  }
}

ListWorkitemsResponse Alibabacloud_Devops20210625::Client::listWorkitems(shared_ptr<string> organizationId, shared_ptr<ListWorkitemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkitemsWithOptions(organizationId, request, headers, runtime);
}

LogPipelineJobRunResponse Alibabacloud_Devops20210625::Client::logPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                                                            shared_ptr<string> pipelineId,
                                                                                            shared_ptr<string> jobId,
                                                                                            shared_ptr<string> pipelineRunId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LogPipelineJobRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipeline/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/pipelineRun/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId)) + string("/job/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return LogPipelineJobRunResponse(callApi(params, req, runtime));
  }
  else {
    return LogPipelineJobRunResponse(execute(params, req, runtime));
  }
}

LogPipelineJobRunResponse Alibabacloud_Devops20210625::Client::logPipelineJobRun(shared_ptr<string> organizationId,
                                                                                 shared_ptr<string> pipelineId,
                                                                                 shared_ptr<string> jobId,
                                                                                 shared_ptr<string> pipelineRunId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return logPipelineJobRunWithOptions(organizationId, pipelineId, jobId, pipelineRunId, headers, runtime);
}

LogVMDeployMachineResponse Alibabacloud_Devops20210625::Client::logVMDeployMachineWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<string> pipelineId,
                                                                                              shared_ptr<string> deployOrderId,
                                                                                              shared_ptr<string> machineSn,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LogVMDeployMachine"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/deploy/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployOrderId)) + string("/machine/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(machineSn)) + string("/log"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return LogVMDeployMachineResponse(callApi(params, req, runtime));
  }
  else {
    return LogVMDeployMachineResponse(execute(params, req, runtime));
  }
}

LogVMDeployMachineResponse Alibabacloud_Devops20210625::Client::logVMDeployMachine(shared_ptr<string> organizationId,
                                                                                   shared_ptr<string> pipelineId,
                                                                                   shared_ptr<string> deployOrderId,
                                                                                   shared_ptr<string> machineSn) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return logVMDeployMachineWithOptions(organizationId, pipelineId, deployOrderId, machineSn, headers, runtime);
}

MergeMergeRequestResponse Alibabacloud_Devops20210625::Client::mergeMergeRequestWithOptions(shared_ptr<string> repositoryId,
                                                                                            shared_ptr<string> localId,
                                                                                            shared_ptr<MergeMergeRequestRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mergeMessage)) {
    body->insert(pair<string, string>("mergeMessage", *request->mergeMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mergeType)) {
    body->insert(pair<string, string>("mergeType", *request->mergeType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->removeSourceBranch)) {
    body->insert(pair<string, bool>("removeSourceBranch", *request->removeSourceBranch));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MergeMergeRequest"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/merge_requests/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(localId)) + string("/merge"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return MergeMergeRequestResponse(callApi(params, req, runtime));
  }
  else {
    return MergeMergeRequestResponse(execute(params, req, runtime));
  }
}

MergeMergeRequestResponse Alibabacloud_Devops20210625::Client::mergeMergeRequest(shared_ptr<string> repositoryId, shared_ptr<string> localId, shared_ptr<MergeMergeRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return mergeMergeRequestWithOptions(repositoryId, localId, request, headers, runtime);
}

PassPipelineValidateResponse Alibabacloud_Devops20210625::Client::passPipelineValidateWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<string> pipelineId,
                                                                                                  shared_ptr<string> pipelineRunId,
                                                                                                  shared_ptr<string> jobId,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PassPipelineValidate"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/pipelineRuns/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)) + string("/pass"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PassPipelineValidateResponse(callApi(params, req, runtime));
  }
  else {
    return PassPipelineValidateResponse(execute(params, req, runtime));
  }
}

PassPipelineValidateResponse Alibabacloud_Devops20210625::Client::passPipelineValidate(shared_ptr<string> organizationId,
                                                                                       shared_ptr<string> pipelineId,
                                                                                       shared_ptr<string> pipelineRunId,
                                                                                       shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return passPipelineValidateWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

PassReleaseStagePipelineValidateResponse Alibabacloud_Devops20210625::Client::passReleaseStagePipelineValidateWithOptions(shared_ptr<string> appName,
                                                                                                                          shared_ptr<string> releaseWorkflowSn,
                                                                                                                          shared_ptr<string> releaseStageSn,
                                                                                                                          shared_ptr<string> executionNumber,
                                                                                                                          shared_ptr<PassReleaseStagePipelineValidateRequest> request,
                                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("jobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PassReleaseStagePipelineValidate"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/releaseWorkflows/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(releaseWorkflowSn)) + string("/releaseStages/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(releaseStageSn)) + string("/executions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(executionNumber)) + string("%3ApassPipelineValidate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PassReleaseStagePipelineValidateResponse(callApi(params, req, runtime));
  }
  else {
    return PassReleaseStagePipelineValidateResponse(execute(params, req, runtime));
  }
}

PassReleaseStagePipelineValidateResponse Alibabacloud_Devops20210625::Client::passReleaseStagePipelineValidate(shared_ptr<string> appName,
                                                                                                               shared_ptr<string> releaseWorkflowSn,
                                                                                                               shared_ptr<string> releaseStageSn,
                                                                                                               shared_ptr<string> executionNumber,
                                                                                                               shared_ptr<PassReleaseStagePipelineValidateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return passReleaseStagePipelineValidateWithOptions(appName, releaseWorkflowSn, releaseStageSn, executionNumber, request, headers, runtime);
}

RefusePipelineValidateResponse Alibabacloud_Devops20210625::Client::refusePipelineValidateWithOptions(shared_ptr<string> organizationId,
                                                                                                      shared_ptr<string> pipelineId,
                                                                                                      shared_ptr<string> pipelineRunId,
                                                                                                      shared_ptr<string> jobId,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefusePipelineValidate"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/pipelineRuns/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)) + string("/refuse"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RefusePipelineValidateResponse(callApi(params, req, runtime));
  }
  else {
    return RefusePipelineValidateResponse(execute(params, req, runtime));
  }
}

RefusePipelineValidateResponse Alibabacloud_Devops20210625::Client::refusePipelineValidate(shared_ptr<string> organizationId,
                                                                                           shared_ptr<string> pipelineId,
                                                                                           shared_ptr<string> pipelineRunId,
                                                                                           shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return refusePipelineValidateWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

RefuseReleaseStagePipelineValidateResponse Alibabacloud_Devops20210625::Client::refuseReleaseStagePipelineValidateWithOptions(shared_ptr<string> appName,
                                                                                                                              shared_ptr<string> releaseWorkflowSn,
                                                                                                                              shared_ptr<string> releaseStageSn,
                                                                                                                              shared_ptr<string> executionNumber,
                                                                                                                              shared_ptr<RefuseReleaseStagePipelineValidateRequest> request,
                                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("jobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefuseReleaseStagePipelineValidate"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/releaseWorkflows/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(releaseWorkflowSn)) + string("/releaseStages/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(releaseStageSn)) + string("/executions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(executionNumber)) + string("%3ArefusePipelineValidate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RefuseReleaseStagePipelineValidateResponse(callApi(params, req, runtime));
  }
  else {
    return RefuseReleaseStagePipelineValidateResponse(execute(params, req, runtime));
  }
}

RefuseReleaseStagePipelineValidateResponse Alibabacloud_Devops20210625::Client::refuseReleaseStagePipelineValidate(shared_ptr<string> appName,
                                                                                                                   shared_ptr<string> releaseWorkflowSn,
                                                                                                                   shared_ptr<string> releaseStageSn,
                                                                                                                   shared_ptr<string> executionNumber,
                                                                                                                   shared_ptr<RefuseReleaseStagePipelineValidateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return refuseReleaseStagePipelineValidateWithOptions(appName, releaseWorkflowSn, releaseStageSn, executionNumber, request, headers, runtime);
}

ReopenMergeRequestResponse Alibabacloud_Devops20210625::Client::reopenMergeRequestWithOptions(shared_ptr<string> repositoryId,
                                                                                              shared_ptr<string> localId,
                                                                                              shared_ptr<ReopenMergeRequestRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReopenMergeRequest"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/merge_requests/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(localId)) + string("/reopen"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReopenMergeRequestResponse(callApi(params, req, runtime));
  }
  else {
    return ReopenMergeRequestResponse(execute(params, req, runtime));
  }
}

ReopenMergeRequestResponse Alibabacloud_Devops20210625::Client::reopenMergeRequest(shared_ptr<string> repositoryId, shared_ptr<string> localId, shared_ptr<ReopenMergeRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return reopenMergeRequestWithOptions(repositoryId, localId, request, headers, runtime);
}

ResetSshKeyResponse Alibabacloud_Devops20210625::Client::resetSshKeyWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetSshKey"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/sshKey"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ResetSshKeyResponse(callApi(params, req, runtime));
  }
  else {
    return ResetSshKeyResponse(execute(params, req, runtime));
  }
}

ResetSshKeyResponse Alibabacloud_Devops20210625::Client::resetSshKey(shared_ptr<string> organizationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resetSshKeyWithOptions(organizationId, headers, runtime);
}

ResumeVMDeployOrderResponse Alibabacloud_Devops20210625::Client::resumeVMDeployOrderWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> pipelineId,
                                                                                                shared_ptr<string> deployOrderId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeVMDeployOrder"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/deploy/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployOrderId)) + string("/resume"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ResumeVMDeployOrderResponse(callApi(params, req, runtime));
  }
  else {
    return ResumeVMDeployOrderResponse(execute(params, req, runtime));
  }
}

ResumeVMDeployOrderResponse Alibabacloud_Devops20210625::Client::resumeVMDeployOrder(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> deployOrderId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeVMDeployOrderWithOptions(organizationId, pipelineId, deployOrderId, headers, runtime);
}

RetryPipelineJobRunResponse Alibabacloud_Devops20210625::Client::retryPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> pipelineId,
                                                                                                shared_ptr<string> pipelineRunId,
                                                                                                shared_ptr<string> jobId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RetryPipelineJobRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/pipelineRuns/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RetryPipelineJobRunResponse(callApi(params, req, runtime));
  }
  else {
    return RetryPipelineJobRunResponse(execute(params, req, runtime));
  }
}

RetryPipelineJobRunResponse Alibabacloud_Devops20210625::Client::retryPipelineJobRun(shared_ptr<string> organizationId,
                                                                                     shared_ptr<string> pipelineId,
                                                                                     shared_ptr<string> pipelineRunId,
                                                                                     shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return retryPipelineJobRunWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

RetryVMDeployMachineResponse Alibabacloud_Devops20210625::Client::retryVMDeployMachineWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<string> pipelineId,
                                                                                                  shared_ptr<string> deployOrderId,
                                                                                                  shared_ptr<string> machineSn,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RetryVMDeployMachine"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/deploy/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployOrderId)) + string("/machine/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(machineSn)) + string("/retry"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RetryVMDeployMachineResponse(callApi(params, req, runtime));
  }
  else {
    return RetryVMDeployMachineResponse(execute(params, req, runtime));
  }
}

RetryVMDeployMachineResponse Alibabacloud_Devops20210625::Client::retryVMDeployMachine(shared_ptr<string> organizationId,
                                                                                       shared_ptr<string> pipelineId,
                                                                                       shared_ptr<string> deployOrderId,
                                                                                       shared_ptr<string> machineSn) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return retryVMDeployMachineWithOptions(organizationId, pipelineId, deployOrderId, machineSn, headers, runtime);
}

ReviewMergeRequestResponse Alibabacloud_Devops20210625::Client::reviewMergeRequestWithOptions(shared_ptr<string> repositoryId,
                                                                                              shared_ptr<string> localId,
                                                                                              shared_ptr<ReviewMergeRequestRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->draftCommentIds)) {
    body->insert(pair<string, vector<string>>("draftCommentIds", *request->draftCommentIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reviewComment)) {
    body->insert(pair<string, string>("reviewComment", *request->reviewComment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reviewOpinion)) {
    body->insert(pair<string, string>("reviewOpinion", *request->reviewOpinion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReviewMergeRequest"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/merge_requests/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(localId)) + string("/submit_review_opinion"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReviewMergeRequestResponse(callApi(params, req, runtime));
  }
  else {
    return ReviewMergeRequestResponse(execute(params, req, runtime));
  }
}

ReviewMergeRequestResponse Alibabacloud_Devops20210625::Client::reviewMergeRequest(shared_ptr<string> repositoryId, shared_ptr<string> localId, shared_ptr<ReviewMergeRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return reviewMergeRequestWithOptions(repositoryId, localId, request, headers, runtime);
}

SkipPipelineJobRunResponse Alibabacloud_Devops20210625::Client::skipPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<string> pipelineId,
                                                                                              shared_ptr<string> pipelineRunId,
                                                                                              shared_ptr<string> jobId,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SkipPipelineJobRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/pipelineRuns/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)) + string("/skip"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SkipPipelineJobRunResponse(callApi(params, req, runtime));
  }
  else {
    return SkipPipelineJobRunResponse(execute(params, req, runtime));
  }
}

SkipPipelineJobRunResponse Alibabacloud_Devops20210625::Client::skipPipelineJobRun(shared_ptr<string> organizationId,
                                                                                   shared_ptr<string> pipelineId,
                                                                                   shared_ptr<string> pipelineRunId,
                                                                                   shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return skipPipelineJobRunWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

SkipVMDeployMachineResponse Alibabacloud_Devops20210625::Client::skipVMDeployMachineWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> pipelineId,
                                                                                                shared_ptr<string> deployOrderId,
                                                                                                shared_ptr<string> machineSn,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SkipVMDeployMachine"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/deploy/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployOrderId)) + string("/machine/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(machineSn)) + string("/skip"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SkipVMDeployMachineResponse(callApi(params, req, runtime));
  }
  else {
    return SkipVMDeployMachineResponse(execute(params, req, runtime));
  }
}

SkipVMDeployMachineResponse Alibabacloud_Devops20210625::Client::skipVMDeployMachine(shared_ptr<string> organizationId,
                                                                                     shared_ptr<string> pipelineId,
                                                                                     shared_ptr<string> deployOrderId,
                                                                                     shared_ptr<string> machineSn) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return skipVMDeployMachineWithOptions(organizationId, pipelineId, deployOrderId, machineSn, headers, runtime);
}

StartPipelineRunResponse Alibabacloud_Devops20210625::Client::startPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<string> pipelineId,
                                                                                          shared_ptr<StartPipelineRunRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("params", *request->params));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartPipelineRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organizations/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/run"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartPipelineRunResponse(callApi(params, req, runtime));
  }
  else {
    return StartPipelineRunResponse(execute(params, req, runtime));
  }
}

StartPipelineRunResponse Alibabacloud_Devops20210625::Client::startPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<StartPipelineRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startPipelineRunWithOptions(organizationId, pipelineId, request, headers, runtime);
}

StopPipelineJobRunResponse Alibabacloud_Devops20210625::Client::stopPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<string> pipelineId,
                                                                                              shared_ptr<string> pipelineRunId,
                                                                                              shared_ptr<string> jobId,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopPipelineJobRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/pipelineRuns/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopPipelineJobRunResponse(callApi(params, req, runtime));
  }
  else {
    return StopPipelineJobRunResponse(execute(params, req, runtime));
  }
}

StopPipelineJobRunResponse Alibabacloud_Devops20210625::Client::stopPipelineJobRun(shared_ptr<string> organizationId,
                                                                                   shared_ptr<string> pipelineId,
                                                                                   shared_ptr<string> pipelineRunId,
                                                                                   shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopPipelineJobRunWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

StopPipelineRunResponse Alibabacloud_Devops20210625::Client::stopPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                                                        shared_ptr<string> pipelineId,
                                                                                        shared_ptr<string> pipelineRunId,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopPipelineRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/pipelineRuns/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId)) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopPipelineRunResponse(callApi(params, req, runtime));
  }
  else {
    return StopPipelineRunResponse(execute(params, req, runtime));
  }
}

StopPipelineRunResponse Alibabacloud_Devops20210625::Client::stopPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> pipelineRunId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopPipelineRunWithOptions(organizationId, pipelineId, pipelineRunId, headers, runtime);
}

StopVMDeployOrderResponse Alibabacloud_Devops20210625::Client::stopVMDeployOrderWithOptions(shared_ptr<string> organizationId,
                                                                                            shared_ptr<string> pipelineId,
                                                                                            shared_ptr<string> deployOrderId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopVMDeployOrder"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/deploy/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployOrderId)) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopVMDeployOrderResponse(callApi(params, req, runtime));
  }
  else {
    return StopVMDeployOrderResponse(execute(params, req, runtime));
  }
}

StopVMDeployOrderResponse Alibabacloud_Devops20210625::Client::stopVMDeployOrder(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> deployOrderId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopVMDeployOrderWithOptions(organizationId, pipelineId, deployOrderId, headers, runtime);
}

TransferRepositoryResponse Alibabacloud_Devops20210625::Client::transferRepositoryWithOptions(shared_ptr<TransferRepositoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("groupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryId)) {
    query->insert(pair<string, string>("repositoryId", *request->repositoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransferRepository"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/repository/transfer"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TransferRepositoryResponse(callApi(params, req, runtime));
  }
  else {
    return TransferRepositoryResponse(execute(params, req, runtime));
  }
}

TransferRepositoryResponse Alibabacloud_Devops20210625::Client::transferRepository(shared_ptr<TransferRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return transferRepositoryWithOptions(request, headers, runtime);
}

TriggerRepositoryMirrorSyncResponse Alibabacloud_Devops20210625::Client::triggerRepositoryMirrorSyncWithOptions(shared_ptr<string> repositoryId,
                                                                                                                shared_ptr<TriggerRepositoryMirrorSyncRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    query->insert(pair<string, string>("account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TriggerRepositoryMirrorSync"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/mirror"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TriggerRepositoryMirrorSyncResponse(callApi(params, req, runtime));
  }
  else {
    return TriggerRepositoryMirrorSyncResponse(execute(params, req, runtime));
  }
}

TriggerRepositoryMirrorSyncResponse Alibabacloud_Devops20210625::Client::triggerRepositoryMirrorSync(shared_ptr<string> repositoryId, shared_ptr<TriggerRepositoryMirrorSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return triggerRepositoryMirrorSyncWithOptions(repositoryId, request, headers, runtime);
}

UpdateAppMemberResponse Alibabacloud_Devops20210625::Client::updateAppMemberWithOptions(shared_ptr<string> appName,
                                                                                        shared_ptr<UpdateAppMemberRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<UpdateAppMemberRequestPlayer>(request->player)) {
    body->insert(pair<string, UpdateAppMemberRequestPlayer>("player", *request->player));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->roleNames)) {
    body->insert(pair<string, vector<string>>("roleNames", *request->roleNames));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAppMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/members"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateAppMemberResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateAppMemberResponse(execute(params, req, runtime));
  }
}

UpdateAppMemberResponse Alibabacloud_Devops20210625::Client::updateAppMember(shared_ptr<string> appName, shared_ptr<UpdateAppMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAppMemberWithOptions(appName, request, headers, runtime);
}

UpdateApplicationResponse Alibabacloud_Devops20210625::Client::updateApplicationWithOptions(shared_ptr<string> appName,
                                                                                            shared_ptr<UpdateApplicationRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccountId)) {
    body->insert(pair<string, string>("ownerAccountId", *request->ownerAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApplication"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/appstack/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateApplicationResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateApplicationResponse(execute(params, req, runtime));
  }
}

UpdateApplicationResponse Alibabacloud_Devops20210625::Client::updateApplication(shared_ptr<string> appName, shared_ptr<UpdateApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateApplicationWithOptions(appName, request, headers, runtime);
}

UpdateCheckRunResponse Alibabacloud_Devops20210625::Client::updateCheckRunWithOptions(shared_ptr<UpdateCheckRunRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkRunId)) {
    query->insert(pair<string, long>("checkRunId", *request->checkRunId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateCheckRunRequestAnnotations>>(request->annotations)) {
    body->insert(pair<string, vector<UpdateCheckRunRequestAnnotations>>("annotations", *request->annotations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->completedAt)) {
    body->insert(pair<string, string>("completedAt", *request->completedAt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conclusion)) {
    body->insert(pair<string, string>("conclusion", *request->conclusion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detailsUrl)) {
    body->insert(pair<string, string>("detailsUrl", *request->detailsUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalId)) {
    body->insert(pair<string, string>("externalId", *request->externalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateCheckRunRequestOutput>(request->output)) {
    body->insert(pair<string, UpdateCheckRunRequestOutput>("output", *request->output));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startedAt)) {
    body->insert(pair<string, string>("startedAt", *request->startedAt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCheckRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/check_runs/update_check_run"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateCheckRunResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateCheckRunResponse(execute(params, req, runtime));
  }
}

UpdateCheckRunResponse Alibabacloud_Devops20210625::Client::updateCheckRun(shared_ptr<UpdateCheckRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateCheckRunWithOptions(request, headers, runtime);
}

UpdateFileResponse Alibabacloud_Devops20210625::Client::updateFileWithOptions(shared_ptr<string> repositoryId,
                                                                              shared_ptr<UpdateFileRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->branchName)) {
    body->insert(pair<string, string>("branchName", *request->branchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commitMessage)) {
    body->insert(pair<string, string>("commitMessage", *request->commitMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encoding)) {
    body->insert(pair<string, string>("encoding", *request->encoding));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newPath)) {
    body->insert(pair<string, string>("newPath", *request->newPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldPath)) {
    body->insert(pair<string, string>("oldPath", *request->oldPath));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFile"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/files/update"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateFileResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateFileResponse(execute(params, req, runtime));
  }
}

UpdateFileResponse Alibabacloud_Devops20210625::Client::updateFile(shared_ptr<string> repositoryId, shared_ptr<UpdateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFileWithOptions(repositoryId, request, headers, runtime);
}

UpdateFlowTagResponse Alibabacloud_Devops20210625::Client::updateFlowTagWithOptions(shared_ptr<string> organizationId,
                                                                                    shared_ptr<string> id,
                                                                                    shared_ptr<UpdateFlowTagRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->color)) {
    query->insert(pair<string, string>("color", *request->color));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flowTagGroupId)) {
    query->insert(pair<string, long>("flowTagGroupId", *request->flowTagGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFlowTag"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/flow/tags/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateFlowTagResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateFlowTagResponse(execute(params, req, runtime));
  }
}

UpdateFlowTagResponse Alibabacloud_Devops20210625::Client::updateFlowTag(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateFlowTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFlowTagWithOptions(organizationId, id, request, headers, runtime);
}

UpdateFlowTagGroupResponse Alibabacloud_Devops20210625::Client::updateFlowTagGroupWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<string> id,
                                                                                              shared_ptr<UpdateFlowTagGroupRequest> request,
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
    {"action", boost::any(string("UpdateFlowTagGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/flow/tagGroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateFlowTagGroupResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateFlowTagGroupResponse(execute(params, req, runtime));
  }
}

UpdateFlowTagGroupResponse Alibabacloud_Devops20210625::Client::updateFlowTagGroup(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateFlowTagGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFlowTagGroupWithOptions(organizationId, id, request, headers, runtime);
}

UpdateGroupResponse Alibabacloud_Devops20210625::Client::updateGroupWithOptions(shared_ptr<UpdateGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarUrl)) {
    body->insert(pair<string, string>("avatarUrl", *request->avatarUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    body->insert(pair<string, string>("path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pathWithNamespace)) {
    body->insert(pair<string, string>("pathWithNamespace", *request->pathWithNamespace));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibilityLevel)) {
    body->insert(pair<string, long>("visibilityLevel", *request->visibilityLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/groups/modify"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateGroupResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateGroupResponse(execute(params, req, runtime));
  }
}

UpdateGroupResponse Alibabacloud_Devops20210625::Client::updateGroup(shared_ptr<UpdateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateGroupWithOptions(request, headers, runtime);
}

UpdateGroupMemberResponse Alibabacloud_Devops20210625::Client::updateGroupMemberWithOptions(shared_ptr<string> groupId,
                                                                                            shared_ptr<UpdateGroupMemberRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunPk)) {
    query->insert(pair<string, string>("aliyunPk", *request->aliyunPk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->accessLevel)) {
    body->insert(pair<string, long>("accessLevel", *request->accessLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberType)) {
    body->insert(pair<string, string>("memberType", *request->memberType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGroupMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/members/update/aliyun_pk"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateGroupMemberResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateGroupMemberResponse(execute(params, req, runtime));
  }
}

UpdateGroupMemberResponse Alibabacloud_Devops20210625::Client::updateGroupMember(shared_ptr<string> groupId, shared_ptr<UpdateGroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateGroupMemberWithOptions(groupId, request, headers, runtime);
}

UpdateHostGroupResponse Alibabacloud_Devops20210625::Client::updateHostGroupWithOptions(shared_ptr<string> organizationId,
                                                                                        shared_ptr<string> id,
                                                                                        shared_ptr<UpdateHostGroupRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunRegion)) {
    body->insert(pair<string, string>("aliyunRegion", *request->aliyunRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsLabelKey)) {
    body->insert(pair<string, string>("ecsLabelKey", *request->ecsLabelKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsLabelValue)) {
    body->insert(pair<string, string>("ecsLabelValue", *request->ecsLabelValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsType)) {
    body->insert(pair<string, string>("ecsType", *request->ecsType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    body->insert(pair<string, string>("envId", *request->envId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->machineInfos)) {
    body->insert(pair<string, string>("machineInfos", *request->machineInfos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceConnectionId)) {
    body->insert(pair<string, long>("serviceConnectionId", *request->serviceConnectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagIds)) {
    body->insert(pair<string, string>("tagIds", *request->tagIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHostGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/hostGroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateHostGroupResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateHostGroupResponse(execute(params, req, runtime));
  }
}

UpdateHostGroupResponse Alibabacloud_Devops20210625::Client::updateHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateHostGroupWithOptions(organizationId, id, request, headers, runtime);
}

UpdateMergeRequestResponse Alibabacloud_Devops20210625::Client::updateMergeRequestWithOptions(shared_ptr<string> repositoryId,
                                                                                              shared_ptr<string> localId,
                                                                                              shared_ptr<UpdateMergeRequestRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMergeRequest"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/merge_requests/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(localId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateMergeRequestResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateMergeRequestResponse(execute(params, req, runtime));
  }
}

UpdateMergeRequestResponse Alibabacloud_Devops20210625::Client::updateMergeRequest(shared_ptr<string> repositoryId, shared_ptr<string> localId, shared_ptr<UpdateMergeRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateMergeRequestWithOptions(repositoryId, localId, request, headers, runtime);
}

UpdateMergeRequestPersonnelResponse Alibabacloud_Devops20210625::Client::updateMergeRequestPersonnelWithOptions(shared_ptr<string> repositoryId,
                                                                                                                shared_ptr<string> localId,
                                                                                                                shared_ptr<string> personType,
                                                                                                                shared_ptr<UpdateMergeRequestPersonnelRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->newUserIdList)) {
    body->insert(pair<string, vector<string>>("newUserIdList", *request->newUserIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMergeRequestPersonnel"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/merge_requests/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(localId)) + string("/person/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(personType)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateMergeRequestPersonnelResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateMergeRequestPersonnelResponse(execute(params, req, runtime));
  }
}

UpdateMergeRequestPersonnelResponse Alibabacloud_Devops20210625::Client::updateMergeRequestPersonnel(shared_ptr<string> repositoryId,
                                                                                                     shared_ptr<string> localId,
                                                                                                     shared_ptr<string> personType,
                                                                                                     shared_ptr<UpdateMergeRequestPersonnelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateMergeRequestPersonnelWithOptions(repositoryId, localId, personType, request, headers, runtime);
}

UpdateOrganizationMemberResponse Alibabacloud_Devops20210625::Client::updateOrganizationMemberWithOptions(shared_ptr<string> organizationId,
                                                                                                          shared_ptr<string> accountId,
                                                                                                          shared_ptr<UpdateOrganizationMemberRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationMemberName)) {
    query->insert(pair<string, string>("organizationMemberName", *request->organizationMemberName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateOrganizationMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/members/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(accountId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateOrganizationMemberResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateOrganizationMemberResponse(execute(params, req, runtime));
  }
}

UpdateOrganizationMemberResponse Alibabacloud_Devops20210625::Client::updateOrganizationMember(shared_ptr<string> organizationId, shared_ptr<string> accountId, shared_ptr<UpdateOrganizationMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateOrganizationMemberWithOptions(organizationId, accountId, request, headers, runtime);
}

UpdatePipelineResponse Alibabacloud_Devops20210625::Client::updatePipelineWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<UpdatePipelineRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    body->insert(pair<string, string>("pipelineId", *request->pipelineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePipeline"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdatePipelineResponse(callApi(params, req, runtime));
  }
  else {
    return UpdatePipelineResponse(execute(params, req, runtime));
  }
}

UpdatePipelineResponse Alibabacloud_Devops20210625::Client::updatePipeline(shared_ptr<string> organizationId, shared_ptr<UpdatePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePipelineWithOptions(organizationId, request, headers, runtime);
}

UpdatePipelineBaseInfoResponse Alibabacloud_Devops20210625::Client::updatePipelineBaseInfoWithOptions(shared_ptr<string> organizationId,
                                                                                                      shared_ptr<string> pipelineId,
                                                                                                      shared_ptr<UpdatePipelineBaseInfoRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->envId)) {
    query->insert(pair<string, long>("envId", *request->envId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineName)) {
    query->insert(pair<string, string>("pipelineName", *request->pipelineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagList)) {
    query->insert(pair<string, string>("tagList", *request->tagList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePipelineBaseInfo"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId)) + string("/baseInfo"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdatePipelineBaseInfoResponse(callApi(params, req, runtime));
  }
  else {
    return UpdatePipelineBaseInfoResponse(execute(params, req, runtime));
  }
}

UpdatePipelineBaseInfoResponse Alibabacloud_Devops20210625::Client::updatePipelineBaseInfo(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<UpdatePipelineBaseInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePipelineBaseInfoWithOptions(organizationId, pipelineId, request, headers, runtime);
}

UpdatePipelineGroupResponse Alibabacloud_Devops20210625::Client::updatePipelineGroupWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> groupId,
                                                                                                shared_ptr<UpdatePipelineGroupRequest> request,
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
    {"action", boost::any(string("UpdatePipelineGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/pipelineGroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdatePipelineGroupResponse(callApi(params, req, runtime));
  }
  else {
    return UpdatePipelineGroupResponse(execute(params, req, runtime));
  }
}

UpdatePipelineGroupResponse Alibabacloud_Devops20210625::Client::updatePipelineGroup(shared_ptr<string> organizationId, shared_ptr<string> groupId, shared_ptr<UpdatePipelineGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePipelineGroupWithOptions(organizationId, groupId, request, headers, runtime);
}

UpdateProjectFieldResponse Alibabacloud_Devops20210625::Client::updateProjectFieldWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<string> identifier,
                                                                                              shared_ptr<UpdateProjectFieldRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->statusIdentifier)) {
    body->insert(pair<string, string>("statusIdentifier", *request->statusIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateProjectFieldRequestUpdateBasicFieldRequestList>>(request->updateBasicFieldRequestList)) {
    body->insert(pair<string, vector<UpdateProjectFieldRequestUpdateBasicFieldRequestList>>("updateBasicFieldRequestList", *request->updateBasicFieldRequestList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateProjectFieldRequestUpdateForOpenApiList>>(request->updateForOpenApiList)) {
    body->insert(pair<string, vector<UpdateProjectFieldRequestUpdateForOpenApiList>>("updateForOpenApiList", *request->updateForOpenApiList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProjectField"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/project/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(identifier)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateProjectFieldResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateProjectFieldResponse(execute(params, req, runtime));
  }
}

UpdateProjectFieldResponse Alibabacloud_Devops20210625::Client::updateProjectField(shared_ptr<string> organizationId, shared_ptr<string> identifier, shared_ptr<UpdateProjectFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProjectFieldWithOptions(organizationId, identifier, request, headers, runtime);
}

UpdateProjectLabelResponse Alibabacloud_Devops20210625::Client::updateProjectLabelWithOptions(shared_ptr<string> labelId,
                                                                                              shared_ptr<UpdateProjectLabelRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repositoryIdentity)) {
    query->insert(pair<string, string>("repositoryIdentity", *request->repositoryIdentity));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->color)) {
    body->insert(pair<string, string>("color", *request->color));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProjectLabel"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/labels/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(labelId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateProjectLabelResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateProjectLabelResponse(execute(params, req, runtime));
  }
}

UpdateProjectLabelResponse Alibabacloud_Devops20210625::Client::updateProjectLabel(shared_ptr<string> labelId, shared_ptr<UpdateProjectLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProjectLabelWithOptions(labelId, request, headers, runtime);
}

UpdateProjectMemberResponse Alibabacloud_Devops20210625::Client::updateProjectMemberWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> projectId,
                                                                                                shared_ptr<UpdateProjectMemberRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleIdentifier)) {
    body->insert(pair<string, string>("roleIdentifier", *request->roleIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetIdentifier)) {
    body->insert(pair<string, string>("targetIdentifier", *request->targetIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    body->insert(pair<string, string>("targetType", *request->targetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdentifier)) {
    body->insert(pair<string, string>("userIdentifier", *request->userIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    body->insert(pair<string, string>("userType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProjectMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/updateMember"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateProjectMemberResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateProjectMemberResponse(execute(params, req, runtime));
  }
}

UpdateProjectMemberResponse Alibabacloud_Devops20210625::Client::updateProjectMember(shared_ptr<string> organizationId, shared_ptr<string> projectId, shared_ptr<UpdateProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProjectMemberWithOptions(organizationId, projectId, request, headers, runtime);
}

UpdateProtectedBranchesResponse Alibabacloud_Devops20210625::Client::updateProtectedBranchesWithOptions(shared_ptr<string> repositoryId,
                                                                                                        shared_ptr<string> id,
                                                                                                        shared_ptr<UpdateProtectedBranchesRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->allowMergeRoles)) {
    body->insert(pair<string, vector<long>>("allowMergeRoles", *request->allowMergeRoles));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->allowMergeUserIds)) {
    body->insert(pair<string, vector<string>>("allowMergeUserIds", *request->allowMergeUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->allowPushRoles)) {
    body->insert(pair<string, vector<long>>("allowPushRoles", *request->allowPushRoles));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->allowPushUserIds)) {
    body->insert(pair<string, vector<string>>("allowPushUserIds", *request->allowPushUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->branch)) {
    body->insert(pair<string, string>("branch", *request->branch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateProtectedBranchesRequestMergeRequestSetting>(request->mergeRequestSetting)) {
    body->insert(pair<string, UpdateProtectedBranchesRequestMergeRequestSetting>("mergeRequestSetting", *request->mergeRequestSetting));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateProtectedBranchesRequestTestSettingDTO>(request->testSettingDTO)) {
    body->insert(pair<string, UpdateProtectedBranchesRequestTestSettingDTO>("testSettingDTO", *request->testSettingDTO));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProtectedBranches"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/protect_branches/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateProtectedBranchesResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateProtectedBranchesResponse(execute(params, req, runtime));
  }
}

UpdateProtectedBranchesResponse Alibabacloud_Devops20210625::Client::updateProtectedBranches(shared_ptr<string> repositoryId, shared_ptr<string> id, shared_ptr<UpdateProtectedBranchesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProtectedBranchesWithOptions(repositoryId, id, request, headers, runtime);
}

UpdatePushReviewOnOffResponse Alibabacloud_Devops20210625::Client::updatePushReviewOnOffWithOptions(shared_ptr<string> repositoryId,
                                                                                                    shared_ptr<UpdatePushReviewOnOffRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->trunkMode)) {
    query->insert(pair<string, bool>("trunkMode", *request->trunkMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePushReviewOnOff"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/settings/trunk_mode"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdatePushReviewOnOffResponse(callApi(params, req, runtime));
  }
  else {
    return UpdatePushReviewOnOffResponse(execute(params, req, runtime));
  }
}

UpdatePushReviewOnOffResponse Alibabacloud_Devops20210625::Client::updatePushReviewOnOff(shared_ptr<string> repositoryId, shared_ptr<UpdatePushReviewOnOffRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePushReviewOnOffWithOptions(repositoryId, request, headers, runtime);
}

UpdatePushRuleResponse Alibabacloud_Devops20210625::Client::updatePushRuleWithOptions(shared_ptr<string> repositoryId,
                                                                                      shared_ptr<string> pushRuleId,
                                                                                      shared_ptr<UpdatePushRuleRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdatePushRuleRequestRuleInfos>>(request->ruleInfos)) {
    body->insert(pair<string, vector<UpdatePushRuleRequestRuleInfos>>("ruleInfos", *request->ruleInfos));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePushRule"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/push_rule/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pushRuleId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdatePushRuleResponse(callApi(params, req, runtime));
  }
  else {
    return UpdatePushRuleResponse(execute(params, req, runtime));
  }
}

UpdatePushRuleResponse Alibabacloud_Devops20210625::Client::updatePushRule(shared_ptr<string> repositoryId, shared_ptr<string> pushRuleId, shared_ptr<UpdatePushRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePushRuleWithOptions(repositoryId, pushRuleId, request, headers, runtime);
}

UpdateRepositoryResponse Alibabacloud_Devops20210625::Client::updateRepositoryWithOptions(shared_ptr<string> repositoryId,
                                                                                          shared_ptr<UpdateRepositoryRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adminSettingLanguage)) {
    body->insert(pair<string, string>("adminSettingLanguage", *request->adminSettingLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatar)) {
    body->insert(pair<string, string>("avatar", *request->avatar));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->buildsEnabled)) {
    body->insert(pair<string, bool>("buildsEnabled", *request->buildsEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->checkEmail)) {
    body->insert(pair<string, bool>("checkEmail", *request->checkEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultBranch)) {
    body->insert(pair<string, string>("defaultBranch", *request->defaultBranch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->issuesEnabled)) {
    body->insert(pair<string, bool>("issuesEnabled", *request->issuesEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mergeRequestsEnabled)) {
    body->insert(pair<string, bool>("mergeRequestsEnabled", *request->mergeRequestsEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->openCloneDownloadControl)) {
    body->insert(pair<string, bool>("openCloneDownloadControl", *request->openCloneDownloadControl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    body->insert(pair<string, string>("path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateRepositoryRequestProjectCloneDownloadMethodList>>(request->projectCloneDownloadMethodList)) {
    body->insert(pair<string, vector<UpdateRepositoryRequestProjectCloneDownloadMethodList>>("projectCloneDownloadMethodList", *request->projectCloneDownloadMethodList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateRepositoryRequestProjectCloneDownloadRoleList>>(request->projectCloneDownloadRoleList)) {
    body->insert(pair<string, vector<UpdateRepositoryRequestProjectCloneDownloadRoleList>>("projectCloneDownloadRoleList", *request->projectCloneDownloadRoleList));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->snippetsEnabled)) {
    body->insert(pair<string, bool>("snippetsEnabled", *request->snippetsEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibilityLevel)) {
    body->insert(pair<string, long>("visibilityLevel", *request->visibilityLevel));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->wikiEnabled)) {
    body->insert(pair<string, bool>("wikiEnabled", *request->wikiEnabled));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRepository"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateRepositoryResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateRepositoryResponse(execute(params, req, runtime));
  }
}

UpdateRepositoryResponse Alibabacloud_Devops20210625::Client::updateRepository(shared_ptr<string> repositoryId, shared_ptr<UpdateRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateRepositoryWithOptions(repositoryId, request, headers, runtime);
}

UpdateRepositoryMemberResponse Alibabacloud_Devops20210625::Client::updateRepositoryMemberWithOptions(shared_ptr<string> repositoryId,
                                                                                                      shared_ptr<string> aliyunPk,
                                                                                                      shared_ptr<UpdateRepositoryMemberRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("accessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("organizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->accessLevel)) {
    body->insert(pair<string, long>("accessLevel", *request->accessLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireAt)) {
    body->insert(pair<string, string>("expireAt", *request->expireAt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberType)) {
    body->insert(pair<string, string>("memberType", *request->memberType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedId)) {
    body->insert(pair<string, string>("relatedId", *request->relatedId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateRepositoryMemberRequestRelatedInfos>>(request->relatedInfos)) {
    body->insert(pair<string, vector<UpdateRepositoryMemberRequestRelatedInfos>>("relatedInfos", *request->relatedInfos));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRepositoryMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repository/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repositoryId)) + string("/members/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(aliyunPk)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateRepositoryMemberResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateRepositoryMemberResponse(execute(params, req, runtime));
  }
}

UpdateRepositoryMemberResponse Alibabacloud_Devops20210625::Client::updateRepositoryMember(shared_ptr<string> repositoryId, shared_ptr<string> aliyunPk, shared_ptr<UpdateRepositoryMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateRepositoryMemberWithOptions(repositoryId, aliyunPk, request, headers, runtime);
}

UpdateResourceMemberResponse Alibabacloud_Devops20210625::Client::updateResourceMemberWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<string> resourceType,
                                                                                                  shared_ptr<string> resourceId,
                                                                                                  shared_ptr<string> accountId,
                                                                                                  shared_ptr<UpdateResourceMemberRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    body->insert(pair<string, string>("roleName", *request->roleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceType)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceId)) + string("/members/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(accountId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateResourceMemberResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateResourceMemberResponse(execute(params, req, runtime));
  }
}

UpdateResourceMemberResponse Alibabacloud_Devops20210625::Client::updateResourceMember(shared_ptr<string> organizationId,
                                                                                       shared_ptr<string> resourceType,
                                                                                       shared_ptr<string> resourceId,
                                                                                       shared_ptr<string> accountId,
                                                                                       shared_ptr<UpdateResourceMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateResourceMemberWithOptions(organizationId, resourceType, resourceId, accountId, request, headers, runtime);
}

UpdateTestCaseResponse Alibabacloud_Devops20210625::Client::updateTestCaseWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<string> testcaseIdentifier,
                                                                                      shared_ptr<UpdateTestCaseRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTestCaseRequestUpdateWorkitemPropertyRequest>>(request->updateWorkitemPropertyRequest)) {
    body->insert(pair<string, vector<UpdateTestCaseRequestUpdateWorkitemPropertyRequest>>("updateWorkitemPropertyRequest", *request->updateWorkitemPropertyRequest));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTestCase"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/testhub/testcase/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(testcaseIdentifier)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateTestCaseResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateTestCaseResponse(execute(params, req, runtime));
  }
}

UpdateTestCaseResponse Alibabacloud_Devops20210625::Client::updateTestCase(shared_ptr<string> organizationId, shared_ptr<string> testcaseIdentifier, shared_ptr<UpdateTestCaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTestCaseWithOptions(organizationId, testcaseIdentifier, request, headers, runtime);
}

UpdateTestResultResponse Alibabacloud_Devops20210625::Client::updateTestResultWithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<string> testPlanIdentifier,
                                                                                          shared_ptr<string> testcaseIdentifier,
                                                                                          shared_ptr<UpdateTestResultRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->executor)) {
    body->insert(pair<string, string>("executor", *request->executor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTestResult"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/testhub/testplan/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(testPlanIdentifier)) + string("/testresult/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(testcaseIdentifier)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateTestResultResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateTestResultResponse(execute(params, req, runtime));
  }
}

UpdateTestResultResponse Alibabacloud_Devops20210625::Client::updateTestResult(shared_ptr<string> organizationId,
                                                                               shared_ptr<string> testPlanIdentifier,
                                                                               shared_ptr<string> testcaseIdentifier,
                                                                               shared_ptr<UpdateTestResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTestResultWithOptions(organizationId, testPlanIdentifier, testcaseIdentifier, request, headers, runtime);
}

UpdateVariableGroupResponse Alibabacloud_Devops20210625::Client::updateVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> id,
                                                                                                shared_ptr<UpdateVariableGroupRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variables)) {
    body->insert(pair<string, string>("variables", *request->variables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVariableGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/variableGroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateVariableGroupResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateVariableGroupResponse(execute(params, req, runtime));
  }
}

UpdateVariableGroupResponse Alibabacloud_Devops20210625::Client::updateVariableGroup(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateVariableGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateVariableGroupWithOptions(organizationId, id, request, headers, runtime);
}

UpdateWorkItemResponse Alibabacloud_Devops20210625::Client::updateWorkItemWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<UpdateWorkItemRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldType)) {
    body->insert(pair<string, string>("fieldType", *request->fieldType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    body->insert(pair<string, string>("identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyKey)) {
    body->insert(pair<string, string>("propertyKey", *request->propertyKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyValue)) {
    body->insert(pair<string, string>("propertyValue", *request->propertyValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkItem"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateWorkItemResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateWorkItemResponse(execute(params, req, runtime));
  }
}

UpdateWorkItemResponse Alibabacloud_Devops20210625::Client::updateWorkItem(shared_ptr<string> organizationId, shared_ptr<UpdateWorkItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateWorkItemWithOptions(organizationId, request, headers, runtime);
}

UpdateWorkitemCommentResponse Alibabacloud_Devops20210625::Client::updateWorkitemCommentWithOptions(shared_ptr<string> organizationId,
                                                                                                    shared_ptr<UpdateWorkitemCommentRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->commentId)) {
    body->insert(pair<string, long>("commentId", *request->commentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formatType)) {
    body->insert(pair<string, string>("formatType", *request->formatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workitemIdentifier)) {
    body->insert(pair<string, string>("workitemIdentifier", *request->workitemIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkitemComment"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/commentUpdate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateWorkitemCommentResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateWorkitemCommentResponse(execute(params, req, runtime));
  }
}

UpdateWorkitemCommentResponse Alibabacloud_Devops20210625::Client::updateWorkitemComment(shared_ptr<string> organizationId, shared_ptr<UpdateWorkitemCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateWorkitemCommentWithOptions(organizationId, request, headers, runtime);
}

UpdateWorkitemFieldResponse Alibabacloud_Devops20210625::Client::updateWorkitemFieldWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<UpdateWorkitemFieldRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest>>(request->updateWorkitemPropertyRequest)) {
    body->insert(pair<string, vector<UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest>>("updateWorkitemPropertyRequest", *request->updateWorkitemPropertyRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workitemIdentifier)) {
    body->insert(pair<string, string>("workitemIdentifier", *request->workitemIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkitemField"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitems/updateWorkitemField"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateWorkitemFieldResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateWorkitemFieldResponse(execute(params, req, runtime));
  }
}

UpdateWorkitemFieldResponse Alibabacloud_Devops20210625::Client::updateWorkitemField(shared_ptr<string> organizationId, shared_ptr<UpdateWorkitemFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateWorkitemFieldWithOptions(organizationId, request, headers, runtime);
}

WorkitemAttachmentCreateResponse Alibabacloud_Devops20210625::Client::workitemAttachmentCreateWithOptions(shared_ptr<string> organizationId,
                                                                                                          shared_ptr<string> workitemIdentifier,
                                                                                                          shared_ptr<WorkitemAttachmentCreateRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileKey)) {
    body->insert(pair<string, string>("fileKey", *request->fileKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalFilename)) {
    body->insert(pair<string, string>("originalFilename", *request->originalFilename));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WorkitemAttachmentCreate"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId)) + string("/workitem/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workitemIdentifier)) + string("/attachment"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return WorkitemAttachmentCreateResponse(callApi(params, req, runtime));
  }
  else {
    return WorkitemAttachmentCreateResponse(execute(params, req, runtime));
  }
}

WorkitemAttachmentCreateResponse Alibabacloud_Devops20210625::Client::workitemAttachmentCreate(shared_ptr<string> organizationId, shared_ptr<string> workitemIdentifier, shared_ptr<WorkitemAttachmentCreateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return workitemAttachmentCreateWithOptions(organizationId, workitemIdentifier, request, headers, runtime);
}

