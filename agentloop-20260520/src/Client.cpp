#include <darabonba/Core.hpp>
#include <alibabacloud/AgentLoop20260520.hpp>
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
using namespace AlibabaCloud::AgentLoop20260520::Models;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{

AlibabaCloud::AgentLoop20260520::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-zhangjiakou" , "agentloop.cn-zhangjiakou.aliyuncs.com"},
    {"cn-shenzhen" , "agentloop.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "agentloop.cn-shanghai.aliyuncs.com"},
    {"cn-hongkong" , "agentloop.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou" , "agentloop.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "agentloop.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu" , "agentloop.cn-chengdu.aliyuncs.com"},
    {"cn-beijing" , "agentloop.cn-beijing.aliyuncs.com"},
    {"ap-southeast-1" , "agentloop.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("agentloop", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Appends structured data rows to a specified dataset without requiring the client to construct SQL statements.
 *
 * @param request AddDatasetDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDatasetDataResponse
 */
AddDatasetDataResponse Client::addDatasetDataWithOptions(const string &agentSpace, const string &datasetName, const AddDatasetDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasDataArray()) {
    body["dataArray"] = request.getDataArray();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddDatasetData"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/dataset/" , Darabonba::Encode::Encoder::percentEncode(datasetName) , "/rows")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDatasetDataResponse>();
}

/**
 * @summary Appends structured data rows to a specified dataset without requiring the client to construct SQL statements.
 *
 * @param request AddDatasetDataRequest
 * @return AddDatasetDataResponse
 */
AddDatasetDataResponse Client::addDatasetData(const string &agentSpace, const string &datasetName, const AddDatasetDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addDatasetDataWithOptions(agentSpace, datasetName, request, headers, runtime);
}

/**
 * @summary Cancels a pipeline run.
 *
 * @param request CancelPipelineRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelPipelineRunResponse
 */
CancelPipelineRunResponse Client::cancelPipelineRunWithOptions(const string &agentSpace, const string &pipelineName, const string &runId, const CancelPipelineRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelPipelineRun"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineName) , "/runs/" , Darabonba::Encode::Encoder::percentEncode(runId) , "/cancel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelPipelineRunResponse>();
}

/**
 * @summary Cancels a pipeline run.
 *
 * @param request CancelPipelineRunRequest
 * @return CancelPipelineRunResponse
 */
CancelPipelineRunResponse Client::cancelPipelineRun(const string &agentSpace, const string &pipelineName, const string &runId, const CancelPipelineRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelPipelineRunWithOptions(agentSpace, pipelineName, runId, request, headers, runtime);
}

/**
 * @summary Creates an AgentSpace.
 *
 * @param request CreateAgentSpaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentSpaceResponse
 */
CreateAgentSpaceResponse Client::createAgentSpaceWithOptions(const CreateAgentSpaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasAgentSpace()) {
    body["agentSpace"] = request.getAgentSpace();
  }

  if (!!request.hasCmsWorkspace()) {
    body["cmsWorkspace"] = request.getCmsWorkspace();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasTrajectoryStoreEnabled()) {
    body["trajectoryStoreEnabled"] = request.getTrajectoryStoreEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAgentSpace"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentSpaceResponse>();
}

/**
 * @summary Creates an AgentSpace.
 *
 * @param request CreateAgentSpaceRequest
 * @return CreateAgentSpaceResponse
 */
CreateAgentSpaceResponse Client::createAgentSpace(const CreateAgentSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAgentSpaceWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a context store.
 *
 * @param request CreateContextStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateContextStoreResponse
 */
CreateContextStoreResponse Client::createContextStoreWithOptions(const string &agentSpace, const CreateContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasContextStoreName()) {
    body["contextStoreName"] = request.getContextStoreName();
  }

  if (!!request.hasContextType()) {
    body["contextType"] = request.getContextType();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateContextStore"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/contextstore")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateContextStoreResponse>();
}

/**
 * @summary Creates a context store.
 *
 * @param request CreateContextStoreRequest
 * @return CreateContextStoreResponse
 */
CreateContextStoreResponse Client::createContextStore(const string &agentSpace, const CreateContextStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createContextStoreWithOptions(agentSpace, request, headers, runtime);
}

/**
 * @summary Creates an API key.
 *
 * @param request CreateContextStoreAPIKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateContextStoreAPIKeyResponse
 */
CreateContextStoreAPIKeyResponse Client::createContextStoreAPIKeyWithOptions(const string &agentSpace, const string &contextStoreName, const CreateContextStoreAPIKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateContextStoreAPIKey"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName) , "/apikey")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateContextStoreAPIKeyResponse>();
}

/**
 * @summary Creates an API key.
 *
 * @param request CreateContextStoreAPIKeyRequest
 * @return CreateContextStoreAPIKeyResponse
 */
CreateContextStoreAPIKeyResponse Client::createContextStoreAPIKey(const string &agentSpace, const string &contextStoreName, const CreateContextStoreAPIKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createContextStoreAPIKeyWithOptions(agentSpace, contextStoreName, request, headers, runtime);
}

/**
 * @summary Creates a dataset.
 *
 * @param request CreateDatasetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDatasetWithOptions(const string &agentSpace, const CreateDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasDatasetName()) {
    body["datasetName"] = request.getDatasetName();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasSchema()) {
    body["schema"] = request.getSchema();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataset"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/dataset")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetResponse>();
}

/**
 * @summary Creates a dataset.
 *
 * @param request CreateDatasetRequest
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDataset(const string &agentSpace, const CreateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDatasetWithOptions(agentSpace, request, headers, runtime);
}

/**
 * @summary Creates an evaluation task.
 *
 * @description Calls the CreateEvaluationTask operation to create an evaluation task in a specified AgentSpace. The server verifies AgentSpace permissions, initializes evaluation result storage, checks the uniqueness of the task name, and asynchronously creates and executes an EvaluationRun based on `taskMode` and `runStrategies`.
 * This operation is applicable to running built-in or custom evaluators on Trace, Dataset, or SLS Log data. It supports two execution strategies: historical backfill and continuous evaluation.
 *
 * @param request CreateEvaluationTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEvaluationTaskResponse
 */
CreateEvaluationTaskResponse Client::createEvaluationTaskWithOptions(const string &agentSpace, const CreateEvaluationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasChannel()) {
    body["channel"] = request.getChannel();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasDataFilter()) {
    body["dataFilter"] = request.getDataFilter();
  }

  if (!!request.hasDataType()) {
    body["dataType"] = request.getDataType();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasEvaluators()) {
    body["evaluators"] = request.getEvaluators();
  }

  if (!!request.hasRunStrategies()) {
    body["runStrategies"] = request.getRunStrategies();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasTaskMode()) {
    body["taskMode"] = request.getTaskMode();
  }

  if (!!request.hasTaskName()) {
    body["taskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEvaluationTask"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluation-task/" , Darabonba::Encode::Encoder::percentEncode(agentSpace))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEvaluationTaskResponse>();
}

/**
 * @summary Creates an evaluation task.
 *
 * @description Calls the CreateEvaluationTask operation to create an evaluation task in a specified AgentSpace. The server verifies AgentSpace permissions, initializes evaluation result storage, checks the uniqueness of the task name, and asynchronously creates and executes an EvaluationRun based on `taskMode` and `runStrategies`.
 * This operation is applicable to running built-in or custom evaluators on Trace, Dataset, or SLS Log data. It supports two execution strategies: historical backfill and continuous evaluation.
 *
 * @param request CreateEvaluationTaskRequest
 * @return CreateEvaluationTaskResponse
 */
CreateEvaluationTaskResponse Client::createEvaluationTask(const string &agentSpace, const CreateEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEvaluationTaskWithOptions(agentSpace, request, headers, runtime);
}

/**
 * @summary Creates an evaluator.
 *
 * @param request CreateEvaluatorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEvaluatorResponse
 */
CreateEvaluatorResponse Client::createEvaluatorWithOptions(const string &agentSpace, const CreateEvaluatorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasAnnotations()) {
    body["annotations"] = request.getAnnotations();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasMetricName()) {
    body["metricName"] = request.getMetricName();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasProperties()) {
    body["properties"] = request.getProperties();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  if (!!request.hasVersionDescription()) {
    body["versionDescription"] = request.getVersionDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEvaluator"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluators/" , Darabonba::Encode::Encoder::percentEncode(agentSpace))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEvaluatorResponse>();
}

/**
 * @summary Creates an evaluator.
 *
 * @param request CreateEvaluatorRequest
 * @return CreateEvaluatorResponse
 */
CreateEvaluatorResponse Client::createEvaluator(const string &agentSpace, const CreateEvaluatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEvaluatorWithOptions(agentSpace, request, headers, runtime);
}

/**
 * @summary Creates an evaluator skill.
 *
 * @param request CreateEvaluatorSkillRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEvaluatorSkillResponse
 */
CreateEvaluatorSkillResponse Client::createEvaluatorSkillWithOptions(const string &name, const CreateEvaluatorSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentSpace()) {
    query["agentSpace"] = request.getAgentSpace();
  }

  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasEnable()) {
    body["enable"] = request.getEnable();
  }

  if (!!request.hasFiles()) {
    body["files"] = request.getFiles();
  }

  if (!!request.hasSkillName()) {
    body["skillName"] = request.getSkillName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEvaluatorSkill"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluator/" , Darabonba::Encode::Encoder::percentEncode(name) , "/skill")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEvaluatorSkillResponse>();
}

/**
 * @summary Creates an evaluator skill.
 *
 * @param request CreateEvaluatorSkillRequest
 * @return CreateEvaluatorSkillResponse
 */
CreateEvaluatorSkillResponse Client::createEvaluatorSkill(const string &name, const CreateEvaluatorSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEvaluatorSkillWithOptions(name, request, headers, runtime);
}

/**
 * @summary Creates a pipeline.
 *
 * @param request CreatePipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePipelineResponse
 */
CreatePipelineResponse Client::createPipelineWithOptions(const string &agentSpace, const CreatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasExecutePolicy()) {
    body["executePolicy"] = request.getExecutePolicy();
  }

  if (!!request.hasPipeline()) {
    body["pipeline"] = request.getPipeline();
  }

  if (!!request.hasPipelineName()) {
    body["pipelineName"] = request.getPipelineName();
  }

  if (!!request.hasSink()) {
    body["sink"] = request.getSink();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePipeline"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/pipeline")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePipelineResponse>();
}

/**
 * @summary Creates a pipeline.
 *
 * @param request CreatePipelineRequest
 * @return CreatePipelineResponse
 */
CreatePipelineResponse Client::createPipeline(const string &agentSpace, const CreatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPipelineWithOptions(agentSpace, request, headers, runtime);
}

/**
 * @summary Deletes an AgentSpace.
 *
 * @param request DeleteAgentSpaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentSpaceResponse
 */
DeleteAgentSpaceResponse Client::deleteAgentSpaceWithOptions(const string &agentSpace, const DeleteAgentSpaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteCmsWorkspace()) {
    query["deleteCmsWorkspace"] = request.getDeleteCmsWorkspace();
  }

  if (!!request.hasDeleteMseNamespace()) {
    query["deleteMseNamespace"] = request.getDeleteMseNamespace();
  }

  if (!!request.hasDeleteSlsProject()) {
    query["deleteSlsProject"] = request.getDeleteSlsProject();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAgentSpace"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentSpaceResponse>();
}

/**
 * @summary Deletes an AgentSpace.
 *
 * @param request DeleteAgentSpaceRequest
 * @return DeleteAgentSpaceResponse
 */
DeleteAgentSpaceResponse Client::deleteAgentSpace(const string &agentSpace, const DeleteAgentSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAgentSpaceWithOptions(agentSpace, request, headers, runtime);
}

/**
 * @summary Deletes a context store.
 *
 * @param request DeleteContextStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContextStoreResponse
 */
DeleteContextStoreResponse Client::deleteContextStoreWithOptions(const string &agentSpace, const string &contextStoreName, const DeleteContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContextStore"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContextStoreResponse>();
}

/**
 * @summary Deletes a context store.
 *
 * @param request DeleteContextStoreRequest
 * @return DeleteContextStoreResponse
 */
DeleteContextStoreResponse Client::deleteContextStore(const string &agentSpace, const string &contextStoreName, const DeleteContextStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteContextStoreWithOptions(agentSpace, contextStoreName, request, headers, runtime);
}

/**
 * @summary Deletes an API key.
 *
 * @param request DeleteContextStoreAPIKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContextStoreAPIKeyResponse
 */
DeleteContextStoreAPIKeyResponse Client::deleteContextStoreAPIKeyWithOptions(const string &agentSpace, const string &contextStoreName, const string &name, const DeleteContextStoreAPIKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContextStoreAPIKey"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName) , "/apikey/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContextStoreAPIKeyResponse>();
}

/**
 * @summary Deletes an API key.
 *
 * @param request DeleteContextStoreAPIKeyRequest
 * @return DeleteContextStoreAPIKeyResponse
 */
DeleteContextStoreAPIKeyResponse Client::deleteContextStoreAPIKey(const string &agentSpace, const string &contextStoreName, const string &name, const DeleteContextStoreAPIKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteContextStoreAPIKeyWithOptions(agentSpace, contextStoreName, name, request, headers, runtime);
}

/**
 * @summary Deletes a dataset.
 *
 * @param request DeleteDatasetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDatasetWithOptions(const string &agentSpace, const string &datasetName, const DeleteDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataset"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/dataset/" , Darabonba::Encode::Encoder::percentEncode(datasetName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetResponse>();
}

/**
 * @summary Deletes a dataset.
 *
 * @param request DeleteDatasetRequest
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDataset(const string &agentSpace, const string &datasetName, const DeleteDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDatasetWithOptions(agentSpace, datasetName, request, headers, runtime);
}

/**
 * @summary Deletes an evaluation run.
 *
 * @param request DeleteEvaluationRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEvaluationRunResponse
 */
DeleteEvaluationRunResponse Client::deleteEvaluationRunWithOptions(const string &agentSpace, const string &taskId, const string &runId, const DeleteEvaluationRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEvaluationRun"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluation-task/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/" , Darabonba::Encode::Encoder::percentEncode(taskId) , "/run/" , Darabonba::Encode::Encoder::percentEncode(runId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEvaluationRunResponse>();
}

/**
 * @summary Deletes an evaluation run.
 *
 * @param request DeleteEvaluationRunRequest
 * @return DeleteEvaluationRunResponse
 */
DeleteEvaluationRunResponse Client::deleteEvaluationRun(const string &agentSpace, const string &taskId, const string &runId, const DeleteEvaluationRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEvaluationRunWithOptions(agentSpace, taskId, runId, request, headers, runtime);
}

/**
 * @summary Deletes an evaluation task.
 *
 * @param request DeleteEvaluationTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEvaluationTaskResponse
 */
DeleteEvaluationTaskResponse Client::deleteEvaluationTaskWithOptions(const string &agentSpace, const string &taskId, const DeleteEvaluationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEvaluationTask"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluation-task/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEvaluationTaskResponse>();
}

/**
 * @summary Deletes an evaluation task.
 *
 * @param request DeleteEvaluationTaskRequest
 * @return DeleteEvaluationTaskResponse
 */
DeleteEvaluationTaskResponse Client::deleteEvaluationTask(const string &agentSpace, const string &taskId, const DeleteEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEvaluationTaskWithOptions(agentSpace, taskId, request, headers, runtime);
}

/**
 * @summary Deletes an evaluator.
 *
 * @param request DeleteEvaluatorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEvaluatorResponse
 */
DeleteEvaluatorResponse Client::deleteEvaluatorWithOptions(const string &agentSpace, const string &name, const DeleteEvaluatorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEvaluator"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluators/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEvaluatorResponse>();
}

/**
 * @summary Deletes an evaluator.
 *
 * @param request DeleteEvaluatorRequest
 * @return DeleteEvaluatorResponse
 */
DeleteEvaluatorResponse Client::deleteEvaluator(const string &agentSpace, const string &name, const DeleteEvaluatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEvaluatorWithOptions(agentSpace, name, request, headers, runtime);
}

/**
 * @summary Deletes an evaluator skill.
 *
 * @param request DeleteEvaluatorSkillRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEvaluatorSkillResponse
 */
DeleteEvaluatorSkillResponse Client::deleteEvaluatorSkillWithOptions(const string &name, const string &skillName, const DeleteEvaluatorSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentSpace()) {
    query["agentSpace"] = request.getAgentSpace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEvaluatorSkill"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluator/" , Darabonba::Encode::Encoder::percentEncode(name) , "/skill/" , Darabonba::Encode::Encoder::percentEncode(skillName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEvaluatorSkillResponse>();
}

/**
 * @summary Deletes an evaluator skill.
 *
 * @param request DeleteEvaluatorSkillRequest
 * @return DeleteEvaluatorSkillResponse
 */
DeleteEvaluatorSkillResponse Client::deleteEvaluatorSkill(const string &name, const string &skillName, const DeleteEvaluatorSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEvaluatorSkillWithOptions(name, skillName, request, headers, runtime);
}

/**
 * @summary Deletes a pipeline.
 *
 * @param request DeletePipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePipelineResponse
 */
DeletePipelineResponse Client::deletePipelineWithOptions(const string &agentSpace, const string &pipelineName, const DeletePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePipeline"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePipelineResponse>();
}

/**
 * @summary Deletes a pipeline.
 *
 * @param request DeletePipelineRequest
 * @return DeletePipelineResponse
 */
DeletePipelineResponse Client::deletePipeline(const string &agentSpace, const string &pipelineName, const DeletePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePipelineWithOptions(agentSpace, pipelineName, request, headers, runtime);
}

/**
 * @summary Queries regions.
 *
 * @param request DescribeRegionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["language"] = request.getLanguage();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/regions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries regions.
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
 * @summary Executes a query statement.
 *
 * @param request ExecuteQueryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteQueryResponse
 */
ExecuteQueryResponse Client::executeQueryWithOptions(const string &agentSpace, const string &datasetName, const ExecuteQueryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFrom()) {
    body["from"] = request.getFrom();
  }

  if (!!request.hasLength()) {
    body["length"] = request.getLength();
  }

  if (!!request.hasMaxOutputLength()) {
    body["maxOutputLength"] = request.getMaxOutputLength();
  }

  if (!!request.hasOffset()) {
    body["offset"] = request.getOffset();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasTo()) {
    body["to"] = request.getTo();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteQuery"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/dataset/" , Darabonba::Encode::Encoder::percentEncode(datasetName) , "/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteQueryResponse>();
}

/**
 * @summary Executes a query statement.
 *
 * @param request ExecuteQueryRequest
 * @return ExecuteQueryResponse
 */
ExecuteQueryResponse Client::executeQuery(const string &agentSpace, const string &datasetName, const ExecuteQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeQueryWithOptions(agentSpace, datasetName, request, headers, runtime);
}

/**
 * @summary Queries an AgentSpace.
 *
 * @param request GetAgentSpaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentSpaceResponse
 */
GetAgentSpaceResponse Client::getAgentSpaceWithOptions(const string &agentSpace, const GetAgentSpaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentSpace"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentSpaceResponse>();
}

/**
 * @summary Queries an AgentSpace.
 *
 * @param request GetAgentSpaceRequest
 * @return GetAgentSpaceResponse
 */
GetAgentSpaceResponse Client::getAgentSpace(const string &agentSpace, const GetAgentSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentSpaceWithOptions(agentSpace, request, headers, runtime);
}

/**
 * @summary Queries a context store.
 *
 * @param request GetContextStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContextStoreResponse
 */
GetContextStoreResponse Client::getContextStoreWithOptions(const string &agentSpace, const string &contextStoreName, const GetContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContextStore"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContextStoreResponse>();
}

/**
 * @summary Queries a context store.
 *
 * @param request GetContextStoreRequest
 * @return GetContextStoreResponse
 */
GetContextStoreResponse Client::getContextStore(const string &agentSpace, const string &contextStoreName, const GetContextStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getContextStoreWithOptions(agentSpace, contextStoreName, request, headers, runtime);
}

/**
 * @summary Retrieves an API key.
 *
 * @param request GetContextStoreAPIKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContextStoreAPIKeyResponse
 */
GetContextStoreAPIKeyResponse Client::getContextStoreAPIKeyWithOptions(const string &agentSpace, const string &contextStoreName, const string &name, const GetContextStoreAPIKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContextStoreAPIKey"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName) , "/apikey/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContextStoreAPIKeyResponse>();
}

/**
 * @summary Retrieves an API key.
 *
 * @param request GetContextStoreAPIKeyRequest
 * @return GetContextStoreAPIKeyResponse
 */
GetContextStoreAPIKeyResponse Client::getContextStoreAPIKey(const string &agentSpace, const string &contextStoreName, const string &name, const GetContextStoreAPIKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getContextStoreAPIKeyWithOptions(agentSpace, contextStoreName, name, request, headers, runtime);
}

/**
 * @summary Queries a dataset.
 *
 * @param request GetDatasetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDatasetWithOptions(const string &agentSpace, const string &datasetName, const GetDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataset"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/dataset/" , Darabonba::Encode::Encoder::percentEncode(datasetName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetResponse>();
}

/**
 * @summary Queries a dataset.
 *
 * @param request GetDatasetRequest
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDataset(const string &agentSpace, const string &datasetName, const GetDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatasetWithOptions(agentSpace, datasetName, request, headers, runtime);
}

/**
 * @summary Retrieves the details of an evaluation run.
 *
 * @param request GetEvaluationRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEvaluationRunResponse
 */
GetEvaluationRunResponse Client::getEvaluationRunWithOptions(const string &agentSpace, const string &taskId, const string &runId, const GetEvaluationRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEvaluationRun"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluation-task/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/" , Darabonba::Encode::Encoder::percentEncode(taskId) , "/run/" , Darabonba::Encode::Encoder::percentEncode(runId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEvaluationRunResponse>();
}

/**
 * @summary Retrieves the details of an evaluation run.
 *
 * @param request GetEvaluationRunRequest
 * @return GetEvaluationRunResponse
 */
GetEvaluationRunResponse Client::getEvaluationRun(const string &agentSpace, const string &taskId, const string &runId, const GetEvaluationRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEvaluationRunWithOptions(agentSpace, taskId, runId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of an evaluation task.
 *
 * @param request GetEvaluationTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEvaluationTaskResponse
 */
GetEvaluationTaskResponse Client::getEvaluationTaskWithOptions(const string &agentSpace, const string &taskId, const GetEvaluationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEvaluationTask"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluation-task/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEvaluationTaskResponse>();
}

/**
 * @summary Retrieves the details of an evaluation task.
 *
 * @param request GetEvaluationTaskRequest
 * @return GetEvaluationTaskResponse
 */
GetEvaluationTaskResponse Client::getEvaluationTask(const string &agentSpace, const string &taskId, const GetEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEvaluationTaskWithOptions(agentSpace, taskId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of an evaluator.
 *
 * @param request GetEvaluatorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEvaluatorResponse
 */
GetEvaluatorResponse Client::getEvaluatorWithOptions(const string &agentSpace, const string &name, const GetEvaluatorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEvaluator"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluators/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEvaluatorResponse>();
}

/**
 * @summary Retrieves the details of an evaluator.
 *
 * @param request GetEvaluatorRequest
 * @return GetEvaluatorResponse
 */
GetEvaluatorResponse Client::getEvaluator(const string &agentSpace, const string &name, const GetEvaluatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEvaluatorWithOptions(agentSpace, name, request, headers, runtime);
}

/**
 * @summary Retrieves the details of an evaluator skill.
 *
 * @param request GetEvaluatorSkillRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEvaluatorSkillResponse
 */
GetEvaluatorSkillResponse Client::getEvaluatorSkillWithOptions(const string &name, const string &skillName, const GetEvaluatorSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentSpace()) {
    query["agentSpace"] = request.getAgentSpace();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEvaluatorSkill"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluator/" , Darabonba::Encode::Encoder::percentEncode(name) , "/skill/" , Darabonba::Encode::Encoder::percentEncode(skillName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEvaluatorSkillResponse>();
}

/**
 * @summary Retrieves the details of an evaluator skill.
 *
 * @param request GetEvaluatorSkillRequest
 * @return GetEvaluatorSkillResponse
 */
GetEvaluatorSkillResponse Client::getEvaluatorSkill(const string &name, const string &skillName, const GetEvaluatorSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEvaluatorSkillWithOptions(name, skillName, request, headers, runtime);
}

/**
 * @summary Queries a CI/CD pipeline.
 *
 * @param request GetPipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineResponse
 */
GetPipelineResponse Client::getPipelineWithOptions(const string &agentSpace, const string &pipelineName, const GetPipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPipeline"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPipelineResponse>();
}

/**
 * @summary Queries a CI/CD pipeline.
 *
 * @param request GetPipelineRequest
 * @return GetPipelineResponse
 */
GetPipelineResponse Client::getPipeline(const string &agentSpace, const string &pipelineName, const GetPipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPipelineWithOptions(agentSpace, pipelineName, request, headers, runtime);
}

/**
 * @summary Queries the details of a single pipeline run.
 *
 * @param request GetPipelineRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineRunResponse
 */
GetPipelineRunResponse Client::getPipelineRunWithOptions(const string &agentSpace, const string &pipelineName, const string &runId, const GetPipelineRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPipelineRun"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineName) , "/runs/" , Darabonba::Encode::Encoder::percentEncode(runId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPipelineRunResponse>();
}

/**
 * @summary Queries the details of a single pipeline run.
 *
 * @param request GetPipelineRunRequest
 * @return GetPipelineRunResponse
 */
GetPipelineRunResponse Client::getPipelineRun(const string &agentSpace, const string &pipelineName, const string &runId, const GetPipelineRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPipelineRunWithOptions(agentSpace, pipelineName, runId, request, headers, runtime);
}

/**
 * @summary Queries pipeline run statistics.
 *
 * @param request GetPipelineStatsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineStatsResponse
 */
GetPipelineStatsResponse Client::getPipelineStatsWithOptions(const string &agentSpace, const string &pipelineName, const GetPipelineStatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasGranularity()) {
    query["granularity"] = request.getGranularity();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPipelineStats"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineName) , "/stats")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPipelineStatsResponse>();
}

/**
 * @summary Queries pipeline run statistics.
 *
 * @param request GetPipelineStatsRequest
 * @return GetPipelineStatsResponse
 */
GetPipelineStatsResponse Client::getPipelineStats(const string &agentSpace, const string &pipelineName, const GetPipelineStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPipelineStatsWithOptions(agentSpace, pipelineName, request, headers, runtime);
}

/**
 * @summary Queries a list of AgentSpaces.
 *
 * @param request ListAgentSpacesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentSpacesResponse
 */
ListAgentSpacesResponse Client::listAgentSpacesWithOptions(const ListAgentSpacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentSpace()) {
    query["agentSpace"] = request.getAgentSpace();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgentSpaces"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentSpacesResponse>();
}

/**
 * @summary Queries a list of AgentSpaces.
 *
 * @param request ListAgentSpacesRequest
 * @return ListAgentSpacesResponse
 */
ListAgentSpacesResponse Client::listAgentSpaces(const ListAgentSpacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAgentSpacesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of API keys.
 *
 * @param request ListContextStoreAPIKeysRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextStoreAPIKeysResponse
 */
ListContextStoreAPIKeysResponse Client::listContextStoreAPIKeysWithOptions(const string &agentSpace, const string &contextStoreName, const ListContextStoreAPIKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextStoreAPIKeys"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName) , "/apikey")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextStoreAPIKeysResponse>();
}

/**
 * @summary Retrieves a list of API keys.
 *
 * @param request ListContextStoreAPIKeysRequest
 * @return ListContextStoreAPIKeysResponse
 */
ListContextStoreAPIKeysResponse Client::listContextStoreAPIKeys(const string &agentSpace, const string &contextStoreName, const ListContextStoreAPIKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listContextStoreAPIKeysWithOptions(agentSpace, contextStoreName, request, headers, runtime);
}

/**
 * @summary Queries a list of context stores.
 *
 * @param request ListContextStoresRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextStoresResponse
 */
ListContextStoresResponse Client::listContextStoresWithOptions(const string &agentSpace, const ListContextStoresRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContextStoreName()) {
    query["contextStoreName"] = request.getContextStoreName();
  }

  if (!!request.hasContextType()) {
    query["contextType"] = request.getContextType();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextStores"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/contextstore")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextStoresResponse>();
}

/**
 * @summary Queries a list of context stores.
 *
 * @param request ListContextStoresRequest
 * @return ListContextStoresResponse
 */
ListContextStoresResponse Client::listContextStores(const string &agentSpace, const ListContextStoresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listContextStoresWithOptions(agentSpace, request, headers, runtime);
}

/**
 * @summary Queries a list of datasets.
 *
 * @param request ListDatasetsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasetsWithOptions(const string &agentSpace, const ListDatasetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["datasetName"] = request.getDatasetName();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatasets"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/dataset")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasetsResponse>();
}

/**
 * @summary Queries a list of datasets.
 *
 * @param request ListDatasetsRequest
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasets(const string &agentSpace, const ListDatasetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDatasetsWithOptions(agentSpace, request, headers, runtime);
}

/**
 * @summary Queries the list of evaluation runs.
 *
 * @param request ListEvaluationRunsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEvaluationRunsResponse
 */
ListEvaluationRunsResponse Client::listEvaluationRunsWithOptions(const string &agentSpace, const string &taskId, const ListEvaluationRunsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasRunType()) {
    query["runType"] = request.getRunType();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEvaluationRuns"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluation-task/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/" , Darabonba::Encode::Encoder::percentEncode(taskId) , "/runs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEvaluationRunsResponse>();
}

/**
 * @summary Queries the list of evaluation runs.
 *
 * @param request ListEvaluationRunsRequest
 * @return ListEvaluationRunsResponse
 */
ListEvaluationRunsResponse Client::listEvaluationRuns(const string &agentSpace, const string &taskId, const ListEvaluationRunsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEvaluationRunsWithOptions(agentSpace, taskId, request, headers, runtime);
}

/**
 * @summary Queries a list of evaluation tasks.
 *
 * @param request ListEvaluationTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEvaluationTasksResponse
 */
ListEvaluationTasksResponse Client::listEvaluationTasksWithOptions(const ListEvaluationTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentSpace()) {
    query["agentSpace"] = request.getAgentSpace();
  }

  if (!!request.hasChannel()) {
    query["channel"] = request.getChannel();
  }

  if (!!request.hasDataType()) {
    query["dataType"] = request.getDataType();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTaskMode()) {
    query["taskMode"] = request.getTaskMode();
  }

  if (!!request.hasTaskName()) {
    query["taskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEvaluationTasks"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluation-tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEvaluationTasksResponse>();
}

/**
 * @summary Queries a list of evaluation tasks.
 *
 * @param request ListEvaluationTasksRequest
 * @return ListEvaluationTasksResponse
 */
ListEvaluationTasksResponse Client::listEvaluationTasks(const ListEvaluationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEvaluationTasksWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the skill list of an evaluator.
 *
 * @param request ListEvaluatorSkillsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEvaluatorSkillsResponse
 */
ListEvaluatorSkillsResponse Client::listEvaluatorSkillsWithOptions(const string &name, const ListEvaluatorSkillsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentSpace()) {
    query["agentSpace"] = request.getAgentSpace();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEvaluatorSkills"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluator/" , Darabonba::Encode::Encoder::percentEncode(name) , "/skills")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEvaluatorSkillsResponse>();
}

/**
 * @summary Queries the skill list of an evaluator.
 *
 * @param request ListEvaluatorSkillsRequest
 * @return ListEvaluatorSkillsResponse
 */
ListEvaluatorSkillsResponse Client::listEvaluatorSkills(const string &name, const ListEvaluatorSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEvaluatorSkillsWithOptions(name, request, headers, runtime);
}

/**
 * @summary Queries a list of evaluators.
 *
 * @param request ListEvaluatorsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEvaluatorsResponse
 */
ListEvaluatorsResponse Client::listEvaluatorsWithOptions(const ListEvaluatorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentSpace()) {
    query["agentSpace"] = request.getAgentSpace();
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

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEvaluators"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluators")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEvaluatorsResponse>();
}

/**
 * @summary Queries a list of evaluators.
 *
 * @param request ListEvaluatorsRequest
 * @return ListEvaluatorsResponse
 */
ListEvaluatorsResponse Client::listEvaluators(const ListEvaluatorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEvaluatorsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the execution history list of a pipeline.
 *
 * @param request ListPipelineRunsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelineRunsResponse
 */
ListPipelineRunsResponse Client::listPipelineRunsWithOptions(const string &agentSpace, const string &pipelineName, const ListPipelineRunsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTriggerType()) {
    query["triggerType"] = request.getTriggerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipelineRuns"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineName) , "/runs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelineRunsResponse>();
}

/**
 * @summary Queries the execution history list of a pipeline.
 *
 * @param request ListPipelineRunsRequest
 * @return ListPipelineRunsResponse
 */
ListPipelineRunsResponse Client::listPipelineRuns(const string &agentSpace, const string &pipelineName, const ListPipelineRunsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPipelineRunsWithOptions(agentSpace, pipelineName, request, headers, runtime);
}

/**
 * @summary Lists CI/CD pipelines.
 *
 * @param request ListPipelinesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelinesResponse
 */
ListPipelinesResponse Client::listPipelinesWithOptions(const string &agentSpace, const ListPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPipelineName()) {
    query["pipelineName"] = request.getPipelineName();
  }

  if (!!request.hasScheduleStatus()) {
    query["scheduleStatus"] = request.getScheduleStatus();
  }

  if (!!request.hasScheduleType()) {
    query["scheduleType"] = request.getScheduleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipelines"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/pipeline")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelinesResponse>();
}

/**
 * @summary Lists CI/CD pipelines.
 *
 * @param request ListPipelinesRequest
 * @return ListPipelinesResponse
 */
ListPipelinesResponse Client::listPipelines(const string &agentSpace, const ListPipelinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPipelinesWithOptions(agentSpace, request, headers, runtime);
}

/**
 * @summary Pauses a pipeline.
 *
 * @param request PausePipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PausePipelineResponse
 */
PausePipelineResponse Client::pausePipelineWithOptions(const string &agentSpace, const string &pipelineName, const PausePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasReason()) {
    body["reason"] = request.getReason();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PausePipeline"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineName) , "/pause")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PausePipelineResponse>();
}

/**
 * @summary Pauses a pipeline.
 *
 * @param request PausePipelineRequest
 * @return PausePipelineResponse
 */
PausePipelineResponse Client::pausePipeline(const string &agentSpace, const string &pipelineName, const PausePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pausePipelineWithOptions(agentSpace, pipelineName, request, headers, runtime);
}

/**
 * @summary Previews a pipeline. Without creating pipeline resources, performs a trial query based on the specified data source, node orchestration, and time range, and returns a small number of sample data records for authenticating parameter settings and previewing processing results.
 *
 * @description ## Request description
 * - **agentSpace** must be an AgentSpace instance that has been created under the current account.
 * - **source.type** currently supports only the `logstore` type. The `logstore.project` and `logstore.logstore` must be authorized within the AgentSpace and located in the same region.
 * - **pipeline.nodes** must contain at least one node of the `Source` type and cannot be empty.
 * - **fromTime** and **toTime** are UNIX timestamps in seconds. **fromTime** must be less than **toTime**.
 * - A maximum of 5 records are returned, and internal system fields of the data source are automatically filtered out.
 *
 * @param request PreviewPipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewPipelineResponse
 */
PreviewPipelineResponse Client::previewPipelineWithOptions(const string &agentSpace, const PreviewPipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFromTime()) {
    body["fromTime"] = request.getFromTime();
  }

  if (!!request.hasPipeline()) {
    body["pipeline"] = request.getPipeline();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
  }

  if (!!request.hasToTime()) {
    body["toTime"] = request.getToTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PreviewPipeline"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/pipeline/preview")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewPipelineResponse>();
}

/**
 * @summary Previews a pipeline. Without creating pipeline resources, performs a trial query based on the specified data source, node orchestration, and time range, and returns a small number of sample data records for authenticating parameter settings and previewing processing results.
 *
 * @description ## Request description
 * - **agentSpace** must be an AgentSpace instance that has been created under the current account.
 * - **source.type** currently supports only the `logstore` type. The `logstore.project` and `logstore.logstore` must be authorized within the AgentSpace and located in the same region.
 * - **pipeline.nodes** must contain at least one node of the `Source` type and cannot be empty.
 * - **fromTime** and **toTime** are UNIX timestamps in seconds. **fromTime** must be less than **toTime**.
 * - A maximum of 5 records are returned, and internal system fields of the data source are automatically filtered out.
 *
 * @param request PreviewPipelineRequest
 * @return PreviewPipelineResponse
 */
PreviewPipelineResponse Client::previewPipeline(const string &agentSpace, const PreviewPipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return previewPipelineWithOptions(agentSpace, request, headers, runtime);
}

/**
 * @summary Resumes a pipeline.
 *
 * @param request ResumePipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumePipelineResponse
 */
ResumePipelineResponse Client::resumePipelineWithOptions(const string &agentSpace, const string &pipelineName, const ResumePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumePipeline"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineName) , "/resume")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumePipelineResponse>();
}

/**
 * @summary Resumes a pipeline.
 *
 * @param request ResumePipelineRequest
 * @return ResumePipelineResponse
 */
ResumePipelineResponse Client::resumePipeline(const string &agentSpace, const string &pipelineName, const ResumePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumePipelineWithOptions(agentSpace, pipelineName, request, headers, runtime);
}

/**
 * @summary Manually triggers a pipeline execution.
 *
 * @param request RunPipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunPipelineResponse
 */
RunPipelineResponse Client::runPipelineWithOptions(const string &agentSpace, const string &pipelineName, const RunPipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFromTime()) {
    body["fromTime"] = request.getFromTime();
  }

  if (!!request.hasOutput()) {
    body["output"] = request.getOutput();
  }

  if (!!request.hasToTime()) {
    body["toTime"] = request.getToTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunPipeline"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineName) , "/run")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunPipelineResponse>();
}

/**
 * @summary Manually triggers a pipeline execution.
 *
 * @param request RunPipelineRequest
 * @return RunPipelineResponse
 */
RunPipelineResponse Client::runPipeline(const string &agentSpace, const string &pipelineName, const RunPipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runPipelineWithOptions(agentSpace, pipelineName, request, headers, runtime);
}

/**
 * @summary Searches contexts.
 *
 * @param request SearchContextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchContextResponse
 */
SearchContextResponse Client::searchContextWithOptions(const string &agentSpace, const string &contextStoreName, const SearchContextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFilter()) {
    body["filter"] = request.getFilter();
  }

  if (!!request.hasFormatted()) {
    body["formatted"] = request.getFormatted();
  }

  if (!!request.hasLimit()) {
    body["limit"] = request.getLimit();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasRetrievalOption()) {
    body["retrievalOption"] = request.getRetrievalOption();
  }

  if (!!request.hasThreshold()) {
    body["threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchContext"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName) , "/context/search")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchContextResponse>();
}

/**
 * @summary Searches contexts.
 *
 * @param request SearchContextRequest
 * @return SearchContextResponse
 */
SearchContextResponse Client::searchContext(const string &agentSpace, const string &contextStoreName, const SearchContextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchContextWithOptions(agentSpace, contextStoreName, request, headers, runtime);
}

/**
 * @summary Stops a pipeline.
 *
 * @param request TerminatePipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminatePipelineResponse
 */
TerminatePipelineResponse Client::terminatePipelineWithOptions(const string &agentSpace, const string &pipelineName, const TerminatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasReason()) {
    body["reason"] = request.getReason();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TerminatePipeline"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineName) , "/terminate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TerminatePipelineResponse>();
}

/**
 * @summary Stops a pipeline.
 *
 * @param request TerminatePipelineRequest
 * @return TerminatePipelineResponse
 */
TerminatePipelineResponse Client::terminatePipeline(const string &agentSpace, const string &pipelineName, const TerminatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return terminatePipelineWithOptions(agentSpace, pipelineName, request, headers, runtime);
}

/**
 * @summary Updates an AgentSpace.
 *
 * @param request UpdateAgentSpaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentSpaceResponse
 */
UpdateAgentSpaceResponse Client::updateAgentSpaceWithOptions(const string &agentSpace, const UpdateAgentSpaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasCmsWorkspace()) {
    body["cmsWorkspace"] = request.getCmsWorkspace();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAgentSpace"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentSpaceResponse>();
}

/**
 * @summary Updates an AgentSpace.
 *
 * @param request UpdateAgentSpaceRequest
 * @return UpdateAgentSpaceResponse
 */
UpdateAgentSpaceResponse Client::updateAgentSpace(const string &agentSpace, const UpdateAgentSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAgentSpaceWithOptions(agentSpace, request, headers, runtime);
}

/**
 * @summary Modifies the configuration of a context store.
 *
 * @param request UpdateContextStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContextStoreResponse
 */
UpdateContextStoreResponse Client::updateContextStoreWithOptions(const string &agentSpace, const string &contextStoreName, const UpdateContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasContextType()) {
    body["contextType"] = request.getContextType();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
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
    {"action" , "UpdateContextStore"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContextStoreResponse>();
}

/**
 * @summary Modifies the configuration of a context store.
 *
 * @param request UpdateContextStoreRequest
 * @return UpdateContextStoreResponse
 */
UpdateContextStoreResponse Client::updateContextStore(const string &agentSpace, const string &contextStoreName, const UpdateContextStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateContextStoreWithOptions(agentSpace, contextStoreName, request, headers, runtime);
}

/**
 * @summary Updates a dataset.
 *
 * @param request UpdateDatasetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDatasetWithOptions(const string &agentSpace, const string &datasetName, const UpdateDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasSchema()) {
    body["schema"] = request.getSchema();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataset"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/dataset/" , Darabonba::Encode::Encoder::percentEncode(datasetName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatasetResponse>();
}

/**
 * @summary Updates a dataset.
 *
 * @param request UpdateDatasetRequest
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDataset(const string &agentSpace, const string &datasetName, const UpdateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDatasetWithOptions(agentSpace, datasetName, request, headers, runtime);
}

/**
 * @summary Updates an evaluation run.
 *
 * @param request UpdateEvaluationRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEvaluationRunResponse
 */
UpdateEvaluationRunResponse Client::updateEvaluationRunWithOptions(const string &agentSpace, const string &taskId, const string &runId, const UpdateEvaluationRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEvaluationRun"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluation-task/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/" , Darabonba::Encode::Encoder::percentEncode(taskId) , "/run/" , Darabonba::Encode::Encoder::percentEncode(runId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEvaluationRunResponse>();
}

/**
 * @summary Updates an evaluation run.
 *
 * @param request UpdateEvaluationRunRequest
 * @return UpdateEvaluationRunResponse
 */
UpdateEvaluationRunResponse Client::updateEvaluationRun(const string &agentSpace, const string &taskId, const string &runId, const UpdateEvaluationRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateEvaluationRunWithOptions(agentSpace, taskId, runId, request, headers, runtime);
}

/**
 * @summary Updates an evaluation task.
 *
 * @param request UpdateEvaluationTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEvaluationTaskResponse
 */
UpdateEvaluationTaskResponse Client::updateEvaluationTaskWithOptions(const string &agentSpace, const string &taskId, const UpdateEvaluationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasDataFilter()) {
    body["dataFilter"] = request.getDataFilter();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasEvaluators()) {
    body["evaluators"] = request.getEvaluators();
  }

  if (!!request.hasRunStrategies()) {
    body["runStrategies"] = request.getRunStrategies();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEvaluationTask"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluation-task/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEvaluationTaskResponse>();
}

/**
 * @summary Updates an evaluation task.
 *
 * @param request UpdateEvaluationTaskRequest
 * @return UpdateEvaluationTaskResponse
 */
UpdateEvaluationTaskResponse Client::updateEvaluationTask(const string &agentSpace, const string &taskId, const UpdateEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateEvaluationTaskWithOptions(agentSpace, taskId, request, headers, runtime);
}

/**
 * @summary Updates an evaluator.
 *
 * @param request UpdateEvaluatorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEvaluatorResponse
 */
UpdateEvaluatorResponse Client::updateEvaluatorWithOptions(const string &agentSpace, const string &name, const UpdateEvaluatorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasAnnotations()) {
    body["annotations"] = request.getAnnotations();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasProperties()) {
    body["properties"] = request.getProperties();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  if (!!request.hasVersionDescription()) {
    body["versionDescription"] = request.getVersionDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEvaluator"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluators/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEvaluatorResponse>();
}

/**
 * @summary Updates an evaluator.
 *
 * @param request UpdateEvaluatorRequest
 * @return UpdateEvaluatorResponse
 */
UpdateEvaluatorResponse Client::updateEvaluator(const string &agentSpace, const string &name, const UpdateEvaluatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateEvaluatorWithOptions(agentSpace, name, request, headers, runtime);
}

/**
 * @summary Updates an evaluator skill.
 *
 * @param request UpdateEvaluatorSkillRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEvaluatorSkillResponse
 */
UpdateEvaluatorSkillResponse Client::updateEvaluatorSkillWithOptions(const string &name, const string &skillName, const UpdateEvaluatorSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentSpace()) {
    query["agentSpace"] = request.getAgentSpace();
  }

  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasEnable()) {
    body["enable"] = request.getEnable();
  }

  if (!!request.hasFiles()) {
    body["files"] = request.getFiles();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEvaluatorSkill"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/evaluator/" , Darabonba::Encode::Encoder::percentEncode(name) , "/skill/" , Darabonba::Encode::Encoder::percentEncode(skillName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEvaluatorSkillResponse>();
}

/**
 * @summary Updates an evaluator skill.
 *
 * @param request UpdateEvaluatorSkillRequest
 * @return UpdateEvaluatorSkillResponse
 */
UpdateEvaluatorSkillResponse Client::updateEvaluatorSkill(const string &name, const string &skillName, const UpdateEvaluatorSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateEvaluatorSkillWithOptions(name, skillName, request, headers, runtime);
}

/**
 * @summary Updates a pipeline.
 *
 * @param request UpdatePipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePipelineResponse
 */
UpdatePipelineResponse Client::updatePipelineWithOptions(const string &agentSpace, const string &pipelineName, const UpdatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasExecutePolicy()) {
    body["executePolicy"] = request.getExecutePolicy();
  }

  if (!!request.hasPipeline()) {
    body["pipeline"] = request.getPipeline();
  }

  if (!!request.hasSink()) {
    body["sink"] = request.getSink();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePipeline"},
    {"version" , "2026-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/agentspace/" , Darabonba::Encode::Encoder::percentEncode(agentSpace) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePipelineResponse>();
}

/**
 * @summary Updates a pipeline.
 *
 * @param request UpdatePipelineRequest
 * @return UpdatePipelineResponse
 */
UpdatePipelineResponse Client::updatePipeline(const string &agentSpace, const string &pipelineName, const UpdatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePipelineWithOptions(agentSpace, pipelineName, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AgentLoop20260520