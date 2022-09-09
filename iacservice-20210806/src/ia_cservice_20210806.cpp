// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ia_cservice_20210806.hpp>
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

using namespace Alibabacloud_IaCService20210806;

Alibabacloud_IaCService20210806::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("iacservice"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_IaCService20210806::Client::getEndpoint(shared_ptr<string> productId,
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

AssociateParameterSetResponse Alibabacloud_IaCService20210806::Client::associateParameterSet(shared_ptr<AssociateParameterSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return associateParameterSetWithOptions(request, headers, runtime);
}

AssociateParameterSetResponse Alibabacloud_IaCService20210806::Client::associateParameterSetWithOptions(shared_ptr<AssociateParameterSetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->parameterSetIds)) {
    body->insert(pair<string, vector<string>>("parameterSetIds", *request->parameterSetIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    body->insert(pair<string, string>("resourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateParameterSet"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/parameterSets/operations/associate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateParameterSetResponse(callApi(params, req, runtime));
}

AssociateTaskGroupResponse Alibabacloud_IaCService20210806::Client::associateTaskGroup(shared_ptr<string> projectId, shared_ptr<string> groupId, shared_ptr<AssociateTaskGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return associateTaskGroupWithOptions(projectId, groupId, request, headers, runtime);
}

AssociateTaskGroupResponse Alibabacloud_IaCService20210806::Client::associateTaskGroupWithOptions(shared_ptr<string> projectId,
                                                                                                  shared_ptr<string> groupId,
                                                                                                  shared_ptr<AssociateTaskGroupRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->taskIds)) {
    body->insert(pair<string, vector<string>>("taskIds", *request->taskIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateTaskGroup"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/project/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/associate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateTaskGroupResponse(callApi(params, req, runtime));
}

AttachRabbitmqPublisherResponse Alibabacloud_IaCService20210806::Client::attachRabbitmqPublisher(shared_ptr<string> publisherId, shared_ptr<AttachRabbitmqPublisherRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return attachRabbitmqPublisherWithOptions(publisherId, request, headers, runtime);
}

AttachRabbitmqPublisherResponse Alibabacloud_IaCService20210806::Client::attachRabbitmqPublisherWithOptions(shared_ptr<string> publisherId,
                                                                                                            shared_ptr<AttachRabbitmqPublisherRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachRabbitmqPublisher"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/publishers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(publisherId)) + string("/attach"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachRabbitmqPublisherResponse(callApi(params, req, runtime));
}

CancelResourceExportTaskResponse Alibabacloud_IaCService20210806::Client::cancelResourceExportTask(shared_ptr<string> exportTaskId, shared_ptr<CancelResourceExportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelResourceExportTaskWithOptions(exportTaskId, request, headers, runtime);
}

CancelResourceExportTaskResponse Alibabacloud_IaCService20210806::Client::cancelResourceExportTaskWithOptions(shared_ptr<string> exportTaskId,
                                                                                                              shared_ptr<CancelResourceExportTaskRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRole)) {
    body->insert(pair<string, string>("ramRole", *request->ramRole));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelResourceExportTask"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/exportTasks/cancel/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(exportTaskId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelResourceExportTaskResponse(callApi(params, req, runtime));
}

CloneModuleResponse Alibabacloud_IaCService20210806::Client::cloneModule(shared_ptr<CloneModuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cloneModuleWithOptions(request, headers, runtime);
}

CloneModuleResponse Alibabacloud_IaCService20210806::Client::cloneModuleWithOptions(shared_ptr<CloneModuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleId)) {
    body->insert(pair<string, string>("moduleId", *request->moduleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleSource)) {
    body->insert(pair<string, string>("moduleSource", *request->moduleSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleVersion)) {
    body->insert(pair<string, string>("moduleVersion", *request->moduleVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneModule"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/modules/operations/clone"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloneModuleResponse(callApi(params, req, runtime));
}

CreateAuthorizationResponse Alibabacloud_IaCService20210806::Client::createAuthorization(shared_ptr<CreateAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAuthorizationWithOptions(request, headers, runtime);
}

CreateAuthorizationResponse Alibabacloud_IaCService20210806::Client::createAuthorizationWithOptions(shared_ptr<CreateAuthorizationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dueTime)) {
    body->insert(pair<string, string>("dueTime", *request->dueTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleId)) {
    body->insert(pair<string, string>("moduleId", *request->moduleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleVersion)) {
    body->insert(pair<string, string>("moduleVersion", *request->moduleVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    body->insert(pair<string, long>("uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAuthorization"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/authorizations"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAuthorizationResponse(callApi(params, req, runtime));
}

CreateGroupResponse Alibabacloud_IaCService20210806::Client::createGroup(shared_ptr<CreateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createGroupWithOptions(request, headers, runtime);
}

CreateGroupResponse Alibabacloud_IaCService20210806::Client::createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("projectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGroup"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/group"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGroupResponse(callApi(params, req, runtime));
}

CreateJobResponse Alibabacloud_IaCService20210806::Client::createJob(shared_ptr<string> taskId, shared_ptr<CreateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createJobWithOptions(taskId, request, headers, runtime);
}

CreateJobResponse Alibabacloud_IaCService20210806::Client::createJobWithOptions(shared_ptr<string> taskId,
                                                                                shared_ptr<CreateJobRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCommand)) {
    body->insert(pair<string, string>("subCommand", *request->subCommand));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateJob"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)) + string("/jobs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateJobResponse(callApi(params, req, runtime));
}

CreateModuleResponse Alibabacloud_IaCService20210806::Client::createModule(shared_ptr<CreateModuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createModuleWithOptions(request, headers, runtime);
}

CreateModuleResponse Alibabacloud_IaCService20210806::Client::createModuleWithOptions(shared_ptr<CreateModuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcePath)) {
    body->insert(pair<string, string>("sourcePath", *request->sourcePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statePath)) {
    body->insert(pair<string, string>("statePath", *request->statePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionStrategy)) {
    body->insert(pair<string, string>("versionStrategy", *request->versionStrategy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateModule"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/modules"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateModuleResponse(callApi(params, req, runtime));
}

CreateModuleMarketResponse Alibabacloud_IaCService20210806::Client::createModuleMarket(shared_ptr<CreateModuleMarketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createModuleMarketWithOptions(request, headers, runtime);
}

CreateModuleMarketResponse Alibabacloud_IaCService20210806::Client::createModuleMarketWithOptions(shared_ptr<CreateModuleMarketRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeUrl)) {
    body->insert(pair<string, string>("codeUrl", *request->codeUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleDetail)) {
    body->insert(pair<string, string>("moduleDetail", *request->moduleDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleId)) {
    body->insert(pair<string, string>("moduleId", *request->moduleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleVersion)) {
    body->insert(pair<string, string>("moduleVersion", *request->moduleVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateModuleMarket"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/moduleMarkets"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateModuleMarketResponse(callApi(params, req, runtime));
}

CreateModuleVersionResponse Alibabacloud_IaCService20210806::Client::createModuleVersion(shared_ptr<string> moduleId, shared_ptr<CreateModuleVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createModuleVersionWithOptions(moduleId, request, headers, runtime);
}

CreateModuleVersionResponse Alibabacloud_IaCService20210806::Client::createModuleVersionWithOptions(shared_ptr<string> moduleId,
                                                                                                    shared_ptr<CreateModuleVersionRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
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
    {"action", boost::any(string("CreateModuleVersion"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/modules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(moduleId)) + string("/versions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateModuleVersionResponse(callApi(params, req, runtime));
}

CreateParameterSetResponse Alibabacloud_IaCService20210806::Client::createParameterSet(shared_ptr<CreateParameterSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createParameterSetWithOptions(request, headers, runtime);
}

CreateParameterSetResponse Alibabacloud_IaCService20210806::Client::createParameterSetWithOptions(shared_ptr<CreateParameterSetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateParameterSetRequestParameters>>(request->parameters)) {
    body->insert(pair<string, vector<CreateParameterSetRequestParameters>>("parameters", *request->parameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateParameterSet"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/parameterSets"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateParameterSetResponse(callApi(params, req, runtime));
}

CreateProjectResponse Alibabacloud_IaCService20210806::Client::createProject(shared_ptr<CreateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProjectWithOptions(request, headers, runtime);
}

CreateProjectResponse Alibabacloud_IaCService20210806::Client::createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
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
    {"action", boost::any(string("CreateProject"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/project"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProjectResponse(callApi(params, req, runtime));
}

CreateProjectBuildResponse Alibabacloud_IaCService20210806::Client::createProjectBuild(shared_ptr<string> projectId, shared_ptr<CreateProjectBuildRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProjectBuildWithOptions(projectId, request, headers, runtime);
}

CreateProjectBuildResponse Alibabacloud_IaCService20210806::Client::createProjectBuildWithOptions(shared_ptr<string> projectId,
                                                                                                  shared_ptr<CreateProjectBuildRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectBuildAction)) {
    body->insert(pair<string, string>("projectBuildAction", *request->projectBuildAction));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->taskIds)) {
    body->insert(pair<string, vector<string>>("taskIds", *request->taskIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateProjectBuildRequestTaskPolicies>>(request->taskPolicies)) {
    body->insert(pair<string, vector<CreateProjectBuildRequestTaskPolicies>>("taskPolicies", *request->taskPolicies));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProjectBuild"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/project/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/build"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProjectBuildResponse(callApi(params, req, runtime));
}

CreateRabbitmqPublisherResponse Alibabacloud_IaCService20210806::Client::createRabbitmqPublisher(shared_ptr<CreateRabbitmqPublisherRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRabbitmqPublisherWithOptions(request, headers, runtime);
}

CreateRabbitmqPublisherResponse Alibabacloud_IaCService20210806::Client::createRabbitmqPublisherWithOptions(shared_ptr<CreateRabbitmqPublisherRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exchangeName)) {
    body->insert(pair<string, string>("exchangeName", *request->exchangeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exchangeType)) {
    body->insert(pair<string, string>("exchangeType", *request->exchangeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostName)) {
    body->insert(pair<string, string>("hostName", *request->hostName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    body->insert(pair<string, long>("port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("userName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->virtualHost)) {
    body->insert(pair<string, string>("virtualHost", *request->virtualHost));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRabbitmqPublisher"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/publishers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRabbitmqPublisherResponse(callApi(params, req, runtime));
}

CreateResourceExportTaskResponse Alibabacloud_IaCService20210806::Client::createResourceExportTask(shared_ptr<CreateResourceExportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createResourceExportTaskWithOptions(request, headers, runtime);
}

CreateResourceExportTaskResponse Alibabacloud_IaCService20210806::Client::createResourceExportTaskWithOptions(shared_ptr<CreateResourceExportTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateResourceExportTaskRequestExcludeRules>>(request->excludeRules)) {
    body->insert(pair<string, vector<CreateResourceExportTaskRequestExcludeRules>>("excludeRules", *request->excludeRules));
  }
  if (!Darabonba_Util::Client::isUnset<CreateResourceExportTaskRequestExportToModule>(request->exportToModule)) {
    body->insert(pair<string, CreateResourceExportTaskRequestExportToModule>("exportToModule", *request->exportToModule));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateResourceExportTaskRequestIncludeRules>>(request->includeRules)) {
    body->insert(pair<string, vector<CreateResourceExportTaskRequestIncludeRules>>("includeRules", *request->includeRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRole)) {
    body->insert(pair<string, string>("ramRole", *request->ramRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terraformVersion)) {
    body->insert(pair<string, string>("terraformVersion", *request->terraformVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerStrategy)) {
    body->insert(pair<string, string>("triggerStrategy", *request->triggerStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateResourceExportTaskRequestVariables>>(request->variables)) {
    body->insert(pair<string, vector<CreateResourceExportTaskRequestVariables>>("variables", *request->variables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceExportTask"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/exportTasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceExportTaskResponse(callApi(params, req, runtime));
}

CreateTaskResponse Alibabacloud_IaCService20210806::Client::createTask(shared_ptr<CreateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTaskWithOptions(request, headers, runtime);
}

CreateTaskResponse Alibabacloud_IaCService20210806::Client::createTaskWithOptions(shared_ptr<CreateTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoApply)) {
    body->insert(pair<string, bool>("autoApply", *request->autoApply));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTaskRequestGroupInfo>(request->groupInfo)) {
    body->insert(pair<string, CreateTaskRequestGroupInfo>("groupInfo", *request->groupInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleId)) {
    body->insert(pair<string, string>("moduleId", *request->moduleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleVersion)) {
    body->insert(pair<string, string>("moduleVersion", *request->moduleVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->parameters)) {
    body->insert(pair<string, map<string, string>>("parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->protectionStrategy)) {
    body->insert(pair<string, vector<string>>("protectionStrategy", *request->protectionStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRole)) {
    body->insert(pair<string, string>("ramRole", *request->ramRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terraformVersion)) {
    body->insert(pair<string, string>("terraformVersion", *request->terraformVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerStrategy)) {
    body->insert(pair<string, string>("triggerStrategy", *request->triggerStrategy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTask"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTaskResponse(callApi(params, req, runtime));
}

DeleteAuthorizationResponse Alibabacloud_IaCService20210806::Client::deleteAuthorization(shared_ptr<string> authorizationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAuthorizationWithOptions(authorizationId, headers, runtime);
}

DeleteAuthorizationResponse Alibabacloud_IaCService20210806::Client::deleteAuthorizationWithOptions(shared_ptr<string> authorizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAuthorization"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/authorizations/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(authorizationId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAuthorizationResponse(callApi(params, req, runtime));
}

DeleteGroupResponse Alibabacloud_IaCService20210806::Client::deleteGroup(shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGroupWithOptions(id, headers, runtime);
}

DeleteGroupResponse Alibabacloud_IaCService20210806::Client::deleteGroupWithOptions(shared_ptr<string> id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGroup"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/group/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGroupResponse(callApi(params, req, runtime));
}

DeleteModuleResponse Alibabacloud_IaCService20210806::Client::deleteModule(shared_ptr<string> moduleId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteModuleWithOptions(moduleId, headers, runtime);
}

DeleteModuleResponse Alibabacloud_IaCService20210806::Client::deleteModuleWithOptions(shared_ptr<string> moduleId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteModule"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/modules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(moduleId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteModuleResponse(callApi(params, req, runtime));
}

DeleteParameterSetResponse Alibabacloud_IaCService20210806::Client::deleteParameterSet(shared_ptr<string> parameterSetId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteParameterSetWithOptions(parameterSetId, headers, runtime);
}

DeleteParameterSetResponse Alibabacloud_IaCService20210806::Client::deleteParameterSetWithOptions(shared_ptr<string> parameterSetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteParameterSet"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/parameterSets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(parameterSetId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteParameterSetResponse(callApi(params, req, runtime));
}

DeleteProjectResponse Alibabacloud_IaCService20210806::Client::deleteProject(shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProjectWithOptions(id, headers, runtime);
}

DeleteProjectResponse Alibabacloud_IaCService20210806::Client::deleteProjectWithOptions(shared_ptr<string> id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProject"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/project/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProjectResponse(callApi(params, req, runtime));
}

DeleteRabbitmqPublisherResponse Alibabacloud_IaCService20210806::Client::deleteRabbitmqPublisher(shared_ptr<string> publisherId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRabbitmqPublisherWithOptions(publisherId, headers, runtime);
}

DeleteRabbitmqPublisherResponse Alibabacloud_IaCService20210806::Client::deleteRabbitmqPublisherWithOptions(shared_ptr<string> publisherId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRabbitmqPublisher"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/publishers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(publisherId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRabbitmqPublisherResponse(callApi(params, req, runtime));
}

DeleteResourceExportTaskResponse Alibabacloud_IaCService20210806::Client::deleteResourceExportTask(shared_ptr<string> exportTaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceExportTaskWithOptions(exportTaskId, headers, runtime);
}

DeleteResourceExportTaskResponse Alibabacloud_IaCService20210806::Client::deleteResourceExportTaskWithOptions(shared_ptr<string> exportTaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceExportTask"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/exportTasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(exportTaskId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceExportTaskResponse(callApi(params, req, runtime));
}

DeleteResourceLinkResponse Alibabacloud_IaCService20210806::Client::deleteResourceLink(shared_ptr<DeleteResourceLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceLinkWithOptions(request, headers, runtime);
}

DeleteResourceLinkResponse Alibabacloud_IaCService20210806::Client::deleteResourceLinkWithOptions(shared_ptr<DeleteResourceLinkRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("productCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypeCode)) {
    query->insert(pair<string, string>("resourceTypeCode", *request->resourceTypeCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceLink"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/resources"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceLinkResponse(callApi(params, req, runtime));
}

DeleteTaskResponse Alibabacloud_IaCService20210806::Client::deleteTask(shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTaskWithOptions(taskId, headers, runtime);
}

DeleteTaskResponse Alibabacloud_IaCService20210806::Client::deleteTaskWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTask"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTaskResponse(callApi(params, req, runtime));
}

DetachRabbitmqPublisherResponse Alibabacloud_IaCService20210806::Client::detachRabbitmqPublisher(shared_ptr<string> publisherId, shared_ptr<DetachRabbitmqPublisherRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return detachRabbitmqPublisherWithOptions(publisherId, request, headers, runtime);
}

DetachRabbitmqPublisherResponse Alibabacloud_IaCService20210806::Client::detachRabbitmqPublisherWithOptions(shared_ptr<string> publisherId,
                                                                                                            shared_ptr<DetachRabbitmqPublisherRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachRabbitmqPublisher"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/publishers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(publisherId)) + string("/detach"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachRabbitmqPublisherResponse(callApi(params, req, runtime));
}

DissociateParameterSetResponse Alibabacloud_IaCService20210806::Client::dissociateParameterSet(shared_ptr<DissociateParameterSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return dissociateParameterSetWithOptions(request, headers, runtime);
}

DissociateParameterSetResponse Alibabacloud_IaCService20210806::Client::dissociateParameterSetWithOptions(shared_ptr<DissociateParameterSetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->parameterSetIds)) {
    body->insert(pair<string, vector<string>>("parameterSetIds", *request->parameterSetIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    body->insert(pair<string, string>("resourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DissociateParameterSet"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/parameterSets/operations/dissociate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DissociateParameterSetResponse(callApi(params, req, runtime));
}

DissociateTaskGroupResponse Alibabacloud_IaCService20210806::Client::dissociateTaskGroup(shared_ptr<string> projectId, shared_ptr<string> groupId, shared_ptr<DissociateTaskGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return dissociateTaskGroupWithOptions(projectId, groupId, request, headers, runtime);
}

DissociateTaskGroupResponse Alibabacloud_IaCService20210806::Client::dissociateTaskGroupWithOptions(shared_ptr<string> projectId,
                                                                                                    shared_ptr<string> groupId,
                                                                                                    shared_ptr<DissociateTaskGroupRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->taskIds)) {
    body->insert(pair<string, vector<string>>("taskIds", *request->taskIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DissociateTaskGroup"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/project/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/dissociate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DissociateTaskGroupResponse(callApi(params, req, runtime));
}

ExecuteResourceExportTaskResponse Alibabacloud_IaCService20210806::Client::executeResourceExportTask(shared_ptr<string> exportTaskId, shared_ptr<ExecuteResourceExportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeResourceExportTaskWithOptions(exportTaskId, request, headers, runtime);
}

ExecuteResourceExportTaskResponse Alibabacloud_IaCService20210806::Client::executeResourceExportTaskWithOptions(shared_ptr<string> exportTaskId,
                                                                                                                shared_ptr<ExecuteResourceExportTaskRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRole)) {
    body->insert(pair<string, string>("ramRole", *request->ramRole));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteResourceExportTask"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/exportTasks/execute/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(exportTaskId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteResourceExportTaskResponse(callApi(params, req, runtime));
}

GetGroupResponse Alibabacloud_IaCService20210806::Client::getGroup(shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGroupWithOptions(id, headers, runtime);
}

GetGroupResponse Alibabacloud_IaCService20210806::Client::getGroupWithOptions(shared_ptr<string> id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGroup"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/group/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGroupResponse(callApi(params, req, runtime));
}

GetJobResponse Alibabacloud_IaCService20210806::Client::getJob(shared_ptr<string> taskId, shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobWithOptions(taskId, jobId, headers, runtime);
}

GetJobResponse Alibabacloud_IaCService20210806::Client::getJobWithOptions(shared_ptr<string> taskId,
                                                                          shared_ptr<string> jobId,
                                                                          shared_ptr<map<string, string>> headers,
                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJob"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobResponse(callApi(params, req, runtime));
}

GetModuleResponse Alibabacloud_IaCService20210806::Client::getModule(shared_ptr<string> moduleId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getModuleWithOptions(moduleId, headers, runtime);
}

GetModuleResponse Alibabacloud_IaCService20210806::Client::getModuleWithOptions(shared_ptr<string> moduleId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetModule"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/modules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(moduleId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetModuleResponse(callApi(params, req, runtime));
}

GetModuleMarketResponse Alibabacloud_IaCService20210806::Client::getModuleMarket(shared_ptr<string> moduleMarketId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getModuleMarketWithOptions(moduleMarketId, headers, runtime);
}

GetModuleMarketResponse Alibabacloud_IaCService20210806::Client::getModuleMarketWithOptions(shared_ptr<string> moduleMarketId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetModuleMarket"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/moduleMarkets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(moduleMarketId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetModuleMarketResponse(callApi(params, req, runtime));
}

GetModuleVersionResponse Alibabacloud_IaCService20210806::Client::getModuleVersion(shared_ptr<string> moduleId, shared_ptr<string> moduleVersion) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getModuleVersionWithOptions(moduleId, moduleVersion, headers, runtime);
}

GetModuleVersionResponse Alibabacloud_IaCService20210806::Client::getModuleVersionWithOptions(shared_ptr<string> moduleId,
                                                                                              shared_ptr<string> moduleVersion,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetModuleVersion"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/modules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(moduleId)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(moduleVersion)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetModuleVersionResponse(callApi(params, req, runtime));
}

GetParameterSetResponse Alibabacloud_IaCService20210806::Client::getParameterSet(shared_ptr<string> parameterSetId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getParameterSetWithOptions(parameterSetId, headers, runtime);
}

GetParameterSetResponse Alibabacloud_IaCService20210806::Client::getParameterSetWithOptions(shared_ptr<string> parameterSetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetParameterSet"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/parameterSets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(parameterSetId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetParameterSetResponse(callApi(params, req, runtime));
}

GetProjectResponse Alibabacloud_IaCService20210806::Client::getProject(shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectWithOptions(id, headers, runtime);
}

GetProjectResponse Alibabacloud_IaCService20210806::Client::getProjectWithOptions(shared_ptr<string> id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProject"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/project/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectResponse(callApi(params, req, runtime));
}

GetProjectBuildConfigResponse Alibabacloud_IaCService20210806::Client::getProjectBuildConfig(shared_ptr<string> projectId, shared_ptr<GetProjectBuildConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectBuildConfigWithOptions(projectId, request, headers, runtime);
}

GetProjectBuildConfigResponse Alibabacloud_IaCService20210806::Client::getProjectBuildConfigWithOptions(shared_ptr<string> projectId,
                                                                                                        shared_ptr<GetProjectBuildConfigRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectBuildId)) {
    query->insert(pair<string, string>("projectBuildId", *request->projectBuildId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectBuildConfig"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/project/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/buildConfig"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectBuildConfigResponse(callApi(params, req, runtime));
}

GetProjectBuildContextResponse Alibabacloud_IaCService20210806::Client::getProjectBuildContext(shared_ptr<string> projectId, shared_ptr<string> projectBuildId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectBuildContextWithOptions(projectId, projectBuildId, headers, runtime);
}

GetProjectBuildContextResponse Alibabacloud_IaCService20210806::Client::getProjectBuildContextWithOptions(shared_ptr<string> projectId,
                                                                                                          shared_ptr<string> projectBuildId,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectBuildContext"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/project/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/build/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectBuildId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectBuildContextResponse(callApi(params, req, runtime));
}

GetProjectJobSummaryResponse Alibabacloud_IaCService20210806::Client::getProjectJobSummary(shared_ptr<string> projectId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectJobSummaryWithOptions(projectId, headers, runtime);
}

GetProjectJobSummaryResponse Alibabacloud_IaCService20210806::Client::getProjectJobSummaryWithOptions(shared_ptr<string> projectId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectJobSummary"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/project/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/job/statistics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectJobSummaryResponse(callApi(params, req, runtime));
}

GetProjectResourceSummaryResponse Alibabacloud_IaCService20210806::Client::getProjectResourceSummary(shared_ptr<string> projectId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectResourceSummaryWithOptions(projectId, headers, runtime);
}

GetProjectResourceSummaryResponse Alibabacloud_IaCService20210806::Client::getProjectResourceSummaryWithOptions(shared_ptr<string> projectId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectResourceSummary"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/project/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/resource/statistics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectResourceSummaryResponse(callApi(params, req, runtime));
}

GetRabbitmqPublisherResponse Alibabacloud_IaCService20210806::Client::getRabbitmqPublisher(shared_ptr<string> publisherId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRabbitmqPublisherWithOptions(publisherId, headers, runtime);
}

GetRabbitmqPublisherResponse Alibabacloud_IaCService20210806::Client::getRabbitmqPublisherWithOptions(shared_ptr<string> publisherId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRabbitmqPublisher"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/publishers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(publisherId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRabbitmqPublisherResponse(callApi(params, req, runtime));
}

GetResourceExportTaskResponse Alibabacloud_IaCService20210806::Client::getResourceExportTask(shared_ptr<string> exportTaskId, shared_ptr<GetResourceExportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourceExportTaskWithOptions(exportTaskId, request, headers, runtime);
}

GetResourceExportTaskResponse Alibabacloud_IaCService20210806::Client::getResourceExportTaskWithOptions(shared_ptr<string> exportTaskId,
                                                                                                        shared_ptr<GetResourceExportTaskRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->exportVersion)) {
    query->insert(pair<string, string>("exportVersion", *request->exportVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceExportTask"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/exportTasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(exportTaskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceExportTaskResponse(callApi(params, req, runtime));
}

GetResourceLinkResponse Alibabacloud_IaCService20210806::Client::getResourceLink(shared_ptr<GetResourceLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourceLinkWithOptions(request, headers, runtime);
}

GetResourceLinkResponse Alibabacloud_IaCService20210806::Client::getResourceLinkWithOptions(shared_ptr<GetResourceLinkRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("productCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypeCode)) {
    query->insert(pair<string, string>("resourceTypeCode", *request->resourceTypeCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceLink"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/resources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceLinkResponse(callApi(params, req, runtime));
}

GetTaskResponse Alibabacloud_IaCService20210806::Client::getTask(shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskWithOptions(taskId, headers, runtime);
}

GetTaskResponse Alibabacloud_IaCService20210806::Client::getTaskWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTask"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskResponse(callApi(params, req, runtime));
}

GetTaskContextResponse Alibabacloud_IaCService20210806::Client::getTaskContext(shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskContextWithOptions(taskId, headers, runtime);
}

GetTaskContextResponse Alibabacloud_IaCService20210806::Client::getTaskContextWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskContext"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)) + string("/context"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskContextResponse(callApi(params, req, runtime));
}

ListAuthorizationsResponse Alibabacloud_IaCService20210806::Client::listAuthorizations(shared_ptr<ListAuthorizationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAuthorizationsWithOptions(request, headers, runtime);
}

ListAuthorizationsResponse Alibabacloud_IaCService20210806::Client::listAuthorizationsWithOptions(shared_ptr<ListAuthorizationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationId)) {
    query->insert(pair<string, string>("authorizationId", *request->authorizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationType)) {
    query->insert(pair<string, string>("authorizationType", *request->authorizationType));
  }
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
    {"action", boost::any(string("ListAuthorizations"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/authorizations"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAuthorizationsResponse(callApi(params, req, runtime));
}

ListGroupResponse Alibabacloud_IaCService20210806::Client::listGroup(shared_ptr<ListGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGroupWithOptions(request, headers, runtime);
}

ListGroupResponse Alibabacloud_IaCService20210806::Client::listGroupWithOptions(shared_ptr<ListGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("projectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGroup"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/group"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGroupResponse(callApi(params, req, runtime));
}

ListJobsResponse Alibabacloud_IaCService20210806::Client::listJobs(shared_ptr<string> taskId, shared_ptr<ListJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listJobsWithOptions(taskId, request, headers, runtime);
}

ListJobsResponse Alibabacloud_IaCService20210806::Client::listJobsWithOptions(shared_ptr<string> taskId,
                                                                              shared_ptr<ListJobsRequest> request,
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
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobs"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)) + string("/jobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListJobsResponse(callApi(params, req, runtime));
}

ListModuleMarketsResponse Alibabacloud_IaCService20210806::Client::listModuleMarkets(shared_ptr<ListModuleMarketsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listModuleMarketsWithOptions(request, headers, runtime);
}

ListModuleMarketsResponse Alibabacloud_IaCService20210806::Client::listModuleMarketsWithOptions(shared_ptr<ListModuleMarketsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListModuleMarkets"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/moduleMarkets"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListModuleMarketsResponse(callApi(params, req, runtime));
}

ListModuleVersionResponse Alibabacloud_IaCService20210806::Client::listModuleVersion(shared_ptr<string> moduleId, shared_ptr<ListModuleVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listModuleVersionWithOptions(moduleId, request, headers, runtime);
}

ListModuleVersionResponse Alibabacloud_IaCService20210806::Client::listModuleVersionWithOptions(shared_ptr<string> moduleId,
                                                                                                shared_ptr<ListModuleVersionRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ListModuleVersion"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/modules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(moduleId)) + string("/versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListModuleVersionResponse(callApi(params, req, runtime));
}

ListModulesResponse Alibabacloud_IaCService20210806::Client::listModules(shared_ptr<ListModulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listModulesWithOptions(request, headers, runtime);
}

ListModulesResponse Alibabacloud_IaCService20210806::Client::listModulesWithOptions(shared_ptr<ListModulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ListModules"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/modules"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListModulesResponse(callApi(params, req, runtime));
}

ListParameterSetRelationResponse Alibabacloud_IaCService20210806::Client::listParameterSetRelation(shared_ptr<ListParameterSetRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listParameterSetRelationWithOptions(request, headers, runtime);
}

ListParameterSetRelationResponse Alibabacloud_IaCService20210806::Client::listParameterSetRelationWithOptions(shared_ptr<ListParameterSetRelationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("resourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListParameterSetRelation"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/parameterSets/operations/relation"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListParameterSetRelationResponse(callApi(params, req, runtime));
}

ListParameterSetsResponse Alibabacloud_IaCService20210806::Client::listParameterSets(shared_ptr<ListParameterSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listParameterSetsWithOptions(request, headers, runtime);
}

ListParameterSetsResponse Alibabacloud_IaCService20210806::Client::listParameterSetsWithOptions(shared_ptr<ListParameterSetsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ListParameterSets"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/parameterSets"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListParameterSetsResponse(callApi(params, req, runtime));
}

ListProjectResponse Alibabacloud_IaCService20210806::Client::listProject(shared_ptr<ListProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectWithOptions(request, headers, runtime);
}

ListProjectResponse Alibabacloud_IaCService20210806::Client::listProjectWithOptions(shared_ptr<ListProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProject"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/project"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectResponse(callApi(params, req, runtime));
}

ListProjectBuildsResponse Alibabacloud_IaCService20210806::Client::listProjectBuilds(shared_ptr<string> projectId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectBuildsWithOptions(projectId, headers, runtime);
}

ListProjectBuildsResponse Alibabacloud_IaCService20210806::Client::listProjectBuildsWithOptions(shared_ptr<string> projectId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectBuilds"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/project/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/build"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectBuildsResponse(callApi(params, req, runtime));
}

ListRabbitmqPublishersResponse Alibabacloud_IaCService20210806::Client::listRabbitmqPublishers(shared_ptr<ListRabbitmqPublishersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRabbitmqPublishersWithOptions(request, headers, runtime);
}

ListRabbitmqPublishersResponse Alibabacloud_IaCService20210806::Client::listRabbitmqPublishersWithOptions(shared_ptr<ListRabbitmqPublishersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ListRabbitmqPublishers"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/publishers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRabbitmqPublishersResponse(callApi(params, req, runtime));
}

ListRelationModulesResponse Alibabacloud_IaCService20210806::Client::listRelationModules(shared_ptr<string> type) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRelationModulesWithOptions(type, headers, runtime);
}

ListRelationModulesResponse Alibabacloud_IaCService20210806::Client::listRelationModulesWithOptions(shared_ptr<string> type, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRelationModules"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/modules/relation/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(type)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRelationModulesResponse(callApi(params, req, runtime));
}

ListRelationTasksResponse Alibabacloud_IaCService20210806::Client::listRelationTasks(shared_ptr<string> type, shared_ptr<ListRelationTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRelationTasksWithOptions(type, request, headers, runtime);
}

ListRelationTasksResponse Alibabacloud_IaCService20210806::Client::listRelationTasksWithOptions(shared_ptr<string> type,
                                                                                                shared_ptr<ListRelationTasksRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleId)) {
    query->insert(pair<string, string>("moduleId", *request->moduleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("projectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRelationTasks"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/relation/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(type)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRelationTasksResponse(callApi(params, req, runtime));
}

ListResourceExportTaskVersionsResponse Alibabacloud_IaCService20210806::Client::listResourceExportTaskVersions(shared_ptr<string> exportTaskId, shared_ptr<ListResourceExportTaskVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourceExportTaskVersionsWithOptions(exportTaskId, request, headers, runtime);
}

ListResourceExportTaskVersionsResponse Alibabacloud_IaCService20210806::Client::listResourceExportTaskVersionsWithOptions(shared_ptr<string> exportTaskId,
                                                                                                                          shared_ptr<ListResourceExportTaskVersionsRequest> request,
                                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->exportVersion)) {
    query->insert(pair<string, string>("exportVersion", *request->exportVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceExportTaskVersions"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/exportTasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(exportTaskId)) + string("/exportVersions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceExportTaskVersionsResponse(callApi(params, req, runtime));
}

ListResourceExportTasksResponse Alibabacloud_IaCService20210806::Client::listResourceExportTasks(shared_ptr<ListResourceExportTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourceExportTasksWithOptions(request, headers, runtime);
}

ListResourceExportTasksResponse Alibabacloud_IaCService20210806::Client::listResourceExportTasksWithOptions(shared_ptr<ListResourceExportTasksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->exportTaskId)) {
    query->insert(pair<string, string>("exportTaskId", *request->exportTaskId));
  }
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
    {"action", boost::any(string("ListResourceExportTasks"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/exportTasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceExportTasksResponse(callApi(params, req, runtime));
}

ListResourcesResponse Alibabacloud_IaCService20210806::Client::listResources(shared_ptr<ListResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourcesWithOptions(request, headers, runtime);
}

ListResourcesResponse Alibabacloud_IaCService20210806::Client::listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("sourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceValue)) {
    query->insert(pair<string, string>("sourceValue", *request->sourceValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specType)) {
    query->insert(pair<string, string>("specType", *request->specType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResources"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/resources/stateparser"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourcesResponse(callApi(params, req, runtime));
}

ListTaskResourceResponse Alibabacloud_IaCService20210806::Client::listTaskResource(shared_ptr<string> taskId, shared_ptr<ListTaskResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTaskResourceWithOptions(taskId, request, headers, runtime);
}

ListTaskResourceResponse Alibabacloud_IaCService20210806::Client::listTaskResourceWithOptions(shared_ptr<string> taskId,
                                                                                              shared_ptr<ListTaskResourceRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskResource"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)) + string("/resources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskResourceResponse(callApi(params, req, runtime));
}

ListTasksResponse Alibabacloud_IaCService20210806::Client::listTasks(shared_ptr<ListTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTasksWithOptions(request, headers, runtime);
}

ListTasksResponse Alibabacloud_IaCService20210806::Client::listTasksWithOptions(shared_ptr<ListTasksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("groupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleId)) {
    query->insert(pair<string, string>("moduleId", *request->moduleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("projectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTasks"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTasksResponse(callApi(params, req, runtime));
}

OperateJobResponse Alibabacloud_IaCService20210806::Client::operateJob(shared_ptr<string> taskId,
                                                                       shared_ptr<string> jobId,
                                                                       shared_ptr<string> operationType,
                                                                       shared_ptr<OperateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return operateJobWithOptions(taskId, jobId, operationType, request, headers, runtime);
}

OperateJobResponse Alibabacloud_IaCService20210806::Client::operateJobWithOptions(shared_ptr<string> taskId,
                                                                                  shared_ptr<string> jobId,
                                                                                  shared_ptr<string> operationType,
                                                                                  shared_ptr<OperateJobRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("comment", *request->comment));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OperateJob"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)) + string("/operation/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(operationType)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OperateJobResponse(callApi(params, req, runtime));
}

RemoveResourceExportTaskVersionResponse Alibabacloud_IaCService20210806::Client::removeResourceExportTaskVersion(shared_ptr<string> exportTaskId, shared_ptr<string> exportVersion) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeResourceExportTaskVersionWithOptions(exportTaskId, exportVersion, headers, runtime);
}

RemoveResourceExportTaskVersionResponse Alibabacloud_IaCService20210806::Client::removeResourceExportTaskVersionWithOptions(shared_ptr<string> exportTaskId,
                                                                                                                            shared_ptr<string> exportVersion,
                                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveResourceExportTaskVersion"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/exportTasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(exportTaskId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(exportVersion)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveResourceExportTaskVersionResponse(callApi(params, req, runtime));
}

UpdateAuthorizationAttributeResponse Alibabacloud_IaCService20210806::Client::updateAuthorizationAttribute(shared_ptr<string> authorizationId, shared_ptr<UpdateAuthorizationAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAuthorizationAttributeWithOptions(authorizationId, request, headers, runtime);
}

UpdateAuthorizationAttributeResponse Alibabacloud_IaCService20210806::Client::updateAuthorizationAttributeWithOptions(shared_ptr<string> authorizationId,
                                                                                                                      shared_ptr<UpdateAuthorizationAttributeRequest> request,
                                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dueTime)) {
    body->insert(pair<string, string>("dueTime", *request->dueTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAuthorizationAttribute"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/authorizations/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(authorizationId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAuthorizationAttributeResponse(callApi(params, req, runtime));
}

UpdateGroupResponse Alibabacloud_IaCService20210806::Client::updateGroup(shared_ptr<string> id, shared_ptr<UpdateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateGroupWithOptions(id, request, headers, runtime);
}

UpdateGroupResponse Alibabacloud_IaCService20210806::Client::updateGroupWithOptions(shared_ptr<string> id,
                                                                                    shared_ptr<UpdateGroupRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
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
    {"action", boost::any(string("UpdateGroup"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/group/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGroupResponse(callApi(params, req, runtime));
}

UpdateModuleAttributeResponse Alibabacloud_IaCService20210806::Client::updateModuleAttribute(shared_ptr<string> moduleId, shared_ptr<UpdateModuleAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateModuleAttributeWithOptions(moduleId, request, headers, runtime);
}

UpdateModuleAttributeResponse Alibabacloud_IaCService20210806::Client::updateModuleAttributeWithOptions(shared_ptr<string> moduleId,
                                                                                                        shared_ptr<UpdateModuleAttributeRequest> request,
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
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcePath)) {
    body->insert(pair<string, string>("sourcePath", *request->sourcePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statePath)) {
    body->insert(pair<string, string>("statePath", *request->statePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionStrategy)) {
    body->insert(pair<string, string>("versionStrategy", *request->versionStrategy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateModuleAttribute"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/modules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(moduleId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateModuleAttributeResponse(callApi(params, req, runtime));
}

UpdateModuleMarketAttributeResponse Alibabacloud_IaCService20210806::Client::updateModuleMarketAttribute(shared_ptr<string> moduleMarketId, shared_ptr<UpdateModuleMarketAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateModuleMarketAttributeWithOptions(moduleMarketId, request, headers, runtime);
}

UpdateModuleMarketAttributeResponse Alibabacloud_IaCService20210806::Client::updateModuleMarketAttributeWithOptions(shared_ptr<string> moduleMarketId,
                                                                                                                    shared_ptr<UpdateModuleMarketAttributeRequest> request,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleDetail)) {
    body->insert(pair<string, string>("moduleDetail", *request->moduleDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateModuleMarketAttribute"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/moduleMarkets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(moduleMarketId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateModuleMarketAttributeResponse(callApi(params, req, runtime));
}

UpdateParameterSetAttributeResponse Alibabacloud_IaCService20210806::Client::updateParameterSetAttribute(shared_ptr<string> parameterSetId, shared_ptr<UpdateParameterSetAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateParameterSetAttributeWithOptions(parameterSetId, request, headers, runtime);
}

UpdateParameterSetAttributeResponse Alibabacloud_IaCService20210806::Client::updateParameterSetAttributeWithOptions(shared_ptr<string> parameterSetId,
                                                                                                                    shared_ptr<UpdateParameterSetAttributeRequest> request,
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
  if (!Darabonba_Util::Client::isUnset<vector<UpdateParameterSetAttributeRequestParameters>>(request->parameters)) {
    body->insert(pair<string, vector<UpdateParameterSetAttributeRequestParameters>>("parameters", *request->parameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateParameterSetAttribute"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/parameterSets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(parameterSetId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateParameterSetAttributeResponse(callApi(params, req, runtime));
}

UpdateProjectResponse Alibabacloud_IaCService20210806::Client::updateProject(shared_ptr<string> id, shared_ptr<UpdateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProjectWithOptions(id, request, headers, runtime);
}

UpdateProjectResponse Alibabacloud_IaCService20210806::Client::updateProjectWithOptions(shared_ptr<string> id,
                                                                                        shared_ptr<UpdateProjectRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
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
    {"action", boost::any(string("UpdateProject"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/project/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProjectResponse(callApi(params, req, runtime));
}

UpdateRabbitmqPublisherAttributeResponse Alibabacloud_IaCService20210806::Client::updateRabbitmqPublisherAttribute(shared_ptr<string> publisherId, shared_ptr<UpdateRabbitmqPublisherAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateRabbitmqPublisherAttributeWithOptions(publisherId, request, headers, runtime);
}

UpdateRabbitmqPublisherAttributeResponse Alibabacloud_IaCService20210806::Client::updateRabbitmqPublisherAttributeWithOptions(shared_ptr<string> publisherId,
                                                                                                                              shared_ptr<UpdateRabbitmqPublisherAttributeRequest> request,
                                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exchangeName)) {
    body->insert(pair<string, string>("exchangeName", *request->exchangeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exchangeType)) {
    body->insert(pair<string, string>("exchangeType", *request->exchangeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRabbitmqPublisherAttribute"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/publishers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(publisherId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRabbitmqPublisherAttributeResponse(callApi(params, req, runtime));
}

UpdateResourceExportTaskAttributeResponse Alibabacloud_IaCService20210806::Client::updateResourceExportTaskAttribute(shared_ptr<string> exportTaskId, shared_ptr<UpdateResourceExportTaskAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateResourceExportTaskAttributeWithOptions(exportTaskId, request, headers, runtime);
}

UpdateResourceExportTaskAttributeResponse Alibabacloud_IaCService20210806::Client::updateResourceExportTaskAttributeWithOptions(shared_ptr<string> exportTaskId,
                                                                                                                                shared_ptr<UpdateResourceExportTaskAttributeRequest> request,
                                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateResourceExportTaskAttributeRequestExcludeRules>>(request->excludeRules)) {
    body->insert(pair<string, vector<UpdateResourceExportTaskAttributeRequestExcludeRules>>("excludeRules", *request->excludeRules));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateResourceExportTaskAttributeRequestExportToModule>(request->exportToModule)) {
    body->insert(pair<string, UpdateResourceExportTaskAttributeRequestExportToModule>("exportToModule", *request->exportToModule));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateResourceExportTaskAttributeRequestIncludeRules>>(request->includeRules)) {
    body->insert(pair<string, vector<UpdateResourceExportTaskAttributeRequestIncludeRules>>("includeRules", *request->includeRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRole)) {
    body->insert(pair<string, string>("ramRole", *request->ramRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terraformVersion)) {
    body->insert(pair<string, string>("terraformVersion", *request->terraformVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerStrategy)) {
    body->insert(pair<string, string>("triggerStrategy", *request->triggerStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateResourceExportTaskAttributeRequestVariables>>(request->variables)) {
    body->insert(pair<string, vector<UpdateResourceExportTaskAttributeRequestVariables>>("variables", *request->variables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceExportTaskAttribute"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/exportTasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(exportTaskId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResourceExportTaskAttributeResponse(callApi(params, req, runtime));
}

UpdateTaskAttributeResponse Alibabacloud_IaCService20210806::Client::updateTaskAttribute(shared_ptr<string> taskId, shared_ptr<UpdateTaskAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTaskAttributeWithOptions(taskId, request, headers, runtime);
}

UpdateTaskAttributeResponse Alibabacloud_IaCService20210806::Client::updateTaskAttributeWithOptions(shared_ptr<string> taskId,
                                                                                                    shared_ptr<UpdateTaskAttributeRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoApply)) {
    body->insert(pair<string, bool>("autoApply", *request->autoApply));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTaskAttributeRequestGroupInfo>(request->groupInfo)) {
    body->insert(pair<string, UpdateTaskAttributeRequestGroupInfo>("groupInfo", *request->groupInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleId)) {
    body->insert(pair<string, string>("moduleId", *request->moduleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleVersion)) {
    body->insert(pair<string, string>("moduleVersion", *request->moduleVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->parameters)) {
    body->insert(pair<string, map<string, string>>("parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->protectionStrategy)) {
    body->insert(pair<string, vector<string>>("protectionStrategy", *request->protectionStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRole)) {
    body->insert(pair<string, string>("ramRole", *request->ramRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terraformVersion)) {
    body->insert(pair<string, string>("terraformVersion", *request->terraformVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerStrategy)) {
    body->insert(pair<string, string>("triggerStrategy", *request->triggerStrategy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskAttribute"))},
    {"version", boost::any(string("2021-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskAttributeResponse(callApi(params, req, runtime));
}

