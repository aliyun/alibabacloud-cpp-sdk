#include <darabonba/Core.hpp>
#include <alibabacloud/SysOM20231230.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::SysOM20231230::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace SysOM20231230
{

AlibabaCloud::SysOM20231230::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("sysom", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 授权 SysOM 对某个机器进行诊断
 *
 * @param request AuthDiagnosisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthDiagnosisResponse
 */
AuthDiagnosisResponse Client::authDiagnosisWithOptions(const AuthDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoCreateRole()) {
    body["autoCreateRole"] = request.autoCreateRole();
  }

  if (!!request.hasAutoInstallAgent()) {
    body["autoInstallAgent"] = request.autoInstallAgent();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.instances();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AuthDiagnosis"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/diagnosis/auth")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthDiagnosisResponse>();
}

/**
 * @summary 授权 SysOM 对某个机器进行诊断
 *
 * @param request AuthDiagnosisRequest
 * @return AuthDiagnosisResponse
 */
AuthDiagnosisResponse Client::authDiagnosis(const AuthDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return authDiagnosisWithOptions(request, headers, runtime);
}

/**
 * @summary 检查目标实例是否被 SysOM 支持
 *
 * @param request CheckInstanceSupportRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckInstanceSupportResponse
 */
CheckInstanceSupportResponse Client::checkInstanceSupportWithOptions(const CheckInstanceSupportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstances()) {
    body["instances"] = request.instances();
  }

  if (!!request.hasRegion()) {
    body["region"] = request.region();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckInstanceSupport"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/supportInstanceList/checkInstanceSupport")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckInstanceSupportResponse>();
}

/**
 * @summary 检查目标实例是否被 SysOM 支持
 *
 * @param request CheckInstanceSupportRequest
 * @return CheckInstanceSupportResponse
 */
CheckInstanceSupportResponse Client::checkInstanceSupport(const CheckInstanceSupportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkInstanceSupportWithOptions(request, headers, runtime);
}

/**
 * @summary 新增推送告警的策略
 *
 * @param request CreateAlertStrategyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAlertStrategyResponse
 */
CreateAlertStrategyResponse Client::createAlertStrategyWithOptions(const CreateAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnabled()) {
    body["enabled"] = request.enabled();
  }

  if (!!request.hasK8sLabel()) {
    body["k8sLabel"] = request.k8sLabel();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasStrategy()) {
    body["strategy"] = request.strategy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAlertStrategy"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/alertPusher/alert/createStrategy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAlertStrategyResponse>();
}

/**
 * @summary 新增推送告警的策略
 *
 * @param request CreateAlertStrategyRequest
 * @return CreateAlertStrategyResponse
 */
CreateAlertStrategyResponse Client::createAlertStrategy(const CreateAlertStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAlertStrategyWithOptions(request, headers, runtime);
}

/**
 * @summary 创建宕机诊断任务
 *
 * @param request CreateVmcoreDiagnosisTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVmcoreDiagnosisTaskResponse
 */
CreateVmcoreDiagnosisTaskResponse Client::createVmcoreDiagnosisTaskWithOptions(const CreateVmcoreDiagnosisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDebuginfoCommonUrl()) {
    body["debuginfoCommonUrl"] = request.debuginfoCommonUrl();
  }

  if (!!request.hasDebuginfoUrl()) {
    body["debuginfoUrl"] = request.debuginfoUrl();
  }

  if (!!request.hasDmesgUrl()) {
    body["dmesgUrl"] = request.dmesgUrl();
  }

  if (!!request.hasTaskType()) {
    body["taskType"] = request.taskType();
  }

  if (!!request.hasVmcoreUrl()) {
    body["vmcoreUrl"] = request.vmcoreUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateVmcoreDiagnosisTask"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crashAgent/diagnosis/createDiagnosisTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVmcoreDiagnosisTaskResponse>();
}

/**
 * @summary 创建宕机诊断任务
 *
 * @param request CreateVmcoreDiagnosisTaskRequest
 * @return CreateVmcoreDiagnosisTaskResponse
 */
CreateVmcoreDiagnosisTaskResponse Client::createVmcoreDiagnosisTask(const CreateVmcoreDiagnosisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createVmcoreDiagnosisTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 用户删除推送告警的策略
 *
 * @param request DeleteAlertStrategyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlertStrategyResponse
 */
DeleteAlertStrategyResponse Client::deleteAlertStrategyWithOptions(const DeleteAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlertStrategy"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/alertPusher/alert/deleteStrategy")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlertStrategyResponse>();
}

/**
 * @summary 用户删除推送告警的策略
 *
 * @param request DeleteAlertStrategyRequest
 * @return DeleteAlertStrategyResponse
 */
DeleteAlertStrategyResponse Client::deleteAlertStrategy(const DeleteAlertStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAlertStrategyWithOptions(request, headers, runtime);
}

/**
 * @summary 查询指标
 *
 * @param request DescribeMetricListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricListResponse
 */
DescribeMetricListResponse Client::describeMetricListWithOptions(const DescribeMetricListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.instance();
  }

  if (!!request.hasMetricName()) {
    query["metricName"] = request.metricName();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetricList"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/proxy/get/describeMetricList")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricListResponse>();
}

/**
 * @summary 查询指标
 *
 * @param request DescribeMetricListRequest
 * @return DescribeMetricListResponse
 */
DescribeMetricListResponse Client::describeMetricList(const DescribeMetricListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeMetricListWithOptions(request, headers, runtime);
}

/**
 * @summary 获取copilot服务的返回结果
 *
 * @param request GenerateCopilotResponseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateCopilotResponseResponse
 */
GenerateCopilotResponseResponse Client::generateCopilotResponseWithOptions(const GenerateCopilotResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLlmParamString()) {
    body["llmParamString"] = request.llmParamString();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateCopilotResponse"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/copilot/generate_copilot_response")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateCopilotResponseResponse>();
}

/**
 * @summary 获取copilot服务的返回结果
 *
 * @param request GenerateCopilotResponseRequest
 * @return GenerateCopilotResponseResponse
 */
GenerateCopilotResponseResponse Client::generateCopilotResponse(const GenerateCopilotResponseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateCopilotResponseWithOptions(request, headers, runtime);
}

/**
 * @summary 流式copilot服务接口
 *
 * @param request GenerateCopilotStreamResponseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateCopilotStreamResponseResponse
 */
FutrueGenerator<GenerateCopilotStreamResponseResponse> Client::generateCopilotStreamResponseWithSSE(const GenerateCopilotStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLlmParamString()) {
    body["llmParamString"] = request.llmParamString();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateCopilotStreamResponse"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/copilot/generate_copilot_stream_response")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<GenerateCopilotStreamResponseResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 流式copilot服务接口
 *
 * @param request GenerateCopilotStreamResponseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateCopilotStreamResponseResponse
 */
GenerateCopilotStreamResponseResponse Client::generateCopilotStreamResponseWithOptions(const GenerateCopilotStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLlmParamString()) {
    body["llmParamString"] = request.llmParamString();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateCopilotStreamResponse"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/copilot/generate_copilot_stream_response")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateCopilotStreamResponseResponse>();
}

/**
 * @summary 流式copilot服务接口
 *
 * @param request GenerateCopilotStreamResponseRequest
 * @return GenerateCopilotStreamResponseResponse
 */
GenerateCopilotStreamResponseResponse Client::generateCopilotStreamResponse(const GenerateCopilotStreamResponseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateCopilotStreamResponseWithOptions(request, headers, runtime);
}

/**
 * @summary 查看AI Infra分析结果
 *
 * @param request GetAIQueryResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAIQueryResultResponse
 */
GetAIQueryResultResponse Client::getAIQueryResultWithOptions(const GetAIQueryResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnalysisId()) {
    body["analysisId"] = request.analysisId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAIQueryResult"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/app_observ/aiAnalysis/query_result")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAIQueryResultResponse>();
}

/**
 * @summary 查看AI Infra分析结果
 *
 * @param request GetAIQueryResultRequest
 * @return GetAIQueryResultResponse
 */
GetAIQueryResultResponse Client::getAIQueryResult(const GetAIQueryResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAIQueryResultWithOptions(request, headers, runtime);
}

/**
 * @summary 获取节点/Pod不同等级异常事件的数量
 *
 * @param request GetAbnormalEventsCountRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAbnormalEventsCountResponse
 */
GetAbnormalEventsCountResponse Client::getAbnormalEventsCountWithOptions(const GetAbnormalEventsCountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCluster()) {
    query["cluster"] = request.cluster();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.end();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.instance();
  }

  if (!!request.hasLevel()) {
    query["level"] = request.level();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request._namespace();
  }

  if (!!request.hasPod()) {
    query["pod"] = request.pod();
  }

  if (!!request.hasShowPod()) {
    query["showPod"] = request.showPod();
  }

  if (!!request.hasStart()) {
    query["start"] = request.start();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAbnormalEventsCount"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/cluster_health/range/abnormaly_events_count")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAbnormalEventsCountResponse>();
}

/**
 * @summary 获取节点/Pod不同等级异常事件的数量
 *
 * @param request GetAbnormalEventsCountRequest
 * @return GetAbnormalEventsCountResponse
 */
GetAbnormalEventsCountResponse Client::getAbnormalEventsCount(const GetAbnormalEventsCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAbnormalEventsCountWithOptions(request, headers, runtime);
}

/**
 * @summary 获取某个组件的详情
 *
 * @param request GetAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgentWithOptions(const GetAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["agent_id"] = request.agentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgent"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/agent/get_agent")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentResponse>();
}

/**
 * @summary 获取某个组件的详情
 *
 * @param request GetAgentRequest
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgent(const GetAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentWithOptions(request, headers, runtime);
}

/**
 * @summary 获取Agent安装任务执行状态
 *
 * @param request GetAgentTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentTaskResponse
 */
GetAgentTaskResponse Client::getAgentTaskWithOptions(const GetAgentTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["task_id"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentTask"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/agent/get_agent_task")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentTaskResponse>();
}

/**
 * @summary 获取Agent安装任务执行状态
 *
 * @param request GetAgentTaskRequest
 * @return GetAgentTaskResponse
 */
GetAgentTaskResponse Client::getAgentTask(const GetAgentTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 根据策略id，获取用户的一条告警
 *
 * @param request GetAlertStrategyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlertStrategyResponse
 */
GetAlertStrategyResponse Client::getAlertStrategyWithOptions(const GetAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlertStrategy"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/alertPusher/alert/getStrategy")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlertStrategyResponse>();
}

/**
 * @summary 根据策略id，获取用户的一条告警
 *
 * @param request GetAlertStrategyRequest
 * @return GetAlertStrategyResponse
 */
GetAlertStrategyResponse Client::getAlertStrategy(const GetAlertStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAlertStrategyWithOptions(request, headers, runtime);
}

/**
 * @summary 获取copilot历史聊天记录
 *
 * @param request GetCopilotHistoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCopilotHistoryResponse
 */
GetCopilotHistoryResponse Client::getCopilotHistoryWithOptions(const GetCopilotHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCount()) {
    body["count"] = request.count();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetCopilotHistory"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/copilot/get_copilot_history")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCopilotHistoryResponse>();
}

/**
 * @summary 获取copilot历史聊天记录
 *
 * @param request GetCopilotHistoryRequest
 * @return GetCopilotHistoryResponse
 */
GetCopilotHistoryResponse Client::getCopilotHistory(const GetCopilotHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCopilotHistoryWithOptions(request, headers, runtime);
}

/**
 * @summary 获取诊断结果
 *
 * @param request GetDiagnosisResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDiagnosisResultResponse
 */
GetDiagnosisResultResponse Client::getDiagnosisResultWithOptions(const GetDiagnosisResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["task_id"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDiagnosisResult"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/diagnosis/get_diagnosis_results")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDiagnosisResultResponse>();
}

/**
 * @summary 获取诊断结果
 *
 * @param request GetDiagnosisResultRequest
 * @return GetDiagnosisResultResponse
 */
GetDiagnosisResultResponse Client::getDiagnosisResult(const GetDiagnosisResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDiagnosisResultWithOptions(request, headers, runtime);
}

/**
 * @summary 获取一段时间的节点/pod健康度比例
 *
 * @param request GetHealthPercentageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHealthPercentageResponse
 */
GetHealthPercentageResponse Client::getHealthPercentageWithOptions(const GetHealthPercentageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCluster()) {
    query["cluster"] = request.cluster();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.end();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.instance();
  }

  if (!!request.hasStart()) {
    query["start"] = request.start();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHealthPercentage"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/cluster_health/range/health_percentage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHealthPercentageResponse>();
}

/**
 * @summary 获取一段时间的节点/pod健康度比例
 *
 * @param request GetHealthPercentageRequest
 * @return GetHealthPercentageResponse
 */
GetHealthPercentageResponse Client::getHealthPercentage(const GetHealthPercentageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHealthPercentageWithOptions(request, headers, runtime);
}

/**
 * @summary 获取集群节点数量
 *
 * @param request GetHostCountRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHostCountResponse
 */
GetHostCountResponse Client::getHostCountWithOptions(const GetHostCountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCluster()) {
    query["cluster"] = request.cluster();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.end();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.instance();
  }

  if (!!request.hasStart()) {
    query["start"] = request.start();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHostCount"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/cluster_health/range/host_count")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHostCountResponse>();
}

/**
 * @summary 获取集群节点数量
 *
 * @param request GetHostCountRequest
 * @return GetHostCountResponse
 */
GetHostCountResponse Client::getHostCount(const GetHostCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHostCountWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实例下的某个字段列表
 *
 * @param request GetHotSpotUniqListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotSpotUniqListResponse
 */
GetHotSpotUniqListResponse Client::getHotSpotUniqListWithOptions(const GetHotSpotUniqListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBegEnd()) {
    body["beg_end"] = request.begEnd();
  }

  if (!!request.hasBegStart()) {
    body["beg_start"] = request.begStart();
  }

  if (!!request.hasInstance()) {
    body["instance"] = request.instance();
  }

  if (!!request.hasPid()) {
    body["pid"] = request.pid();
  }

  if (!!request.hasTable()) {
    body["table"] = request.table();
  }

  if (!!request.hasUniq()) {
    body["uniq"] = request.uniq();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetHotSpotUniqList"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/livetrace_proxy/hotspot_uniq_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotSpotUniqListResponse>();
}

/**
 * @summary 获取实例下的某个字段列表
 *
 * @param request GetHotSpotUniqListRequest
 * @return GetHotSpotUniqListResponse
 */
GetHotSpotUniqListResponse Client::getHotSpotUniqList(const GetHotSpotUniqListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHotSpotUniqListWithOptions(request, headers, runtime);
}

/**
 * @summary 获取热定分析结果
 *
 * @param request GetHotspotAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotspotAnalysisResponse
 */
GetHotspotAnalysisResponse Client::getHotspotAnalysisWithOptions(const GetHotspotAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppType()) {
    body["appType"] = request.appType();
  }

  if (!!request.hasBegEnd()) {
    body["beg_end"] = request.begEnd();
  }

  if (!!request.hasBegStart()) {
    body["beg_start"] = request.begStart();
  }

  if (!!request.hasInstance()) {
    body["instance"] = request.instance();
  }

  if (!!request.hasPid()) {
    body["pid"] = request.pid();
  }

  if (!!request.hasTable()) {
    body["table"] = request.table();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetHotspotAnalysis"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/proxy/post/livetrace_hotspot_analysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotspotAnalysisResponse>();
}

/**
 * @summary 获取热定分析结果
 *
 * @param request GetHotspotAnalysisRequest
 * @return GetHotspotAnalysisResponse
 */
GetHotspotAnalysisResponse Client::getHotspotAnalysis(const GetHotspotAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHotspotAnalysisWithOptions(request, headers, runtime);
}

/**
 * @summary 热点对比
 *
 * @param request GetHotspotCompareRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotspotCompareResponse
 */
GetHotspotCompareResponse Client::getHotspotCompareWithOptions(const GetHotspotCompareRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBeg1End()) {
    body["beg1_end"] = request.beg1End();
  }

  if (!!request.hasBeg1Start()) {
    body["beg1_start"] = request.beg1Start();
  }

  if (!!request.hasBeg2End()) {
    body["beg2_end"] = request.beg2End();
  }

  if (!!request.hasBeg2Start()) {
    body["beg2_start"] = request.beg2Start();
  }

  if (!!request.hasHotType()) {
    body["hot_type"] = request.hotType();
  }

  if (!!request.hasInstance1()) {
    body["instance1"] = request.instance1();
  }

  if (!!request.hasInstance2()) {
    body["instance2"] = request.instance2();
  }

  if (!!request.hasPid1()) {
    body["pid1"] = request.pid1();
  }

  if (!!request.hasPid2()) {
    body["pid2"] = request.pid2();
  }

  if (!!request.hasTable()) {
    body["table"] = request.table();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetHotspotCompare"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/proxy/post/livetrace_hotspot_compare")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotspotCompareResponse>();
}

/**
 * @summary 热点对比
 *
 * @param request GetHotspotCompareRequest
 * @return GetHotspotCompareResponse
 */
GetHotspotCompareResponse Client::getHotspotCompare(const GetHotspotCompareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHotspotCompareWithOptions(request, headers, runtime);
}

/**
 * @summary 获取热点实例列表
 *
 * @param request GetHotspotInstanceListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotspotInstanceListResponse
 */
GetHotspotInstanceListResponse Client::getHotspotInstanceListWithOptions(const GetHotspotInstanceListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBegEnd()) {
    body["beg_end"] = request.begEnd();
  }

  if (!!request.hasBegStart()) {
    body["beg_start"] = request.begStart();
  }

  if (!!request.hasTable()) {
    body["table"] = request.table();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetHotspotInstanceList"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/proxy/post/livetrace_hotspot_instance_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotspotInstanceListResponse>();
}

/**
 * @summary 获取热点实例列表
 *
 * @param request GetHotspotInstanceListRequest
 * @return GetHotspotInstanceListResponse
 */
GetHotspotInstanceListResponse Client::getHotspotInstanceList(const GetHotspotInstanceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHotspotInstanceListWithOptions(request, headers, runtime);
}

/**
 * @summary 获取某个实例的pid列表
 *
 * @param request GetHotspotPidListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotspotPidListResponse
 */
GetHotspotPidListResponse Client::getHotspotPidListWithOptions(const GetHotspotPidListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBegEnd()) {
    body["beg_end"] = request.begEnd();
  }

  if (!!request.hasBegStart()) {
    body["beg_start"] = request.begStart();
  }

  if (!!request.hasInstance()) {
    body["instance"] = request.instance();
  }

  if (!!request.hasTable()) {
    body["table"] = request.table();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetHotspotPidList"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/proxy/post/livetrace_hotspot_pid_list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotspotPidListResponse>();
}

/**
 * @summary 获取某个实例的pid列表
 *
 * @param request GetHotspotPidListRequest
 * @return GetHotspotPidListResponse
 */
GetHotspotPidListResponse Client::getHotspotPidList(const GetHotspotPidListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHotspotPidListWithOptions(request, headers, runtime);
}

/**
 * @summary 发起热点追踪
 *
 * @param request GetHotspotTrackingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotspotTrackingResponse
 */
GetHotspotTrackingResponse Client::getHotspotTrackingWithOptions(const GetHotspotTrackingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBegEnd()) {
    body["beg_end"] = request.begEnd();
  }

  if (!!request.hasBegStart()) {
    body["beg_start"] = request.begStart();
  }

  if (!!request.hasHotType()) {
    body["hot_type"] = request.hotType();
  }

  if (!!request.hasInstance()) {
    body["instance"] = request.instance();
  }

  if (!!request.hasPid()) {
    body["pid"] = request.pid();
  }

  if (!!request.hasTable()) {
    body["table"] = request.table();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetHotspotTracking"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/proxy/post/livetrace_hotspot_tracking")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotspotTrackingResponse>();
}

/**
 * @summary 发起热点追踪
 *
 * @param request GetHotspotTrackingRequest
 * @return GetHotspotTrackingResponse
 */
GetHotspotTrackingResponse Client::getHotspotTracking(const GetHotspotTrackingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHotspotTrackingWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实时集群/节点健康度分数
 *
 * @param request GetInstantScoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstantScoreResponse
 */
GetInstantScoreResponse Client::getInstantScoreWithOptions(const GetInstantScoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCluster()) {
    query["cluster"] = request.cluster();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.instance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstantScore"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/cluster_health/instant/score")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstantScoreResponse>();
}

/**
 * @summary 获取实时集群/节点健康度分数
 *
 * @param request GetInstantScoreRequest
 * @return GetInstantScoreResponse
 */
GetInstantScoreResponse Client::getInstantScore(const GetInstantScoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstantScoreWithOptions(request, headers, runtime);
}

/**
 * @summary AI Infra获取分析记录列表
 *
 * @param request GetListRecordRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetListRecordResponse
 */
GetListRecordResponse Client::getListRecordWithOptions(const GetListRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetListRecord"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/app_observ/aiAnalysis/list_record")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetListRecordResponse>();
}

/**
 * @summary AI Infra获取分析记录列表
 *
 * @param request GetListRecordRequest
 * @return GetListRecordResponse
 */
GetListRecordResponse Client::getListRecord(const GetListRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getListRecordWithOptions(request, headers, runtime);
}

/**
 * @summary 获取一定时间内集群中节点/节点中pod异常问题占比
 *
 * @param request GetProblemPercentageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProblemPercentageResponse
 */
GetProblemPercentageResponse Client::getProblemPercentageWithOptions(const GetProblemPercentageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCluster()) {
    query["cluster"] = request.cluster();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.end();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.instance();
  }

  if (!!request.hasStart()) {
    query["start"] = request.start();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProblemPercentage"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/cluster_health/range/problem_percentage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProblemPercentageResponse>();
}

/**
 * @summary 获取一定时间内集群中节点/节点中pod异常问题占比
 *
 * @param request GetProblemPercentageRequest
 * @return GetProblemPercentageResponse
 */
GetProblemPercentageResponse Client::getProblemPercentage(const GetProblemPercentageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProblemPercentageWithOptions(request, headers, runtime);
}

/**
 * @summary 获取健康分趋势
 *
 * @param request GetRangeScoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRangeScoreResponse
 */
GetRangeScoreResponse Client::getRangeScoreWithOptions(const GetRangeScoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCluster()) {
    query["cluster"] = request.cluster();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.end();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.instance();
  }

  if (!!request.hasStart()) {
    query["start"] = request.start();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRangeScore"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/cluster_health/range/score")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRangeScoreResponse>();
}

/**
 * @summary 获取健康分趋势
 *
 * @param request GetRangeScoreRequest
 * @return GetRangeScoreResponse
 */
GetRangeScoreResponse Client::getRangeScore(const GetRangeScoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRangeScoreWithOptions(request, headers, runtime);
}

/**
 * @summary 获取集群/节点资源实时使用情况
 *
 * @param request GetResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourcesResponse
 */
GetResourcesResponse Client::getResourcesWithOptions(const GetResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCluster()) {
    query["cluster"] = request.cluster();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.instance();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResources"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/cluster_health/instant/resource")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourcesResponse>();
}

/**
 * @summary 获取集群/节点资源实时使用情况
 *
 * @param request GetResourcesRequest
 * @return GetResourcesResponse
 */
GetResourcesResponse Client::getResources(const GetResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取功能模块配置
 *
 * @param tmpReq GetServiceFuncStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceFuncStatusResponse
 */
GetServiceFuncStatusResponse Client::getServiceFuncStatusWithOptions(const GetServiceFuncStatusRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetServiceFuncStatusShrinkRequest request = GetServiceFuncStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.params(), "params", "json"));
  }

  json query = {};
  if (!!request.hasChannel()) {
    query["channel"] = request.channel();
  }

  if (!!request.hasParamsShrink()) {
    query["params"] = request.paramsShrink();
  }

  if (!!request.hasServiceName()) {
    query["service_name"] = request.serviceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceFuncStatus"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/func-switch/get-service-func-status")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceFuncStatusResponse>();
}

/**
 * @summary 获取功能模块配置
 *
 * @param request GetServiceFuncStatusRequest
 * @return GetServiceFuncStatusResponse
 */
GetServiceFuncStatusResponse Client::getServiceFuncStatus(const GetServiceFuncStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceFuncStatusWithOptions(request, headers, runtime);
}

/**
 * @summary 查询宕机诊断任务结果
 *
 * @param request GetVmcoreDiagnosisTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVmcoreDiagnosisTaskResponse
 */
GetVmcoreDiagnosisTaskResponse Client::getVmcoreDiagnosisTaskWithOptions(const GetVmcoreDiagnosisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVmcoreDiagnosisTask"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crashAgent/diagnosis/queryTask")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVmcoreDiagnosisTaskResponse>();
}

/**
 * @summary 查询宕机诊断任务结果
 *
 * @param request GetVmcoreDiagnosisTaskRequest
 * @return GetVmcoreDiagnosisTaskResponse
 */
GetVmcoreDiagnosisTaskResponse Client::getVmcoreDiagnosisTask(const GetVmcoreDiagnosisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getVmcoreDiagnosisTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 初始化SysOM，确保角色存在
 *
 * @param request InitialSysomRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitialSysomResponse
 */
InitialSysomResponse Client::initialSysomWithOptions(const InitialSysomRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCheckOnly()) {
    body["check_only"] = request.checkOnly();
  }

  if (!!request.hasSource()) {
    body["source"] = request.source();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InitialSysom"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/initial")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitialSysomResponse>();
}

/**
 * @summary 初始化SysOM，确保角色存在
 *
 * @param request InitialSysomRequest
 * @return InitialSysomResponse
 */
InitialSysomResponse Client::initialSysom(const InitialSysomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return initialSysomWithOptions(request, headers, runtime);
}

/**
 * @summary 在指定的实例上安装 Agent
 *
 * @param request InstallAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallAgentResponse
 */
InstallAgentResponse Client::installAgentWithOptions(const InstallAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["agent_id"] = request.agentId();
  }

  if (!!request.hasAgentVersion()) {
    body["agent_version"] = request.agentVersion();
  }

  if (!!request.hasInstallType()) {
    body["install_type"] = request.installType();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.instances();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InstallAgent"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/agent/install_agent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallAgentResponse>();
}

/**
 * @summary 在指定的实例上安装 Agent
 *
 * @param request InstallAgentRequest
 * @return InstallAgentResponse
 */
InstallAgentResponse Client::installAgent(const InstallAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return installAgentWithOptions(request, headers, runtime);
}

/**
 * @summary 给集群安装组件
 *
 * @param request InstallAgentForClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallAgentForClusterResponse
 */
InstallAgentForClusterResponse Client::installAgentForClusterWithOptions(const InstallAgentForClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["agent_id"] = request.agentId();
  }

  if (!!request.hasAgentVersion()) {
    body["agent_version"] = request.agentVersion();
  }

  if (!!request.hasClusterId()) {
    body["cluster_id"] = request.clusterId();
  }

  if (!!request.hasConfigId()) {
    body["config_id"] = request.configId();
  }

  if (!!request.hasGrayscaleConfig()) {
    body["grayscale_config"] = request.grayscaleConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InstallAgentForCluster"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/agent/install_agent_by_cluster")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallAgentForClusterResponse>();
}

/**
 * @summary 给集群安装组件
 *
 * @param request InstallAgentForClusterRequest
 * @return InstallAgentForClusterResponse
 */
InstallAgentForClusterResponse Client::installAgentForCluster(const InstallAgentForClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return installAgentForClusterWithOptions(request, headers, runtime);
}

/**
 * @summary 异常项诊断跳转
 *
 * @param request InvokeAnomalyDiagnosisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokeAnomalyDiagnosisResponse
 */
InvokeAnomalyDiagnosisResponse Client::invokeAnomalyDiagnosisWithOptions(const InvokeAnomalyDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUuid()) {
    query["uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InvokeAnomalyDiagnosis"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/cluster_health/diagnosis/invoke_anomaly_diagnose")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvokeAnomalyDiagnosisResponse>();
}

/**
 * @summary 异常项诊断跳转
 *
 * @param request InvokeAnomalyDiagnosisRequest
 * @return InvokeAnomalyDiagnosisResponse
 */
InvokeAnomalyDiagnosisResponse Client::invokeAnomalyDiagnosis(const InvokeAnomalyDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return invokeAnomalyDiagnosisWithOptions(request, headers, runtime);
}

/**
 * @summary 发起诊断
 *
 * @param request InvokeDiagnosisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokeDiagnosisResponse
 */
InvokeDiagnosisResponse Client::invokeDiagnosisWithOptions(const InvokeDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannel()) {
    body["channel"] = request.channel();
  }

  if (!!request.hasParams()) {
    body["params"] = request.params();
  }

  if (!!request.hasServiceName()) {
    body["service_name"] = request.serviceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InvokeDiagnosis"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/diagnosis/invoke_diagnosis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvokeDiagnosisResponse>();
}

/**
 * @summary 发起诊断
 *
 * @param request InvokeDiagnosisRequest
 * @return InvokeDiagnosisResponse
 */
InvokeDiagnosisResponse Client::invokeDiagnosis(const InvokeDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return invokeDiagnosisWithOptions(request, headers, runtime);
}

/**
 * @summary 获取一定时间段内的异常事件
 *
 * @param request ListAbnormalyEventsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAbnormalyEventsResponse
 */
ListAbnormalyEventsResponse Client::listAbnormalyEventsWithOptions(const ListAbnormalyEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCluster()) {
    query["cluster"] = request.cluster();
  }

  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.end();
  }

  if (!!request.hasEvent()) {
    query["event"] = request.event();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.instance();
  }

  if (!!request.hasLevel()) {
    query["level"] = request.level();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request._namespace();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPod()) {
    query["pod"] = request.pod();
  }

  if (!!request.hasShowPod()) {
    query["showPod"] = request.showPod();
  }

  if (!!request.hasStart()) {
    query["start"] = request.start();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAbnormalyEvents"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/cluster_health/range/abnormaly_events")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAbnormalyEventsResponse>();
}

/**
 * @summary 获取一定时间段内的异常事件
 *
 * @param request ListAbnormalyEventsRequest
 * @return ListAbnormalyEventsResponse
 */
ListAbnormalyEventsResponse Client::listAbnormalyEvents(const ListAbnormalyEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAbnormalyEventsWithOptions(request, headers, runtime);
}

/**
 * @summary 列出 Agent 的安装记录
 *
 * @param request ListAgentInstallRecordsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentInstallRecordsResponse
 */
ListAgentInstallRecordsResponse Client::listAgentInstallRecordsWithOptions(const ListAgentInstallRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasInstanceId()) {
    query["instance_id"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPluginId()) {
    query["plugin_id"] = request.pluginId();
  }

  if (!!request.hasPluginVersion()) {
    query["plugin_version"] = request.pluginVersion();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgentInstallRecords"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/agent/list_agent_install_list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentInstallRecordsResponse>();
}

/**
 * @summary 列出 Agent 的安装记录
 *
 * @param request ListAgentInstallRecordsRequest
 * @return ListAgentInstallRecordsResponse
 */
ListAgentInstallRecordsResponse Client::listAgentInstallRecords(const ListAgentInstallRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAgentInstallRecordsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取 Agent 列表
 *
 * @param request ListAgentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentsResponse
 */
ListAgentsResponse Client::listAgentsWithOptions(const ListAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgents"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/agent/list_agents")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentsResponse>();
}

/**
 * @summary 获取 Agent 列表
 *
 * @param request ListAgentsRequest
 * @return ListAgentsResponse
 */
ListAgentsResponse Client::listAgents(const ListAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAgentsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取所有告警项
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertItemsResponse
 */
ListAlertItemsResponse Client::listAlertItemsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlertItems"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/alertPusher/alert/listItems")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertItemsResponse>();
}

/**
 * @summary 获取所有告警项
 *
 * @return ListAlertItemsResponse
 */
ListAlertItemsResponse Client::listAlertItems() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAlertItemsWithOptions(headers, runtime);
}

/**
 * @summary 用于获取用户所有推送告警的策略
 *
 * @param request ListAlertStrategiesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertStrategiesResponse
 */
ListAlertStrategiesResponse Client::listAlertStrategiesWithOptions(const ListAlertStrategiesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlertStrategies"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/alertPusher/alert/listStrategies")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertStrategiesResponse>();
}

/**
 * @summary 用于获取用户所有推送告警的策略
 *
 * @param request ListAlertStrategiesRequest
 * @return ListAlertStrategiesResponse
 */
ListAlertStrategiesResponse Client::listAlertStrategies(const ListAlertStrategiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAlertStrategiesWithOptions(request, headers, runtime);
}

/**
 * @summary 此接口用于获取已纳管/未纳管实例列表并带有实例信息
 *
 * @param request ListAllInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllInstancesResponse
 */
ListAllInstancesResponse Client::listAllInstancesWithOptions(const ListAllInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasFilters()) {
    query["filters"] = request.filters();
  }

  if (!!request.hasInstanceType()) {
    query["instanceType"] = request.instanceType();
  }

  if (!!request.hasManagedType()) {
    query["managedType"] = request.managedType();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPluginId()) {
    query["pluginId"] = request.pluginId();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllInstances"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/instance/listAllInstances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllInstancesResponse>();
}

/**
 * @summary 此接口用于获取已纳管/未纳管实例列表并带有实例信息
 *
 * @param request ListAllInstancesRequest
 * @return ListAllInstancesResponse
 */
ListAllInstancesResponse Client::listAllInstances(const ListAllInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAllInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取集群组件安装记录
 *
 * @param request ListClusterAgentInstallRecordsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterAgentInstallRecordsResponse
 */
ListClusterAgentInstallRecordsResponse Client::listClusterAgentInstallRecordsWithOptions(const ListClusterAgentInstallRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentConfigId()) {
    query["agent_config_id"] = request.agentConfigId();
  }

  if (!!request.hasClusterId()) {
    query["cluster_id"] = request.clusterId();
  }

  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPluginId()) {
    query["plugin_id"] = request.pluginId();
  }

  if (!!request.hasPluginVersion()) {
    query["plugin_version"] = request.pluginVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterAgentInstallRecords"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/agent/list_cluster_agent_install_list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterAgentInstallRecordsResponse>();
}

/**
 * @summary 获取集群组件安装记录
 *
 * @param request ListClusterAgentInstallRecordsRequest
 * @return ListClusterAgentInstallRecordsResponse
 */
ListClusterAgentInstallRecordsResponse Client::listClusterAgentInstallRecords(const ListClusterAgentInstallRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClusterAgentInstallRecordsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取当前用户的所有集群
 *
 * @param request ListClustersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClustersWithOptions(const ListClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["cluster_id"] = request.clusterId();
  }

  if (!!request.hasClusterStatus()) {
    query["cluster_status"] = request.clusterStatus();
  }

  if (!!request.hasClusterType()) {
    query["cluster_type"] = request.clusterType();
  }

  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusters"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/cluster/list_clusters")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClustersResponse>();
}

/**
 * @summary 获取当前用户的所有集群
 *
 * @param request ListClustersRequest
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClusters(const ListClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClustersWithOptions(request, headers, runtime);
}

/**
 * @summary 获取诊断历史记录列表
 *
 * @param request ListDiagnosisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDiagnosisResponse
 */
ListDiagnosisResponse Client::listDiagnosisWithOptions(const ListDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasParams()) {
    query["params"] = request.params();
  }

  if (!!request.hasServiceName()) {
    query["service_name"] = request.serviceName();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDiagnosis"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/diagnosis/list_diagnosis")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDiagnosisResponse>();
}

/**
 * @summary 获取诊断历史记录列表
 *
 * @param request ListDiagnosisRequest
 * @return ListDiagnosisResponse
 */
ListDiagnosisResponse Client::listDiagnosis(const ListDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDiagnosisWithOptions(request, headers, runtime);
}

/**
 * @summary 获取一定时间内集群节点/Pod健康度列表
 *
 * @param request ListInstanceHealthRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceHealthResponse
 */
ListInstanceHealthResponse Client::listInstanceHealthWithOptions(const ListInstanceHealthRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCluster()) {
    query["cluster"] = request.cluster();
  }

  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.end();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.instance();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasStart()) {
    query["start"] = request.start();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceHealth"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/cluster_health/range/instance_health_list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceHealthResponse>();
}

/**
 * @summary 获取一定时间内集群节点/Pod健康度列表
 *
 * @param request ListInstanceHealthRequest
 * @return ListInstanceHealthResponse
 */
ListInstanceHealthResponse Client::listInstanceHealth(const ListInstanceHealthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceHealthWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实例状态
 *
 * @param request ListInstanceStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceStatusResponse
 */
ListInstanceStatusResponse Client::listInstanceStatusWithOptions(const ListInstanceStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.instance();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceStatus"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/instance/list_instance_status")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceStatusResponse>();
}

/**
 * @summary 获取实例状态
 *
 * @param request ListInstanceStatusRequest
 * @return ListInstanceStatusResponse
 */
ListInstanceStatusResponse Client::listInstanceStatus(const ListInstanceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceStatusWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实例列表
 *
 * @param request ListInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["cluster_id"] = request.clusterId();
  }

  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.instance();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/instance/list_instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary 获取实例列表
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取ecs信息的列表，如标签列表，公网ip列表等
 *
 * @param request ListInstancesEcsInfoListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesEcsInfoListResponse
 */
ListInstancesEcsInfoListResponse Client::listInstancesEcsInfoListWithOptions(const ListInstancesEcsInfoListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInfoType()) {
    query["info_type"] = request.infoType();
  }

  if (!!request.hasInstanceId()) {
    query["instance_id"] = request.instanceId();
  }

  if (!!request.hasManagedType()) {
    query["managed_type"] = request.managedType();
  }

  if (!!request.hasPluginId()) {
    query["plugin_id"] = request.pluginId();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstancesEcsInfoList"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/instance/listInstancesEcsInfoList")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesEcsInfoListResponse>();
}

/**
 * @summary 获取ecs信息的列表，如标签列表，公网ip列表等
 *
 * @param request ListInstancesEcsInfoListRequest
 * @return ListInstancesEcsInfoListResponse
 */
ListInstancesEcsInfoListResponse Client::listInstancesEcsInfoList(const ListInstancesEcsInfoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstancesEcsInfoListWithOptions(request, headers, runtime);
}

/**
 * @summary 获取已纳管/未纳管实例信息，信息中包含ECS信息
 *
 * @param tmpReq ListInstancesWithEcsInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesWithEcsInfoResponse
 */
ListInstancesWithEcsInfoResponse Client::listInstancesWithEcsInfoWithOptions(const ListInstancesWithEcsInfoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListInstancesWithEcsInfoShrinkRequest request = ListInstancesWithEcsInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceTag()) {
    request.setInstanceTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceTag(), "instance_tag", "json"));
  }

  json query = {};
  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasHealthStatus()) {
    query["health_status"] = request.healthStatus();
  }

  if (!!request.hasInstanceId()) {
    query["instance_id"] = request.instanceId();
  }

  if (!!request.hasInstanceIdName()) {
    query["instance_id_name"] = request.instanceIdName();
  }

  if (!!request.hasInstanceName()) {
    query["instance_name"] = request.instanceName();
  }

  if (!!request.hasInstanceTagShrink()) {
    query["instance_tag"] = request.instanceTagShrink();
  }

  if (!!request.hasIsManaged()) {
    query["is_managed"] = request.isManaged();
  }

  if (!!request.hasOsName()) {
    query["os_name"] = request.osName();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPrivateIp()) {
    query["private_ip"] = request.privateIp();
  }

  if (!!request.hasPublicIp()) {
    query["public_ip"] = request.publicIp();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasResourceGroupId()) {
    query["resource_group_id"] = request.resourceGroupId();
  }

  if (!!request.hasResourceGroupIdName()) {
    query["resource_group_id_name"] = request.resourceGroupIdName();
  }

  if (!!request.hasResourceGroupName()) {
    query["resource_group_name"] = request.resourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstancesWithEcsInfo"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/instance/listInstancesWithEcsInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesWithEcsInfoResponse>();
}

/**
 * @summary 获取已纳管/未纳管实例信息，信息中包含ECS信息
 *
 * @param request ListInstancesWithEcsInfoRequest
 * @return ListInstancesWithEcsInfoResponse
 */
ListInstancesWithEcsInfoResponse Client::listInstancesWithEcsInfo(const ListInstancesWithEcsInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstancesWithEcsInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 获取插件的安装/更新/卸载实例列表
 *
 * @param request ListPluginsInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPluginsInstancesResponse
 */
ListPluginsInstancesResponse Client::listPluginsInstancesWithOptions(const ListPluginsInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasInstanceIdName()) {
    query["instance_id_name"] = request.instanceIdName();
  }

  if (!!request.hasInstanceTag()) {
    query["instance_tag"] = request.instanceTag();
  }

  if (!!request.hasOperationType()) {
    query["operation_type"] = request.operationType();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPluginId()) {
    query["plugin_id"] = request.pluginId();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPluginsInstances"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/agent/listPluginsInstances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPluginsInstancesResponse>();
}

/**
 * @summary 获取插件的安装/更新/卸载实例列表
 *
 * @param request ListPluginsInstancesRequest
 * @return ListPluginsInstancesResponse
 */
ListPluginsInstancesResponse Client::listPluginsInstances(const ListPluginsInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPluginsInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实例中的pod列表
 *
 * @param request ListPodsOfInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPodsOfInstanceResponse
 */
ListPodsOfInstanceResponse Client::listPodsOfInstanceWithOptions(const ListPodsOfInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["cluster_id"] = request.clusterId();
  }

  if (!!request.hasCurrent()) {
    query["current"] = request.current();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.instance();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPodsOfInstance"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/instance/list_pod_of_instance")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPodsOfInstanceResponse>();
}

/**
 * @summary 获取实例中的pod列表
 *
 * @param request ListPodsOfInstanceRequest
 * @return ListPodsOfInstanceResponse
 */
ListPodsOfInstanceResponse Client::listPodsOfInstance(const ListPodsOfInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPodsOfInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary 列出所有纳管了机器的区域
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRegions"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/instance/list_regions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegionsResponse>();
}

/**
 * @summary 列出所有纳管了机器的区域
 *
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRegionsWithOptions(headers, runtime);
}

/**
 * @summary 查询历史宕机诊断任务
 *
 * @param request ListVmcoreDiagnosisTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVmcoreDiagnosisTaskResponse
 */
ListVmcoreDiagnosisTaskResponse Client::listVmcoreDiagnosisTaskWithOptions(const ListVmcoreDiagnosisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDays()) {
    query["days"] = request.days();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVmcoreDiagnosisTask"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crashAgent/diagnosis/queryTaskList")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVmcoreDiagnosisTaskResponse>();
}

/**
 * @summary 查询历史宕机诊断任务
 *
 * @param request ListVmcoreDiagnosisTaskRequest
 * @return ListVmcoreDiagnosisTaskResponse
 */
ListVmcoreDiagnosisTaskResponse Client::listVmcoreDiagnosisTask(const ListVmcoreDiagnosisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVmcoreDiagnosisTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 启动AI作业分析
 *
 * @param request StartAIAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAIAnalysisResponse
 */
StartAIAnalysisResponse Client::startAIAnalysisWithOptions(const StartAIAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnalysisTool()) {
    body["analysisTool"] = request.analysisTool();
  }

  if (!!request.hasAnalysisParams()) {
    body["analysis_params"] = request.analysisParams();
  }

  if (!!request.hasChannel()) {
    body["channel"] = request.channel();
  }

  if (!!request.hasComms()) {
    body["comms"] = request.comms();
  }

  if (!!request.hasCreatedBy()) {
    body["created_by"] = request.createdBy();
  }

  if (!!request.hasInstance()) {
    body["instance"] = request.instance();
  }

  if (!!request.hasInstanceType()) {
    body["instance_type"] = request.instanceType();
  }

  if (!!request.hasIterationFunc()) {
    body["iteration_func"] = request.iterationFunc();
  }

  if (!!request.hasIterationMod()) {
    body["iteration_mod"] = request.iterationMod();
  }

  if (!!request.hasIterationRange()) {
    body["iteration_range"] = request.iterationRange();
  }

  if (!!request.hasPids()) {
    body["pids"] = request.pids();
  }

  if (!!request.hasRegion()) {
    body["region"] = request.region();
  }

  if (!!request.hasTimeout()) {
    body["timeout"] = request.timeout();
  }

  if (!!request.hasUid()) {
    body["uid"] = request.uid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartAIAnalysis"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/proxy/post/start_ai_analysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAIAnalysisResponse>();
}

/**
 * @summary 启动AI作业分析
 *
 * @param request StartAIAnalysisRequest
 * @return StartAIAnalysisResponse
 */
StartAIAnalysisResponse Client::startAIAnalysis(const StartAIAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startAIAnalysisWithOptions(request, headers, runtime);
}

/**
 * @summary 查看AI Infra差分分析结果
 *
 * @param request StartAIDiffAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAIDiffAnalysisResponse
 */
StartAIDiffAnalysisResponse Client::startAIDiffAnalysisWithOptions(const StartAIDiffAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTask1()) {
    body["task1"] = request.task1();
  }

  if (!!request.hasTask2()) {
    body["task2"] = request.task2();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartAIDiffAnalysis"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/appObserv/aiAnalysis/diffAnalysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAIDiffAnalysisResponse>();
}

/**
 * @summary 查看AI Infra差分分析结果
 *
 * @param request StartAIDiffAnalysisRequest
 * @return StartAIDiffAnalysisResponse
 */
StartAIDiffAnalysisResponse Client::startAIDiffAnalysis(const StartAIDiffAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startAIDiffAnalysisWithOptions(request, headers, runtime);
}

/**
 * @summary 卸载 SysOM Agent
 *
 * @param request UninstallAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallAgentResponse
 */
UninstallAgentResponse Client::uninstallAgentWithOptions(const UninstallAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["agent_id"] = request.agentId();
  }

  if (!!request.hasAgentVersion()) {
    body["agent_version"] = request.agentVersion();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.instances();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UninstallAgent"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/agent/uninstall_agent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallAgentResponse>();
}

/**
 * @summary 卸载 SysOM Agent
 *
 * @param request UninstallAgentRequest
 * @return UninstallAgentResponse
 */
UninstallAgentResponse Client::uninstallAgent(const UninstallAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uninstallAgentWithOptions(request, headers, runtime);
}

/**
 * @summary 给集群卸载组件
 *
 * @param request UninstallAgentForClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallAgentForClusterResponse
 */
UninstallAgentForClusterResponse Client::uninstallAgentForClusterWithOptions(const UninstallAgentForClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["agent_id"] = request.agentId();
  }

  if (!!request.hasAgentVersion()) {
    body["agent_version"] = request.agentVersion();
  }

  if (!!request.hasClusterId()) {
    body["cluster_id"] = request.clusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UninstallAgentForCluster"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/agent/uninstall_agent_by_cluster")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallAgentForClusterResponse>();
}

/**
 * @summary 给集群卸载组件
 *
 * @param request UninstallAgentForClusterRequest
 * @return UninstallAgentForClusterResponse
 */
UninstallAgentForClusterResponse Client::uninstallAgentForCluster(const UninstallAgentForClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uninstallAgentForClusterWithOptions(request, headers, runtime);
}

/**
 * @summary 用户更新推送告警策略的状态
 *
 * @param request UpdateAlertEnabledRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlertEnabledResponse
 */
UpdateAlertEnabledResponse Client::updateAlertEnabledWithOptions(const UpdateAlertEnabledRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnabled()) {
    body["enabled"] = request.enabled();
  }

  if (!!request.hasId()) {
    body["id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAlertEnabled"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/alertPusher/alert/updateEnabled")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlertEnabledResponse>();
}

/**
 * @summary 用户更新推送告警策略的状态
 *
 * @param request UpdateAlertEnabledRequest
 * @return UpdateAlertEnabledResponse
 */
UpdateAlertEnabledResponse Client::updateAlertEnabled(const UpdateAlertEnabledRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAlertEnabledWithOptions(request, headers, runtime);
}

/**
 * @summary 更新推送告警策略
 *
 * @param request UpdateAlertStrategyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlertStrategyResponse
 */
UpdateAlertStrategyResponse Client::updateAlertStrategyWithOptions(const UpdateAlertStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnabled()) {
    body["enabled"] = request.enabled();
  }

  if (!!request.hasId()) {
    body["id"] = request.id();
  }

  if (!!request.hasK8sLabel()) {
    body["k8sLabel"] = request.k8sLabel();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasStrategy()) {
    body["strategy"] = request.strategy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAlertStrategy"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/alertPusher/alert/updateStrategy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlertStrategyResponse>();
}

/**
 * @summary 更新推送告警策略
 *
 * @param request UpdateAlertStrategyRequest
 * @return UpdateAlertStrategyResponse
 */
UpdateAlertStrategyResponse Client::updateAlertStrategy(const UpdateAlertStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAlertStrategyWithOptions(request, headers, runtime);
}

/**
 * @summary 异常项关注度更新
 *
 * @param request UpdateEventsAttentionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEventsAttentionResponse
 */
UpdateEventsAttentionResponse Client::updateEventsAttentionWithOptions(const UpdateEventsAttentionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMode()) {
    body["mode"] = request.mode();
  }

  if (!!request.hasRange()) {
    body["range"] = request.range();
  }

  if (!!request.hasUuid()) {
    body["uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEventsAttention"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/openapi/proxy/post/cluster_update_events_attention")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEventsAttentionResponse>();
}

/**
 * @summary 异常项关注度更新
 *
 * @param request UpdateEventsAttentionRequest
 * @return UpdateEventsAttentionResponse
 */
UpdateEventsAttentionResponse Client::updateEventsAttention(const UpdateEventsAttentionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateEventsAttentionWithOptions(request, headers, runtime);
}

/**
 * @summary 获取功能模块配置
 *
 * @param tmpReq UpdateFuncSwitchRecordRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFuncSwitchRecordResponse
 */
UpdateFuncSwitchRecordResponse Client::updateFuncSwitchRecordWithOptions(const UpdateFuncSwitchRecordRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateFuncSwitchRecordShrinkRequest request = UpdateFuncSwitchRecordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.params(), "params", "json"));
  }

  json query = {};
  if (!!request.hasChannel()) {
    query["channel"] = request.channel();
  }

  if (!!request.hasParamsShrink()) {
    query["params"] = request.paramsShrink();
  }

  if (!!request.hasServiceName()) {
    query["service_name"] = request.serviceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFuncSwitchRecord"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/func-switch/update-service-func-switch")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFuncSwitchRecordResponse>();
}

/**
 * @summary 获取功能模块配置
 *
 * @param request UpdateFuncSwitchRecordRequest
 * @return UpdateFuncSwitchRecordResponse
 */
UpdateFuncSwitchRecordResponse Client::updateFuncSwitchRecord(const UpdateFuncSwitchRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFuncSwitchRecordWithOptions(request, headers, runtime);
}

/**
 * @summary 更新 SysOM Agent
 *
 * @param request UpgradeAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeAgentResponse
 */
UpgradeAgentResponse Client::upgradeAgentWithOptions(const UpgradeAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["agent_id"] = request.agentId();
  }

  if (!!request.hasAgentVersion()) {
    body["agent_version"] = request.agentVersion();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.instances();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpgradeAgent"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/agent/upgrade_agent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeAgentResponse>();
}

/**
 * @summary 更新 SysOM Agent
 *
 * @param request UpgradeAgentRequest
 * @return UpgradeAgentResponse
 */
UpgradeAgentResponse Client::upgradeAgent(const UpgradeAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return upgradeAgentWithOptions(request, headers, runtime);
}

/**
 * @summary 给集群更新组件
 *
 * @param request UpgradeAgentForClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeAgentForClusterResponse
 */
UpgradeAgentForClusterResponse Client::upgradeAgentForClusterWithOptions(const UpgradeAgentForClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["agent_id"] = request.agentId();
  }

  if (!!request.hasAgentVersion()) {
    body["agent_version"] = request.agentVersion();
  }

  if (!!request.hasClusterId()) {
    body["cluster_id"] = request.clusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpgradeAgentForCluster"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/am/agent/upgrade_agent_by_cluster")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeAgentForClusterResponse>();
}

/**
 * @summary 给集群更新组件
 *
 * @param request UpgradeAgentForClusterRequest
 * @return UpgradeAgentForClusterResponse
 */
UpgradeAgentForClusterResponse Client::upgradeAgentForCluster(const UpgradeAgentForClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return upgradeAgentForClusterWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace SysOM20231230