// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/open_itag_20220616.hpp>
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

using namespace Alibabacloud_OpenITag20220616;

Alibabacloud_OpenITag20220616::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("openitag"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_OpenITag20220616::Client::getEndpoint(shared_ptr<string> productId,
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

AddWorkNodeWorkforceResponse Alibabacloud_OpenITag20220616::Client::addWorkNodeWorkforceWithOptions(shared_ptr<string> TenantId,
                                                                                                    shared_ptr<string> TaskId,
                                                                                                    shared_ptr<string> WorkNodeId,
                                                                                                    shared_ptr<AddWorkNodeWorkforceRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->userIds)) {
    body->insert(pair<string, vector<long>>("UserIds", *request->userIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddWorkNodeWorkforce"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)) + string("/worknodes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkNodeId)) + string("/workforce"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddWorkNodeWorkforceResponse(callApi(params, req, runtime));
}

AddWorkNodeWorkforceResponse Alibabacloud_OpenITag20220616::Client::addWorkNodeWorkforce(shared_ptr<string> TenantId,
                                                                                         shared_ptr<string> TaskId,
                                                                                         shared_ptr<string> WorkNodeId,
                                                                                         shared_ptr<AddWorkNodeWorkforceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addWorkNodeWorkforceWithOptions(TenantId, TaskId, WorkNodeId, request, headers, runtime);
}

CreateTaskResponse Alibabacloud_OpenITag20220616::Client::createTaskWithOptions(shared_ptr<string> TenantId,
                                                                                shared_ptr<CreateTaskRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTask"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTaskResponse(callApi(params, req, runtime));
}

CreateTaskResponse Alibabacloud_OpenITag20220616::Client::createTask(shared_ptr<string> TenantId, shared_ptr<CreateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTaskWithOptions(TenantId, request, headers, runtime);
}

CreateTemplateResponse Alibabacloud_OpenITag20220616::Client::createTemplateWithOptions(shared_ptr<string> TenantId,
                                                                                        shared_ptr<CreateTemplateRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTemplate"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/templates"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTemplateResponse(callApi(params, req, runtime));
}

CreateTemplateResponse Alibabacloud_OpenITag20220616::Client::createTemplate(shared_ptr<string> TenantId, shared_ptr<CreateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTemplateWithOptions(TenantId, request, headers, runtime);
}

CreateUserResponse Alibabacloud_OpenITag20220616::Client::createUserWithOptions(shared_ptr<string> TenantId,
                                                                                shared_ptr<CreateUserRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountNo)) {
    body->insert(pair<string, string>("AccountNo", *request->accountNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    body->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    body->insert(pair<string, string>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUser"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/users"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUserResponse(callApi(params, req, runtime));
}

CreateUserResponse Alibabacloud_OpenITag20220616::Client::createUser(shared_ptr<string> TenantId, shared_ptr<CreateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createUserWithOptions(TenantId, request, headers, runtime);
}

DeleteTaskResponse Alibabacloud_OpenITag20220616::Client::deleteTaskWithOptions(shared_ptr<string> TenantId,
                                                                                shared_ptr<string> TaskId,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTask"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTaskResponse(callApi(params, req, runtime));
}

DeleteTaskResponse Alibabacloud_OpenITag20220616::Client::deleteTask(shared_ptr<string> TenantId, shared_ptr<string> TaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTaskWithOptions(TenantId, TaskId, headers, runtime);
}

DeleteTemplateResponse Alibabacloud_OpenITag20220616::Client::deleteTemplateWithOptions(shared_ptr<string> TenantId,
                                                                                        shared_ptr<string> TemplateId,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTemplate"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/templates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TemplateId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTemplateResponse(callApi(params, req, runtime));
}

DeleteTemplateResponse Alibabacloud_OpenITag20220616::Client::deleteTemplate(shared_ptr<string> TenantId, shared_ptr<string> TemplateId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTemplateWithOptions(TenantId, TemplateId, headers, runtime);
}

DeleteUserResponse Alibabacloud_OpenITag20220616::Client::deleteUserWithOptions(shared_ptr<string> TenantId,
                                                                                shared_ptr<string> UserId,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUser"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(UserId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserResponse(callApi(params, req, runtime));
}

DeleteUserResponse Alibabacloud_OpenITag20220616::Client::deleteUser(shared_ptr<string> TenantId, shared_ptr<string> UserId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteUserWithOptions(TenantId, UserId, headers, runtime);
}

ExportAnnotationsResponse Alibabacloud_OpenITag20220616::Client::exportAnnotationsWithOptions(shared_ptr<string> TenantId,
                                                                                              shared_ptr<string> TaskId,
                                                                                              shared_ptr<ExportAnnotationsRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ossPath)) {
    query->insert(pair<string, string>("OssPath", *request->ossPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerDataset)) {
    query->insert(pair<string, string>("RegisterDataset", *request->registerDataset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportAnnotations"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)) + string("/annotations/export"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportAnnotationsResponse(callApi(params, req, runtime));
}

ExportAnnotationsResponse Alibabacloud_OpenITag20220616::Client::exportAnnotations(shared_ptr<string> TenantId, shared_ptr<string> TaskId, shared_ptr<ExportAnnotationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportAnnotationsWithOptions(TenantId, TaskId, request, headers, runtime);
}

GetJobResponse Alibabacloud_OpenITag20220616::Client::getJobWithOptions(shared_ptr<string> TenantId,
                                                                        shared_ptr<string> JobId,
                                                                        shared_ptr<GetJobRequest> request,
                                                                        shared_ptr<map<string, string>> headers,
                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJob"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobResponse(callApi(params, req, runtime));
}

GetJobResponse Alibabacloud_OpenITag20220616::Client::getJob(shared_ptr<string> TenantId, shared_ptr<string> JobId, shared_ptr<GetJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobWithOptions(TenantId, JobId, request, headers, runtime);
}

GetSubtaskResponse Alibabacloud_OpenITag20220616::Client::getSubtaskWithOptions(shared_ptr<string> TenantId,
                                                                                shared_ptr<string> TaskID,
                                                                                shared_ptr<string> SubtaskId,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubtask"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskID)) + string("/subtasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SubtaskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubtaskResponse(callApi(params, req, runtime));
}

GetSubtaskResponse Alibabacloud_OpenITag20220616::Client::getSubtask(shared_ptr<string> TenantId, shared_ptr<string> TaskID, shared_ptr<string> SubtaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSubtaskWithOptions(TenantId, TaskID, SubtaskId, headers, runtime);
}

GetSubtaskItemResponse Alibabacloud_OpenITag20220616::Client::getSubtaskItemWithOptions(shared_ptr<string> TenantId,
                                                                                        shared_ptr<string> TaskId,
                                                                                        shared_ptr<string> SubtaskId,
                                                                                        shared_ptr<string> ItemId,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubtaskItem"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)) + string("/subtasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SubtaskId)) + string("/items/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ItemId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubtaskItemResponse(callApi(params, req, runtime));
}

GetSubtaskItemResponse Alibabacloud_OpenITag20220616::Client::getSubtaskItem(shared_ptr<string> TenantId,
                                                                             shared_ptr<string> TaskId,
                                                                             shared_ptr<string> SubtaskId,
                                                                             shared_ptr<string> ItemId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSubtaskItemWithOptions(TenantId, TaskId, SubtaskId, ItemId, headers, runtime);
}

GetTaskResponse Alibabacloud_OpenITag20220616::Client::getTaskWithOptions(shared_ptr<string> TenantId,
                                                                          shared_ptr<string> TaskId,
                                                                          shared_ptr<map<string, string>> headers,
                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTask"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskResponse(callApi(params, req, runtime));
}

GetTaskResponse Alibabacloud_OpenITag20220616::Client::getTask(shared_ptr<string> TenantId, shared_ptr<string> TaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskWithOptions(TenantId, TaskId, headers, runtime);
}

GetTaskStatisticsResponse Alibabacloud_OpenITag20220616::Client::getTaskStatisticsWithOptions(shared_ptr<string> TenantId,
                                                                                              shared_ptr<string> TaskId,
                                                                                              shared_ptr<GetTaskStatisticsRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->statType)) {
    query->insert(pair<string, string>("StatType", *request->statType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskStatistics"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)) + string("/statistics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskStatisticsResponse(callApi(params, req, runtime));
}

GetTaskStatisticsResponse Alibabacloud_OpenITag20220616::Client::getTaskStatistics(shared_ptr<string> TenantId, shared_ptr<string> TaskId, shared_ptr<GetTaskStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskStatisticsWithOptions(TenantId, TaskId, request, headers, runtime);
}

GetTaskStatusResponse Alibabacloud_OpenITag20220616::Client::getTaskStatusWithOptions(shared_ptr<string> TenantId,
                                                                                      shared_ptr<string> TaskId,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskStatus"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)) + string("/status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskStatusResponse(callApi(params, req, runtime));
}

GetTaskStatusResponse Alibabacloud_OpenITag20220616::Client::getTaskStatus(shared_ptr<string> TenantId, shared_ptr<string> TaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskStatusWithOptions(TenantId, TaskId, headers, runtime);
}

GetTaskTemplateResponse Alibabacloud_OpenITag20220616::Client::getTaskTemplateWithOptions(shared_ptr<string> TenantId,
                                                                                          shared_ptr<string> TaskId,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskTemplate"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)) + string("/template"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskTemplateResponse(callApi(params, req, runtime));
}

GetTaskTemplateResponse Alibabacloud_OpenITag20220616::Client::getTaskTemplate(shared_ptr<string> TenantId, shared_ptr<string> TaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskTemplateWithOptions(TenantId, TaskId, headers, runtime);
}

GetTaskTemplateQuestionsResponse Alibabacloud_OpenITag20220616::Client::getTaskTemplateQuestionsWithOptions(shared_ptr<string> TenantId,
                                                                                                            shared_ptr<string> TaskId,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskTemplateQuestions"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)) + string("/template/questions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskTemplateQuestionsResponse(callApi(params, req, runtime));
}

GetTaskTemplateQuestionsResponse Alibabacloud_OpenITag20220616::Client::getTaskTemplateQuestions(shared_ptr<string> TenantId, shared_ptr<string> TaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskTemplateQuestionsWithOptions(TenantId, TaskId, headers, runtime);
}

GetTaskTemplateViewsResponse Alibabacloud_OpenITag20220616::Client::getTaskTemplateViewsWithOptions(shared_ptr<string> TenantId,
                                                                                                    shared_ptr<string> TaskId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskTemplateViews"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)) + string("/template/views"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskTemplateViewsResponse(callApi(params, req, runtime));
}

GetTaskTemplateViewsResponse Alibabacloud_OpenITag20220616::Client::getTaskTemplateViews(shared_ptr<string> TenantId, shared_ptr<string> TaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskTemplateViewsWithOptions(TenantId, TaskId, headers, runtime);
}

GetTaskWorkforceResponse Alibabacloud_OpenITag20220616::Client::getTaskWorkforceWithOptions(shared_ptr<string> TenantId,
                                                                                            shared_ptr<string> TaskId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskWorkforce"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)) + string("/workforce"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskWorkforceResponse(callApi(params, req, runtime));
}

GetTaskWorkforceResponse Alibabacloud_OpenITag20220616::Client::getTaskWorkforce(shared_ptr<string> TenantId, shared_ptr<string> TaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskWorkforceWithOptions(TenantId, TaskId, headers, runtime);
}

GetTaskWorkforceStatisticResponse Alibabacloud_OpenITag20220616::Client::getTaskWorkforceStatisticWithOptions(shared_ptr<string> TenantId,
                                                                                                              shared_ptr<string> TaskId,
                                                                                                              shared_ptr<GetTaskWorkforceStatisticRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statType)) {
    query->insert(pair<string, string>("StatType", *request->statType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskWorkforceStatistic"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)) + string("/workforce/statistic"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskWorkforceStatisticResponse(callApi(params, req, runtime));
}

GetTaskWorkforceStatisticResponse Alibabacloud_OpenITag20220616::Client::getTaskWorkforceStatistic(shared_ptr<string> TenantId, shared_ptr<string> TaskId, shared_ptr<GetTaskWorkforceStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskWorkforceStatisticWithOptions(TenantId, TaskId, request, headers, runtime);
}

GetTemplateResponse Alibabacloud_OpenITag20220616::Client::getTemplateWithOptions(shared_ptr<string> TenantId,
                                                                                  shared_ptr<string> TemplateId,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplate"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/templates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TemplateId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateResponse(callApi(params, req, runtime));
}

GetTemplateResponse Alibabacloud_OpenITag20220616::Client::getTemplate(shared_ptr<string> TenantId, shared_ptr<string> TemplateId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTemplateWithOptions(TenantId, TemplateId, headers, runtime);
}

GetTemplateQuestionsResponse Alibabacloud_OpenITag20220616::Client::getTemplateQuestionsWithOptions(shared_ptr<string> TenantId,
                                                                                                    shared_ptr<string> TemplateId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplateQuestions"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/templates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TemplateId)) + string("/questions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateQuestionsResponse(callApi(params, req, runtime));
}

GetTemplateQuestionsResponse Alibabacloud_OpenITag20220616::Client::getTemplateQuestions(shared_ptr<string> TenantId, shared_ptr<string> TemplateId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTemplateQuestionsWithOptions(TenantId, TemplateId, headers, runtime);
}

GetTemplateViewResponse Alibabacloud_OpenITag20220616::Client::getTemplateViewWithOptions(shared_ptr<string> TenantId,
                                                                                          shared_ptr<string> TemplateId,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplateView"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/templates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TemplateId)) + string("/views"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateViewResponse(callApi(params, req, runtime));
}

GetTemplateViewResponse Alibabacloud_OpenITag20220616::Client::getTemplateView(shared_ptr<string> TenantId, shared_ptr<string> TemplateId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTemplateViewWithOptions(TenantId, TemplateId, headers, runtime);
}

GetTenantResponse Alibabacloud_OpenITag20220616::Client::getTenantWithOptions(shared_ptr<string> TenantId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTenant"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTenantResponse(callApi(params, req, runtime));
}

GetTenantResponse Alibabacloud_OpenITag20220616::Client::getTenant(shared_ptr<string> TenantId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTenantWithOptions(TenantId, headers, runtime);
}

GetUserResponse Alibabacloud_OpenITag20220616::Client::getUserWithOptions(shared_ptr<string> TenantId,
                                                                          shared_ptr<string> UserId,
                                                                          shared_ptr<map<string, string>> headers,
                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUser"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(UserId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserResponse(callApi(params, req, runtime));
}

GetUserResponse Alibabacloud_OpenITag20220616::Client::getUser(shared_ptr<string> TenantId, shared_ptr<string> UserId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserWithOptions(TenantId, UserId, headers, runtime);
}

ListJobsResponse Alibabacloud_OpenITag20220616::Client::listJobsWithOptions(shared_ptr<string> TenantId,
                                                                            shared_ptr<ListJobsRequest> request,
                                                                            shared_ptr<map<string, string>> headers,
                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobs"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/jobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListJobsResponse(callApi(params, req, runtime));
}

ListJobsResponse Alibabacloud_OpenITag20220616::Client::listJobs(shared_ptr<string> TenantId, shared_ptr<ListJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listJobsWithOptions(TenantId, request, headers, runtime);
}

ListSubtaskItemsResponse Alibabacloud_OpenITag20220616::Client::listSubtaskItemsWithOptions(shared_ptr<string> TenantId,
                                                                                            shared_ptr<string> TaskID,
                                                                                            shared_ptr<string> SubtaskId,
                                                                                            shared_ptr<ListSubtaskItemsRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubtaskItems"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskID)) + string("/subtasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SubtaskId)) + string("/items"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubtaskItemsResponse(callApi(params, req, runtime));
}

ListSubtaskItemsResponse Alibabacloud_OpenITag20220616::Client::listSubtaskItems(shared_ptr<string> TenantId,
                                                                                 shared_ptr<string> TaskID,
                                                                                 shared_ptr<string> SubtaskId,
                                                                                 shared_ptr<ListSubtaskItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSubtaskItemsWithOptions(TenantId, TaskID, SubtaskId, request, headers, runtime);
}

ListSubtasksResponse Alibabacloud_OpenITag20220616::Client::listSubtasksWithOptions(shared_ptr<string> TenantId,
                                                                                    shared_ptr<string> TaskID,
                                                                                    shared_ptr<ListSubtasksRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubtasks"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskID)) + string("/subtasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubtasksResponse(callApi(params, req, runtime));
}

ListSubtasksResponse Alibabacloud_OpenITag20220616::Client::listSubtasks(shared_ptr<string> TenantId, shared_ptr<string> TaskID, shared_ptr<ListSubtasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSubtasksWithOptions(TenantId, TaskID, request, headers, runtime);
}

ListTasksResponse Alibabacloud_OpenITag20220616::Client::listTasksWithOptions(shared_ptr<string> TenantId,
                                                                              shared_ptr<ListTasksRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTasks"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTasksResponse(callApi(params, req, runtime));
}

ListTasksResponse Alibabacloud_OpenITag20220616::Client::listTasks(shared_ptr<string> TenantId, shared_ptr<ListTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTasksWithOptions(TenantId, request, headers, runtime);
}

ListTemplatesResponse Alibabacloud_OpenITag20220616::Client::listTemplatesWithOptions(shared_ptr<string> TenantId,
                                                                                      shared_ptr<ListTemplatesRequest> tmpReq,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTemplatesShrinkRequest> request = make_shared<ListTemplatesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->types)) {
    request->typesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->types, make_shared<string>("Types"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    query->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->typesShrink)) {
    query->insert(pair<string, string>("Types", *request->typesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTemplates"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/templates"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTemplatesResponse(callApi(params, req, runtime));
}

ListTemplatesResponse Alibabacloud_OpenITag20220616::Client::listTemplates(shared_ptr<string> TenantId, shared_ptr<ListTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTemplatesWithOptions(TenantId, request, headers, runtime);
}

ListTenantsResponse Alibabacloud_OpenITag20220616::Client::listTenantsWithOptions(shared_ptr<ListTenantsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTenants"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTenantsResponse(callApi(params, req, runtime));
}

ListTenantsResponse Alibabacloud_OpenITag20220616::Client::listTenants(shared_ptr<ListTenantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTenantsWithOptions(request, headers, runtime);
}

ListUsersResponse Alibabacloud_OpenITag20220616::Client::listUsersWithOptions(shared_ptr<string> TenantId,
                                                                              shared_ptr<ListUsersRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUsers"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/users"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUsersResponse(callApi(params, req, runtime));
}

ListUsersResponse Alibabacloud_OpenITag20220616::Client::listUsers(shared_ptr<string> TenantId, shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUsersWithOptions(TenantId, request, headers, runtime);
}

RemoveWorkNodeWorkforceResponse Alibabacloud_OpenITag20220616::Client::removeWorkNodeWorkforceWithOptions(shared_ptr<string> TenantId,
                                                                                                          shared_ptr<string> TaskId,
                                                                                                          shared_ptr<string> WorkNodeId,
                                                                                                          shared_ptr<RemoveWorkNodeWorkforceRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->userIds)) {
    body->insert(pair<string, vector<long>>("UserIds", *request->userIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveWorkNodeWorkforce"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)) + string("/worknodes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkNodeId)) + string("/workforce"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveWorkNodeWorkforceResponse(callApi(params, req, runtime));
}

RemoveWorkNodeWorkforceResponse Alibabacloud_OpenITag20220616::Client::removeWorkNodeWorkforce(shared_ptr<string> TenantId,
                                                                                               shared_ptr<string> TaskId,
                                                                                               shared_ptr<string> WorkNodeId,
                                                                                               shared_ptr<RemoveWorkNodeWorkforceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeWorkNodeWorkforceWithOptions(TenantId, TaskId, WorkNodeId, request, headers, runtime);
}

UpdateTaskResponse Alibabacloud_OpenITag20220616::Client::updateTaskWithOptions(shared_ptr<string> TenantId,
                                                                                shared_ptr<string> TaskId,
                                                                                shared_ptr<UpdateTaskRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTask"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskResponse(callApi(params, req, runtime));
}

UpdateTaskResponse Alibabacloud_OpenITag20220616::Client::updateTask(shared_ptr<string> TenantId, shared_ptr<string> TaskId, shared_ptr<UpdateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTaskWithOptions(TenantId, TaskId, request, headers, runtime);
}

UpdateTaskWorkforceResponse Alibabacloud_OpenITag20220616::Client::updateTaskWorkforceWithOptions(shared_ptr<string> TenantId,
                                                                                                  shared_ptr<string> TaskId,
                                                                                                  shared_ptr<UpdateTaskWorkforceRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<SimpleWorkforce>>(request->workforce)) {
    body->insert(pair<string, vector<SimpleWorkforce>>("Workforce", *request->workforce));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskWorkforce"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)) + string("/workforce"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskWorkforceResponse(callApi(params, req, runtime));
}

UpdateTaskWorkforceResponse Alibabacloud_OpenITag20220616::Client::updateTaskWorkforce(shared_ptr<string> TenantId, shared_ptr<string> TaskId, shared_ptr<UpdateTaskWorkforceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTaskWorkforceWithOptions(TenantId, TaskId, request, headers, runtime);
}

UpdateTemplateResponse Alibabacloud_OpenITag20220616::Client::updateTemplateWithOptions(shared_ptr<string> TenantId,
                                                                                        shared_ptr<string> TemplateId,
                                                                                        shared_ptr<UpdateTemplateRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTemplate"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/templates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TemplateId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTemplateResponse(callApi(params, req, runtime));
}

UpdateTemplateResponse Alibabacloud_OpenITag20220616::Client::updateTemplate(shared_ptr<string> TenantId, shared_ptr<string> TemplateId, shared_ptr<UpdateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTemplateWithOptions(TenantId, TemplateId, request, headers, runtime);
}

UpdateTenantResponse Alibabacloud_OpenITag20220616::Client::updateTenantWithOptions(shared_ptr<string> TenantId,
                                                                                    shared_ptr<UpdateTenantRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantName)) {
    body->insert(pair<string, string>("TenantName", *request->tenantName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTenant"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTenantResponse(callApi(params, req, runtime));
}

UpdateTenantResponse Alibabacloud_OpenITag20220616::Client::updateTenant(shared_ptr<string> TenantId, shared_ptr<UpdateTenantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTenantWithOptions(TenantId, request, headers, runtime);
}

UpdateUserResponse Alibabacloud_OpenITag20220616::Client::updateUserWithOptions(shared_ptr<string> TenantId,
                                                                                shared_ptr<string> UserId,
                                                                                shared_ptr<UpdateUserRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    body->insert(pair<string, string>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUser"))},
    {"version", boost::any(string("2022-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/api/v1/tenants/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantId)) + string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(UserId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserResponse(callApi(params, req, runtime));
}

UpdateUserResponse Alibabacloud_OpenITag20220616::Client::updateUser(shared_ptr<string> TenantId, shared_ptr<string> UserId, shared_ptr<UpdateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateUserWithOptions(TenantId, UserId, request, headers, runtime);
}

