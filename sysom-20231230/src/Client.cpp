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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "sysom.cn-hangzhou.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Authorizes SysOM to diagnose ECS instances under the current account. You must call this operation to authorize diagnostics for a specific ECS instance before you can call the InvokeDiagnosis operation to initiate diagnostics on it.
 *
 * @description >Notice: The diagnostics feature requires a service-linked role to be created under the Resource Access Management (RAM) user. This operation automatically checks whether the service-linked role exists and creates it if it does not. The RAM user that invokes this operation must have the ram:CreateServiceLinkedRole permission.</notice>
 * Note the following when you invoke this operation to authorize SysOM to diagnose ECS instances:
 * - Each authorization is valid for 7 days. After the authorization expires, invoke this operation again to re-authorize.
 * - If the SysOM service-linked role (AliyunServiceRoleForSysom) does not exist when you invoke this operation, automatic creation is performed. The RAM user that invokes this operation must have the `ram:CreateServiceLinkedRole` permission.
 * - When you invoke this operation to authorize diagnostics for a specific instance, the label `sysom:diagnosis` is automatically associated with the target ECS instance. SysOM only allows diagnostics on instances that have this label.
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
    body["autoCreateRole"] = request.getAutoCreateRole();
  }

  if (!!request.hasAutoInstallAgent()) {
    body["autoInstallAgent"] = request.getAutoInstallAgent();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.getInstances();
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
 * @summary Authorizes SysOM to diagnose ECS instances under the current account. You must call this operation to authorize diagnostics for a specific ECS instance before you can call the InvokeDiagnosis operation to initiate diagnostics on it.
 *
 * @description >Notice: The diagnostics feature requires a service-linked role to be created under the Resource Access Management (RAM) user. This operation automatically checks whether the service-linked role exists and creates it if it does not. The RAM user that invokes this operation must have the ram:CreateServiceLinkedRole permission.</notice>
 * Note the following when you invoke this operation to authorize SysOM to diagnose ECS instances:
 * - Each authorization is valid for 7 days. After the authorization expires, invoke this operation again to re-authorize.
 * - If the SysOM service-linked role (AliyunServiceRoleForSysom) does not exist when you invoke this operation, automatic creation is performed. The RAM user that invokes this operation must have the `ram:CreateServiceLinkedRole` permission.
 * - When you invoke this operation to authorize diagnostics for a specific instance, the label `sysom:diagnosis` is automatically associated with the target ECS instance. SysOM only allows diagnostics on instances that have this label.
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
 * @summary Checks whether a target instance is supported by SysOM.
 *
 * @description This operation retrieves the list of instances that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
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
    body["instances"] = request.getInstances();
  }

  if (!!request.hasRegion()) {
    body["region"] = request.getRegion();
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
 * @summary Checks whether a target instance is supported by SysOM.
 *
 * @description This operation retrieves the list of instances that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
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
 * @summary Calls the CPU High Agent streaming SSE interface.
 *
 * @param request CpuHighAgentStreamResponseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CpuHighAgentStreamResponseResponse
 */
FutureGenerator<CpuHighAgentStreamResponseResponse> Client::cpuHighAgentStreamResponseWithSSE(const CpuHighAgentStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLlmParamString()) {
    body["llmParamString"] = request.getLlmParamString();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CpuHighAgentStreamResponse"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/highCpuAgent/streamResponse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<CpuHighAgentStreamResponseResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Calls the CPU High Agent streaming SSE interface.
 *
 * @param request CpuHighAgentStreamResponseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CpuHighAgentStreamResponseResponse
 */
CpuHighAgentStreamResponseResponse Client::cpuHighAgentStreamResponseWithOptions(const CpuHighAgentStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLlmParamString()) {
    body["llmParamString"] = request.getLlmParamString();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CpuHighAgentStreamResponse"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/highCpuAgent/streamResponse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CpuHighAgentStreamResponseResponse>();
}

/**
 * @summary Calls the CPU High Agent streaming SSE interface.
 *
 * @param request CpuHighAgentStreamResponseRequest
 * @return CpuHighAgentStreamResponseResponse
 */
CpuHighAgentStreamResponseResponse Client::cpuHighAgentStreamResponse(const CpuHighAgentStreamResponseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cpuHighAgentStreamResponseWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a contact for alert notifications.
 *
 * @param request CreateAlertDestinationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAlertDestinationResponse
 */
CreateAlertDestinationResponse Client::createAlertDestinationWithOptions(const CreateAlertDestinationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasParams()) {
    body["params"] = request.getParams();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
  }

  if (!!request.hasTarget()) {
    body["target"] = request.getTarget();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAlertDestination"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/alertPusher/alert/createDestination")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAlertDestinationResponse>();
}

/**
 * @summary Creates a contact for alert notifications.
 *
 * @param request CreateAlertDestinationRequest
 * @return CreateAlertDestinationResponse
 */
CreateAlertDestinationResponse Client::createAlertDestination(const CreateAlertDestinationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAlertDestinationWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an alert push strategy.
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
    body["enabled"] = request.getEnabled();
  }

  if (!!request.hasK8sLabel()) {
    body["k8sLabel"] = request.getK8sLabel();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasStrategy()) {
    body["strategy"] = request.getStrategy();
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
 * @summary Creates an alert push strategy.
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
 * @summary 创建集群Vpc端点连接
 *
 * @description - 需配合aliyun-tea-openapi-inner包的call_sseapi接口使用
 * - 需要按通用LLM服务输入参数填充参数，转为string后赋给llmParamString
 * - 返回数据需将string转为dict后使用，参考通用LLM服务返回格式
 *
 * @param request CreateClusterVpcEndpointConnectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterVpcEndpointConnectionResponse
 */
CreateClusterVpcEndpointConnectionResponse Client::createClusterVpcEndpointConnectionWithOptions(const CreateClusterVpcEndpointConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["clusterId"] = request.getClusterId();
  }

  if (!!request.hasDryRun()) {
    body["dryRun"] = request.getDryRun();
  }

  if (!!request.hasRegion()) {
    body["region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateClusterVpcEndpointConnection"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/k8sProxy/access/createClusterVpcEndpointConnection")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClusterVpcEndpointConnectionResponse>();
}

/**
 * @summary 创建集群Vpc端点连接
 *
 * @description - 需配合aliyun-tea-openapi-inner包的call_sseapi接口使用
 * - 需要按通用LLM服务输入参数填充参数，转为string后赋给llmParamString
 * - 返回数据需将string转为dict后使用，参考通用LLM服务返回格式
 *
 * @param request CreateClusterVpcEndpointConnectionRequest
 * @return CreateClusterVpcEndpointConnectionResponse
 */
CreateClusterVpcEndpointConnectionResponse Client::createClusterVpcEndpointConnection(const CreateClusterVpcEndpointConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createClusterVpcEndpointConnectionWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a SysOM instance inspection.
 *
 * @param request CreateInstanceInspectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceInspectionResponse
 */
CreateInstanceInspectionResponse Client::createInstanceInspectionWithOptions(const CreateInstanceInspectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstance()) {
    body["instance"] = request.getInstance();
  }

  if (!!request.hasItems()) {
    body["items"] = request.getItems();
  }

  if (!!request.hasMetricSource()) {
    body["metricSource"] = request.getMetricSource();
  }

  if (!!request.hasRegion()) {
    body["region"] = request.getRegion();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstanceInspection"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/inspection/createInstanceInspection")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceInspectionResponse>();
}

/**
 * @summary Creates a SysOM instance inspection.
 *
 * @param request CreateInstanceInspectionRequest
 * @return CreateInstanceInspectionResponse
 */
CreateInstanceInspectionResponse Client::createInstanceInspection(const CreateInstanceInspectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceInspectionWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an intelligent breakdown diagnostic node that diagnoses the specified vmcore or dmesg log file based on the input parameters.
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
    body["debuginfoCommonUrl"] = request.getDebuginfoCommonUrl();
  }

  if (!!request.hasDebuginfoUrl()) {
    body["debuginfoUrl"] = request.getDebuginfoUrl();
  }

  if (!!request.hasDmesgUrl()) {
    body["dmesgUrl"] = request.getDmesgUrl();
  }

  if (!!request.hasTaskType()) {
    body["taskType"] = request.getTaskType();
  }

  if (!!request.hasVmcoreUrl()) {
    body["vmcoreUrl"] = request.getVmcoreUrl();
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
 * @summary Creates an intelligent breakdown diagnostic node that diagnoses the specified vmcore or dmesg log file based on the input parameters.
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
 * @summary Deletes an alert contact.
 *
 * @param request DeleteAlertDestinationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlertDestinationResponse
 */
DeleteAlertDestinationResponse Client::deleteAlertDestinationWithOptions(const DeleteAlertDestinationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlertDestination"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/alertPusher/alert/deleteDestination")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlertDestinationResponse>();
}

/**
 * @summary Deletes an alert contact.
 *
 * @param request DeleteAlertDestinationRequest
 * @return DeleteAlertDestinationResponse
 */
DeleteAlertDestinationResponse Client::deleteAlertDestination(const DeleteAlertDestinationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAlertDestinationWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an alert policy for push notifications.
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
    query["id"] = request.getId();
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
 * @summary Deletes an alert policy for push notifications.
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
 * @summary Queries metric data.
 *
 * @description The instance list returned by this operation contains only instances that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
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
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.getInstance();
  }

  if (!!request.hasMetricName()) {
    query["metricName"] = request.getMetricName();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
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
 * @summary Queries metric data.
 *
 * @description The instance list returned by this operation contains only instances that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
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
 * @summary Get the response result of the copilot service
 *
 * @description - Parameters need to be filled in according to the standard LLM service input parameters, converted to a string, and assigned to llmParamString
 * - The returned data needs to be converted from string to dict before use. Refer to the standard LLM service response format
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
    body["llmParamString"] = request.getLlmParamString();
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
 * @summary Get the response result of the copilot service
 *
 * @description - Parameters need to be filled in according to the standard LLM service input parameters, converted to a string, and assigned to llmParamString
 * - The returned data needs to be converted from string to dict before use. Refer to the standard LLM service response format
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
 * @summary Calls the streaming SSE endpoint of the OS Copilot service.
 *
 * @description - Use this operation together with the call_sseapi operation in the aliyun-tea-openapi-inner package.
 * - Populate the parameters based on the standard LLM service input parameters, convert them to a string, and assign the string to llmParamString.
 * - Convert the returned string to a dictionary before use. Refer to the standard LLM service response format.
 *
 * @param request GenerateCopilotStreamResponseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateCopilotStreamResponseResponse
 */
FutureGenerator<GenerateCopilotStreamResponseResponse> Client::generateCopilotStreamResponseWithSSE(const GenerateCopilotStreamResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLlmParamString()) {
    body["llmParamString"] = request.getLlmParamString();
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
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<GenerateCopilotStreamResponseResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Calls the streaming SSE endpoint of the OS Copilot service.
 *
 * @description - Use this operation together with the call_sseapi operation in the aliyun-tea-openapi-inner package.
 * - Populate the parameters based on the standard LLM service input parameters, convert them to a string, and assign the string to llmParamString.
 * - Convert the returned string to a dictionary before use. Refer to the standard LLM service response format.
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
    body["llmParamString"] = request.getLlmParamString();
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
 * @summary Calls the streaming SSE endpoint of the OS Copilot service.
 *
 * @description - Use this operation together with the call_sseapi operation in the aliyun-tea-openapi-inner package.
 * - Populate the parameters based on the standard LLM service input parameters, convert them to a string, and assign the string to llmParamString.
 * - Convert the returned string to a dictionary before use. Refer to the standard LLM service response format.
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
 * @summary Queries the AI Infra analysis results.
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
    body["analysisId"] = request.getAnalysisId();
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
 * @summary Queries the AI Infra analysis results.
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
 * @summary Get the count of unhandled (undiagnosed) abnormal events of different levels for nodes/Pods
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
    query["cluster"] = request.getCluster();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.getEnd();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.getInstance();
  }

  if (!!request.hasLevel()) {
    query["level"] = request.getLevel();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  if (!!request.hasPod()) {
    query["pod"] = request.getPod();
  }

  if (!!request.hasShowPod()) {
    query["showPod"] = request.getShowPod();
  }

  if (!!request.hasStart()) {
    query["start"] = request.getStart();
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
 * @summary Get the count of unhandled (undiagnosed) abnormal events of different levels for nodes/Pods
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
 * @summary Get details of a specific agent
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
    query["agent_id"] = request.getAgentId();
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
 * @summary Get details of a specific agent
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
 * @summary Retrieves the execution status of an Agent installation task.
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
    query["task_id"] = request.getTaskId();
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
 * @summary Retrieves the execution status of an Agent installation task.
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
 * @summary Retrieves the information of a specified alert contact.
 *
 * @param request GetAlertDestinationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlertDestinationResponse
 */
GetAlertDestinationResponse Client::getAlertDestinationWithOptions(const GetAlertDestinationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlertDestination"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/alertPusher/alert/getDestination")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlertDestinationResponse>();
}

/**
 * @summary Retrieves the information of a specified alert contact.
 *
 * @param request GetAlertDestinationRequest
 * @return GetAlertDestinationResponse
 */
GetAlertDestinationResponse Client::getAlertDestination(const GetAlertDestinationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAlertDestinationWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves an alert for a user based on the policy ID.
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
    query["id"] = request.getId();
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
 * @summary Retrieves an alert for a user based on the policy ID.
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
 * @summary Retrieves the chat history of Copilot.
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
    body["count"] = request.getCount();
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
 * @summary Retrieves the chat history of Copilot.
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
 * @summary Retrieves the diagnostic result.
 *
 * @description The diagnostic process is asynchronous. When you call this operation, the diagnosis may still be in progress. You can check the `data.status` field in the response to determine the status. When `data.status == Success`, the diagnosis is complete and you can read the diagnostic result from `data.result`.
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
    query["task_id"] = request.getTaskId();
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
 * @summary Retrieves the diagnostic result.
 *
 * @description The diagnostic process is asynchronous. When you call this operation, the diagnosis may still be in progress. You can check the `data.status` field in the response to determine the status. When `data.status == Success`, the diagnosis is complete and you can read the diagnostic result from `data.result`.
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
 * @summary Retrieves the health status distribution of nodes or pods over a specified time period.
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
    query["cluster"] = request.getCluster();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.getEnd();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.getInstance();
  }

  if (!!request.hasStart()) {
    query["start"] = request.getStart();
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
 * @summary Retrieves the health status distribution of nodes or pods over a specified time period.
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
 * @summary Retrieves the number of nodes or the number of Pods on nodes in a cluster.
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
    query["cluster"] = request.getCluster();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.getEnd();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.getInstance();
  }

  if (!!request.hasStart()) {
    query["start"] = request.getStart();
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
 * @summary Retrieves the number of nodes or the number of Pods on nodes in a cluster.
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
 * @summary Get the list of a specific field under an instance.
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
    body["beg_end"] = request.getBegEnd();
  }

  if (!!request.hasBegStart()) {
    body["beg_start"] = request.getBegStart();
  }

  if (!!request.hasInstance()) {
    body["instance"] = request.getInstance();
  }

  if (!!request.hasPid()) {
    body["pid"] = request.getPid();
  }

  if (!!request.hasTable()) {
    body["table"] = request.getTable();
  }

  if (!!request.hasUniq()) {
    body["uniq"] = request.getUniq();
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
 * @summary Get the list of a specific field under an instance.
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
 * @summary Retrieves hot spot analysis results.
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
    body["appType"] = request.getAppType();
  }

  if (!!request.hasBegEnd()) {
    body["beg_end"] = request.getBegEnd();
  }

  if (!!request.hasBegStart()) {
    body["beg_start"] = request.getBegStart();
  }

  if (!!request.hasInstance()) {
    body["instance"] = request.getInstance();
  }

  if (!!request.hasPid()) {
    body["pid"] = request.getPid();
  }

  if (!!request.hasTable()) {
    body["table"] = request.getTable();
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
 * @summary Retrieves hot spot analysis results.
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
 * @summary Get Hotspot Comparison Tracing Results
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
    body["beg1_end"] = request.getBeg1End();
  }

  if (!!request.hasBeg1Start()) {
    body["beg1_start"] = request.getBeg1Start();
  }

  if (!!request.hasBeg2End()) {
    body["beg2_end"] = request.getBeg2End();
  }

  if (!!request.hasBeg2Start()) {
    body["beg2_start"] = request.getBeg2Start();
  }

  if (!!request.hasHotType()) {
    body["hot_type"] = request.getHotType();
  }

  if (!!request.hasInstance1()) {
    body["instance1"] = request.getInstance1();
  }

  if (!!request.hasInstance2()) {
    body["instance2"] = request.getInstance2();
  }

  if (!!request.hasPid1()) {
    body["pid1"] = request.getPid1();
  }

  if (!!request.hasPid2()) {
    body["pid2"] = request.getPid2();
  }

  if (!!request.hasTable()) {
    body["table"] = request.getTable();
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
 * @summary Get Hotspot Comparison Tracing Results
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
 * @summary Get Hotspot Instance List
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
    body["beg_end"] = request.getBegEnd();
  }

  if (!!request.hasBegStart()) {
    body["beg_start"] = request.getBegStart();
  }

  if (!!request.hasTable()) {
    body["table"] = request.getTable();
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
 * @summary Get Hotspot Instance List
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
 * @summary Retrieves the PID list of a specified instance.
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
    body["beg_end"] = request.getBegEnd();
  }

  if (!!request.hasBegStart()) {
    body["beg_start"] = request.getBegStart();
  }

  if (!!request.hasInstance()) {
    body["instance"] = request.getInstance();
  }

  if (!!request.hasTable()) {
    body["table"] = request.getTable();
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
 * @summary Retrieves the PID list of a specified instance.
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
 * @summary Retrieves hot spot tracking results.
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
    body["beg_end"] = request.getBegEnd();
  }

  if (!!request.hasBegStart()) {
    body["beg_start"] = request.getBegStart();
  }

  if (!!request.hasHotType()) {
    body["hot_type"] = request.getHotType();
  }

  if (!!request.hasInstance()) {
    body["instance"] = request.getInstance();
  }

  if (!!request.hasPid()) {
    body["pid"] = request.getPid();
  }

  if (!!request.hasTable()) {
    body["table"] = request.getTable();
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
 * @summary Retrieves hot spot tracking results.
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
 * @summary Retrieves a SysOM inspection report.
 *
 * @param request GetInspectionReportRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInspectionReportResponse
 */
GetInspectionReportResponse Client::getInspectionReportWithOptions(const GetInspectionReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReportId()) {
    query["reportId"] = request.getReportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInspectionReport"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/inspection/getInspectionReport")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInspectionReportResponse>();
}

/**
 * @summary Retrieves a SysOM inspection report.
 *
 * @param request GetInspectionReportRequest
 * @return GetInspectionReportResponse
 */
GetInspectionReportResponse Client::getInspectionReport(const GetInspectionReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInspectionReportWithOptions(request, headers, runtime);
}

/**
 * @summary Get real-time cluster/node health score
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
    query["cluster"] = request.getCluster();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.getInstance();
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
 * @summary Get real-time cluster/node health score
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
 * @summary Retrieves a list of AI Infra analysis records.
 *
 * @param request GetListRecordRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetListRecordResponse
 */
GetListRecordResponse Client::getListRecordWithOptions(const GetListRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalysisId()) {
    query["analysisId"] = request.getAnalysisId();
  }

  if (!!request.hasCurrent()) {
    query["current"] = request.getCurrent();
  }

  if (!!request.hasCustomId()) {
    query["customId"] = request.getCustomId();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
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
 * @summary Retrieves a list of AI Infra analysis records.
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
 * @summary Get the proportion of abnormal issues in cluster nodes/pods within a specified time range
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
    query["cluster"] = request.getCluster();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.getEnd();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.getInstance();
  }

  if (!!request.hasStart()) {
    query["start"] = request.getStart();
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
 * @summary Get the proportion of abnormal issues in cluster nodes/pods within a specified time range
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
 * @summary Retrieves the health score trend.
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
    query["cluster"] = request.getCluster();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.getEnd();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.getInstance();
  }

  if (!!request.hasStart()) {
    query["start"] = request.getStart();
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
 * @summary Retrieves the health score trend.
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
 * @summary Retrieves the real-time resource usage of a cluster or node.
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
    query["cluster"] = request.getCluster();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.getInstance();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
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
 * @summary Retrieves the real-time resource usage of a cluster or node.
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
 * @summary Retrieves the configuration of a feature module.
 *
 * @description Retrieves the service configuration status.
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
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "params", "json"));
  }

  json query = {};
  if (!!request.hasChannel()) {
    query["channel"] = request.getChannel();
  }

  if (!!request.hasParamsShrink()) {
    query["params"] = request.getParamsShrink();
  }

  if (!!request.hasServiceName()) {
    query["service_name"] = request.getServiceName();
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
 * @summary Retrieves the configuration of a feature module.
 *
 * @description Retrieves the service configuration status.
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
 * @summary Queries the execution status and diagnostic result of a diagnostic task by task ID.
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
    query["taskId"] = request.getTaskId();
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
 * @summary Queries the execution status and diagnostic result of a diagnostic task by task ID.
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
 * @summary Initializes SysOM to ensure that the service-linked role exists.
 *
 * @description Some SysOM API operations require role assumption based on the `AliyunServiceRoleForSysom` service-linked role. Before using SysOM features, invoke this operation to perform initialization and ensure that the service-linked role has been created.
 * - `check_only`: If this parameter is set to True, the operation only checks whether the service-linked role exists and does not create it. If this parameter is set to False or left empty, the operation performs automatic creation of the service-linked role if it does not exist.
 * > 
 * > Note: When you call this operation to initialize the role through the API, you agree to the user agreement of the operating system console by default. For more information, see [Operating system console overview](https://www.alibabacloud.com/help/en/alinux/product-overview/os-console-overview) and [Alibaba Cloud Service Trial Terms](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud202001091714_51956.html).
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
    body["check_only"] = request.getCheckOnly();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
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
 * @summary Initializes SysOM to ensure that the service-linked role exists.
 *
 * @description Some SysOM API operations require role assumption based on the `AliyunServiceRoleForSysom` service-linked role. Before using SysOM features, invoke this operation to perform initialization and ensure that the service-linked role has been created.
 * - `check_only`: If this parameter is set to True, the operation only checks whether the service-linked role exists and does not create it. If this parameter is set to False or left empty, the operation performs automatic creation of the service-linked role if it does not exist.
 * > 
 * > Note: When you call this operation to initialize the role through the API, you agree to the user agreement of the operating system console by default. For more information, see [Operating system console overview](https://www.alibabacloud.com/help/en/alinux/product-overview/os-console-overview) and [Alibaba Cloud Service Trial Terms](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud202001091714_51956.html).
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
 * @summary Installs an Agent on a specified instance.
 *
 * @description Calling this operation to install an Agent is asynchronous. After the call, a task_id is returned. You can use this ID to call the GetAgentTask operation to retrieve the task execution status.
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
    body["agent_id"] = request.getAgentId();
  }

  if (!!request.hasAgentVersion()) {
    body["agent_version"] = request.getAgentVersion();
  }

  if (!!request.hasInstallType()) {
    body["install_type"] = request.getInstallType();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.getInstances();
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
 * @summary Installs an Agent on a specified instance.
 *
 * @description Calling this operation to install an Agent is asynchronous. After the call, a task_id is returned. You can use this ID to call the GetAgentTask operation to retrieve the task execution status.
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
 * @summary Install component for cluster
 *
 * @description After installing a component for the target ACK cluster:
 * 1. First, when the cluster is managed for the first time, the component will be installed on all ECS instances currently in the cluster. If the cluster has more than 50 nodes, only 50 instances will be covered in the first batch.
 * 2. Then, the SysOM console periodically checks the scaling status of the managed cluster. Once a new ECS instance is added to the cluster, the SysOM console automatically installs the component on it without user intervention.
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
    body["agent_id"] = request.getAgentId();
  }

  if (!!request.hasAgentVersion()) {
    body["agent_version"] = request.getAgentVersion();
  }

  if (!!request.hasClusterId()) {
    body["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasConfigId()) {
    body["config_id"] = request.getConfigId();
  }

  if (!!request.hasGrayscaleConfig()) {
    body["grayscale_config"] = request.getGrayscaleConfig();
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
 * @summary Install component for cluster
 *
 * @description After installing a component for the target ACK cluster:
 * 1. First, when the cluster is managed for the first time, the component will be installed on all ECS instances currently in the cluster. If the cluster has more than 50 nodes, only 50 instances will be covered in the first batch.
 * 2. Then, the SysOM console periodically checks the scaling status of the managed cluster. Once a new ECS instance is added to the cluster, the SysOM console automatically installs the component on it without user intervention.
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
 * @summary Initiates an anomaly diagnostics task.
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
    query["uuid"] = request.getUuid();
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
 * @summary Initiates an anomaly diagnostics task.
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
 * @summary Initiate Diagnosis.
 *
 * @description The following requirements must be met to diagnose a target ECS instance:
 * - The target ECS instance must be in the Running state.
 * - The Cloud Assistant must be installed on the target ECS instance. If it is not installed, refer to [Install the Cloud Assistant Agent](https://help.aliyun.com/zh/ecs/user-guide/install-the-cloud-assistant-agent) for installation.
 * - You must call the AuthDiagnosis API to authorize SysOM to diagnose the target ECS instance. If authorization is not granted, this API will fail directly.
 * - This API requires that the SysOM service-linked role (AliyunServiceRoleForSysom) has been created. This API does not automatically create the service role. If the service role does not exist, you must first call AuthDiagnosis for authorization, which will create the aforementioned service role.
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
    body["channel"] = request.getChannel();
  }

  if (!!request.hasParams()) {
    body["params"] = request.getParams();
  }

  if (!!request.hasServiceName()) {
    body["service_name"] = request.getServiceName();
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
 * @summary Initiate Diagnosis.
 *
 * @description The following requirements must be met to diagnose a target ECS instance:
 * - The target ECS instance must be in the Running state.
 * - The Cloud Assistant must be installed on the target ECS instance. If it is not installed, refer to [Install the Cloud Assistant Agent](https://help.aliyun.com/zh/ecs/user-guide/install-the-cloud-assistant-agent) for installation.
 * - You must call the AuthDiagnosis API to authorize SysOM to diagnose the target ECS instance. If authorization is not granted, this API will fail directly.
 * - This API requires that the SysOM service-linked role (AliyunServiceRoleForSysom) has been created. This API does not automatically create the service role. If the service role does not exist, you must first call AuthDiagnosis for authorization, which will create the aforementioned service role.
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
 * @summary Retrieves anomaly event information for a cluster, node, or pod within a specified time range.
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
    query["cluster"] = request.getCluster();
  }

  if (!!request.hasCurrent()) {
    query["current"] = request.getCurrent();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.getEnd();
  }

  if (!!request.hasEvent()) {
    query["event"] = request.getEvent();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.getInstance();
  }

  if (!!request.hasLevel()) {
    query["level"] = request.getLevel();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPod()) {
    query["pod"] = request.getPod();
  }

  if (!!request.hasShowPod()) {
    query["showPod"] = request.getShowPod();
  }

  if (!!request.hasStart()) {
    query["start"] = request.getStart();
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
 * @summary Retrieves anomaly event information for a cluster, node, or pod within a specified time range.
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
 * @summary Lists the installation records of an Agent.
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
    query["current"] = request.getCurrent();
  }

  if (!!request.hasInstanceId()) {
    query["instance_id"] = request.getInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPluginId()) {
    query["plugin_id"] = request.getPluginId();
  }

  if (!!request.hasPluginVersion()) {
    query["plugin_version"] = request.getPluginVersion();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
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
 * @summary Lists the installation records of an Agent.
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
 * @summary Retrieves a list of agents.
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
    query["current"] = request.getCurrent();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
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
 * @summary Retrieves a list of agents.
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
 * @summary This API is used to get the list of alert contacts
 *
 * @param request ListAlertDestinationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertDestinationsResponse
 */
ListAlertDestinationsResponse Client::listAlertDestinationsWithOptions(const ListAlertDestinationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrent()) {
    query["current"] = request.getCurrent();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlertDestinations"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/alertPusher/alert/listDestinations")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertDestinationsResponse>();
}

/**
 * @summary This API is used to get the list of alert contacts
 *
 * @param request ListAlertDestinationsRequest
 * @return ListAlertDestinationsResponse
 */
ListAlertDestinationsResponse Client::listAlertDestinations(const ListAlertDestinationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAlertDestinationsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves all alert metrics.
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
 * @summary Retrieves all alert metrics.
 *
 * @return ListAlertItemsResponse
 */
ListAlertItemsResponse Client::listAlertItems() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAlertItemsWithOptions(headers, runtime);
}

/**
 * @summary Retrieves all push alert policies for the current user.
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
    query["current"] = request.getCurrent();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
 * @summary Retrieves all push alert policies for the current user.
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
 * @summary This API is used to retrieve a list of managed/unmanaged instances along with their instance information.
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
    query["current"] = request.getCurrent();
  }

  if (!!request.hasFilters()) {
    query["filters"] = request.getFilters();
  }

  if (!!request.hasInstanceType()) {
    query["instanceType"] = request.getInstanceType();
  }

  if (!!request.hasManagedType()) {
    query["managedType"] = request.getManagedType();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPluginId()) {
    query["pluginId"] = request.getPluginId();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
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
 * @summary This API is used to retrieve a list of managed/unmanaged instances along with their instance information.
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
 * @summary Get cluster component installation records
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
    query["agent_config_id"] = request.getAgentConfigId();
  }

  if (!!request.hasClusterId()) {
    query["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasCurrent()) {
    query["current"] = request.getCurrent();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPluginId()) {
    query["plugin_id"] = request.getPluginId();
  }

  if (!!request.hasPluginVersion()) {
    query["plugin_version"] = request.getPluginVersion();
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
 * @summary Get cluster component installation records
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
 * @summary Retrieve all managed clusters of the current user
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
    query["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasClusterStatus()) {
    query["cluster_status"] = request.getClusterStatus();
  }

  if (!!request.hasClusterType()) {
    query["cluster_type"] = request.getClusterType();
  }

  if (!!request.hasCurrent()) {
    query["current"] = request.getCurrent();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
 * @summary Retrieve all managed clusters of the current user
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
 * @summary Obtain the list of diagnostic history.
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
    query["current"] = request.getCurrent();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasParams()) {
    query["params"] = request.getParams();
  }

  if (!!request.hasServiceName()) {
    query["service_name"] = request.getServiceName();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
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
 * @summary Obtain the list of diagnostic history.
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
 * @summary Retrieves the health status list of cluster nodes or Pods within a specified time range.
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
    query["cluster"] = request.getCluster();
  }

  if (!!request.hasCurrent()) {
    query["current"] = request.getCurrent();
  }

  if (!!request.hasEnd()) {
    query["end"] = request.getEnd();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.getInstance();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStart()) {
    query["start"] = request.getStart();
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
 * @summary Retrieves the health status list of cluster nodes or Pods within a specified time range.
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
 * @summary Retrieves instance statuses.
 *
 * @description Retrieves the list of machines managed by SysOM.
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
    query["current"] = request.getCurrent();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.getInstance();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
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
 * @summary Retrieves instance statuses.
 *
 * @description Retrieves the list of machines managed by SysOM.
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
 * @summary Retrieves a list of instances.
 *
 * @description This operation retrieves the list of instances that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
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
    query["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasCurrent()) {
    query["current"] = request.getCurrent();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.getInstance();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
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
 * @summary Retrieves a list of instances.
 *
 * @description This operation retrieves the list of instances that are already managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
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
 * @summary Retrieves lists of ECS information for instances, such as tag lists and public IP address lists.
 *
 * @description The instance list retrieved by this operation contains only machines that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
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
    query["info_type"] = request.getInfoType();
  }

  if (!!request.hasInstanceId()) {
    query["instance_id"] = request.getInstanceId();
  }

  if (!!request.hasManagedType()) {
    query["managed_type"] = request.getManagedType();
  }

  if (!!request.hasPluginId()) {
    query["plugin_id"] = request.getPluginId();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
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
 * @summary Retrieves lists of ECS information for instances, such as tag lists and public IP address lists.
 *
 * @description The instance list retrieved by this operation contains only machines that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
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
 * @summary Retrieves information about managed and unmanaged instances, including ECS information.
 *
 * @description The instance list returned by this operation contains only machines that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
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
    request.setInstanceTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceTag(), "instance_tag", "json"));
  }

  json query = {};
  if (!!request.hasCurrent()) {
    query["current"] = request.getCurrent();
  }

  if (!!request.hasHealthStatus()) {
    query["health_status"] = request.getHealthStatus();
  }

  if (!!request.hasInstanceId()) {
    query["instance_id"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIdName()) {
    query["instance_id_name"] = request.getInstanceIdName();
  }

  if (!!request.hasInstanceName()) {
    query["instance_name"] = request.getInstanceName();
  }

  if (!!request.hasInstanceTagShrink()) {
    query["instance_tag"] = request.getInstanceTagShrink();
  }

  if (!!request.hasIsManaged()) {
    query["is_managed"] = request.getIsManaged();
  }

  if (!!request.hasOsName()) {
    query["os_name"] = request.getOsName();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPrivateIp()) {
    query["private_ip"] = request.getPrivateIp();
  }

  if (!!request.hasPublicIp()) {
    query["public_ip"] = request.getPublicIp();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasResourceGroupId()) {
    query["resource_group_id"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceGroupIdName()) {
    query["resource_group_id_name"] = request.getResourceGroupIdName();
  }

  if (!!request.hasResourceGroupName()) {
    query["resource_group_name"] = request.getResourceGroupName();
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
 * @summary Retrieves information about managed and unmanaged instances, including ECS information.
 *
 * @description The instance list returned by this operation contains only machines that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
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
 * @summary Retrieves the list of instances for plug-in installation, update, or uninstallation.
 *
 * @description The instance list retrieved by this operation contains only machines that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
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
    query["current"] = request.getCurrent();
  }

  if (!!request.hasInstanceIdName()) {
    query["instance_id_name"] = request.getInstanceIdName();
  }

  if (!!request.hasInstanceTag()) {
    query["instance_tag"] = request.getInstanceTag();
  }

  if (!!request.hasOperationType()) {
    query["operation_type"] = request.getOperationType();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPluginId()) {
    query["plugin_id"] = request.getPluginId();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
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
 * @summary Retrieves the list of instances for plug-in installation, update, or uninstallation.
 *
 * @description The instance list retrieved by this operation contains only machines that are managed by SysOM. If an ECS instance exists but is not managed by SysOM, it does not appear in the list.
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
 * @summary Retrieves the list of pods in a cluster or instance.
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
    query["cluster_id"] = request.getClusterId();
  }

  if (!!request.hasCurrent()) {
    query["current"] = request.getCurrent();
  }

  if (!!request.hasInstance()) {
    query["instance"] = request.getInstance();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
 * @summary Retrieves the list of pods in a cluster or instance.
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
 * @summary Lists all regions that contain managed instances.
 *
 * @description This operation retrieves the list of regions where the current user has instances managed by SysOM. If a user has ECS instances in a region but none of them are managed by SysOM, that region is not included in the response.
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
 * @summary Lists all regions that contain managed instances.
 *
 * @description This operation retrieves the list of regions where the current user has instances managed by SysOM. If a user has ECS instances in a region but none of them are managed by SysOM, that region is not included in the response.
 *
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRegionsWithOptions(headers, runtime);
}

/**
 * @summary Query the historical crash diagnosis task list.
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
    query["days"] = request.getDays();
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
 * @summary Query the historical crash diagnosis task list.
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
 * @summary Start AI job analysis.
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
    body["analysisTool"] = request.getAnalysisTool();
  }

  if (!!request.hasAnalysisParams()) {
    body["analysis_params"] = request.getAnalysisParams();
  }

  if (!!request.hasChannel()) {
    body["channel"] = request.getChannel();
  }

  if (!!request.hasComms()) {
    body["comms"] = request.getComms();
  }

  if (!!request.hasCreatedBy()) {
    body["created_by"] = request.getCreatedBy();
  }

  if (!!request.hasInstance()) {
    body["instance"] = request.getInstance();
  }

  if (!!request.hasInstanceType()) {
    body["instance_type"] = request.getInstanceType();
  }

  if (!!request.hasIterationFunc()) {
    body["iteration_func"] = request.getIterationFunc();
  }

  if (!!request.hasIterationMod()) {
    body["iteration_mod"] = request.getIterationMod();
  }

  if (!!request.hasIterationRange()) {
    body["iteration_range"] = request.getIterationRange();
  }

  if (!!request.hasPids()) {
    body["pids"] = request.getPids();
  }

  if (!!request.hasRegion()) {
    body["region"] = request.getRegion();
  }

  if (!!request.hasTimeout()) {
    body["timeout"] = request.getTimeout();
  }

  if (!!request.hasUid()) {
    body["uid"] = request.getUid();
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
 * @summary Start AI job analysis.
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
 * @summary Starts an AI Infra differential analysis.
 *
 * @description Currently, only comparative analysis of the same pid across different steps within the same AI Infra analysis record is supported.
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
    body["task1"] = request.getTask1();
  }

  if (!!request.hasTask2()) {
    body["task2"] = request.getTask2();
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
 * @summary Starts an AI Infra differential analysis.
 *
 * @description Currently, only comparative analysis of the same pid across different steps within the same AI Infra analysis record is supported.
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
 * @summary Uninstalls a specified version of a component.
 *
 * @description Calling this operation to uninstall an Agent is asynchronous. After the call, a task_id is returned. Use this ID to call the GetAgentTask operation to retrieve the execution status of the task.
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
    body["agent_id"] = request.getAgentId();
  }

  if (!!request.hasAgentVersion()) {
    body["agent_version"] = request.getAgentVersion();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.getInstances();
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
 * @summary Uninstalls a specified version of a component.
 *
 * @description Calling this operation to uninstall an Agent is asynchronous. After the call, a task_id is returned. Use this ID to call the GetAgentTask operation to retrieve the execution status of the task.
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
 * @summary Uninstalls a component from a cluster.
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
    body["agent_id"] = request.getAgentId();
  }

  if (!!request.hasAgentVersion()) {
    body["agent_version"] = request.getAgentVersion();
  }

  if (!!request.hasClusterId()) {
    body["cluster_id"] = request.getClusterId();
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
 * @summary Uninstalls a component from a cluster.
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
 * @summary Updates an alert contact.
 *
 * @description .
 *
 * @param request UpdateAlertDestinationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlertDestinationResponse
 */
UpdateAlertDestinationResponse Client::updateAlertDestinationWithOptions(const UpdateAlertDestinationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasParams()) {
    body["params"] = request.getParams();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
  }

  if (!!request.hasTarget()) {
    body["target"] = request.getTarget();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAlertDestination"},
    {"version" , "2023-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/alertPusher/alert/updateDestination")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlertDestinationResponse>();
}

/**
 * @summary Updates an alert contact.
 *
 * @description .
 *
 * @param request UpdateAlertDestinationRequest
 * @return UpdateAlertDestinationResponse
 */
UpdateAlertDestinationResponse Client::updateAlertDestination(const UpdateAlertDestinationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAlertDestinationWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the status of a push alert policy.
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
    body["enabled"] = request.getEnabled();
  }

  if (!!request.hasId()) {
    body["id"] = request.getId();
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
 * @summary Updates the status of a push alert policy.
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
 * @summary Updates a push alert policy.
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
    body["enabled"] = request.getEnabled();
  }

  if (!!request.hasId()) {
    body["id"] = request.getId();
  }

  if (!!request.hasK8sLabel()) {
    body["k8sLabel"] = request.getK8sLabel();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasStrategy()) {
    body["strategy"] = request.getStrategy();
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
 * @summary Updates a push alert policy.
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
 * @summary Updates the attention level of an anomaly item. Adjusting the attention level affects the sensitivity of the anomaly detection algorithm.
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
    body["mode"] = request.getMode();
  }

  if (!!request.hasRange()) {
    body["range"] = request.getRange();
  }

  if (!!request.hasUuid()) {
    body["uuid"] = request.getUuid();
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
 * @summary Updates the attention level of an anomaly item. Adjusting the attention level affects the sensitivity of the anomaly detection algorithm.
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
 * @summary Updates the configuration of a service feature module.
 *
 * @description - Populate parameters according to the general LLM service input parameters, convert them to a string, and assign the string to llmParamString.
 * - Convert the returned data from a string to a dict before use. Refer to the general LLM service response format.
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
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "params", "json"));
  }

  json query = {};
  if (!!request.hasChannel()) {
    query["channel"] = request.getChannel();
  }

  if (!!request.hasParamsShrink()) {
    query["params"] = request.getParamsShrink();
  }

  if (!!request.hasServiceName()) {
    query["service_name"] = request.getServiceName();
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
 * @summary Updates the configuration of a service feature module.
 *
 * @description - Populate parameters according to the general LLM service input parameters, convert them to a string, and assign the string to llmParamString.
 * - Convert the returned data from a string to a dict before use. Refer to the general LLM service response format.
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
 * @summary Updates an installed component to a specified version.
 *
 * @description Updating the Agent by calling this operation is asynchronous. After you call this operation, a task_id is returned. You can use this ID to call the GetAgentTask operation to query the execution status of the task.
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
    body["agent_id"] = request.getAgentId();
  }

  if (!!request.hasAgentVersion()) {
    body["agent_version"] = request.getAgentVersion();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.getInstances();
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
 * @summary Updates an installed component to a specified version.
 *
 * @description Updating the Agent by calling this operation is asynchronous. After you call this operation, a task_id is returned. You can use this ID to call the GetAgentTask operation to query the execution status of the task.
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
 * @summary Updates components for a cluster.
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
    body["agent_id"] = request.getAgentId();
  }

  if (!!request.hasAgentVersion()) {
    body["agent_version"] = request.getAgentVersion();
  }

  if (!!request.hasClusterId()) {
    body["cluster_id"] = request.getClusterId();
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
 * @summary Updates components for a cluster.
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