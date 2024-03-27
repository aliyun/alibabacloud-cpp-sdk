// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/emr_studio_20231009.hpp>
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

using namespace Alibabacloud_EmrStudio20231009;

Alibabacloud_EmrStudio20231009::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("emrstudio"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_EmrStudio20231009::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeManualTaskResponse Alibabacloud_EmrStudio20231009::Client::describeManualTaskWithOptions(shared_ptr<string> projectId,
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
    {"version", boost::any(string("2023-10-09"))},
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

DescribeManualTaskResponse Alibabacloud_EmrStudio20231009::Client::describeManualTask(shared_ptr<string> projectId, shared_ptr<string> manualTaskId, shared_ptr<DescribeManualTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeManualTaskWithOptions(projectId, manualTaskId, request, headers, runtime);
}

DescribeManualTaskInstanceResponse Alibabacloud_EmrStudio20231009::Client::describeManualTaskInstanceWithOptions(shared_ptr<string> manualTaskInstanceId,
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
    {"version", boost::any(string("2023-10-09"))},
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

DescribeManualTaskInstanceResponse Alibabacloud_EmrStudio20231009::Client::describeManualTaskInstance(shared_ptr<string> manualTaskInstanceId, shared_ptr<string> projectId, shared_ptr<DescribeManualTaskInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeManualTaskInstanceWithOptions(manualTaskInstanceId, projectId, request, headers, runtime);
}

DescribeProjectResponse Alibabacloud_EmrStudio20231009::Client::describeProjectWithOptions(shared_ptr<string> code,
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
    {"version", boost::any(string("2023-10-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(code)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProjectResponse(callApi(params, req, runtime));
}

DescribeProjectResponse Alibabacloud_EmrStudio20231009::Client::describeProject(shared_ptr<string> code, shared_ptr<DescribeProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeProjectWithOptions(code, request, headers, runtime);
}

DescribeTaskResponse Alibabacloud_EmrStudio20231009::Client::describeTaskWithOptions(shared_ptr<string> workflowId,
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
    {"version", boost::any(string("2023-10-09"))},
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

DescribeTaskResponse Alibabacloud_EmrStudio20231009::Client::describeTask(shared_ptr<string> workflowId,
                                                                          shared_ptr<string> projectId,
                                                                          shared_ptr<string> taskId,
                                                                          shared_ptr<DescribeTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTaskWithOptions(workflowId, projectId, taskId, request, headers, runtime);
}

DescribeTaskInstanceResponse Alibabacloud_EmrStudio20231009::Client::describeTaskInstanceWithOptions(shared_ptr<string> projectId,
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
    {"version", boost::any(string("2023-10-09"))},
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

DescribeTaskInstanceResponse Alibabacloud_EmrStudio20231009::Client::describeTaskInstance(shared_ptr<string> projectId,
                                                                                          shared_ptr<string> workflowInstanceId,
                                                                                          shared_ptr<string> taskInstanceId,
                                                                                          shared_ptr<DescribeTaskInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTaskInstanceWithOptions(projectId, workflowInstanceId, taskInstanceId, request, headers, runtime);
}

DescribeWorkflowResponse Alibabacloud_EmrStudio20231009::Client::describeWorkflowWithOptions(shared_ptr<string> projectId,
                                                                                             shared_ptr<string> workflowId,
                                                                                             shared_ptr<DescribeWorkflowRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->workspaceId)) {
    query->insert(pair<string, long>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWorkflow"))},
    {"version", boost::any(string("2023-10-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/processDefinitions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workflowId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWorkflowResponse(callApi(params, req, runtime));
}

DescribeWorkflowResponse Alibabacloud_EmrStudio20231009::Client::describeWorkflow(shared_ptr<string> projectId, shared_ptr<string> workflowId, shared_ptr<DescribeWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeWorkflowWithOptions(projectId, workflowId, request, headers, runtime);
}

DescribeWorkflowInstanceResponse Alibabacloud_EmrStudio20231009::Client::describeWorkflowInstanceWithOptions(shared_ptr<string> projectId,
                                                                                                             shared_ptr<string> workflowInstanceId,
                                                                                                             shared_ptr<DescribeWorkflowInstanceRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->workspaceId)) {
    query->insert(pair<string, long>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWorkflowInstance"))},
    {"version", boost::any(string("2023-10-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/processInstances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workflowInstanceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWorkflowInstanceResponse(callApi(params, req, runtime));
}

DescribeWorkflowInstanceResponse Alibabacloud_EmrStudio20231009::Client::describeWorkflowInstance(shared_ptr<string> projectId, shared_ptr<string> workflowInstanceId, shared_ptr<DescribeWorkflowInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeWorkflowInstanceWithOptions(projectId, workflowInstanceId, request, headers, runtime);
}

ListManualTaskInstancesResponse Alibabacloud_EmrStudio20231009::Client::listManualTaskInstancesWithOptions(shared_ptr<string> projectId,
                                                                                                           shared_ptr<ListManualTaskInstancesRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionStatus)) {
    query->insert(pair<string, string>("executionStatus", *request->executionStatus));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListManualTaskInstances"))},
    {"version", boost::any(string("2023-10-09"))},
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

ListManualTaskInstancesResponse Alibabacloud_EmrStudio20231009::Client::listManualTaskInstances(shared_ptr<string> projectId, shared_ptr<ListManualTaskInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listManualTaskInstancesWithOptions(projectId, request, headers, runtime);
}

ListManualTasksResponse Alibabacloud_EmrStudio20231009::Client::listManualTasksWithOptions(shared_ptr<string> projectId,
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
    {"version", boost::any(string("2023-10-09"))},
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

ListManualTasksResponse Alibabacloud_EmrStudio20231009::Client::listManualTasks(shared_ptr<string> projectId, shared_ptr<ListManualTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listManualTasksWithOptions(projectId, request, headers, runtime);
}

ListProjectsResponse Alibabacloud_EmrStudio20231009::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<long>(request->workspaceId)) {
    query->insert(pair<string, long>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjects"))},
    {"version", boost::any(string("2023-10-09"))},
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

ListProjectsResponse Alibabacloud_EmrStudio20231009::Client::listProjects(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectsWithOptions(request, headers, runtime);
}

ListTaskInstancesResponse Alibabacloud_EmrStudio20231009::Client::listTaskInstancesWithOptions(shared_ptr<string> projectId,
                                                                                               shared_ptr<ListTaskInstancesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionStatus)) {
    query->insert(pair<string, string>("executionStatus", *request->executionStatus));
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
    {"version", boost::any(string("2023-10-09"))},
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

ListTaskInstancesResponse Alibabacloud_EmrStudio20231009::Client::listTaskInstances(shared_ptr<string> projectId, shared_ptr<ListTaskInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTaskInstancesWithOptions(projectId, request, headers, runtime);
}

ListTasksResponse Alibabacloud_EmrStudio20231009::Client::listTasksWithOptions(shared_ptr<string> projectId,
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
    {"version", boost::any(string("2023-10-09"))},
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

ListTasksResponse Alibabacloud_EmrStudio20231009::Client::listTasks(shared_ptr<string> projectId, shared_ptr<ListTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTasksWithOptions(projectId, request, headers, runtime);
}

ListWorkflowInstancesResponse Alibabacloud_EmrStudio20231009::Client::listWorkflowInstancesWithOptions(shared_ptr<string> projectId,
                                                                                                       shared_ptr<ListWorkflowInstancesRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("endDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("startDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workflowId)) {
    query->insert(pair<string, long>("workflowId", *request->workflowId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workspaceId)) {
    query->insert(pair<string, long>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkflowInstances"))},
    {"version", boost::any(string("2023-10-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/processInstances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkflowInstancesResponse(callApi(params, req, runtime));
}

ListWorkflowInstancesResponse Alibabacloud_EmrStudio20231009::Client::listWorkflowInstances(shared_ptr<string> projectId, shared_ptr<ListWorkflowInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkflowInstancesWithOptions(projectId, request, headers, runtime);
}

ListWorkflowsResponse Alibabacloud_EmrStudio20231009::Client::listWorkflowsWithOptions(shared_ptr<string> projectId,
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
  if (!Darabonba_Util::Client::isUnset<long>(request->workspaceId)) {
    query->insert(pair<string, long>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkflows"))},
    {"version", boost::any(string("2023-10-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId)) + string("/processDefinitions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkflowsResponse(callApi(params, req, runtime));
}

ListWorkflowsResponse Alibabacloud_EmrStudio20231009::Client::listWorkflows(shared_ptr<string> projectId, shared_ptr<ListWorkflowsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkflowsWithOptions(projectId, request, headers, runtime);
}

