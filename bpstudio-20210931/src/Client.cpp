#include <darabonba/Core.hpp>
#include <alibabacloud/BPStudio20210931.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::BPStudio20210931::Models;
namespace AlibabaCloud
{
namespace BPStudio20210931
{

AlibabaCloud::BPStudio20210931::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("bpstudio", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Switches a disaster recovery application back to the primary zone.
 *
 * @description You can call this operation to switch a disaster recovery application back to the primary zone.
 *
 * @param request AppFailBackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AppFailBackResponse
 */
AppFailBackResponse Client::appFailBackWithOptions(const AppFailBackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AppFailBack"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AppFailBackResponse>();
}

/**
 * @summary Switches a disaster recovery application back to the primary zone.
 *
 * @description You can call this operation to switch a disaster recovery application back to the primary zone.
 *
 * @param request AppFailBackRequest
 * @return AppFailBackResponse
 */
AppFailBackResponse Client::appFailBack(const AppFailBackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return appFailBackWithOptions(request, runtime);
}

/**
 * @summary Switches a disaster recovery application to another supported zone.
 *
 * @description You can call this operation to switch a disaster recovery application to another supported zone.
 *
 * @param request AppFailOverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AppFailOverResponse
 */
AppFailOverResponse Client::appFailOverWithOptions(const AppFailOverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasFailZone()) {
    body["FailZone"] = request.failZone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AppFailOver"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AppFailOverResponse>();
}

/**
 * @summary Switches a disaster recovery application to another supported zone.
 *
 * @description You can call this operation to switch a disaster recovery application to another supported zone.
 *
 * @param request AppFailOverRequest
 * @return AppFailOverResponse
 */
AppFailOverResponse Client::appFailOver(const AppFailOverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return appFailOverWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group to which an application or template belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNewResourceGroupId()) {
    body["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Changes the resource group to which an application or template belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an application based on an official template or private template in Cloud Architect Design Tool (CADT). Before you call this operation, make sure that you understand the billing methods and prices of Alibaba Cloud services to be used in the application.
 *
 * @param tmpReq CreateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplicationWithOptions(const CreateApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateApplicationShrinkRequest request = CreateApplicationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfiguration()) {
    request.setConfigurationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.configuration(), "Configuration", "json"));
  }

  if (!!tmpReq.hasInstances()) {
    request.setInstancesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instances(), "Instances", "json"));
  }

  if (!!tmpReq.hasProcessVariables()) {
    request.setProcessVariablesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.processVariables(), "ProcessVariables", "json"));
  }

  if (!!tmpReq.hasVariables()) {
    request.setVariablesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.variables(), "Variables", "json"));
  }

  json body = {};
  if (!!request.hasAreaId()) {
    body["AreaId"] = request.areaId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConfigurationShrink()) {
    body["Configuration"] = request.configurationShrink();
  }

  if (!!request.hasCreateAsync()) {
    body["CreateAsync"] = request.createAsync();
  }

  if (!!request.hasInstancesShrink()) {
    body["Instances"] = request.instancesShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasProcessVariablesShrink()) {
    body["ProcessVariables"] = request.processVariablesShrink();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasVariablesShrink()) {
    body["Variables"] = request.variablesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateApplication"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationResponse>();
}

/**
 * @summary Creates an application based on an official template or private template in Cloud Architect Design Tool (CADT). Before you call this operation, make sure that you understand the billing methods and prices of Alibaba Cloud services to be used in the application.
 *
 * @param request CreateApplicationRequest
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplication(const CreateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationWithOptions(request, runtime);
}

/**
 * @summary 创建任务
 *
 * @param tmpReq CreateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTaskWithOptions(const CreateTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTaskShrinkRequest request = CreateTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVariables()) {
    request.setVariablesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.variables(), "Variables", "json"));
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasProcessId()) {
    body["ProcessId"] = request.processId();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  if (!!request.hasVariablesShrink()) {
    body["Variables"] = request.variablesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateTask"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTaskResponse>();
}

/**
 * @summary 创建任务
 *
 * @param request CreateTaskRequest
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTask(const CreateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes an application.
 *
 * @description Before you call this operation to delete an application, make sure that the application is in the `Destroyed_Success` state. Otherwise, the application fails to be deleted.`` You can call the [GetApplication](https://www.alibabacloud.com/help/en/bp-studio/latest/api-bpstudio-2021-09-31-getapplication) operation to query the status of an application.
 *
 * @param request DeleteApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplicationWithOptions(const DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteApplication"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationResponse>();
}

/**
 * @summary Deletes an application.
 *
 * @description Before you call this operation to delete an application, make sure that the application is in the `Destroyed_Success` state. Otherwise, the application fails to be deleted.`` You can call the [GetApplication](https://www.alibabacloud.com/help/en/bp-studio/latest/api-bpstudio-2021-09-31-getapplication) operation to query the status of an application.
 *
 * @param request DeleteApplicationRequest
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplication(const DeleteApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationWithOptions(request, runtime);
}

/**
 * @summary Deploys an application after the payment.
 *
 * @param request DeployApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployApplicationResponse
 */
DeployApplicationResponse Client::deployApplicationWithOptions(const DeployApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeployApplication"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployApplicationResponse>();
}

/**
 * @summary Deploys an application after the payment.
 *
 * @param request DeployApplicationRequest
 * @return DeployApplicationResponse
 */
DeployApplicationResponse Client::deployApplication(const DeployApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deployApplicationWithOptions(request, runtime);
}

/**
 * @summary Asynchronous execution of product operation functions.
 *
 * @param tmpReq ExecuteOperationASyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteOperationASyncResponse
 */
ExecuteOperationASyncResponse Client::executeOperationASyncWithOptions(const ExecuteOperationASyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExecuteOperationASyncShrinkRequest request = ExecuteOperationASyncShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttributes()) {
    request.setAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.attributes(), "Attributes", "json"));
  }

  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasAttributesShrink()) {
    body["Attributes"] = request.attributesShrink();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOperation()) {
    body["Operation"] = request.operation();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServiceType()) {
    body["ServiceType"] = request.serviceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExecuteOperationASync"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteOperationASyncResponse>();
}

/**
 * @summary Asynchronous execution of product operation functions.
 *
 * @param request ExecuteOperationASyncRequest
 * @return ExecuteOperationASyncResponse
 */
ExecuteOperationASyncResponse Client::executeOperationASync(const ExecuteOperationASyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeOperationASyncWithOptions(request, runtime);
}

/**
 * @summary 维护应用下资源API（同步操作）
 *
 * @param tmpReq ExecuteOperationSyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteOperationSyncResponse
 */
ExecuteOperationSyncResponse Client::executeOperationSyncWithOptions(const ExecuteOperationSyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExecuteOperationSyncShrinkRequest request = ExecuteOperationSyncShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttributes()) {
    request.setAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.attributes(), "Attributes", "json"));
  }

  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasAttributesShrink()) {
    body["Attributes"] = request.attributesShrink();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOperation()) {
    body["Operation"] = request.operation();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServiceType()) {
    body["ServiceType"] = request.serviceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExecuteOperationSync"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteOperationSyncResponse>();
}

/**
 * @summary 维护应用下资源API（同步操作）
 *
 * @param request ExecuteOperationSyncRequest
 * @return ExecuteOperationSyncResponse
 */
ExecuteOperationSyncResponse Client::executeOperationSync(const ExecuteOperationSyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeOperationSyncWithOptions(request, runtime);
}

/**
 * @summary 创建任务
 *
 * @param request ExecuteTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTaskResponse
 */
ExecuteTaskResponse Client::executeTaskWithOptions(const ExecuteTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExecuteTask"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTaskResponse>();
}

/**
 * @summary 创建任务
 *
 * @param request ExecuteTaskRequest
 * @return ExecuteTaskResponse
 */
ExecuteTaskResponse Client::executeTask(const ExecuteTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeTaskWithOptions(request, runtime);
}

/**
 * @summary The URL of the application topology image.
 *
 * @param request GetApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplicationWithOptions(const GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetApplication"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationResponse>();
}

/**
 * @summary The URL of the application topology image.
 *
 * @param request GetApplicationRequest
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplication(const GetApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationWithOptions(request, runtime);
}

/**
 * @summary 获取应用输入参数
 *
 * @param request GetApplicationVariablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationVariablesResponse
 */
GetApplicationVariablesResponse Client::getApplicationVariablesWithOptions(const GetApplicationVariablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetApplicationVariables"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationVariablesResponse>();
}

/**
 * @summary 获取应用输入参数
 *
 * @param request GetApplicationVariablesRequest
 * @return GetApplicationVariablesResponse
 */
GetApplicationVariablesResponse Client::getApplicationVariables(const GetApplicationVariablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationVariablesWithOptions(request, runtime);
}

/**
 * @summary 获取需要重新配置的变量列表
 *
 * @param request GetApplicationVariables4FailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationVariables4FailResponse
 */
GetApplicationVariables4FailResponse Client::getApplicationVariables4FailWithOptions(const GetApplicationVariables4FailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationVariables4Fail"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationVariables4FailResponse>();
}

/**
 * @summary 获取需要重新配置的变量列表
 *
 * @param request GetApplicationVariables4FailRequest
 * @return GetApplicationVariables4FailResponse
 */
GetApplicationVariables4FailResponse Client::getApplicationVariables4Fail(const GetApplicationVariables4FailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationVariables4FailWithOptions(request, runtime);
}

/**
 * @summary Asynchronously queries the result of an operation that is performed on a service instance.
 *
 * @param request GetExecuteOperationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExecuteOperationResultResponse
 */
GetExecuteOperationResultResponse Client::getExecuteOperationResultWithOptions(const GetExecuteOperationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOperationId()) {
    body["OperationId"] = request.operationId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetExecuteOperationResult"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExecuteOperationResultResponse>();
}

/**
 * @summary Asynchronously queries the result of an operation that is performed on a service instance.
 *
 * @param request GetExecuteOperationResultRequest
 * @return GetExecuteOperationResultResponse
 */
GetExecuteOperationResultResponse Client::getExecuteOperationResult(const GetExecuteOperationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExecuteOperationResultWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a disaster recovery switchover task by task ID.
 *
 * @description You can call this operation to query the status of a disaster recovery switchover task by task ID.
 *
 * @param request GetFoTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFoTaskStatusResponse
 */
GetFoTaskStatusResponse Client::getFoTaskStatusWithOptions(const GetFoTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFoTaskStatus"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFoTaskStatusResponse>();
}

/**
 * @summary Queries the status of a disaster recovery switchover task by task ID.
 *
 * @description You can call this operation to query the status of a disaster recovery switchover task by task ID.
 *
 * @param request GetFoTaskStatusRequest
 * @return GetFoTaskStatusResponse
 */
GetFoTaskStatusResponse Client::getFoTaskStatus(const GetFoTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFoTaskStatusWithOptions(request, runtime);
}

/**
 * @summary 获取模板变参可选值
 *
 * @param tmpReq GetLinkageAttributesTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLinkageAttributesTemplateResponse
 */
GetLinkageAttributesTemplateResponse Client::getLinkageAttributesTemplateWithOptions(const GetLinkageAttributesTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetLinkageAttributesTemplateShrinkRequest request = GetLinkageAttributesTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstances()) {
    request.setInstancesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instances(), "Instances", "json"));
  }

  if (!!tmpReq.hasVariables()) {
    request.setVariablesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.variables(), "Variables", "json"));
  }

  json body = {};
  if (!!request.hasAreaId()) {
    body["AreaId"] = request.areaId();
  }

  if (!!request.hasInstancesShrink()) {
    body["Instances"] = request.instancesShrink();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasTargetVariable()) {
    body["TargetVariable"] = request.targetVariable();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasVariablesShrink()) {
    body["Variables"] = request.variablesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetLinkageAttributesTemplate"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLinkageAttributesTemplateResponse>();
}

/**
 * @summary 获取模板变参可选值
 *
 * @param request GetLinkageAttributesTemplateRequest
 * @return GetLinkageAttributesTemplateResponse
 */
GetLinkageAttributesTemplateResponse Client::getLinkageAttributesTemplate(const GetLinkageAttributesTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLinkageAttributesTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the zones where the specified disaster recovery service can be switched.
 *
 * @description You can call this operation to query the zones where the specified disaster recovery service can be switched.
 *
 * @param request GetPotentialFailZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPotentialFailZonesResponse
 */
GetPotentialFailZonesResponse Client::getPotentialFailZonesWithOptions(const GetPotentialFailZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIsPlanId()) {
    body["IsPlanId"] = request.isPlanId();
  }

  if (!!request.hasObjectId()) {
    body["ObjectId"] = request.objectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetPotentialFailZones"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPotentialFailZonesResponse>();
}

/**
 * @summary Queries the zones where the specified disaster recovery service can be switched.
 *
 * @description You can call this operation to query the zones where the specified disaster recovery service can be switched.
 *
 * @param request GetPotentialFailZonesRequest
 * @return GetPotentialFailZonesResponse
 */
GetPotentialFailZonesResponse Client::getPotentialFailZones(const GetPotentialFailZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPotentialFailZonesWithOptions(request, runtime);
}

/**
 * @summary 获取询价应用变配记录
 *
 * @param request GetResource4ModifyRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResource4ModifyRecordResponse
 */
GetResource4ModifyRecordResponse Client::getResource4ModifyRecordWithOptions(const GetResource4ModifyRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetResource4ModifyRecord"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResource4ModifyRecordResponse>();
}

/**
 * @summary 获取询价应用变配记录
 *
 * @param request GetResource4ModifyRecordRequest
 * @return GetResource4ModifyRecordResponse
 */
GetResource4ModifyRecordResponse Client::getResource4ModifyRecord(const GetResource4ModifyRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResource4ModifyRecordWithOptions(request, runtime);
}

/**
 * @summary 获取询价结果
 *
 * @param request GetResult4QueryInstancePrice4ModifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResult4QueryInstancePrice4ModifyResponse
 */
GetResult4QueryInstancePrice4ModifyResponse Client::getResult4QueryInstancePrice4ModifyWithOptions(const GetResult4QueryInstancePrice4ModifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetResult4QueryInstancePrice4Modify"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResult4QueryInstancePrice4ModifyResponse>();
}

/**
 * @summary 获取询价结果
 *
 * @param request GetResult4QueryInstancePrice4ModifyRequest
 * @return GetResult4QueryInstancePrice4ModifyResponse
 */
GetResult4QueryInstancePrice4ModifyResponse Client::getResult4QueryInstancePrice4Modify(const GetResult4QueryInstancePrice4ModifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResult4QueryInstancePrice4ModifyWithOptions(request, runtime);
}

/**
 * @summary 获取Task信息
 *
 * @param request GetTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTaskWithOptions(const GetTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTask"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskResponse>();
}

/**
 * @summary 获取Task信息
 *
 * @param request GetTaskRequest
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTask(const GetTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskWithOptions(request, runtime);
}

/**
 * @summary Gets template images and information about architecture diagrams.
 *
 * @param request GetTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplateWithOptions(const GetTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegion()) {
    body["Region"] = request.region();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTemplate"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateResponse>();
}

/**
 * @summary Gets template images and information about architecture diagrams.
 *
 * @param request GetTemplateRequest
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplate(const GetTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetToken is deprecated, please use BPStudio::2021-09-31::GetApplication instead.
 *
 * @summary Obtains a temporary token that is used to read the architecture diagram. The validity period of the token is 30 minutes.
 *
 * @description >Danger:  This API is no longer recommended, and the image related to the Application has included access authorization in the GetApplication property.
 *
 * @param request GetTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTokenResponse
 */
GetTokenResponse Client::getTokenWithOptions(const GetTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetToken"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenResponse>();
}

/**
 * @deprecated OpenAPI GetToken is deprecated, please use BPStudio::2021-09-31::GetApplication instead.
 *
 * @summary Obtains a temporary token that is used to read the architecture diagram. The validity period of the token is 30 minutes.
 *
 * @description >Danger:  This API is no longer recommended, and the image related to the Application has included access authorization in the GetApplication property.
 *
 * @param request GetTokenRequest
 * @return GetTokenResponse
 */
GetTokenResponse Client::getToken(const GetTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTokenWithOptions(request, runtime);
}

/**
 * @summary Prepares for application switchover and initiates a switchover task.
 *
 * @description You can call this operation to prepare for application switchover and initiate a switchover task.
 *
 * @param request InitAppFailOverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitAppFailOverResponse
 */
InitAppFailOverResponse Client::initAppFailOverWithOptions(const InitAppFailOverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "InitAppFailOver"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitAppFailOverResponse>();
}

/**
 * @summary Prepares for application switchover and initiates a switchover task.
 *
 * @description You can call this operation to prepare for application switchover and initiate a switchover task.
 *
 * @param request InitAppFailOverRequest
 * @return InitAppFailOverResponse
 */
InitAppFailOverResponse Client::initAppFailOver(const InitAppFailOverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initAppFailOverWithOptions(request, runtime);
}

/**
 * @summary This API provides a list of all applications under the current user. The optional keyword parameter defines the keywords contained in the application name.
 *
 * @param request ListApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationResponse
 */
ListApplicationResponse Client::listApplicationWithOptions(const ListApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderType()) {
    body["OrderType"] = request.orderType();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.resourceId();
  }

  if (!!request.hasShowHide()) {
    body["ShowHide"] = request.showHide();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListApplication"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationResponse>();
}

/**
 * @summary This API provides a list of all applications under the current user. The optional keyword parameter defines the keywords contained in the application name.
 *
 * @param request ListApplicationRequest
 * @return ListApplicationResponse
 */
ListApplicationResponse Client::listApplication(const ListApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all disaster recovery plans of the current account.
 *
 * @description Queries the information about all disaster recovery plans of the current account.
 *
 * @param request ListFoCreatedAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFoCreatedAppsResponse
 */
ListFoCreatedAppsResponse Client::listFoCreatedAppsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListFoCreatedApps"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFoCreatedAppsResponse>();
}

/**
 * @summary Queries the information about all disaster recovery plans of the current account.
 *
 * @description Queries the information about all disaster recovery plans of the current account.
 *
 * @return ListFoCreatedAppsResponse
 */
ListFoCreatedAppsResponse Client::listFoCreatedApps() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFoCreatedAppsWithOptions(runtime);
}

/**
 * @summary Queries the tags of one or more applications or templates.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  json bodyFlat = {};
  if (!!request.hasResourceId()) {
    bodyFlat["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.tag();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags of one or more applications or templates.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries templates, including information such as the template name, architecture image URL, and URL of the serialized architecture image file.
 *
 * @param tmpReq ListTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplateResponse
 */
ListTemplateResponse Client::listTemplateWithOptions(const ListTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTemplateShrinkRequest request = ListTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "Tag", "json"));
  }

  json body = {};
  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderType()) {
    body["OrderType"] = request.orderType();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTagShrink()) {
    body["Tag"] = request.tagShrink();
  }

  if (!!request.hasTagList()) {
    body["TagList"] = request.tagList();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTemplate"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplateResponse>();
}

/**
 * @summary Queries templates, including information such as the template name, architecture image URL, and URL of the serialized architecture image file.
 *
 * @param request ListTemplateRequest
 * @return ListTemplateResponse
 */
ListTemplateResponse Client::listTemplate(const ListTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTemplateWithOptions(request, runtime);
}

/**
 * @summary 提交应用变配
 *
 * @param tmpReq ModifyApplicationSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApplicationSpecResponse
 */
ModifyApplicationSpecResponse Client::modifyApplicationSpecWithOptions(const ModifyApplicationSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyApplicationSpecShrinkRequest request = ModifyApplicationSpecShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceSpec()) {
    request.setInstanceSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceSpec(), "InstanceSpec", "json"));
  }

  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceSpecShrink()) {
    body["InstanceSpec"] = request.instanceSpecShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyApplicationSpec"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApplicationSpecResponse>();
}

/**
 * @summary 提交应用变配
 *
 * @param request ModifyApplicationSpecRequest
 * @return ModifyApplicationSpecResponse
 */
ModifyApplicationSpecResponse Client::modifyApplicationSpec(const ModifyApplicationSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApplicationSpecWithOptions(request, runtime);
}

/**
 * @summary 查询变配价格
 *
 * @param tmpReq QueryInstancePrice4ModifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInstancePrice4ModifyResponse
 */
QueryInstancePrice4ModifyResponse Client::queryInstancePrice4ModifyWithOptions(const QueryInstancePrice4ModifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryInstancePrice4ModifyShrinkRequest request = QueryInstancePrice4ModifyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfiguration()) {
    request.setConfigurationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.configuration(), "Configuration", "json"));
  }

  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasConfigurationShrink()) {
    body["Configuration"] = request.configurationShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryInstancePrice4Modify"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInstancePrice4ModifyResponse>();
}

/**
 * @summary 查询变配价格
 *
 * @param request QueryInstancePrice4ModifyRequest
 * @return QueryInstancePrice4ModifyResponse
 */
QueryInstancePrice4ModifyResponse Client::queryInstancePrice4Modify(const QueryInstancePrice4ModifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInstancePrice4ModifyWithOptions(request, runtime);
}

/**
 * @summary 查询变配规格列表
 *
 * @param tmpReq QueryInstanceSpec4ModifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInstanceSpec4ModifyResponse
 */
QueryInstanceSpec4ModifyResponse Client::queryInstanceSpec4ModifyWithOptions(const QueryInstanceSpec4ModifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryInstanceSpec4ModifyShrinkRequest request = QueryInstanceSpec4ModifyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMethodName()) {
    body["MethodName"] = request.methodName();
  }

  if (!!request.hasParametersShrink()) {
    body["Parameters"] = request.parametersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryInstanceSpec4Modify"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInstanceSpec4ModifyResponse>();
}

/**
 * @summary 查询变配规格列表
 *
 * @param request QueryInstanceSpec4ModifyRequest
 * @return QueryInstanceSpec4ModifyResponse
 */
QueryInstanceSpec4ModifyResponse Client::queryInstanceSpec4Modify(const QueryInstanceSpec4ModifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInstanceSpec4ModifyWithOptions(request, runtime);
}

/**
 * @summary 重新配置应用
 *
 * @param request ReConfigApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReConfigApplicationResponse
 */
ReConfigApplicationResponse Client::reConfigApplicationWithOptions(const ReConfigApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasVariables()) {
    body["Variables"] = request.variables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReConfigApplication"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReConfigApplicationResponse>();
}

/**
 * @summary 重新配置应用
 *
 * @param request ReConfigApplicationRequest
 * @return ReConfigApplicationResponse
 */
ReConfigApplicationResponse Client::reConfigApplication(const ReConfigApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reConfigApplicationWithOptions(request, runtime);
}

/**
 * @summary Releases the resources of an application.
 *
 * @param request ReleaseApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseApplicationResponse
 */
ReleaseApplicationResponse Client::releaseApplicationWithOptions(const ReleaseApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReleaseApplication"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseApplicationResponse>();
}

/**
 * @summary Releases the resources of an application.
 *
 * @param request ReleaseApplicationRequest
 * @return ReleaseApplicationResponse
 */
ReleaseApplicationResponse Client::releaseApplication(const ReleaseApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseApplicationWithOptions(request, runtime);
}

/**
 * @summary Verifies the resources of an application. ValidateApplication is an asynchronous operation. You can call the GetApplication operation to query the verification result.
 *
 * @param request ValidateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateApplicationResponse
 */
ValidateApplicationResponse Client::validateApplicationWithOptions(const ValidateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ValidateApplication"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateApplicationResponse>();
}

/**
 * @summary Verifies the resources of an application. ValidateApplication is an asynchronous operation. You can call the GetApplication operation to query the verification result.
 *
 * @param request ValidateApplicationRequest
 * @return ValidateApplicationResponse
 */
ValidateApplicationResponse Client::validateApplication(const ValidateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries the prices of resources of an application. You can call the GetApplication operation to obtain the query results.
 *
 * @param request ValuateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValuateApplicationResponse
 */
ValuateApplicationResponse Client::valuateApplicationWithOptions(const ValuateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ValuateApplication"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValuateApplicationResponse>();
}

/**
 * @summary Queries the prices of resources of an application. You can call the GetApplication operation to obtain the query results.
 *
 * @param request ValuateApplicationRequest
 * @return ValuateApplicationResponse
 */
ValuateApplicationResponse Client::valuateApplication(const ValuateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return valuateApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries the price of a template.
 *
 * @param tmpReq ValuateTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValuateTemplateResponse
 */
ValuateTemplateResponse Client::valuateTemplateWithOptions(const ValuateTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ValuateTemplateShrinkRequest request = ValuateTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstances()) {
    request.setInstancesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instances(), "Instances", "json"));
  }

  if (!!tmpReq.hasVariables()) {
    request.setVariablesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.variables(), "Variables", "json"));
  }

  json body = {};
  if (!!request.hasAreaId()) {
    body["AreaId"] = request.areaId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstancesShrink()) {
    body["Instances"] = request.instancesShrink();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasVariablesShrink()) {
    body["Variables"] = request.variablesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ValuateTemplate"},
    {"version" , "2021-09-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValuateTemplateResponse>();
}

/**
 * @summary Queries the price of a template.
 *
 * @param request ValuateTemplateRequest
 * @return ValuateTemplateResponse
 */
ValuateTemplateResponse Client::valuateTemplate(const ValuateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return valuateTemplateWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace BPStudio20210931