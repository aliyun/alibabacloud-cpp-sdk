#include <darabonba/Core.hpp>
#include <alibabacloud/Fnf20190315.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Fnf20190315::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Fnf20190315
{

AlibabaCloud::Fnf20190315::Client::Client(Config &config): OpenApiClient(config){
  this->_signatureAlgorithm = "v2";
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing" , "cn-beijing.fnf.aliyuncs.com"},
    {"cn-hangzhou" , "cn-hangzhou.fnf.aliyuncs.com"},
    {"cn-shanghai" , "cn-shanghai.fnf.aliyuncs.com"},
    {"cn-shenzhen" , "cn-shenzhen.fnf.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("fnf", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates a flow.
 *
 * @description ## [](#)Usage notes
 * *   The number of flows that each user can create is restricted by resources. For more information, see [Limits](https://help.aliyun.com/document_detail/122093.html). If you want to create more flows, submit a ticket.
 * *   At the user level, flows are distinguished by name. The name of a flow within one account must be unique.
 *
 * @param tmpReq CreateFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFlowResponse
 */
CreateFlowResponse Client::createFlowWithOptions(const CreateFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFlowShrinkRequest request = CreateFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEnvironment()) {
    request.setEnvironmentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.environment(), "Environment", "json"));
  }

  json body = {};
  if (!!request.hasDefinition()) {
    body["Definition"] = request.definition();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnvironmentShrink()) {
    body["Environment"] = request.environmentShrink();
  }

  if (!!request.hasExecutionMode()) {
    body["ExecutionMode"] = request.executionMode();
  }

  if (!!request.hasExternalStorageLocation()) {
    body["ExternalStorageLocation"] = request.externalStorageLocation();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRoleArn()) {
    body["RoleArn"] = request.roleArn();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateFlow"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFlowResponse>();
}

/**
 * @summary Creates a flow.
 *
 * @description ## [](#)Usage notes
 * *   The number of flows that each user can create is restricted by resources. For more information, see [Limits](https://help.aliyun.com/document_detail/122093.html). If you want to create more flows, submit a ticket.
 * *   At the user level, flows are distinguished by name. The name of a flow within one account must be unique.
 *
 * @param request CreateFlowRequest
 * @return CreateFlowResponse
 */
CreateFlowResponse Client::createFlow(const CreateFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFlowWithOptions(request, runtime);
}

/**
 * @summary 创建流程版本别名
 *
 * @param tmpReq CreateFlowAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFlowAliasResponse
 */
CreateFlowAliasResponse Client::createFlowAliasWithOptions(const CreateFlowAliasRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFlowAliasShrinkRequest request = CreateFlowAliasShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoutingConfigurations()) {
    request.setRoutingConfigurationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.routingConfigurations(), "RoutingConfigurations", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasFlowName()) {
    body["FlowName"] = request.flowName();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRoutingConfigurationsShrink()) {
    body["RoutingConfigurations"] = request.routingConfigurationsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateFlowAlias"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFlowAliasResponse>();
}

/**
 * @summary 创建流程版本别名
 *
 * @param request CreateFlowAliasRequest
 * @return CreateFlowAliasResponse
 */
CreateFlowAliasResponse Client::createFlowAlias(const CreateFlowAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFlowAliasWithOptions(request, runtime);
}

/**
 * @summary Creates a time-based schedule.
 *
 * @param request CreateScheduleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScheduleResponse
 */
CreateScheduleResponse Client::createScheduleWithOptions(const CreateScheduleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSignatureVersion()) {
    query["SignatureVersion"] = request.signatureVersion();
  }

  json body = {};
  if (!!request.hasCronExpression()) {
    body["CronExpression"] = request.cronExpression();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnable()) {
    body["Enable"] = request.enable();
  }

  if (!!request.hasFlowName()) {
    body["FlowName"] = request.flowName();
  }

  if (!!request.hasPayload()) {
    body["Payload"] = request.payload();
  }

  if (!!request.hasScheduleName()) {
    body["ScheduleName"] = request.scheduleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSchedule"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScheduleResponse>();
}

/**
 * @summary Creates a time-based schedule.
 *
 * @param request CreateScheduleRequest
 * @return CreateScheduleResponse
 */
CreateScheduleResponse Client::createSchedule(const CreateScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScheduleWithOptions(request, runtime);
}

/**
 * @summary Deletes an existing flow.
 *
 * @description ## [](#)Usage notes
 * A delete operation is asynchronous. If this operation is successful, the system returns a successful response. If an existing flow is pending to be deleted, a new flow of the same name will not be affected by the existing one. After you delete a flow, you cannot query its historical executions. All executions in progress will stop after their most recent steps are complete.
 *
 * @param request DeleteFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowResponse
 */
DeleteFlowResponse Client::deleteFlowWithOptions(const DeleteFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteFlow"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowResponse>();
}

/**
 * @summary Deletes an existing flow.
 *
 * @description ## [](#)Usage notes
 * A delete operation is asynchronous. If this operation is successful, the system returns a successful response. If an existing flow is pending to be deleted, a new flow of the same name will not be affected by the existing one. After you delete a flow, you cannot query its historical executions. All executions in progress will stop after their most recent steps are complete.
 *
 * @param request DeleteFlowRequest
 * @return DeleteFlowResponse
 */
DeleteFlowResponse Client::deleteFlow(const DeleteFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFlowWithOptions(request, runtime);
}

/**
 * @summary 删除流程别名
 *
 * @param request DeleteFlowAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowAliasResponse
 */
DeleteFlowAliasResponse Client::deleteFlowAliasWithOptions(const DeleteFlowAliasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFlowName()) {
    body["FlowName"] = request.flowName();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteFlowAlias"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowAliasResponse>();
}

/**
 * @summary 删除流程别名
 *
 * @param request DeleteFlowAliasRequest
 * @return DeleteFlowAliasResponse
 */
DeleteFlowAliasResponse Client::deleteFlowAlias(const DeleteFlowAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFlowAliasWithOptions(request, runtime);
}

/**
 * @summary 删除流程版本
 *
 * @param request DeleteFlowVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowVersionResponse
 */
DeleteFlowVersionResponse Client::deleteFlowVersionWithOptions(const DeleteFlowVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFlowName()) {
    body["FlowName"] = request.flowName();
  }

  if (!!request.hasFlowVersion()) {
    body["FlowVersion"] = request.flowVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteFlowVersion"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowVersionResponse>();
}

/**
 * @summary 删除流程版本
 *
 * @param request DeleteFlowVersionRequest
 * @return DeleteFlowVersionResponse
 */
DeleteFlowVersionResponse Client::deleteFlowVersion(const DeleteFlowVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFlowVersionWithOptions(request, runtime);
}

/**
 * @summary Deletes a time-based scheduling task.
 *
 * @param request DeleteScheduleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScheduleResponse
 */
DeleteScheduleResponse Client::deleteScheduleWithOptions(const DeleteScheduleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFlowName()) {
    body["FlowName"] = request.flowName();
  }

  if (!!request.hasScheduleName()) {
    body["ScheduleName"] = request.scheduleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSchedule"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScheduleResponse>();
}

/**
 * @summary Deletes a time-based scheduling task.
 *
 * @param request DeleteScheduleRequest
 * @return DeleteScheduleResponse
 */
DeleteScheduleResponse Client::deleteSchedule(const DeleteScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScheduleWithOptions(request, runtime);
}

/**
 * @summary Queries an execution in a flow. The long polling mode is supported. The maximum waiting period for long polling depends on the value of the WaitTimeSeconds parameter.
 *
 * @param request DescribeExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExecutionResponse
 */
DescribeExecutionResponse Client::describeExecutionWithOptions(const DescribeExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExecution"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExecutionResponse>();
}

/**
 * @summary Queries an execution in a flow. The long polling mode is supported. The maximum waiting period for long polling depends on the value of the WaitTimeSeconds parameter.
 *
 * @param request DescribeExecutionRequest
 * @return DescribeExecutionResponse
 */
DescribeExecutionResponse Client::describeExecution(const DescribeExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExecutionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a flow.
 *
 * @param request DescribeFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFlowResponse
 */
DescribeFlowResponse Client::describeFlowWithOptions(const DescribeFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFlow"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFlowResponse>();
}

/**
 * @summary Queries the information about a flow.
 *
 * @param request DescribeFlowRequest
 * @return DescribeFlowResponse
 */
DescribeFlowResponse Client::describeFlow(const DescribeFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFlowWithOptions(request, runtime);
}

/**
 * @summary 查询流程版本别名详情
 *
 * @param request DescribeFlowAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFlowAliasResponse
 */
DescribeFlowAliasResponse Client::describeFlowAliasWithOptions(const DescribeFlowAliasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFlowAlias"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFlowAliasResponse>();
}

/**
 * @summary 查询流程版本别名详情
 *
 * @param request DescribeFlowAliasRequest
 * @return DescribeFlowAliasResponse
 */
DescribeFlowAliasResponse Client::describeFlowAlias(const DescribeFlowAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFlowAliasWithOptions(request, runtime);
}

/**
 * @summary 查询 MapRun 详情
 *
 * @param request DescribeMapRunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMapRunResponse
 */
DescribeMapRunResponse Client::describeMapRunWithOptions(const DescribeMapRunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMapRun"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMapRunResponse>();
}

/**
 * @summary 查询 MapRun 详情
 *
 * @param request DescribeMapRunRequest
 * @return DescribeMapRunResponse
 */
DescribeMapRunResponse Client::describeMapRun(const DescribeMapRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMapRunWithOptions(request, runtime);
}

/**
 * @summary 查询地域信息列表
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.acceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary 查询地域信息列表
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about a time-based schedule.
 *
 * @param request DescribeScheduleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScheduleResponse
 */
DescribeScheduleResponse Client::describeScheduleWithOptions(const DescribeScheduleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSchedule"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScheduleResponse>();
}

/**
 * @summary Queries the detailed information about a time-based schedule.
 *
 * @param request DescribeScheduleRequest
 * @return DescribeScheduleResponse
 */
DescribeScheduleResponse Client::describeSchedule(const DescribeScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScheduleWithOptions(request, runtime);
}

/**
 * @summary Queries the details about each step in an execution process.
 *
 * @param request GetExecutionHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExecutionHistoryResponse
 */
GetExecutionHistoryResponse Client::getExecutionHistoryWithOptions(const GetExecutionHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExecutionHistory"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExecutionHistoryResponse>();
}

/**
 * @summary Queries the details about each step in an execution process.
 *
 * @param request GetExecutionHistoryRequest
 * @return GetExecutionHistoryResponse
 */
GetExecutionHistoryResponse Client::getExecutionHistory(const GetExecutionHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExecutionHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries all historical executions of a flow.
 *
 * @description ## [](#)Usage notes
 * After you delete a flow, you cannot query its historical executions, even if you create a flow of the same name.
 *
 * @param request ListExecutionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExecutionsResponse
 */
ListExecutionsResponse Client::listExecutionsWithOptions(const ListExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExecutions"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExecutionsResponse>();
}

/**
 * @summary Queries all historical executions of a flow.
 *
 * @description ## [](#)Usage notes
 * After you delete a flow, you cannot query its historical executions, even if you create a flow of the same name.
 *
 * @param request ListExecutionsRequest
 * @return ListExecutionsResponse
 */
ListExecutionsResponse Client::listExecutions(const ListExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExecutionsWithOptions(request, runtime);
}

/**
 * @summary 查询流程版本别名列表
 *
 * @param request ListFlowAliasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlowAliasesResponse
 */
ListFlowAliasesResponse Client::listFlowAliasesWithOptions(const ListFlowAliasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFlowAliases"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlowAliasesResponse>();
}

/**
 * @summary 查询流程版本别名列表
 *
 * @param request ListFlowAliasesRequest
 * @return ListFlowAliasesResponse
 */
ListFlowAliasesResponse Client::listFlowAliases(const ListFlowAliasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlowAliasesWithOptions(request, runtime);
}

/**
 * @summary 查询流程版本列表
 *
 * @param request ListFlowVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlowVersionsResponse
 */
ListFlowVersionsResponse Client::listFlowVersionsWithOptions(const ListFlowVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFlowVersions"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlowVersionsResponse>();
}

/**
 * @summary 查询流程版本列表
 *
 * @param request ListFlowVersionsRequest
 * @return ListFlowVersionsResponse
 */
ListFlowVersionsResponse Client::listFlowVersions(const ListFlowVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlowVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of flows.
 *
 * @param request ListFlowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlowsResponse
 */
ListFlowsResponse Client::listFlowsWithOptions(const ListFlowsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFlows"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlowsResponse>();
}

/**
 * @summary Queries a list of flows.
 *
 * @param request ListFlowsRequest
 * @return ListFlowsResponse
 */
ListFlowsResponse Client::listFlows(const ListFlowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlowsWithOptions(request, runtime);
}

/**
 * @summary Queries time-based schedules in a flow.
 *
 * @param request ListSchedulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSchedulesResponse
 */
ListSchedulesResponse Client::listSchedulesWithOptions(const ListSchedulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSchedules"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSchedulesResponse>();
}

/**
 * @summary Queries time-based schedules in a flow.
 *
 * @param request ListSchedulesRequest
 * @return ListSchedulesResponse
 */
ListSchedulesResponse Client::listSchedules(const ListSchedulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSchedulesWithOptions(request, runtime);
}

/**
 * @summary 发布流程版本
 *
 * @param request PublishFlowVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishFlowVersionResponse
 */
PublishFlowVersionResponse Client::publishFlowVersionWithOptions(const PublishFlowVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasFlowName()) {
    body["FlowName"] = request.flowName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PublishFlowVersion"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishFlowVersionResponse>();
}

/**
 * @summary 发布流程版本
 *
 * @param request PublishFlowVersionRequest
 * @return PublishFlowVersionResponse
 */
PublishFlowVersionResponse Client::publishFlowVersion(const PublishFlowVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishFlowVersionWithOptions(request, runtime);
}

/**
 * @summary Reports a failed task.
 *
 * @description ## [](#)Usage notes
 * In the previous service (Serverless Workflow), the task step that ReportTaskFailed is used to call back `pattern: waitForCallback` indicates that the current task fails to be executed.
 * In the new service (CloudFlow), the task step that ReportTaskFailed is used to call back `TaskMode: WaitForCustomCallback` indicates that the current task fails to be executed.
 *
 * @param request ReportTaskFailedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReportTaskFailedResponse
 */
ReportTaskFailedResponse Client::reportTaskFailedWithOptions(const ReportTaskFailedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskToken()) {
    query["TaskToken"] = request.taskToken();
  }

  json body = {};
  if (!!request.hasCause()) {
    body["Cause"] = request.cause();
  }

  if (!!request.hasError()) {
    body["Error"] = request.error();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReportTaskFailed"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReportTaskFailedResponse>();
}

/**
 * @summary Reports a failed task.
 *
 * @description ## [](#)Usage notes
 * In the previous service (Serverless Workflow), the task step that ReportTaskFailed is used to call back `pattern: waitForCallback` indicates that the current task fails to be executed.
 * In the new service (CloudFlow), the task step that ReportTaskFailed is used to call back `TaskMode: WaitForCustomCallback` indicates that the current task fails to be executed.
 *
 * @param request ReportTaskFailedRequest
 * @return ReportTaskFailedResponse
 */
ReportTaskFailedResponse Client::reportTaskFailed(const ReportTaskFailedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reportTaskFailedWithOptions(request, runtime);
}

/**
 * @summary Reports a successful task.
 *
 * @description ## [](#)Usage notes
 * In the previous service (Serverless Workflow), the task step that ReportTaskSucceeded is used to call back pattern: waitForCallback indicates that the current task is successfully executed.
 * In the new service (CloudFlow), the task step that ReportTaskSucceeded is used to call back TaskMode: WaitForCustomCallback indicates that the current task is successfully executed.
 *
 * @param request ReportTaskSucceededRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReportTaskSucceededResponse
 */
ReportTaskSucceededResponse Client::reportTaskSucceededWithOptions(const ReportTaskSucceededRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskToken()) {
    query["TaskToken"] = request.taskToken();
  }

  json body = {};
  if (!!request.hasOutput()) {
    body["Output"] = request.output();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReportTaskSucceeded"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReportTaskSucceededResponse>();
}

/**
 * @summary Reports a successful task.
 *
 * @description ## [](#)Usage notes
 * In the previous service (Serverless Workflow), the task step that ReportTaskSucceeded is used to call back pattern: waitForCallback indicates that the current task is successfully executed.
 * In the new service (CloudFlow), the task step that ReportTaskSucceeded is used to call back TaskMode: WaitForCustomCallback indicates that the current task is successfully executed.
 *
 * @param request ReportTaskSucceededRequest
 * @return ReportTaskSucceededResponse
 */
ReportTaskSucceededResponse Client::reportTaskSucceeded(const ReportTaskSucceededRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reportTaskSucceededWithOptions(request, runtime);
}

/**
 * @summary Starts the execution of a workflow.
 *
 * @description ## [](#)Usage notes
 * *   The flow is created. A flow only in standard mode is supported.
 * *   If you do not specify an execution, the system automatically generates an execution and starts the execution.
 * *   If an ongoing execution has the same name as that of the execution to be started, the system directly returns the ongoing execution.
 * *   If the ongoing execution with the same name has ended (succeeded or failed), `ExecutionAlreadyExists` is returned.
 * *   If no execution with the same name exists, the system starts a new execution.
 *
 * @param request StartExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartExecutionResponse
 */
StartExecutionResponse Client::startExecutionWithOptions(const StartExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCallbackFnFTaskToken()) {
    body["CallbackFnFTaskToken"] = request.callbackFnFTaskToken();
  }

  if (!!request.hasExecutionName()) {
    body["ExecutionName"] = request.executionName();
  }

  if (!!request.hasFlowName()) {
    body["FlowName"] = request.flowName();
  }

  if (!!request.hasInput()) {
    body["Input"] = request.input();
  }

  if (!!request.hasQualifier()) {
    body["Qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartExecution"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartExecutionResponse>();
}

/**
 * @summary Starts the execution of a workflow.
 *
 * @description ## [](#)Usage notes
 * *   The flow is created. A flow only in standard mode is supported.
 * *   If you do not specify an execution, the system automatically generates an execution and starts the execution.
 * *   If an ongoing execution has the same name as that of the execution to be started, the system directly returns the ongoing execution.
 * *   If the ongoing execution with the same name has ended (succeeded or failed), `ExecutionAlreadyExists` is returned.
 * *   If no execution with the same name exists, the system starts a new execution.
 *
 * @param request StartExecutionRequest
 * @return StartExecutionResponse
 */
StartExecutionResponse Client::startExecution(const StartExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startExecutionWithOptions(request, runtime);
}

/**
 * @summary Synchronously starts an execution in a flow.
 *
 * @description *   Only flows of the express execution mode are supported.
 *
 * @param request StartSyncExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSyncExecutionResponse
 */
StartSyncExecutionResponse Client::startSyncExecutionWithOptions(const StartSyncExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExecutionName()) {
    body["ExecutionName"] = request.executionName();
  }

  if (!!request.hasFlowName()) {
    body["FlowName"] = request.flowName();
  }

  if (!!request.hasInput()) {
    body["Input"] = request.input();
  }

  if (!!request.hasQualifier()) {
    body["Qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartSyncExecution"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartSyncExecutionResponse>();
}

/**
 * @summary Synchronously starts an execution in a flow.
 *
 * @description *   Only flows of the express execution mode are supported.
 *
 * @param request StartSyncExecutionRequest
 * @return StartSyncExecutionResponse
 */
StartSyncExecutionResponse Client::startSyncExecution(const StartSyncExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startSyncExecutionWithOptions(request, runtime);
}

/**
 * @summary Stops an execution that is in progress in a flow.
 *
 * @description ## [](#)Usage notes
 * The flow must be in progress.
 *
 * @param request StopExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopExecutionResponse
 */
StopExecutionResponse Client::stopExecutionWithOptions(const StopExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCause()) {
    body["Cause"] = request.cause();
  }

  if (!!request.hasError()) {
    body["Error"] = request.error();
  }

  if (!!request.hasExecutionName()) {
    body["ExecutionName"] = request.executionName();
  }

  if (!!request.hasFlowName()) {
    body["FlowName"] = request.flowName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StopExecution"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopExecutionResponse>();
}

/**
 * @summary Stops an execution that is in progress in a flow.
 *
 * @description ## [](#)Usage notes
 * The flow must be in progress.
 *
 * @param request StopExecutionRequest
 * @return StopExecutionResponse
 */
StopExecutionResponse Client::stopExecution(const StopExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopExecutionWithOptions(request, runtime);
}

/**
 * @summary Updates a flow.
 *
 * @param tmpReq UpdateFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFlowResponse
 */
UpdateFlowResponse Client::updateFlowWithOptions(const UpdateFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateFlowShrinkRequest request = UpdateFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEnvironment()) {
    request.setEnvironmentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.environment(), "Environment", "json"));
  }

  json body = {};
  if (!!request.hasDefinition()) {
    body["Definition"] = request.definition();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnvironmentShrink()) {
    body["Environment"] = request.environmentShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRoleArn()) {
    body["RoleArn"] = request.roleArn();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateFlow"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFlowResponse>();
}

/**
 * @summary Updates a flow.
 *
 * @param request UpdateFlowRequest
 * @return UpdateFlowResponse
 */
UpdateFlowResponse Client::updateFlow(const UpdateFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFlowWithOptions(request, runtime);
}

/**
 * @summary 更新流程版本别名配置
 *
 * @param tmpReq UpdateFlowAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFlowAliasResponse
 */
UpdateFlowAliasResponse Client::updateFlowAliasWithOptions(const UpdateFlowAliasRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateFlowAliasShrinkRequest request = UpdateFlowAliasShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoutingConfigurations()) {
    request.setRoutingConfigurationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.routingConfigurations(), "RoutingConfigurations", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasFlowName()) {
    body["FlowName"] = request.flowName();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRoutingConfigurationsShrink()) {
    body["RoutingConfigurations"] = request.routingConfigurationsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateFlowAlias"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFlowAliasResponse>();
}

/**
 * @summary 更新流程版本别名配置
 *
 * @param request UpdateFlowAliasRequest
 * @return UpdateFlowAliasResponse
 */
UpdateFlowAliasResponse Client::updateFlowAlias(const UpdateFlowAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFlowAliasWithOptions(request, runtime);
}

/**
 * @summary 更新 MapRun 配置
 *
 * @param request UpdateMapRunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMapRunResponse
 */
UpdateMapRunResponse Client::updateMapRunWithOptions(const UpdateMapRunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMapRun"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMapRunResponse>();
}

/**
 * @summary 更新 MapRun 配置
 *
 * @param request UpdateMapRunRequest
 * @return UpdateMapRunResponse
 */
UpdateMapRunResponse Client::updateMapRun(const UpdateMapRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMapRunWithOptions(request, runtime);
}

/**
 * @summary Updates a time-based schedule.
 *
 * @param request UpdateScheduleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateScheduleResponse
 */
UpdateScheduleResponse Client::updateScheduleWithOptions(const UpdateScheduleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCronExpression()) {
    body["CronExpression"] = request.cronExpression();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnable()) {
    body["Enable"] = request.enable();
  }

  if (!!request.hasFlowName()) {
    body["FlowName"] = request.flowName();
  }

  if (!!request.hasPayload()) {
    body["Payload"] = request.payload();
  }

  if (!!request.hasScheduleName()) {
    body["ScheduleName"] = request.scheduleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSchedule"},
    {"version" , "2019-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateScheduleResponse>();
}

/**
 * @summary Updates a time-based schedule.
 *
 * @param request UpdateScheduleRequest
 * @return UpdateScheduleResponse
 */
UpdateScheduleResponse Client::updateSchedule(const UpdateScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateScheduleWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Fnf20190315