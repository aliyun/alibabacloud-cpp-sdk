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
    {"cn-shanghai" , "agentloop.cn-shanghai.aliyuncs.com"},
    {"cn-hongkong" , "agentloop.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou" , "agentloop.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing" , "agentloop.cn-beijing.aliyuncs.com"}
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
 * @summary 向指定 Dataset 追加结构化数据行，避免客户端拼接 SQL。
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
 * @summary 向指定 Dataset 追加结构化数据行，避免客户端拼接 SQL。
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
 * @summary 创建AgentSpace
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
 * @summary 创建AgentSpace
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
 * @summary 创建上下文库
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
 * @summary 创建上下文库
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
 * @summary 创建 API Key
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
 * @summary 创建 API Key
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
 * @summary 创建数据集
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
 * @summary 创建数据集
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
 * @summary 删除AgentSpace
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
 * @summary 删除AgentSpace
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
 * @summary 删除上下文库
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
 * @summary 删除上下文库
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
 * @summary 删除 API Key
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
 * @summary 删除 API Key
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
 * @summary 删除数据集
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
 * @summary 删除数据集
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
 * @summary 删除流水线
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
 * @summary 删除流水线
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
 * @summary 查询Regions
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
 * @summary 查询Regions
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
 * @summary 执行查询语句
 *
 * @param request ExecuteQueryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteQueryResponse
 */
ExecuteQueryResponse Client::executeQueryWithOptions(const string &agentSpace, const string &datasetName, const ExecuteQueryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
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
 * @summary 执行查询语句
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
 * @summary 查询AgentSpace
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
 * @summary 查询AgentSpace
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
 * @summary 查询上下文库
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
 * @summary 查询上下文库
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
 * @summary 获取 API Key
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
 * @summary 获取 API Key
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
 * @summary 查询数据集
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
 * @summary 查询数据集
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
 * @summary 查询流水线
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
 * @summary 查询流水线
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
 * @summary 查询AgentSpace列表
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
 * @summary 查询AgentSpace列表
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
 * @summary 获取 API Key 列表
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
 * @summary 获取 API Key 列表
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
 * @summary 查询上下文库列表
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
 * @summary 查询上下文库列表
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
 * @summary 查询数据集列表
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
 * @summary 查询数据集列表
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
 * @summary 查询流水线列表
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
 * @summary 查询流水线列表
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
 * @summary 搜索上下文
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
 * @summary 搜索上下文
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
 * @summary 更新AgentSpace
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
 * @summary 更新AgentSpace
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
 * @summary 修改上下文库配置
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
 * @summary 修改上下文库配置
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
 * @summary 更新数据集
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
 * @summary 更新数据集
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
 * @summary 更新流水线
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
 * @summary 更新流水线
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