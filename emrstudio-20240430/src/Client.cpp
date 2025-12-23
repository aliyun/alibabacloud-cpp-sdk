#include <darabonba/Core.hpp>
#include <alibabacloud/EmrStudio20240430.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::EmrStudio20240430::Models;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{

AlibabaCloud::EmrStudio20240430::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("emrstudio", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary 创建工作流
 *
 * @param request CreateWorkflowRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkflowResponse
 */
CreateWorkflowResponse Client::createWorkflowWithOptions(const string &projectId, const CreateWorkflowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertGroupId()) {
    query["alertGroupId"] = request.alertGroupId();
  }

  if (!!request.hasAlertStrategy()) {
    query["alertStrategy"] = request.alertStrategy();
  }

  if (!!request.hasCronExpr()) {
    query["cronExpr"] = request.cronExpr();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasExecutionType()) {
    query["executionType"] = request.executionType();
  }

  if (!!request.hasFailureStrategy()) {
    query["failureStrategy"] = request.failureStrategy();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasParentDirectoryId()) {
    query["parentDirectoryId"] = request.parentDirectoryId();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasScheduleEndTime()) {
    query["scheduleEndTime"] = request.scheduleEndTime();
  }

  if (!!request.hasScheduleStartTime()) {
    query["scheduleStartTime"] = request.scheduleStartTime();
  }

  if (!!request.hasScheduleState()) {
    query["scheduleState"] = request.scheduleState();
  }

  if (!!request.hasTaskDefinitionJson()) {
    query["taskDefinitionJson"] = request.taskDefinitionJson();
  }

  if (!!request.hasTaskRelationJson()) {
    query["taskRelationJson"] = request.taskRelationJson();
  }

  if (!!request.hasTimeZone()) {
    query["timeZone"] = request.timeZone();
  }

  if (!!request.hasTimeout()) {
    query["timeout"] = request.timeout();
  }

  if (!!request.hasWorkflowInstancePriority()) {
    query["workflowInstancePriority"] = request.workflowInstancePriority();
  }

  if (!!request.hasWorkflowParams()) {
    query["workflowParams"] = request.workflowParams();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasTaskDefinitionJsonValue()) {
    body["taskDefinitionJsonValue"] = request.taskDefinitionJsonValue();
  }

  if (!!request.hasTaskRelationJsonValue()) {
    body["taskRelationJsonValue"] = request.taskRelationJsonValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkflow"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/workflows")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkflowResponse>();
}

/**
 * @summary 创建工作流
 *
 * @param request CreateWorkflowRequest
 * @return CreateWorkflowResponse
 */
CreateWorkflowResponse Client::createWorkflow(const string &projectId, const CreateWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkflowWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 删除工作流
 *
 * @param request DeleteWorkflowRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkflowResponse
 */
DeleteWorkflowResponse Client::deleteWorkflowWithOptions(const string &projectId, const string &workflowId, const DeleteWorkflowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkflow"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/workflows/" , Darabonba::Encode::Encoder::percentEncode(workflowId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkflowResponse>();
}

/**
 * @summary 删除工作流
 *
 * @param request DeleteWorkflowRequest
 * @return DeleteWorkflowResponse
 */
DeleteWorkflowResponse Client::deleteWorkflow(const string &projectId, const string &workflowId, const DeleteWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkflowWithOptions(projectId, workflowId, request, headers, runtime);
}

/**
 * @summary 获取id关联信息
 *
 * @param request DescribeIdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIdResponse
 */
DescribeIdResponse Client::describeIdWithOptions(const DescribeIdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeId"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/relatedIds")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIdResponse>();
}

/**
 * @summary 获取id关联信息
 *
 * @param request DescribeIdRequest
 * @return DescribeIdResponse
 */
DescribeIdResponse Client::describeId(const DescribeIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeIdWithOptions(request, headers, runtime);
}

/**
 * @summary 获取手动任务定义
 *
 * @param request DescribeManualTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeManualTaskResponse
 */
DescribeManualTaskResponse Client::describeManualTaskWithOptions(const string &projectId, const string &manualTaskId, const DescribeManualTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeManualTask"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/manualTasks/" , Darabonba::Encode::Encoder::percentEncode(manualTaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeManualTaskResponse>();
}

/**
 * @summary 获取手动任务定义
 *
 * @param request DescribeManualTaskRequest
 * @return DescribeManualTaskResponse
 */
DescribeManualTaskResponse Client::describeManualTask(const string &projectId, const string &manualTaskId, const DescribeManualTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeManualTaskWithOptions(projectId, manualTaskId, request, headers, runtime);
}

/**
 * @summary 获取手动任务实例
 *
 * @param request DescribeManualTaskInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeManualTaskInstanceResponse
 */
DescribeManualTaskInstanceResponse Client::describeManualTaskInstanceWithOptions(const string &manualTaskInstanceId, const string &projectId, const DescribeManualTaskInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeManualTaskInstance"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/manualTaskInstances/" , Darabonba::Encode::Encoder::percentEncode(manualTaskInstanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeManualTaskInstanceResponse>();
}

/**
 * @summary 获取手动任务实例
 *
 * @param request DescribeManualTaskInstanceRequest
 * @return DescribeManualTaskInstanceResponse
 */
DescribeManualTaskInstanceResponse Client::describeManualTaskInstance(const string &manualTaskInstanceId, const string &projectId, const DescribeManualTaskInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeManualTaskInstanceWithOptions(manualTaskInstanceId, projectId, request, headers, runtime);
}

/**
 * @summary 获取项目详情
 *
 * @param request DescribeProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectResponse
 */
DescribeProjectResponse Client::describeProjectWithOptions(const string &projectId, const DescribeProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProject"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProjectResponse>();
}

/**
 * @summary 获取项目详情
 *
 * @param request DescribeProjectRequest
 * @return DescribeProjectResponse
 */
DescribeProjectResponse Client::describeProject(const string &projectId, const DescribeProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeProjectWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 查询任务定义
 *
 * @param request DescribeTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTaskResponse
 */
DescribeTaskResponse Client::describeTaskWithOptions(const string &workflowId, const string &projectId, const string &taskId, const DescribeTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTask"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/workflows/" , Darabonba::Encode::Encoder::percentEncode(workflowId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTaskResponse>();
}

/**
 * @summary 查询任务定义
 *
 * @param request DescribeTaskRequest
 * @return DescribeTaskResponse
 */
DescribeTaskResponse Client::describeTask(const string &workflowId, const string &projectId, const string &taskId, const DescribeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeTaskWithOptions(workflowId, projectId, taskId, request, headers, runtime);
}

/**
 * @summary 获取任务实例
 *
 * @param request DescribeTaskInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTaskInstanceResponse
 */
DescribeTaskInstanceResponse Client::describeTaskInstanceWithOptions(const string &projectId, const string &workflowInstanceId, const string &taskInstanceId, const DescribeTaskInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTaskInstance"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/workflows/" , Darabonba::Encode::Encoder::percentEncode(workflowInstanceId) , "/taskInstances/" , Darabonba::Encode::Encoder::percentEncode(taskInstanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTaskInstanceResponse>();
}

/**
 * @summary 获取任务实例
 *
 * @param request DescribeTaskInstanceRequest
 * @return DescribeTaskInstanceResponse
 */
DescribeTaskInstanceResponse Client::describeTaskInstance(const string &projectId, const string &workflowInstanceId, const string &taskInstanceId, const DescribeTaskInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeTaskInstanceWithOptions(projectId, workflowInstanceId, taskInstanceId, request, headers, runtime);
}

/**
 * @summary 获取工作流详情
 *
 * @param request DescribeWorkflowRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWorkflowResponse
 */
DescribeWorkflowResponse Client::describeWorkflowWithOptions(const string &projectId, const string &workflowId, const DescribeWorkflowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWorkflow"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/workflows/" , Darabonba::Encode::Encoder::percentEncode(workflowId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWorkflowResponse>();
}

/**
 * @summary 获取工作流详情
 *
 * @param request DescribeWorkflowRequest
 * @return DescribeWorkflowResponse
 */
DescribeWorkflowResponse Client::describeWorkflow(const string &projectId, const string &workflowId, const DescribeWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeWorkflowWithOptions(projectId, workflowId, request, headers, runtime);
}

/**
 * @summary 获取工作流实例详情
 *
 * @param request DescribeWorkflowInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWorkflowInstanceResponse
 */
DescribeWorkflowInstanceResponse Client::describeWorkflowInstanceWithOptions(const string &projectId, const string &workflowInstanceId, const DescribeWorkflowInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWorkflowInstance"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/workflowInstances/" , Darabonba::Encode::Encoder::percentEncode(workflowInstanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWorkflowInstanceResponse>();
}

/**
 * @summary 获取工作流实例详情
 *
 * @param request DescribeWorkflowInstanceRequest
 * @return DescribeWorkflowInstanceResponse
 */
DescribeWorkflowInstanceResponse Client::describeWorkflowInstance(const string &projectId, const string &workflowInstanceId, const DescribeWorkflowInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeWorkflowInstanceWithOptions(projectId, workflowInstanceId, request, headers, runtime);
}

/**
 * @summary 获取实例的日志
 *
 * @param request GetInstanceLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceLogResponse
 */
GetInstanceLogResponse Client::getInstanceLogWithOptions(const string &projectId, const string &instanceId, const GetInstanceLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasSkipLineNum()) {
    query["skipLineNum"] = request.skipLineNum();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceLog"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/log")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceLogResponse>();
}

/**
 * @summary 获取实例的日志
 *
 * @param request GetInstanceLogRequest
 * @return GetInstanceLogResponse
 */
GetInstanceLogResponse Client::getInstanceLog(const string &projectId, const string &instanceId, const GetInstanceLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceLogWithOptions(projectId, instanceId, request, headers, runtime);
}

/**
 * @summary 查询告警组列表
 *
 * @param request ListAlertGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertGroupsResponse
 */
ListAlertGroupsResponse Client::listAlertGroupsWithOptions(const string &projectId, const ListAlertGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasSearchVal()) {
    query["searchVal"] = request.searchVal();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlertGroups"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/alert-groups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertGroupsResponse>();
}

/**
 * @summary 查询告警组列表
 *
 * @param request ListAlertGroupsRequest
 * @return ListAlertGroupsResponse
 */
ListAlertGroupsResponse Client::listAlertGroups(const string &projectId, const ListAlertGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAlertGroupsWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 获取手动任务实例列表
 *
 * @param request ListManualTaskInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListManualTaskInstancesResponse
 */
ListManualTaskInstancesResponse Client::listManualTaskInstancesWithOptions(const string &projectId, const ListManualTaskInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasSearchVal()) {
    query["searchVal"] = request.searchVal();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListManualTaskInstances"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/manualTaskInstances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListManualTaskInstancesResponse>();
}

/**
 * @summary 获取手动任务实例列表
 *
 * @param request ListManualTaskInstancesRequest
 * @return ListManualTaskInstancesResponse
 */
ListManualTaskInstancesResponse Client::listManualTaskInstances(const string &projectId, const ListManualTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listManualTaskInstancesWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 查询手动任务定义列表
 *
 * @param request ListManualTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListManualTasksResponse
 */
ListManualTasksResponse Client::listManualTasksWithOptions(const string &projectId, const ListManualTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasSearchVal()) {
    query["searchVal"] = request.searchVal();
  }

  if (!!request.hasTaskType()) {
    query["taskType"] = request.taskType();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListManualTasks"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/manualTasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListManualTasksResponse>();
}

/**
 * @summary 查询手动任务定义列表
 *
 * @param request ListManualTasksRequest
 * @return ListManualTasksResponse
 */
ListManualTasksResponse Client::listManualTasks(const string &projectId, const ListManualTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listManualTasksWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 获取项目详情
 *
 * @param request ListProjectsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjectsWithOptions(const ListProjectsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasSearchVal()) {
    query["searchVal"] = request.searchVal();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjects"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectsResponse>();
}

/**
 * @summary 获取项目详情
 *
 * @param request ListProjectsRequest
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjects(const ListProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProjectsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询调度资源组列表
 *
 * @param request ListResourceGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceGroupsResponse
 */
ListResourceGroupsResponse Client::listResourceGroupsWithOptions(const ListResourceGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasResourceGroupName()) {
    query["resourceGroupName"] = request.resourceGroupName();
  }

  if (!!request.hasResourceGroupType()) {
    query["resourceGroupType"] = request.resourceGroupType();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceGroups"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/resourcegroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceGroupsResponse>();
}

/**
 * @summary 查询调度资源组列表
 *
 * @param request ListResourceGroupsRequest
 * @return ListResourceGroupsResponse
 */
ListResourceGroupsResponse Client::listResourceGroups(const ListResourceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourceGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取任务实例列表
 *
 * @param request ListTaskInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskInstancesResponse
 */
ListTaskInstancesResponse Client::listTaskInstancesWithOptions(const string &projectId, const ListTaskInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasSearchVal()) {
    query["searchVal"] = request.searchVal();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasWorkflowInstanceId()) {
    query["workflowInstanceId"] = request.workflowInstanceId();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTaskInstances"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/taskInstances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskInstancesResponse>();
}

/**
 * @summary 获取任务实例列表
 *
 * @param request ListTaskInstancesRequest
 * @return ListTaskInstancesResponse
 */
ListTaskInstancesResponse Client::listTaskInstances(const string &projectId, const ListTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTaskInstancesWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 查询任务定义列表
 *
 * @param request ListTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasksWithOptions(const string &projectId, const ListTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasSearchVal()) {
    query["searchVal"] = request.searchVal();
  }

  if (!!request.hasTaskType()) {
    query["taskType"] = request.taskType();
  }

  if (!!request.hasWorkflowId()) {
    query["workflowId"] = request.workflowId();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTasks"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTasksResponse>();
}

/**
 * @summary 查询任务定义列表
 *
 * @param request ListTasksRequest
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasks(const string &projectId, const ListTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTasksWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 查询工作流目录列表
 *
 * @param request ListWorkflowDirectoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowDirectoriesResponse
 */
ListWorkflowDirectoriesResponse Client::listWorkflowDirectoriesWithOptions(const string &projectId, const ListWorkflowDirectoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["directoryId"] = request.directoryId();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasParentDirectoryId()) {
    query["parentDirectoryId"] = request.parentDirectoryId();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkflowDirectories"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/directories")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowDirectoriesResponse>();
}

/**
 * @summary 查询工作流目录列表
 *
 * @param request ListWorkflowDirectoriesRequest
 * @return ListWorkflowDirectoriesResponse
 */
ListWorkflowDirectoriesResponse Client::listWorkflowDirectories(const string &projectId, const ListWorkflowDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkflowDirectoriesWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 获取工作流实例列表
 *
 * @param request ListWorkflowInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowInstancesResponse
 */
ListWorkflowInstancesResponse Client::listWorkflowInstancesWithOptions(const string &projectId, const ListWorkflowInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasWorkflowId()) {
    query["workflowId"] = request.workflowId();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkflowInstances"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/workflowInstances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowInstancesResponse>();
}

/**
 * @summary 获取工作流实例列表
 *
 * @param request ListWorkflowInstancesRequest
 * @return ListWorkflowInstancesResponse
 */
ListWorkflowInstancesResponse Client::listWorkflowInstances(const string &projectId, const ListWorkflowInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkflowInstancesWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 获取工作流列表
 *
 * @param request ListWorkflowsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowsResponse
 */
ListWorkflowsResponse Client::listWorkflowsWithOptions(const string &projectId, const ListWorkflowsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasSearchVal()) {
    query["searchVal"] = request.searchVal();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkflows"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/workflows")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowsResponse>();
}

/**
 * @summary 获取工作流列表
 *
 * @param request ListWorkflowsRequest
 * @return ListWorkflowsResponse
 */
ListWorkflowsResponse Client::listWorkflows(const string &projectId, const ListWorkflowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkflowsWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 操作工作流实例
 *
 * @param request OperateWorkflowInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateWorkflowInstanceResponse
 */
OperateWorkflowInstanceResponse Client::operateWorkflowInstanceWithOptions(const string &projectId, const OperateWorkflowInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasExecType()) {
    body["execType"] = request.execType();
  }

  if (!!request.hasWorkflowInstanceId()) {
    body["workflowInstanceId"] = request.workflowInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OperateWorkflowInstance"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/executors/execute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateWorkflowInstanceResponse>();
}

/**
 * @summary 操作工作流实例
 *
 * @param request OperateWorkflowInstanceRequest
 * @return OperateWorkflowInstanceResponse
 */
OperateWorkflowInstanceResponse Client::operateWorkflowInstance(const string &projectId, const OperateWorkflowInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return operateWorkflowInstanceWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 运行工作流
 *
 * @param request RunWorkflowRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunWorkflowResponse
 */
RunWorkflowResponse Client::runWorkflowWithOptions(const string &projectId, const RunWorkflowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertGroupId()) {
    query["alertGroupId"] = request.alertGroupId();
  }

  if (!!request.hasAlertStrategy()) {
    query["alertStrategy"] = request.alertStrategy();
  }

  if (!!request.hasComplementDependentMode()) {
    query["complementDependentMode"] = request.complementDependentMode();
  }

  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  if (!!request.hasExecType()) {
    query["execType"] = request.execType();
  }

  if (!!request.hasExpectedParallelismNumber()) {
    query["expectedParallelismNumber"] = request.expectedParallelismNumber();
  }

  if (!!request.hasFailureStrategy()) {
    query["failureStrategy"] = request.failureStrategy();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRunMode()) {
    query["runMode"] = request.runMode();
  }

  if (!!request.hasScheduleTime()) {
    query["scheduleTime"] = request.scheduleTime();
  }

  if (!!request.hasStartParams()) {
    query["startParams"] = request.startParams();
  }

  if (!!request.hasWorkflowId()) {
    query["workflowId"] = request.workflowId();
  }

  if (!!request.hasWorkflowInstancePriority()) {
    query["workflowInstancePriority"] = request.workflowInstancePriority();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunWorkflow"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/executors/run-workflow")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunWorkflowResponse>();
}

/**
 * @summary 运行工作流
 *
 * @param request RunWorkflowRequest
 * @return RunWorkflowResponse
 */
RunWorkflowResponse Client::runWorkflow(const string &projectId, const RunWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runWorkflowWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 更新工作流
 *
 * @param request UpdateWorkflowRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkflowResponse
 */
UpdateWorkflowResponse Client::updateWorkflowWithOptions(const string &projectId, const string &workflowId, const UpdateWorkflowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertGroupId()) {
    query["alertGroupId"] = request.alertGroupId();
  }

  if (!!request.hasAlertStrategy()) {
    query["alertStrategy"] = request.alertStrategy();
  }

  if (!!request.hasCronExpr()) {
    query["cronExpr"] = request.cronExpr();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasExecutionType()) {
    query["executionType"] = request.executionType();
  }

  if (!!request.hasFailureStrategy()) {
    query["failureStrategy"] = request.failureStrategy();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasParentDirectoryId()) {
    query["parentDirectoryId"] = request.parentDirectoryId();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasScheduleEndTime()) {
    query["scheduleEndTime"] = request.scheduleEndTime();
  }

  if (!!request.hasScheduleStartTime()) {
    query["scheduleStartTime"] = request.scheduleStartTime();
  }

  if (!!request.hasScheduleState()) {
    query["scheduleState"] = request.scheduleState();
  }

  if (!!request.hasTaskDefinitionJson()) {
    query["taskDefinitionJson"] = request.taskDefinitionJson();
  }

  if (!!request.hasTaskRelationJson()) {
    query["taskRelationJson"] = request.taskRelationJson();
  }

  if (!!request.hasTimeZone()) {
    query["timeZone"] = request.timeZone();
  }

  if (!!request.hasTimeout()) {
    query["timeout"] = request.timeout();
  }

  if (!!request.hasWorkflowInstancePriority()) {
    query["workflowInstancePriority"] = request.workflowInstancePriority();
  }

  if (!!request.hasWorkflowParams()) {
    query["workflowParams"] = request.workflowParams();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasTaskDefinitionJsonValue()) {
    body["taskDefinitionJsonValue"] = request.taskDefinitionJsonValue();
  }

  if (!!request.hasTaskRelationJsonValue()) {
    body["taskRelationJsonValue"] = request.taskRelationJsonValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkflow"},
    {"version" , "2024-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/v3/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/workflows/" , Darabonba::Encode::Encoder::percentEncode(workflowId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkflowResponse>();
}

/**
 * @summary 更新工作流
 *
 * @param request UpdateWorkflowRequest
 * @return UpdateWorkflowResponse
 */
UpdateWorkflowResponse Client::updateWorkflow(const string &projectId, const string &workflowId, const UpdateWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWorkflowWithOptions(projectId, workflowId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace EmrStudio20240430