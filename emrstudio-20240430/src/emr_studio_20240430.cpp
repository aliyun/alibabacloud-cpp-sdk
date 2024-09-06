// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/emr_studio_20240430.hpp>
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

using namespace Alibabacloud_EmrStudio20240430;

Alibabacloud_EmrStudio20240430::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("emrstudio"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_EmrStudio20240430::Client::getEndpoint(shared_ptr<string> productId,
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

CreateWorkflowResponse Alibabacloud_EmrStudio20240430::Client::createWorkflowWithOptions(shared_ptr<string> projectId,
                                                                                         shared_ptr<CreateWorkflowRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertGroupId)) {
    query->insert(pair<string, string>("alertGroupId", *request->alertGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertStrategy)) {
    query->insert(pair<string, string>("alertStrategy", *request->alertStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cronExpr)) {
    query->insert(pair<string, string>("cronExpr", *request->cronExpr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionType)) {
    query->insert(pair<string, string>("executionType", *request->executionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->failureStrategy)) {
    query->insert(pair<string, string>("failureStrategy", *request->failureStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentDirectoryId)) {
    query->insert(pair<string, string>("parentDirectoryId", *request->parentDirectoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleEndTime)) {
    query->insert(pair<string, string>("scheduleEndTime", *request->scheduleEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleStartTime)) {
    query->insert(pair<string, string>("scheduleStartTime", *request->scheduleStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleState)) {
    query->insert(pair<string, string>("scheduleState", *request->scheduleState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskDefinitionJson)) {
    query->insert(pair<string, string>("taskDefinitionJson", *request->taskDefinitionJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskRelationJson)) {
    query->insert(pair<string, string>("taskRelationJson", *request->taskRelationJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeZone)) {
    query->insert(pair<string, string>("timeZone", *request->timeZone));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowInstancePriority)) {
    query->insert(pair<string, string>("workflowInstancePriority", *request->workflowInstancePriority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowParams)) {
    query->insert(pair<string, string>("workflowParams", *request->workflowParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskDefinitionJsonValue)) {
    body->insert(pair<string, string>("taskDefinitionJsonValue", *request->taskDefinitionJsonValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskRelationJsonValue)) {
    body->insert(pair<string, string>("taskRelationJsonValue", *request->taskRelationJsonValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkflow"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/workflows"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWorkflowResponse(callApi(params, req, runtime));
}

CreateWorkflowResponse Alibabacloud_EmrStudio20240430::Client::createWorkflow(shared_ptr<string> projectId, shared_ptr<CreateWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createWorkflowWithOptions(projectId, request, headers, runtime);
}

DeleteWorkflowResponse Alibabacloud_EmrStudio20240430::Client::deleteWorkflowWithOptions(shared_ptr<string> projectId,
                                                                                         shared_ptr<string> workflowId,
                                                                                         shared_ptr<DeleteWorkflowRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkflow"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/workflows/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workflowId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWorkflowResponse(callApi(params, req, runtime));
}

DeleteWorkflowResponse Alibabacloud_EmrStudio20240430::Client::deleteWorkflow(shared_ptr<string> projectId, shared_ptr<string> workflowId, shared_ptr<DeleteWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteWorkflowWithOptions(projectId, workflowId, request, headers, runtime);
}

DescribeManualTaskResponse Alibabacloud_EmrStudio20240430::Client::describeManualTaskWithOptions(shared_ptr<string> projectId,
                                                                                                 shared_ptr<string> manualTaskId,
                                                                                                 shared_ptr<DescribeManualTaskRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeManualTask"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/manualTasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(manualTaskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeManualTaskResponse(callApi(params, req, runtime));
}

DescribeManualTaskResponse Alibabacloud_EmrStudio20240430::Client::describeManualTask(shared_ptr<string> projectId, shared_ptr<string> manualTaskId, shared_ptr<DescribeManualTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeManualTaskWithOptions(projectId, manualTaskId, request, headers, runtime);
}

DescribeManualTaskInstanceResponse Alibabacloud_EmrStudio20240430::Client::describeManualTaskInstanceWithOptions(shared_ptr<string> manualTaskInstanceId,
                                                                                                                 shared_ptr<string> projectId,
                                                                                                                 shared_ptr<DescribeManualTaskInstanceRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeManualTaskInstance"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/manualTaskInstances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(manualTaskInstanceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeManualTaskInstanceResponse(callApi(params, req, runtime));
}

DescribeManualTaskInstanceResponse Alibabacloud_EmrStudio20240430::Client::describeManualTaskInstance(shared_ptr<string> manualTaskInstanceId, shared_ptr<string> projectId, shared_ptr<DescribeManualTaskInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeManualTaskInstanceWithOptions(manualTaskInstanceId, projectId, request, headers, runtime);
}

DescribeProjectResponse Alibabacloud_EmrStudio20240430::Client::describeProjectWithOptions(shared_ptr<string> projectId,
                                                                                           shared_ptr<DescribeProjectRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProject"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProjectResponse(callApi(params, req, runtime));
}

DescribeProjectResponse Alibabacloud_EmrStudio20240430::Client::describeProject(shared_ptr<string> projectId, shared_ptr<DescribeProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeProjectWithOptions(projectId, request, headers, runtime);
}

DescribeTaskResponse Alibabacloud_EmrStudio20240430::Client::describeTaskWithOptions(shared_ptr<string> workflowId,
                                                                                     shared_ptr<string> projectId,
                                                                                     shared_ptr<string> taskId,
                                                                                     shared_ptr<DescribeTaskRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTask"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/workflows/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workflowId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTaskResponse(callApi(params, req, runtime));
}

DescribeTaskResponse Alibabacloud_EmrStudio20240430::Client::describeTask(shared_ptr<string> workflowId,
                                                                          shared_ptr<string> projectId,
                                                                          shared_ptr<string> taskId,
                                                                          shared_ptr<DescribeTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTaskWithOptions(workflowId, projectId, taskId, request, headers, runtime);
}

DescribeTaskInstanceResponse Alibabacloud_EmrStudio20240430::Client::describeTaskInstanceWithOptions(shared_ptr<string> projectId,
                                                                                                     shared_ptr<string> workflowInstanceId,
                                                                                                     shared_ptr<string> taskInstanceId,
                                                                                                     shared_ptr<DescribeTaskInstanceRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTaskInstance"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/workflows/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workflowInstanceId)) + string("/taskInstances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskInstanceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTaskInstanceResponse(callApi(params, req, runtime));
}

DescribeTaskInstanceResponse Alibabacloud_EmrStudio20240430::Client::describeTaskInstance(shared_ptr<string> projectId,
                                                                                          shared_ptr<string> workflowInstanceId,
                                                                                          shared_ptr<string> taskInstanceId,
                                                                                          shared_ptr<DescribeTaskInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTaskInstanceWithOptions(projectId, workflowInstanceId, taskInstanceId, request, headers, runtime);
}

DescribeWorkflowResponse Alibabacloud_EmrStudio20240430::Client::describeWorkflowWithOptions(shared_ptr<string> projectId,
                                                                                             shared_ptr<string> workflowId,
                                                                                             shared_ptr<DescribeWorkflowRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWorkflow"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/workflows/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workflowId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWorkflowResponse(callApi(params, req, runtime));
}

DescribeWorkflowResponse Alibabacloud_EmrStudio20240430::Client::describeWorkflow(shared_ptr<string> projectId, shared_ptr<string> workflowId, shared_ptr<DescribeWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeWorkflowWithOptions(projectId, workflowId, request, headers, runtime);
}

DescribeWorkflowInstanceResponse Alibabacloud_EmrStudio20240430::Client::describeWorkflowInstanceWithOptions(shared_ptr<string> projectId,
                                                                                                             shared_ptr<string> workflowInstanceId,
                                                                                                             shared_ptr<DescribeWorkflowInstanceRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWorkflowInstance"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/workflowInstances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workflowInstanceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWorkflowInstanceResponse(callApi(params, req, runtime));
}

DescribeWorkflowInstanceResponse Alibabacloud_EmrStudio20240430::Client::describeWorkflowInstance(shared_ptr<string> projectId, shared_ptr<string> workflowInstanceId, shared_ptr<DescribeWorkflowInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeWorkflowInstanceWithOptions(projectId, workflowInstanceId, request, headers, runtime);
}

ListManualTaskInstancesResponse Alibabacloud_EmrStudio20240430::Client::listManualTaskInstancesWithOptions(shared_ptr<string> projectId,
                                                                                                           shared_ptr<ListManualTaskInstancesRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchVal)) {
    query->insert(pair<string, string>("searchVal", *request->searchVal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListManualTaskInstances"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/manualTaskInstances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListManualTaskInstancesResponse(callApi(params, req, runtime));
}

ListManualTaskInstancesResponse Alibabacloud_EmrStudio20240430::Client::listManualTaskInstances(shared_ptr<string> projectId, shared_ptr<ListManualTaskInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listManualTaskInstancesWithOptions(projectId, request, headers, runtime);
}

ListManualTasksResponse Alibabacloud_EmrStudio20240430::Client::listManualTasksWithOptions(shared_ptr<string> projectId,
                                                                                           shared_ptr<ListManualTasksRequest> request,
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
  if (!Darabonba_Util::Client::isUnset<string>(request->searchVal)) {
    query->insert(pair<string, string>("searchVal", *request->searchVal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("taskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListManualTasks"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/manualTasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListManualTasksResponse(callApi(params, req, runtime));
}

ListManualTasksResponse Alibabacloud_EmrStudio20240430::Client::listManualTasks(shared_ptr<string> projectId, shared_ptr<ListManualTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listManualTasksWithOptions(projectId, request, headers, runtime);
}

ListProjectsResponse Alibabacloud_EmrStudio20240430::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchVal)) {
    query->insert(pair<string, string>("searchVal", *request->searchVal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjects"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectsResponse(callApi(params, req, runtime));
}

ListProjectsResponse Alibabacloud_EmrStudio20240430::Client::listProjects(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectsWithOptions(request, headers, runtime);
}

ListTaskInstancesResponse Alibabacloud_EmrStudio20240430::Client::listTaskInstancesWithOptions(shared_ptr<string> projectId,
                                                                                               shared_ptr<ListTaskInstancesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchVal)) {
    query->insert(pair<string, string>("searchVal", *request->searchVal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowInstanceId)) {
    query->insert(pair<string, string>("workflowInstanceId", *request->workflowInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskInstances"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/taskInstances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskInstancesResponse(callApi(params, req, runtime));
}

ListTaskInstancesResponse Alibabacloud_EmrStudio20240430::Client::listTaskInstances(shared_ptr<string> projectId, shared_ptr<ListTaskInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTaskInstancesWithOptions(projectId, request, headers, runtime);
}

ListTasksResponse Alibabacloud_EmrStudio20240430::Client::listTasksWithOptions(shared_ptr<string> projectId,
                                                                               shared_ptr<ListTasksRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->maxResults)) {
    query->insert(pair<string, string>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchVal)) {
    query->insert(pair<string, string>("searchVal", *request->searchVal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("taskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowId)) {
    query->insert(pair<string, string>("workflowId", *request->workflowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTasks"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTasksResponse(callApi(params, req, runtime));
}

ListTasksResponse Alibabacloud_EmrStudio20240430::Client::listTasks(shared_ptr<string> projectId, shared_ptr<ListTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTasksWithOptions(projectId, request, headers, runtime);
}

ListWorkflowInstancesResponse Alibabacloud_EmrStudio20240430::Client::listWorkflowInstancesWithOptions(shared_ptr<string> projectId,
                                                                                                       shared_ptr<ListWorkflowInstancesRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowId)) {
    query->insert(pair<string, string>("workflowId", *request->workflowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkflowInstances"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/workflowInstances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkflowInstancesResponse(callApi(params, req, runtime));
}

ListWorkflowInstancesResponse Alibabacloud_EmrStudio20240430::Client::listWorkflowInstances(shared_ptr<string> projectId, shared_ptr<ListWorkflowInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkflowInstancesWithOptions(projectId, request, headers, runtime);
}

ListWorkflowsResponse Alibabacloud_EmrStudio20240430::Client::listWorkflowsWithOptions(shared_ptr<string> projectId,
                                                                                       shared_ptr<ListWorkflowsRequest> request,
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
  if (!Darabonba_Util::Client::isUnset<string>(request->searchVal)) {
    query->insert(pair<string, string>("searchVal", *request->searchVal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkflows"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/workflows"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkflowsResponse(callApi(params, req, runtime));
}

ListWorkflowsResponse Alibabacloud_EmrStudio20240430::Client::listWorkflows(shared_ptr<string> projectId, shared_ptr<ListWorkflowsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkflowsWithOptions(projectId, request, headers, runtime);
}

RunWorkflowResponse Alibabacloud_EmrStudio20240430::Client::runWorkflowWithOptions(shared_ptr<string> projectId,
                                                                                   shared_ptr<RunWorkflowRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertGroupId)) {
    query->insert(pair<string, string>("alertGroupId", *request->alertGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertStrategy)) {
    query->insert(pair<string, string>("alertStrategy", *request->alertStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->complementDependentMode)) {
    query->insert(pair<string, string>("complementDependentMode", *request->complementDependentMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dryRun)) {
    query->insert(pair<string, string>("dryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->execType)) {
    query->insert(pair<string, string>("execType", *request->execType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expectedParallelismNumber)) {
    query->insert(pair<string, string>("expectedParallelismNumber", *request->expectedParallelismNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->failureStrategy)) {
    query->insert(pair<string, string>("failureStrategy", *request->failureStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runMode)) {
    query->insert(pair<string, string>("runMode", *request->runMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleTime)) {
    query->insert(pair<string, string>("scheduleTime", *request->scheduleTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startParams)) {
    query->insert(pair<string, string>("startParams", *request->startParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowId)) {
    query->insert(pair<string, string>("workflowId", *request->workflowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowInstancePriority)) {
    query->insert(pair<string, string>("workflowInstancePriority", *request->workflowInstancePriority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunWorkflow"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/executors/run-workflow"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunWorkflowResponse(callApi(params, req, runtime));
}

RunWorkflowResponse Alibabacloud_EmrStudio20240430::Client::runWorkflow(shared_ptr<string> projectId, shared_ptr<RunWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runWorkflowWithOptions(projectId, request, headers, runtime);
}

UpdateWorkflowResponse Alibabacloud_EmrStudio20240430::Client::updateWorkflowWithOptions(shared_ptr<string> projectId,
                                                                                         shared_ptr<string> workflowId,
                                                                                         shared_ptr<UpdateWorkflowRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertGroupId)) {
    query->insert(pair<string, string>("alertGroupId", *request->alertGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertStrategy)) {
    query->insert(pair<string, string>("alertStrategy", *request->alertStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cronExpr)) {
    query->insert(pair<string, string>("cronExpr", *request->cronExpr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionType)) {
    query->insert(pair<string, string>("executionType", *request->executionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->failureStrategy)) {
    query->insert(pair<string, string>("failureStrategy", *request->failureStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentDirectoryId)) {
    query->insert(pair<string, string>("parentDirectoryId", *request->parentDirectoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleEndTime)) {
    query->insert(pair<string, string>("scheduleEndTime", *request->scheduleEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleStartTime)) {
    query->insert(pair<string, string>("scheduleStartTime", *request->scheduleStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleState)) {
    query->insert(pair<string, string>("scheduleState", *request->scheduleState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskDefinitionJson)) {
    query->insert(pair<string, string>("taskDefinitionJson", *request->taskDefinitionJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskRelationJson)) {
    query->insert(pair<string, string>("taskRelationJson", *request->taskRelationJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeZone)) {
    query->insert(pair<string, string>("timeZone", *request->timeZone));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowInstancePriority)) {
    query->insert(pair<string, string>("workflowInstancePriority", *request->workflowInstancePriority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowParams)) {
    query->insert(pair<string, string>("workflowParams", *request->workflowParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskDefinitionJsonValue)) {
    body->insert(pair<string, string>("taskDefinitionJsonValue", *request->taskDefinitionJsonValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskRelationJsonValue)) {
    body->insert(pair<string, string>("taskRelationJsonValue", *request->taskRelationJsonValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkflow"))},
    {"version", boost::any(string("2024-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/workflows/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workflowId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWorkflowResponse(callApi(params, req, runtime));
}

UpdateWorkflowResponse Alibabacloud_EmrStudio20240430::Client::updateWorkflow(shared_ptr<string> projectId, shared_ptr<string> workflowId, shared_ptr<UpdateWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateWorkflowWithOptions(projectId, workflowId, request, headers, runtime);
}

