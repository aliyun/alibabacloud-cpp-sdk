#include <darabonba/Core.hpp>
#include <alibabacloud/Searchplat20240401.hpp>
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
using namespace AlibabaCloud::Searchplat20240401::Models;
namespace AlibabaCloud
{
namespace Searchplat20240401
{

AlibabaCloud::Searchplat20240401::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"eu-central-1" , "searchplat.eu-central-1.aliyuncs.com"},
    {"cn-shanghai" , "searchplat.cn-shanghai.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("searchplat", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Stops a service.
 *
 * @param request CeaseFunctionInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CeaseFunctionInstanceResponse
 */
CeaseFunctionInstanceResponse Client::ceaseFunctionInstanceWithOptions(const string &workspaceName, const string &functionName, const string &instanceName, const CeaseFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CeaseFunctionInstance"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName) , "/actions/cease")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CeaseFunctionInstanceResponse>();
}

/**
 * @summary Stops a service.
 *
 * @param request CeaseFunctionInstanceRequest
 * @return CeaseFunctionInstanceResponse
 */
CeaseFunctionInstanceResponse Client::ceaseFunctionInstance(const string &workspaceName, const string &functionName, const string &instanceName, const CeaseFunctionInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return ceaseFunctionInstanceWithOptions(workspaceName, functionName, instanceName, request, headers, runtime);
}

/**
 * @summary Creates an asynchronous task.
 *
 * @param request CreateAsyncTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAsyncTaskResponse
 */
CreateAsyncTaskResponse Client::createAsyncTaskWithOptions(const string &workspaceName, const CreateAsyncTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasDataId()) {
    body["dataId"] = request.getDataId();
  }

  if (!!request.hasId()) {
    body["id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasServiceId()) {
    body["serviceId"] = request.getServiceId();
  }

  if (!!request.hasServiceType()) {
    body["serviceType"] = request.getServiceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAsyncTask"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/async-tasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAsyncTaskResponse>();
}

/**
 * @summary Creates an asynchronous task.
 *
 * @param request CreateAsyncTaskRequest
 * @return CreateAsyncTaskResponse
 */
CreateAsyncTaskResponse Client::createAsyncTask(const string &workspaceName, const CreateAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAsyncTaskWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Creates a knowledge base-related configuration.
 *
 * @param request CreateCapabilityRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCapabilityResponse
 */
CreateCapabilityResponse Client::createCapabilityWithOptions(const string &workspaceName, const string &itemCategory, const CreateCapabilityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasItemDesc()) {
    body["itemDesc"] = request.getItemDesc();
  }

  if (!!request.hasItemName()) {
    body["itemName"] = request.getItemName();
  }

  if (!!request.hasItemValue()) {
    body["itemValue"] = request.getItemValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCapability"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/capabilities/" , Darabonba::Encode::Encoder::percentEncode(itemCategory) , "/items")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCapabilityResponse>();
}

/**
 * @summary Creates a knowledge base-related configuration.
 *
 * @param request CreateCapabilityRequest
 * @return CreateCapabilityResponse
 */
CreateCapabilityResponse Client::createCapability(const string &workspaceName, const string &itemCategory, const CreateCapabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCapabilityWithOptions(workspaceName, itemCategory, request, headers, runtime);
}

/**
 * @summary Creates a configuration item in a specified workspace. The prompt and lark types are supported.
 *
 * @description ## Operation description
 * - This API operation allows you to create a configuration for a specific workspace.
 * - The `configType` parameter specifies the type of configuration to create. Valid values: `prompt` and `lark`.
 * - When `dryRun` is set to `true`, the API operation only validates the request without actually performing the creation.
 * - The `configData` field varies depending on the value of `configType`. Refer to the examples for the specific structure to construct the request body.
 *
 * @param request CreateConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConfigResponse
 */
CreateConfigResponse Client::createConfigWithOptions(const string &workspaceName, const string &configType, const CreateConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasConfigData()) {
    body["configData"] = request.getConfigData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateConfig"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/configs/" , Darabonba::Encode::Encoder::percentEncode(configType))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConfigResponse>();
}

/**
 * @summary Creates a configuration item in a specified workspace. The prompt and lark types are supported.
 *
 * @description ## Operation description
 * - This API operation allows you to create a configuration for a specific workspace.
 * - The `configType` parameter specifies the type of configuration to create. Valid values: `prompt` and `lark`.
 * - When `dryRun` is set to `true`, the API operation only validates the request without actually performing the creation.
 * - The `configData` field varies depending on the value of `configType`. Refer to the examples for the specific structure to construct the request body.
 *
 * @param request CreateConfigRequest
 * @return CreateConfigResponse
 */
CreateConfigResponse Client::createConfig(const string &workspaceName, const string &configType, const CreateConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createConfigWithOptions(workspaceName, configType, request, headers, runtime);
}

/**
 * @summary Creates access credentials.
 *
 * @param request CreateCredentialsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCredentialsResponse
 */
CreateCredentialsResponse Client::createCredentialsWithOptions(const string &workspaceName, const CreateCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCredentials"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/credentials")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCredentialsResponse>();
}

/**
 * @summary Creates access credentials.
 *
 * @param request CreateCredentialsRequest
 * @return CreateCredentialsResponse
 */
CreateCredentialsResponse Client::createCredentials(const string &workspaceName, const CreateCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCredentialsWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Creates experience data.
 *
 * @param request CreateExperienceDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExperienceDataResponse
 */
CreateExperienceDataResponse Client::createExperienceDataWithOptions(const string &workspaceName, const CreateExperienceDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasDataSize()) {
    body["dataSize"] = request.getDataSize();
  }

  if (!!request.hasDataType()) {
    body["dataType"] = request.getDataType();
  }

  if (!!request.hasDataValue()) {
    body["dataValue"] = request.getDataValue();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasServiceType()) {
    body["serviceType"] = request.getServiceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateExperienceData"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/experience-data")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExperienceDataResponse>();
}

/**
 * @summary Creates experience data.
 *
 * @param request CreateExperienceDataRequest
 * @return CreateExperienceDataResponse
 */
CreateExperienceDataResponse Client::createExperienceData(const string &workspaceName, const CreateExperienceDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createExperienceDataWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Creates a service configuration.
 *
 * @param request CreateFunctionInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFunctionInstanceResponse
 */
CreateFunctionInstanceResponse Client::createFunctionInstanceWithOptions(const string &workspaceName, const string &functionName, const CreateFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCreateParameters()) {
    body["createParameters"] = request.getCreateParameters();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasFunctionType()) {
    body["functionType"] = request.getFunctionType();
  }

  if (!!request.hasInstanceName()) {
    body["instanceName"] = request.getInstanceName();
  }

  if (!!request.hasModelType()) {
    body["modelType"] = request.getModelType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFunctionInstance"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFunctionInstanceResponse>();
}

/**
 * @summary Creates a service configuration.
 *
 * @param request CreateFunctionInstanceRequest
 * @return CreateFunctionInstanceResponse
 */
CreateFunctionInstanceResponse Client::createFunctionInstance(const string &workspaceName, const string &functionName, const CreateFunctionInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFunctionInstanceWithOptions(workspaceName, functionName, request, headers, runtime);
}

/**
 * @summary Creates a service configuration task.
 *
 * @param request CreateFunctionTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFunctionTaskResponse
 */
CreateFunctionTaskResponse Client::createFunctionTaskWithOptions(const string &workspaceName, const string &functionName, const string &instanceName, const CreateFunctionTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFunctionTask"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName) , "/tasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFunctionTaskResponse>();
}

/**
 * @summary Creates a service configuration task.
 *
 * @param request CreateFunctionTaskRequest
 * @return CreateFunctionTaskResponse
 */
CreateFunctionTaskResponse Client::createFunctionTask(const string &workspaceName, const string &functionName, const string &instanceName, const CreateFunctionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFunctionTaskWithOptions(workspaceName, functionName, instanceName, request, headers, runtime);
}

/**
 * @summary Creates an offline processing task for video retrieval. You can configure the data source, processing parameters, and output destination.
 *
 * @description ## Operation description.
 *
 * @param request CreateOfflineTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOfflineTaskResponse
 */
CreateOfflineTaskResponse Client::createOfflineTaskWithOptions(const string &workspaceName, const string &type, const CreateOfflineTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDraft()) {
    query["draft"] = request.getDraft();
  }

  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasMeta()) {
    body["meta"] = request.getMeta();
  }

  if (!!request.hasParameters()) {
    body["parameters"] = request.getParameters();
  }

  if (!!request.hasProcessors()) {
    body["processors"] = request.getProcessors();
  }

  if (!!request.hasSink()) {
    body["sink"] = request.getSink();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateOfflineTask"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/offline-tasks/" , Darabonba::Encode::Encoder::percentEncode(type))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOfflineTaskResponse>();
}

/**
 * @summary Creates an offline processing task for video retrieval. You can configure the data source, processing parameters, and output destination.
 *
 * @description ## Operation description.
 *
 * @param request CreateOfflineTaskRequest
 * @return CreateOfflineTaskResponse
 */
CreateOfflineTaskResponse Client::createOfflineTask(const string &workspaceName, const string &type, const CreateOfflineTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createOfflineTaskWithOptions(workspaceName, type, request, headers, runtime);
}

/**
 * @summary Creates an evaluation task for the RAG edition.
 *
 * @param request CreateRagEvaluatorTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRagEvaluatorTaskResponse
 */
CreateRagEvaluatorTaskResponse Client::createRagEvaluatorTaskWithOptions(const string &workspaceName, const CreateRagEvaluatorTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["app_name"] = request.getAppName();
  }

  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasDataSourceConfig()) {
    body["data_source_config"] = request.getDataSourceConfig();
  }

  if (!!request.hasEmails()) {
    body["emails"] = request.getEmails();
  }

  if (!!request.hasEvaluateConfig()) {
    body["evaluate_config"] = request.getEvaluateConfig();
  }

  if (!!request.hasHasDataSource()) {
    body["has_data_source"] = request.getHasDataSource();
  }

  if (!!request.hasMetrics()) {
    body["metrics"] = request.getMetrics();
  }

  if (!!request.hasTaskName()) {
    body["task_name"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRagEvaluatorTask"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/rag-evaluator/v1/api/task")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRagEvaluatorTaskResponse>();
}

/**
 * @summary Creates an evaluation task for the RAG edition.
 *
 * @param request CreateRagEvaluatorTaskRequest
 * @return CreateRagEvaluatorTaskResponse
 */
CreateRagEvaluatorTaskResponse Client::createRagEvaluatorTask(const string &workspaceName, const CreateRagEvaluatorTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRagEvaluatorTaskWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Create Workspace
 *
 * @param request CreateWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspaceWithOptions(const CreateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChargeType()) {
    body["chargeType"] = request.getChargeType();
  }

  if (!!request.hasEngineType()) {
    body["engineType"] = request.getEngineType();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasQuota()) {
    body["quota"] = request.getQuota();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkspace"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkspaceResponse>();
}

/**
 * @summary Create Workspace
 *
 * @param request CreateWorkspaceRequest
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspace(const CreateWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkspaceWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a specific configuration item from a specified workspace.
 *
 * @description ## Operation description
 * This API operation allows you to delete a specific configuration item by specifying the workspace name, configuration category, and configuration name. Before calling this operation, ensure that you have sufficient permissions (such as the `DeleteCapability` action in a RAM policy). After a configuration item is deleted, all related data and services may be affected.
 *
 * @param request DeleteCapabilityRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCapabilityResponse
 */
DeleteCapabilityResponse Client::deleteCapabilityWithOptions(const string &workspaceName, const string &itemCategory, const string &itemName, const DeleteCapabilityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCapability"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/capabilities/" , Darabonba::Encode::Encoder::percentEncode(itemCategory) , "/items/" , Darabonba::Encode::Encoder::percentEncode(itemName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCapabilityResponse>();
}

/**
 * @summary Deletes a specific configuration item from a specified workspace.
 *
 * @description ## Operation description
 * This API operation allows you to delete a specific configuration item by specifying the workspace name, configuration category, and configuration name. Before calling this operation, ensure that you have sufficient permissions (such as the `DeleteCapability` action in a RAM policy). After a configuration item is deleted, all related data and services may be affected.
 *
 * @param request DeleteCapabilityRequest
 * @return DeleteCapabilityResponse
 */
DeleteCapabilityResponse Client::deleteCapability(const string &workspaceName, const string &itemCategory, const string &itemName, const DeleteCapabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCapabilityWithOptions(workspaceName, itemCategory, itemName, request, headers, runtime);
}

/**
 * @summary Deletes a specific type of configuration from a specified workspace.
 *
 * @description ## Request description.
 *
 * @param request DeleteConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConfigResponse
 */
DeleteConfigResponse Client::deleteConfigWithOptions(const string &workspaceName, const string &configType, const string &id, const DeleteConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConfig"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/configs/" , Darabonba::Encode::Encoder::percentEncode(configType) , "/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConfigResponse>();
}

/**
 * @summary Deletes a specific type of configuration from a specified workspace.
 *
 * @description ## Request description.
 *
 * @param request DeleteConfigRequest
 * @return DeleteConfigResponse
 */
DeleteConfigResponse Client::deleteConfig(const string &workspaceName, const string &configType, const string &id, const DeleteConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConfigWithOptions(workspaceName, configType, id, request, headers, runtime);
}

/**
 * @summary Deletes an access credential.
 *
 * @param request DeleteCredentialsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCredentialsResponse
 */
DeleteCredentialsResponse Client::deleteCredentialsWithOptions(const string &token, const string &workspaceName, const DeleteCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCredentials"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/credentials/" , Darabonba::Encode::Encoder::percentEncode(token))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCredentialsResponse>();
}

/**
 * @summary Deletes an access credential.
 *
 * @param request DeleteCredentialsRequest
 * @return DeleteCredentialsResponse
 */
DeleteCredentialsResponse Client::deleteCredentials(const string &token, const string &workspaceName, const DeleteCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCredentialsWithOptions(token, workspaceName, request, headers, runtime);
}

/**
 * @summary Delete experience data
 *
 * @param request DeleteExperienceDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExperienceDataResponse
 */
DeleteExperienceDataResponse Client::deleteExperienceDataWithOptions(const string &id, const string &workspaceName, const DeleteExperienceDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExperienceData"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/experience-data/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExperienceDataResponse>();
}

/**
 * @summary Delete experience data
 *
 * @param request DeleteExperienceDataRequest
 * @return DeleteExperienceDataResponse
 */
DeleteExperienceDataResponse Client::deleteExperienceData(const string &id, const string &workspaceName, const DeleteExperienceDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteExperienceDataWithOptions(id, workspaceName, request, headers, runtime);
}

/**
 * @summary Deletes a service configuration.
 *
 * @param request DeleteFunctionInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFunctionInstanceResponse
 */
DeleteFunctionInstanceResponse Client::deleteFunctionInstanceWithOptions(const string &workspaceName, const string &functionName, const string &instanceName, const DeleteFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFunctionInstance"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFunctionInstanceResponse>();
}

/**
 * @summary Deletes a service configuration.
 *
 * @param request DeleteFunctionInstanceRequest
 * @return DeleteFunctionInstanceResponse
 */
DeleteFunctionInstanceResponse Client::deleteFunctionInstance(const string &workspaceName, const string &functionName, const string &instanceName, const DeleteFunctionInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFunctionInstanceWithOptions(workspaceName, functionName, instanceName, request, headers, runtime);
}

/**
 * @summary Deletes a batch task.
 *
 * @param request DeleteOfflineTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOfflineTaskResponse
 */
DeleteOfflineTaskResponse Client::deleteOfflineTaskWithOptions(const string &workspaceName, const string &type, const string &taskName, const DeleteOfflineTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOfflineTask"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/offline-tasks/" , Darabonba::Encode::Encoder::percentEncode(type) , "/" , Darabonba::Encode::Encoder::percentEncode(taskName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOfflineTaskResponse>();
}

/**
 * @summary Deletes a batch task.
 *
 * @param request DeleteOfflineTaskRequest
 * @return DeleteOfflineTaskResponse
 */
DeleteOfflineTaskResponse Client::deleteOfflineTask(const string &workspaceName, const string &type, const string &taskName, const DeleteOfflineTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteOfflineTaskWithOptions(workspaceName, type, taskName, request, headers, runtime);
}

/**
 * @summary Deletes a RAG evaluation task.
 *
 * @param request DeleteRagEvaluatorTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRagEvaluatorTaskResponse
 */
DeleteRagEvaluatorTaskResponse Client::deleteRagEvaluatorTaskWithOptions(const string &workspaceName, const string &taskId, const DeleteRagEvaluatorTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRagEvaluatorTask"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/rag-evaluator/v1/api/task/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRagEvaluatorTaskResponse>();
}

/**
 * @summary Deletes a RAG evaluation task.
 *
 * @param request DeleteRagEvaluatorTaskRequest
 * @return DeleteRagEvaluatorTaskResponse
 */
DeleteRagEvaluatorTaskResponse Client::deleteRagEvaluatorTask(const string &workspaceName, const string &taskId, const DeleteRagEvaluatorTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRagEvaluatorTaskWithOptions(workspaceName, taskId, request, headers, runtime);
}

/**
 * @summary Deletes a workspace.
 *
 * @param request DeleteWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspaceWithOptions(const string &workspaceName, const DeleteWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkspace"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkspaceResponse>();
}

/**
 * @summary Deletes a workspace.
 *
 * @param request DeleteWorkspaceRequest
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspace(const string &workspaceName, const DeleteWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkspaceWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Query the details of a configuration item of a specific category within a specified workspace.
 *
 * @description ## Request Description
 * This API is used to retrieve specific configuration information based on the provided workspace name, configuration category, and configuration name. Please ensure the parameters in the request path are accurate, especially the three required fields: `workspaceName`, `itemCategory`, and `itemName`. Additionally, please note that `itemCategory` currently only supports the `ai_search_agent` category.
 *
 * @param request DescribeCapabilityRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCapabilityResponse
 */
DescribeCapabilityResponse Client::describeCapabilityWithOptions(const string &workspaceName, const string &itemCategory, const string &itemName, const DescribeCapabilityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCapability"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/capabilities/" , Darabonba::Encode::Encoder::percentEncode(itemCategory) , "/items/" , Darabonba::Encode::Encoder::percentEncode(itemName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCapabilityResponse>();
}

/**
 * @summary Query the details of a configuration item of a specific category within a specified workspace.
 *
 * @description ## Request Description
 * This API is used to retrieve specific configuration information based on the provided workspace name, configuration category, and configuration name. Please ensure the parameters in the request path are accurate, especially the three required fields: `workspaceName`, `itemCategory`, and `itemName`. Additionally, please note that `itemCategory` currently only supports the `ai_search_agent` category.
 *
 * @param request DescribeCapabilityRequest
 * @return DescribeCapabilityResponse
 */
DescribeCapabilityResponse Client::describeCapability(const string &workspaceName, const string &itemCategory, const string &itemName, const DescribeCapabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeCapabilityWithOptions(workspaceName, itemCategory, itemName, request, headers, runtime);
}

/**
 * @summary DescribeRegions.
 *
 * @param request DescribeRegionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/regions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary DescribeRegions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the details of an asynchronous task.
 *
 * @param request GetAsyncTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsyncTaskResponse
 */
GetAsyncTaskResponse Client::getAsyncTaskWithOptions(const string &workspaceName, const string &id, const GetAsyncTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAsyncTask"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/async-tasks/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAsyncTaskResponse>();
}

/**
 * @summary Retrieves the details of an asynchronous task.
 *
 * @param request GetAsyncTaskRequest
 * @return GetAsyncTaskResponse
 */
GetAsyncTaskResponse Client::getAsyncTask(const string &workspaceName, const string &id, const GetAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAsyncTaskWithOptions(workspaceName, id, request, headers, runtime);
}

/**
 * @summary Queries a specific type of configuration from a specified workspace.
 *
 * @description ## Request description.
 *
 * @param request GetConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConfigResponse
 */
GetConfigResponse Client::getConfigWithOptions(const string &workspaceName, const string &configType, const string &id, const GetConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConfig"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/configs/" , Darabonba::Encode::Encoder::percentEncode(configType) , "/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConfigResponse>();
}

/**
 * @summary Queries a specific type of configuration from a specified workspace.
 *
 * @description ## Request description.
 *
 * @param request GetConfigRequest
 * @return GetConfigResponse
 */
GetConfigResponse Client::getConfig(const string &workspaceName, const string &configType, const string &id, const GetConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConfigWithOptions(workspaceName, configType, id, request, headers, runtime);
}

/**
 * @summary Retrieves the details of an access credential.
 *
 * @param request GetCredentialsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCredentialsResponse
 */
GetCredentialsResponse Client::getCredentialsWithOptions(const string &token, const string &workspaceName, const GetCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCredentials"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/credentials/" , Darabonba::Encode::Encoder::percentEncode(token))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCredentialsResponse>();
}

/**
 * @summary Retrieves the details of an access credential.
 *
 * @param request GetCredentialsRequest
 * @return GetCredentialsResponse
 */
GetCredentialsResponse Client::getCredentials(const string &token, const string &workspaceName, const GetCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCredentialsWithOptions(token, workspaceName, request, headers, runtime);
}

/**
 * @summary Retrieves the details of experience data.
 *
 * @param request GetExperienceDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExperienceDataResponse
 */
GetExperienceDataResponse Client::getExperienceDataWithOptions(const string &workspaceName, const string &id, const GetExperienceDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExperienceData"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/experience-data/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExperienceDataResponse>();
}

/**
 * @summary Retrieves the details of experience data.
 *
 * @param request GetExperienceDataRequest
 * @return GetExperienceDataResponse
 */
GetExperienceDataResponse Client::getExperienceData(const string &workspaceName, const string &id, const GetExperienceDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExperienceDataWithOptions(workspaceName, id, request, headers, runtime);
}

/**
 * @summary Queries the details of a specific feature instance in a specified workspace.
 *
 * @param request GetFunctionInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFunctionInstanceResponse
 */
GetFunctionInstanceResponse Client::getFunctionInstanceWithOptions(const string &workspaceName, const string &functionName, const string &instanceName, const GetFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutput()) {
    query["output"] = request.getOutput();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFunctionInstance"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFunctionInstanceResponse>();
}

/**
 * @summary Queries the details of a specific feature instance in a specified workspace.
 *
 * @param request GetFunctionInstanceRequest
 * @return GetFunctionInstanceResponse
 */
GetFunctionInstanceResponse Client::getFunctionInstance(const string &workspaceName, const string &functionName, const string &instanceName, const GetFunctionInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFunctionInstanceWithOptions(workspaceName, functionName, instanceName, request, headers, runtime);
}

/**
 * @summary Retrieves information about an offline node.
 *
 * @param request GetOfflineTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOfflineTaskResponse
 */
GetOfflineTaskResponse Client::getOfflineTaskWithOptions(const string &workspaceName, const string &type, const string &taskName, const GetOfflineTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOfflineTask"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/offline-tasks/" , Darabonba::Encode::Encoder::percentEncode(type) , "/" , Darabonba::Encode::Encoder::percentEncode(taskName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOfflineTaskResponse>();
}

/**
 * @summary Retrieves information about an offline node.
 *
 * @param request GetOfflineTaskRequest
 * @return GetOfflineTaskResponse
 */
GetOfflineTaskResponse Client::getOfflineTask(const string &workspaceName, const string &type, const string &taskName, const GetOfflineTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getOfflineTaskWithOptions(workspaceName, type, taskName, request, headers, runtime);
}

/**
 * @summary Queries the details of offline task logs in a specified workspace.
 *
 * @description ## Operation description
 * - This operation allows you to retrieve offline task logs information by specifying the workspace name, node type, and node name.
 * - Provide a valid `regionId` as one of the query parameters to specify the area for the request.
 * - The returned information includes but is not limited to network configurations (private ES and public ES) and their enabling status, domain names, and IP whitelist groups.
 * - Note: Ensure that you have sufficient permissions (such as the `GetLog` action in the RAM policy) to invoke this operation.
 *
 * @param request GetOfflineTaskLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOfflineTaskLogResponse
 */
GetOfflineTaskLogResponse Client::getOfflineTaskLogWithOptions(const string &workspaceName, const string &type, const string &taskName, const GetOfflineTaskLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOfflineTaskLog"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/offline-tasks/" , Darabonba::Encode::Encoder::percentEncode(type) , "/" , Darabonba::Encode::Encoder::percentEncode(taskName) , "/log")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOfflineTaskLogResponse>();
}

/**
 * @summary Queries the details of offline task logs in a specified workspace.
 *
 * @description ## Operation description
 * - This operation allows you to retrieve offline task logs information by specifying the workspace name, node type, and node name.
 * - Provide a valid `regionId` as one of the query parameters to specify the area for the request.
 * - The returned information includes but is not limited to network configurations (private ES and public ES) and their enabling status, domain names, and IP whitelist groups.
 * - Note: Ensure that you have sufficient permissions (such as the `GetLog` action in the RAM policy) to invoke this operation.
 *
 * @param request GetOfflineTaskLogRequest
 * @return GetOfflineTaskLogResponse
 */
GetOfflineTaskLogResponse Client::getOfflineTaskLog(const string &workspaceName, const string &type, const string &taskName, const GetOfflineTaskLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getOfflineTaskLogWithOptions(workspaceName, type, taskName, request, headers, runtime);
}

/**
 * @summary Retrieves a RAG evaluation task.
 *
 * @param request GetRagEvaluatorTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRagEvaluatorTaskResponse
 */
GetRagEvaluatorTaskResponse Client::getRagEvaluatorTaskWithOptions(const string &workspaceName, const string &taskId, const GetRagEvaluatorTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRagEvaluatorTask"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/rag-evaluator/v1/api/task/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRagEvaluatorTaskResponse>();
}

/**
 * @summary Retrieves a RAG evaluation task.
 *
 * @param request GetRagEvaluatorTaskRequest
 * @return GetRagEvaluatorTaskResponse
 */
GetRagEvaluatorTaskResponse Client::getRagEvaluatorTask(const string &workspaceName, const string &taskId, const GetRagEvaluatorTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRagEvaluatorTaskWithOptions(workspaceName, taskId, request, headers, runtime);
}

/**
 * @summary Retrieves data table field information.
 *
 * @param request GetTableColumnsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableColumnsResponse
 */
GetTableColumnsResponse Client::getTableColumnsWithOptions(const string &workspaceName, const string &dataSourceType, const GetTableColumnsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParams()) {
    query["params"] = request.getParams();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableColumns"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/data-sources/" , Darabonba::Encode::Encoder::percentEncode(dataSourceType) , "/columns")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableColumnsResponse>();
}

/**
 * @summary Retrieves data table field information.
 *
 * @param request GetTableColumnsRequest
 * @return GetTableColumnsResponse
 */
GetTableColumnsResponse Client::getTableColumns(const string &workspaceName, const string &dataSourceType, const GetTableColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableColumnsWithOptions(workspaceName, dataSourceType, request, headers, runtime);
}

/**
 * @param request GetTableFieldsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableFieldsResponse
 */
GetTableFieldsResponse Client::getTableFieldsWithOptions(const string &workspaceName, const string &dataSourceType, const GetTableFieldsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParams()) {
    query["params"] = request.getParams();
  }

  if (!!request.hasRawType()) {
    query["rawType"] = request.getRawType();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableFields"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/data-sources/" , Darabonba::Encode::Encoder::percentEncode(dataSourceType) , "/fields")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableFieldsResponse>();
}

/**
 * @param request GetTableFieldsRequest
 * @return GetTableFieldsResponse
 */
GetTableFieldsResponse Client::getTableFields(const string &workspaceName, const string &dataSourceType, const GetTableFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableFieldsWithOptions(workspaceName, dataSourceType, request, headers, runtime);
}

/**
 * @summary Retrieves data tables.
 *
 * @param request GetTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTablesResponse
 */
GetTablesResponse Client::getTablesWithOptions(const string &workspaceName, const string &dataSourceType, const GetTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParams()) {
    query["params"] = request.getParams();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTables"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/data-sources/" , Darabonba::Encode::Encoder::percentEncode(dataSourceType) , "/tables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTablesResponse>();
}

/**
 * @summary Retrieves data tables.
 *
 * @param request GetTablesRequest
 * @return GetTablesResponse
 */
GetTablesResponse Client::getTables(const string &workspaceName, const string &dataSourceType, const GetTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTablesWithOptions(workspaceName, dataSourceType, request, headers, runtime);
}

/**
 * @summary Retrieves a workspace.
 *
 * @param request GetWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspaceWithOptions(const string &workspaceName, const GetWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkspace"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspaceResponse>();
}

/**
 * @summary Retrieves a workspace.
 *
 * @param request GetWorkspaceRequest
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspace(const string &workspaceName, const GetWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkspaceWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Retrieves a list of asynchronous tasks.
 *
 * @param request ListAsyncTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAsyncTasksResponse
 */
ListAsyncTasksResponse Client::listAsyncTasksWithOptions(const string &workspaceName, const ListAsyncTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataId()) {
    query["dataId"] = request.getDataId();
  }

  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.getServiceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAsyncTasks"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/async-tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAsyncTasksResponse>();
}

/**
 * @summary Retrieves a list of asynchronous tasks.
 *
 * @param request ListAsyncTasksRequest
 * @return ListAsyncTasksResponse
 */
ListAsyncTasksResponse Client::listAsyncTasks(const string &workspaceName, const ListAsyncTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAsyncTasksWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Queries the list of configuration items of a specific category in a specified workspace.
 *
 * @description ## Operation description
 * You can use this API operation to retrieve the list of configuration items based on the specified workspace name and configuration category. Paged query is supported. Use the `pageNumber` and `pageSize` parameters to control the number of results and the page number. The `nextToken` and `maxResults` parameters are also provided for paged query when handling large amounts of data.
 *
 * @param request ListCapabilitiesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCapabilitiesResponse
 */
ListCapabilitiesResponse Client::listCapabilitiesWithOptions(const string &workspaceName, const string &itemCategory, const ListCapabilitiesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCapabilities"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/capabilities/" , Darabonba::Encode::Encoder::percentEncode(itemCategory) , "/items")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCapabilitiesResponse>();
}

/**
 * @summary Queries the list of configuration items of a specific category in a specified workspace.
 *
 * @description ## Operation description
 * You can use this API operation to retrieve the list of configuration items based on the specified workspace name and configuration category. Paged query is supported. Use the `pageNumber` and `pageSize` parameters to control the number of results and the page number. The `nextToken` and `maxResults` parameters are also provided for paged query when handling large amounts of data.
 *
 * @param request ListCapabilitiesRequest
 * @return ListCapabilitiesResponse
 */
ListCapabilitiesResponse Client::listCapabilities(const string &workspaceName, const string &itemCategory, const ListCapabilitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCapabilitiesWithOptions(workspaceName, itemCategory, request, headers, runtime);
}

/**
 * @summary Queries the list of configurations of a specific type in a specified workspace.
 *
 * @description ## Request description.
 *
 * @param request ListConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConfigsResponse
 */
ListConfigsResponse Client::listConfigsWithOptions(const string &workspaceName, const string &configType, const ListConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["filter"] = request.getFilter();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConfigs"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/configs/" , Darabonba::Encode::Encoder::percentEncode(configType))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConfigsResponse>();
}

/**
 * @summary Queries the list of configurations of a specific type in a specified workspace.
 *
 * @description ## Request description.
 *
 * @param request ListConfigsRequest
 * @return ListConfigsResponse
 */
ListConfigsResponse Client::listConfigs(const string &workspaceName, const string &configType, const ListConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConfigsWithOptions(workspaceName, configType, request, headers, runtime);
}

/**
 * @summary Retrieves a list of access credentials.
 *
 * @param request ListCredentialsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCredentialsResponse
 */
ListCredentialsResponse Client::listCredentialsWithOptions(const string &workspaceName, const ListCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCredentials"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/credentials")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCredentialsResponse>();
}

/**
 * @summary Retrieves a list of access credentials.
 *
 * @param request ListCredentialsRequest
 * @return ListCredentialsResponse
 */
ListCredentialsResponse Client::listCredentials(const string &workspaceName, const ListCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCredentialsWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Retrieves all experience data in a specified workspace, with support for filtering by service type and data type.
 *
 * @description ## Operation description
 * - This API operation queries all experience data of a user in a specific workspace. The results are sorted by creation time in descending order by default.
 * - Pagination is not supported. However, you can filter data by using the serviceType and dataType parameters.
 * - workspaceName is a path parameter and must be specified to indicate the workspace to query.
 *
 * @param request ListExperienceDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExperienceDataResponse
 */
ListExperienceDataResponse Client::listExperienceDataWithOptions(const string &workspaceName, const ListExperienceDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataType()) {
    query["dataType"] = request.getDataType();
  }

  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.getServiceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExperienceData"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/experience-data")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExperienceDataResponse>();
}

/**
 * @summary Retrieves all experience data in a specified workspace, with support for filtering by service type and data type.
 *
 * @description ## Operation description
 * - This API operation queries all experience data of a user in a specific workspace. The results are sorted by creation time in descending order by default.
 * - Pagination is not supported. However, you can filter data by using the serviceType and dataType parameters.
 * - workspaceName is a path parameter and must be specified to indicate the workspace to query.
 *
 * @param request ListExperienceDataRequest
 * @return ListExperienceDataResponse
 */
ListExperienceDataResponse Client::listExperienceData(const string &workspaceName, const ListExperienceDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listExperienceDataWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Retrieves a list of service configurations.
 *
 * @param request ListFunctionInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFunctionInstancesResponse
 */
ListFunctionInstancesResponse Client::listFunctionInstancesWithOptions(const string &workspaceName, const string &functionName, const ListFunctionInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFunctionType()) {
    query["functionType"] = request.getFunctionType();
  }

  if (!!request.hasModelType()) {
    query["modelType"] = request.getModelType();
  }

  if (!!request.hasOutput()) {
    query["output"] = request.getOutput();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFunctionInstances"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFunctionInstancesResponse>();
}

/**
 * @summary Retrieves a list of service configurations.
 *
 * @param request ListFunctionInstancesRequest
 * @return ListFunctionInstancesResponse
 */
ListFunctionInstancesResponse Client::listFunctionInstances(const string &workspaceName, const string &functionName, const ListFunctionInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFunctionInstancesWithOptions(workspaceName, functionName, request, headers, runtime);
}

/**
 * @summary Retrieves the restriction items of a feature.
 *
 * @param request ListFunctionRestrictionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFunctionRestrictionsResponse
 */
ListFunctionRestrictionsResponse Client::listFunctionRestrictionsWithOptions(const string &workspaceName, const string &functionName, const string &restrictionName, const ListFunctionRestrictionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelType()) {
    query["modelType"] = request.getModelType();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFunctionRestrictions"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/restrictions/" , Darabonba::Encode::Encoder::percentEncode(restrictionName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFunctionRestrictionsResponse>();
}

/**
 * @summary Retrieves the restriction items of a feature.
 *
 * @param request ListFunctionRestrictionsRequest
 * @return ListFunctionRestrictionsResponse
 */
ListFunctionRestrictionsResponse Client::listFunctionRestrictions(const string &workspaceName, const string &functionName, const string &restrictionName, const ListFunctionRestrictionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFunctionRestrictionsWithOptions(workspaceName, functionName, restrictionName, request, headers, runtime);
}

/**
 * @summary Get Offline Task Information List
 *
 * @param tmpReq ListOfflineTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOfflineTaskResponse
 */
ListOfflineTaskResponse Client::listOfflineTaskWithOptions(const string &workspaceName, const string &type, const ListOfflineTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListOfflineTaskShrinkRequest request = ListOfflineTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabels()) {
    request.setLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLabels(), "labels", "json"));
  }

  if (!!tmpReq.hasTaskStatus()) {
    request.setTaskStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskStatus(), "taskStatus", "json"));
  }

  json query = {};
  if (!!request.hasLabelsShrink()) {
    query["labels"] = request.getLabelsShrink();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasTaskName()) {
    query["taskName"] = request.getTaskName();
  }

  if (!!request.hasTaskStatusShrink()) {
    query["taskStatus"] = request.getTaskStatusShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOfflineTask"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/offline-tasks/" , Darabonba::Encode::Encoder::percentEncode(type))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOfflineTaskResponse>();
}

/**
 * @summary Get Offline Task Information List
 *
 * @param request ListOfflineTaskRequest
 * @return ListOfflineTaskResponse
 */
ListOfflineTaskResponse Client::listOfflineTask(const string &workspaceName, const string &type, const ListOfflineTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOfflineTaskWithOptions(workspaceName, type, request, headers, runtime);
}

/**
 * @summary Queries the error log list of batch tasks in a specified workspace.
 *
 * @description ## Operation description
 * - This API operation retrieves error logs for a specific workspace, node type, and node name.
 * - The `startTime` and `endTime` parameters allow you to define a custom query time range. If not provided, data from the past hour is queried by default.
 * - The paging parameters `pageNum` and `pageSize` help control the number of returned results and page navigation. They represent the requested page number and the number of log entries per page, with default values of 1 and 10 respectively.
 * - Note: Ensure that you have obtained the required RAM permissions (Action: ListErrorLogs) before you invoke this operation.
 *
 * @param request ListOfflineTaskErrorLogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOfflineTaskErrorLogsResponse
 */
ListOfflineTaskErrorLogsResponse Client::listOfflineTaskErrorLogsWithOptions(const string &workspaceName, const string &type, const string &taskName, const ListOfflineTaskErrorLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasPageNum()) {
    query["pageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOfflineTaskErrorLogs"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/offline-tasks/" , Darabonba::Encode::Encoder::percentEncode(type) , "/" , Darabonba::Encode::Encoder::percentEncode(taskName) , "/error-logs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOfflineTaskErrorLogsResponse>();
}

/**
 * @summary Queries the error log list of batch tasks in a specified workspace.
 *
 * @description ## Operation description
 * - This API operation retrieves error logs for a specific workspace, node type, and node name.
 * - The `startTime` and `endTime` parameters allow you to define a custom query time range. If not provided, data from the past hour is queried by default.
 * - The paging parameters `pageNum` and `pageSize` help control the number of returned results and page navigation. They represent the requested page number and the number of log entries per page, with default values of 1 and 10 respectively.
 * - Note: Ensure that you have obtained the required RAM permissions (Action: ListErrorLogs) before you invoke this operation.
 *
 * @param request ListOfflineTaskErrorLogsRequest
 * @return ListOfflineTaskErrorLogsResponse
 */
ListOfflineTaskErrorLogsResponse Client::listOfflineTaskErrorLogs(const string &workspaceName, const string &type, const string &taskName, const ListOfflineTaskErrorLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOfflineTaskErrorLogsWithOptions(workspaceName, type, taskName, request, headers, runtime);
}

/**
 * @summary Retrieves the list of RAG evaluation tasks.
 *
 * @param request ListRagEvaluatorTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRagEvaluatorTasksResponse
 */
ListRagEvaluatorTasksResponse Client::listRagEvaluatorTasksWithOptions(const string &workspaceName, const ListRagEvaluatorTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRagEvaluatorTasks"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/rag-evaluator/v1/api/tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRagEvaluatorTasksResponse>();
}

/**
 * @summary Retrieves the list of RAG evaluation tasks.
 *
 * @param request ListRagEvaluatorTasksRequest
 * @return ListRagEvaluatorTasksResponse
 */
ListRagEvaluatorTasksResponse Client::listRagEvaluatorTasks(const string &workspaceName, const ListRagEvaluatorTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRagEvaluatorTasksWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Retrieves the list of services.
 *
 * @param request ListServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServicesResponse
 */
ListServicesResponse Client::listServicesWithOptions(const string &workspaceName, const ListServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelType()) {
    query["modelType"] = request.getModelType();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasServiceId()) {
    query["serviceId"] = request.getServiceId();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.getServiceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServices"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/services")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServicesResponse>();
}

/**
 * @summary Retrieves the list of services.
 *
 * @param request ListServicesRequest
 * @return ListServicesResponse
 */
ListServicesResponse Client::listServices(const string &workspaceName, const ListServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServicesWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Retrieves a list of workspaces.
 *
 * @param request ListWorkspacesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspacesWithOptions(const ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSortBy()) {
    query["sortBy"] = request.getSortBy();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaces"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspacesResponse>();
}

/**
 * @summary Retrieves a list of workspaces.
 *
 * @param request ListWorkspacesRequest
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspaces(const ListWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkspacesWithOptions(request, headers, runtime);
}

/**
 * @summary Updates a batch task.
 *
 * @param request ModifyOfflineTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyOfflineTaskResponse
 */
ModifyOfflineTaskResponse Client::modifyOfflineTaskWithOptions(const string &workspaceName, const string &type, const string &taskName, const ModifyOfflineTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasMeta()) {
    body["meta"] = request.getMeta();
  }

  if (!!request.hasParameters()) {
    body["parameters"] = request.getParameters();
  }

  if (!!request.hasProcessors()) {
    body["processors"] = request.getProcessors();
  }

  if (!!request.hasSink()) {
    body["sink"] = request.getSink();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyOfflineTask"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/offline-tasks/" , Darabonba::Encode::Encoder::percentEncode(type) , "/" , Darabonba::Encode::Encoder::percentEncode(taskName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyOfflineTaskResponse>();
}

/**
 * @summary Updates a batch task.
 *
 * @param request ModifyOfflineTaskRequest
 * @return ModifyOfflineTaskResponse
 */
ModifyOfflineTaskResponse Client::modifyOfflineTask(const string &workspaceName, const string &type, const string &taskName, const ModifyOfflineTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyOfflineTaskWithOptions(workspaceName, type, taskName, request, headers, runtime);
}

/**
 * @summary Modifies the network configuration for batch task log scenarios, including enabling or disabling public and private network access and setting IP whitelists.
 *
 * @description ## Operation description
 * - This API allows you to adjust network-related configurations for a specific type of batch node within a specified workspace.
 * - Use this operation to control public or private network access permissions for the ES service and set the corresponding IP whitelists.
 * - When you need to change any network settings (such as enabling or shutting down public network access or updating IP whitelists), ensure that the `network` object contains the correct parameters.
 * - Note: Executing this operation may affect currently running nodes. Proceed with caution.
 *
 * @param request ModifyOfflineTaskLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyOfflineTaskLogResponse
 */
ModifyOfflineTaskLogResponse Client::modifyOfflineTaskLogWithOptions(const string &workspaceName, const string &type, const string &taskName, const ModifyOfflineTaskLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasNetwork()) {
    body["network"] = request.getNetwork();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyOfflineTaskLog"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/offline-tasks/" , Darabonba::Encode::Encoder::percentEncode(type) , "/" , Darabonba::Encode::Encoder::percentEncode(taskName) , "/log")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyOfflineTaskLogResponse>();
}

/**
 * @summary Modifies the network configuration for batch task log scenarios, including enabling or disabling public and private network access and setting IP whitelists.
 *
 * @description ## Operation description
 * - This API allows you to adjust network-related configurations for a specific type of batch node within a specified workspace.
 * - Use this operation to control public or private network access permissions for the ES service and set the corresponding IP whitelists.
 * - When you need to change any network settings (such as enabling or shutting down public network access or updating IP whitelists), ensure that the `network` object contains the correct parameters.
 * - Note: Executing this operation may affect currently running nodes. Proceed with caution.
 *
 * @param request ModifyOfflineTaskLogRequest
 * @return ModifyOfflineTaskLogResponse
 */
ModifyOfflineTaskLogResponse Client::modifyOfflineTaskLog(const string &workspaceName, const string &type, const string &taskName, const ModifyOfflineTaskLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyOfflineTaskLogWithOptions(workspaceName, type, taskName, request, headers, runtime);
}

/**
 * @summary Restarts the service.
 *
 * @param request ResumeFunctionInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeFunctionInstanceResponse
 */
ResumeFunctionInstanceResponse Client::resumeFunctionInstanceWithOptions(const string &workspaceName, const string &functionName, const string &instanceName, const ResumeFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeFunctionInstance"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName) , "/actions/resume")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeFunctionInstanceResponse>();
}

/**
 * @summary Restarts the service.
 *
 * @param request ResumeFunctionInstanceRequest
 * @return ResumeFunctionInstanceResponse
 */
ResumeFunctionInstanceResponse Client::resumeFunctionInstance(const string &workspaceName, const string &functionName, const string &instanceName, const ResumeFunctionInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeFunctionInstanceWithOptions(workspaceName, functionName, instanceName, request, headers, runtime);
}

/**
 * @summary Starts a batch task.
 *
 * @description ## Operation description.
 *
 * @param request StartOfflineTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartOfflineTaskResponse
 */
StartOfflineTaskResponse Client::startOfflineTaskWithOptions(const string &workspaceName, const string &type, const string &taskName, const StartOfflineTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasParallelism()) {
    body["parallelism"] = request.getParallelism();
  }

  if (!!request.hasTimestamp()) {
    body["timestamp"] = request.getTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartOfflineTask"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/offline-tasks/" , Darabonba::Encode::Encoder::percentEncode(type) , "/" , Darabonba::Encode::Encoder::percentEncode(taskName) , "/actions/start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartOfflineTaskResponse>();
}

/**
 * @summary Starts a batch task.
 *
 * @description ## Operation description.
 *
 * @param request StartOfflineTaskRequest
 * @return StartOfflineTaskResponse
 */
StartOfflineTaskResponse Client::startOfflineTask(const string &workspaceName, const string &type, const string &taskName, const StartOfflineTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startOfflineTaskWithOptions(workspaceName, type, taskName, request, headers, runtime);
}

/**
 * @summary Stops a batch task.
 *
 * @param request StopOfflineTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopOfflineTaskResponse
 */
StopOfflineTaskResponse Client::stopOfflineTaskWithOptions(const string &workspaceName, const string &type, const string &taskName, const StopOfflineTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasParallelism()) {
    body["parallelism"] = request.getParallelism();
  }

  if (!!request.hasTimestamp()) {
    body["timestamp"] = request.getTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopOfflineTask"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/offline-tasks/" , Darabonba::Encode::Encoder::percentEncode(type) , "/" , Darabonba::Encode::Encoder::percentEncode(taskName) , "/actions/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopOfflineTaskResponse>();
}

/**
 * @summary Stops a batch task.
 *
 * @param request StopOfflineTaskRequest
 * @return StopOfflineTaskResponse
 */
StopOfflineTaskResponse Client::stopOfflineTask(const string &workspaceName, const string &type, const string &taskName, const StopOfflineTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopOfflineTaskWithOptions(workspaceName, type, taskName, request, headers, runtime);
}

/**
 * @summary Updates a specific configuration item in a specified workspace.
 *
 * @description ## Request description
 * This API operation allows you to update a specific configuration item (`itemName`) under a category (`itemCategory`) in a specified workspace (`workspaceName`). By setting the `dryRun` parameter, you can preview changes without actually applying them. The request body can contain a new configuration description (`itemDesc`) and configuration content (`itemValue`). The structure of `itemValue` must conform to the requirements of the target configuration item.
 *
 * @param request UpdateCapabilityRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCapabilityResponse
 */
UpdateCapabilityResponse Client::updateCapabilityWithOptions(const string &workspaceName, const string &itemCategory, const string &itemName, const UpdateCapabilityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasItemDesc()) {
    body["itemDesc"] = request.getItemDesc();
  }

  if (!!request.hasItemValue()) {
    body["itemValue"] = request.getItemValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCapability"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/capabilities/" , Darabonba::Encode::Encoder::percentEncode(itemCategory) , "/items/" , Darabonba::Encode::Encoder::percentEncode(itemName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCapabilityResponse>();
}

/**
 * @summary Updates a specific configuration item in a specified workspace.
 *
 * @description ## Request description
 * This API operation allows you to update a specific configuration item (`itemName`) under a category (`itemCategory`) in a specified workspace (`workspaceName`). By setting the `dryRun` parameter, you can preview changes without actually applying them. The request body can contain a new configuration description (`itemDesc`) and configuration content (`itemValue`). The structure of `itemValue` must conform to the requirements of the target configuration item.
 *
 * @param request UpdateCapabilityRequest
 * @return UpdateCapabilityResponse
 */
UpdateCapabilityResponse Client::updateCapability(const string &workspaceName, const string &itemCategory, const string &itemName, const UpdateCapabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCapabilityWithOptions(workspaceName, itemCategory, itemName, request, headers, runtime);
}

/**
 * @summary Updates the configuration of a specific type in a specified workspace.
 *
 * @description ## Request description.
 *
 * @param request UpdateConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConfigResponse
 */
UpdateConfigResponse Client::updateConfigWithOptions(const string &workspaceName, const string &configType, const UpdateConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasConfigData()) {
    body["configData"] = request.getConfigData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConfig"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/configs/" , Darabonba::Encode::Encoder::percentEncode(configType))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConfigResponse>();
}

/**
 * @summary Updates the configuration of a specific type in a specified workspace.
 *
 * @description ## Request description.
 *
 * @param request UpdateConfigRequest
 * @return UpdateConfigResponse
 */
UpdateConfigResponse Client::updateConfig(const string &workspaceName, const string &configType, const UpdateConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateConfigWithOptions(workspaceName, configType, request, headers, runtime);
}

/**
 * @summary Modifies an access credential.
 *
 * @param request UpdateCredentialsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCredentialsResponse
 */
UpdateCredentialsResponse Client::updateCredentialsWithOptions(const string &token, const string &workspaceName, const UpdateCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasEnabled()) {
    body["enabled"] = request.getEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCredentials"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/credentials/" , Darabonba::Encode::Encoder::percentEncode(token))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCredentialsResponse>();
}

/**
 * @summary Modifies an access credential.
 *
 * @param request UpdateCredentialsRequest
 * @return UpdateCredentialsResponse
 */
UpdateCredentialsResponse Client::updateCredentials(const string &token, const string &workspaceName, const UpdateCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCredentialsWithOptions(token, workspaceName, request, headers, runtime);
}

/**
 * @summary Updates the service configuration.
 *
 * @param request UpdateFunctionInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFunctionInstanceResponse
 */
UpdateFunctionInstanceResponse Client::updateFunctionInstanceWithOptions(const string &workspaceName, const string &functionName, const string &instanceName, const UpdateFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCreateParameters()) {
    body["createParameters"] = request.getCreateParameters();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateFunctionInstance"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFunctionInstanceResponse>();
}

/**
 * @summary Updates the service configuration.
 *
 * @param request UpdateFunctionInstanceRequest
 * @return UpdateFunctionInstanceResponse
 */
UpdateFunctionInstanceResponse Client::updateFunctionInstance(const string &workspaceName, const string &functionName, const string &instanceName, const UpdateFunctionInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFunctionInstanceWithOptions(workspaceName, functionName, instanceName, request, headers, runtime);
}

/**
 * @summary Updates a workspace.
 *
 * @param request UpdateWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkspaceResponse
 */
UpdateWorkspaceResponse Client::updateWorkspaceWithOptions(const string &workspaceName, const UpdateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkspace"},
    {"version" , "2024-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/platform/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkspaceResponse>();
}

/**
 * @summary Updates a workspace.
 *
 * @param request UpdateWorkspaceRequest
 * @return UpdateWorkspaceResponse
 */
UpdateWorkspaceResponse Client::updateWorkspace(const string &workspaceName, const UpdateWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWorkspaceWithOptions(workspaceName, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Searchplat20240401