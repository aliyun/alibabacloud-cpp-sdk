#include <darabonba/Core.hpp>
#include <alibabacloud/Elasticsearch20170613.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/http/URL.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Elasticsearch20170613::Models;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{

AlibabaCloud::Elasticsearch20170613::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("elasticsearch", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Restores nodes in disabled zones. This operation is available only for multi-zone Elasticsearch clusters.
 *
 * @param request ActivateZonesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateZonesResponse
 */
ActivateZonesResponse Client::activateZonesWithOptions(const string &InstanceId, const ActivateZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "ActivateZones"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/recover-zones")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateZonesResponse>();
}

/**
 * @summary Restores nodes in disabled zones. This operation is available only for multi-zone Elasticsearch clusters.
 *
 * @param request ActivateZonesRequest
 * @return ActivateZonesResponse
 */
ActivateZonesResponse Client::activateZones(const string &InstanceId, const ActivateZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return activateZonesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Connects Elasticsearch clusters.
 *
 * @param request AddConnectableClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddConnectableClusterResponse
 */
AddConnectableClusterResponse Client::addConnectableClusterWithOptions(const string &InstanceId, const AddConnectableClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "AddConnectableCluster"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/connected-clusters")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddConnectableClusterResponse>();
}

/**
 * @summary Connects Elasticsearch clusters.
 *
 * @param request AddConnectableClusterRequest
 * @return AddConnectableClusterResponse
 */
AddConnectableClusterResponse Client::addConnectableCluster(const string &InstanceId, const AddConnectableClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addConnectableClusterWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Call the AddSnapshotRepo to create a reference repository when configuring a cross-cluster OSS repository.
 *
 * @param request AddSnapshotRepoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSnapshotRepoResponse
 */
AddSnapshotRepoResponse Client::addSnapshotRepoWithOptions(const string &InstanceId, const AddSnapshotRepoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "AddSnapshotRepo"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/snapshot-repos")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSnapshotRepoResponse>();
}

/**
 * @summary Call the AddSnapshotRepo to create a reference repository when configuring a cross-cluster OSS repository.
 *
 * @param request AddSnapshotRepoRequest
 * @return AddSnapshotRepoResponse
 */
AddSnapshotRepoResponse Client::addSnapshotRepo(const string &InstanceId, const AddSnapshotRepoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addSnapshotRepoWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Restores an Elasticsearch cluster that is frozen after it is released.
 *
 * @param request CancelDeletionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelDeletionResponse
 */
CancelDeletionResponse Client::cancelDeletionWithOptions(const string &InstanceId, const CancelDeletionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelDeletion"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/cancel-deletion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelDeletionResponse>();
}

/**
 * @summary Restores an Elasticsearch cluster that is frozen after it is released.
 *
 * @param request CancelDeletionRequest
 * @return CancelDeletionResponse
 */
CancelDeletionResponse Client::cancelDeletion(const string &InstanceId, const CancelDeletionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelDeletionWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Restores a Logstash cluster that is frozen after it is released.
 *
 * @param request CancelLogstashDeletionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelLogstashDeletionResponse
 */
CancelLogstashDeletionResponse Client::cancelLogstashDeletionWithOptions(const string &InstanceId, const CancelLogstashDeletionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelLogstashDeletion"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/cancel-deletion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelLogstashDeletionResponse>();
}

/**
 * @summary Restores a Logstash cluster that is frozen after it is released.
 *
 * @param request CancelLogstashDeletionRequest
 * @return CancelLogstashDeletionResponse
 */
CancelLogstashDeletionResponse Client::cancelLogstashDeletion(const string &InstanceId, const CancelLogstashDeletionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelLogstashDeletionWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @param request CancelTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTaskWithOptions(const string &InstanceId, const CancelTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasTaskType()) {
    query["taskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelTask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/cancel-task")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelTaskResponse>();
}

/**
 * @param request CancelTaskRequest
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTask(const string &InstanceId, const CancelTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelTaskWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Capacity Planning
 *
 * @param request CapacityPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CapacityPlanResponse
 */
CapacityPlanResponse Client::capacityPlanWithOptions(const CapacityPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComplexQueryAvailable()) {
    body["complexQueryAvailable"] = request.complexQueryAvailable();
  }

  if (!!request.hasDataInfo()) {
    body["dataInfo"] = request.dataInfo();
  }

  if (!!request.hasMetric()) {
    body["metric"] = request.metric();
  }

  if (!!request.hasUsageScenario()) {
    body["usageScenario"] = request.usageScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CapacityPlan"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/assist/actions/capacity-plan")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.pathname(), params.bodyType(), req, runtime)).get<CapacityPlanResponse>();
}

/**
 * @summary Capacity Planning
 *
 * @param request CapacityPlanRequest
 * @return CapacityPlanResponse
 */
CapacityPlanResponse Client::capacityPlan(const CapacityPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return capacityPlanWithOptions(request, headers, runtime);
}

/**
 * @summary 关闭实例的智能运维功能
 *
 * @param request CloseDiagnosisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseDiagnosisResponse
 */
CloseDiagnosisResponse Client::closeDiagnosisWithOptions(const string &InstanceId, const CloseDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseDiagnosis"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/close-diagnosis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseDiagnosisResponse>();
}

/**
 * @summary 关闭实例的智能运维功能
 *
 * @param request CloseDiagnosisRequest
 * @return CloseDiagnosisResponse
 */
CloseDiagnosisResponse Client::closeDiagnosis(const string &InstanceId, const CloseDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return closeDiagnosisWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @param request CloseHttpsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseHttpsResponse
 */
CloseHttpsResponse Client::closeHttpsWithOptions(const string &InstanceId, const CloseHttpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseHttps"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/close-https")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseHttpsResponse>();
}

/**
 * @param request CloseHttpsRequest
 * @return CloseHttpsResponse
 */
CloseHttpsResponse Client::closeHttps(const string &InstanceId, const CloseHttpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return closeHttpsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Disable Managed Index
 *
 * @param request CloseManagedIndexRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseManagedIndexResponse
 */
CloseManagedIndexResponse Client::closeManagedIndexWithOptions(const string &InstanceId, const string &Index, const CloseManagedIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseManagedIndex"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/indices/" , Darabonba::Http::URL::percentEncode(Index) , "/close-managed")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseManagedIndexResponse>();
}

/**
 * @summary Disable Managed Index
 *
 * @param request CloseManagedIndexRequest
 * @return CloseManagedIndexResponse
 */
CloseManagedIndexResponse Client::closeManagedIndex(const string &InstanceId, const string &Index, const CloseManagedIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return closeManagedIndexWithOptions(InstanceId, Index, request, headers, runtime);
}

/**
 * @summary 创建收集器
 *
 * @param request CreateCollectorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCollectorResponse
 */
CreateCollectorResponse Client::createCollectorWithOptions(const CreateCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasCollectorPaths()) {
    body["collectorPaths"] = request.collectorPaths();
  }

  if (!!request.hasConfigs()) {
    body["configs"] = request.configs();
  }

  if (!!request.hasDryRun()) {
    body["dryRun"] = request.dryRun();
  }

  if (!!request.hasExtendConfigs()) {
    body["extendConfigs"] = request.extendConfigs();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasResType()) {
    body["resType"] = request.resType();
  }

  if (!!request.hasResVersion()) {
    body["resVersion"] = request.resVersion();
  }

  if (!!request.hasVpcId()) {
    body["vpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCollector"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCollectorResponse>();
}

/**
 * @summary 创建收集器
 *
 * @param request CreateCollectorRequest
 * @return CreateCollectorResponse
 */
CreateCollectorResponse Client::createCollector(const CreateCollectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCollectorWithOptions(request, headers, runtime);
}

/**
 * @summary 创建Elasticsearch组合模板
 *
 * @param request CreateComponentIndexRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComponentIndexResponse
 */
CreateComponentIndexResponse Client::createComponentIndexWithOptions(const string &InstanceId, const string &name, const CreateComponentIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMeta()) {
    body["_meta"] = request.meta();
  }

  if (!!request.hasTemplate()) {
    body["template"] = request._template();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateComponentIndex"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/component-index/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComponentIndexResponse>();
}

/**
 * @summary 创建Elasticsearch组合模板
 *
 * @param request CreateComponentIndexRequest
 * @return CreateComponentIndexResponse
 */
CreateComponentIndexResponse Client::createComponentIndex(const string &InstanceId, const string &name, const CreateComponentIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createComponentIndexWithOptions(InstanceId, name, request, headers, runtime);
}

/**
 * @summary 创建数据流
 *
 * @param request CreateDataStreamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataStreamResponse
 */
CreateDataStreamResponse Client::createDataStreamWithOptions(const string &InstanceId, const CreateDataStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "CreateDataStream"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/data-streams")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataStreamResponse>();
}

/**
 * @summary 创建数据流
 *
 * @param request CreateDataStreamRequest
 * @return CreateDataStreamResponse
 */
CreateDataStreamResponse Client::createDataStream(const string &InstanceId, const CreateDataStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDataStreamWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建索引生命周期策略
 *
 * @param request CreateILMPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateILMPolicyResponse
 */
CreateILMPolicyResponse Client::createILMPolicyWithOptions(const string &InstanceId, const CreateILMPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "CreateILMPolicy"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/ilm-policies")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateILMPolicyResponse>();
}

/**
 * @summary 创建索引生命周期策略
 *
 * @param request CreateILMPolicyRequest
 * @return CreateILMPolicyResponse
 */
CreateILMPolicyResponse Client::createILMPolicy(const string &InstanceId, const CreateILMPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createILMPolicyWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建索引模版
 *
 * @param request CreateIndexTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIndexTemplateResponse
 */
CreateIndexTemplateResponse Client::createIndexTemplateWithOptions(const string &InstanceId, const CreateIndexTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasDataStream()) {
    body["dataStream"] = request.dataStream();
  }

  if (!!request.hasIlmPolicy()) {
    body["ilmPolicy"] = request.ilmPolicy();
  }

  if (!!request.hasIndexPatterns()) {
    body["indexPatterns"] = request.indexPatterns();
  }

  if (!!request.hasIndexTemplate()) {
    body["indexTemplate"] = request.indexTemplate();
  }

  if (!!request.hasPriority()) {
    body["priority"] = request.priority();
  }

  if (!!request.hasTemplate()) {
    body["template"] = request._template();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateIndexTemplate"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/index-templates")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIndexTemplateResponse>();
}

/**
 * @summary 创建索引模版
 *
 * @param request CreateIndexTemplateRequest
 * @return CreateIndexTemplateResponse
 */
CreateIndexTemplateResponse Client::createIndexTemplate(const string &InstanceId, const CreateIndexTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIndexTemplateWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建logstash实例
 *
 * @param request CreateLogstashRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLogstashResponse
 */
CreateLogstashResponse Client::createLogstashWithOptions(const CreateLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasNetworkConfig()) {
    body["networkConfig"] = request.networkConfig();
  }

  if (!!request.hasNodeAmount()) {
    body["nodeAmount"] = request.nodeAmount();
  }

  if (!!request.hasNodeSpec()) {
    body["nodeSpec"] = request.nodeSpec();
  }

  if (!!request.hasPaymentInfo()) {
    body["paymentInfo"] = request.paymentInfo();
  }

  if (!!request.hasPaymentType()) {
    body["paymentType"] = request.paymentType();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.version();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLogstash"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLogstashResponse>();
}

/**
 * @summary 创建logstash实例
 *
 * @param request CreateLogstashRequest
 * @return CreateLogstashResponse
 */
CreateLogstashResponse Client::createLogstash(const CreateLogstashRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLogstashWithOptions(request, headers, runtime);
}

/**
 * @summary 创建Logstash管道任务
 *
 * @param request CreatePipelinesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePipelinesResponse
 */
CreatePipelinesResponse Client::createPipelinesWithOptions(const string &InstanceId, const CreatePipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasTrigger()) {
    query["trigger"] = request.trigger();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreatePipelines"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/pipelines")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePipelinesResponse>();
}

/**
 * @summary 创建Logstash管道任务
 *
 * @param request CreatePipelinesRequest
 * @return CreatePipelinesResponse
 */
CreatePipelinesResponse Client::createPipelines(const string &InstanceId, const CreatePipelinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPipelinesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @param request CreateSnapshotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshotWithOptions(const string &InstanceId, const CreateSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "CreateSnapshot"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/snapshots")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSnapshotResponse>();
}

/**
 * @param request CreateSnapshotRequest
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshot(const string &InstanceId, const CreateSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSnapshotWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建私网链接VPC终端节点
 *
 * @description 5FFD9ED4-C2EC-4E89-B22B-1ACB6FE1D\\*\\*\\*
 *
 * @param request CreateVpcEndpointRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcEndpointResponse
 */
CreateVpcEndpointResponse Client::createVpcEndpointWithOptions(const string &InstanceId, const CreateVpcEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  json body = {};
  if (!!request.hasServiceId()) {
    body["serviceId"] = request.serviceId();
  }

  if (!!request.hasZoneId()) {
    body["zoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateVpcEndpoint"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/vpc-endpoints")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVpcEndpointResponse>();
}

/**
 * @summary 创建私网链接VPC终端节点
 *
 * @description 5FFD9ED4-C2EC-4E89-B22B-1ACB6FE1D\\*\\*\\*
 *
 * @param request CreateVpcEndpointRequest
 * @return CreateVpcEndpointResponse
 */
CreateVpcEndpointResponse Client::createVpcEndpoint(const string &InstanceId, const CreateVpcEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createVpcEndpointWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Invoke DeactivateZones to offline certain zones when there are multiple availability zones, and migrate nodes in the offline zones to other availability zones.
 *
 * @param request DeactivateZonesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeactivateZonesResponse
 */
DeactivateZonesResponse Client::deactivateZonesWithOptions(const string &InstanceId, const DeactivateZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "DeactivateZones"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/down-zones")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeactivateZonesResponse>();
}

/**
 * @summary Invoke DeactivateZones to offline certain zones when there are multiple availability zones, and migrate nodes in the offline zones to other availability zones.
 *
 * @param request DeactivateZonesRequest
 * @return DeactivateZonesResponse
 */
DeactivateZonesResponse Client::deactivateZones(const string &InstanceId, const DeactivateZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deactivateZonesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Deletes a shipper.
 *
 * @param request DeleteCollectorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCollectorResponse
 */
DeleteCollectorResponse Client::deleteCollectorWithOptions(const string &ResId, const DeleteCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCollector"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Http::URL::percentEncode(ResId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCollectorResponse>();
}

/**
 * @summary Deletes a shipper.
 *
 * @param request DeleteCollectorRequest
 * @return DeleteCollectorResponse
 */
DeleteCollectorResponse Client::deleteCollector(const string &ResId, const DeleteCollectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCollectorWithOptions(ResId, request, headers, runtime);
}

/**
 * @summary 删除组合索引模板
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComponentIndexResponse
 */
DeleteComponentIndexResponse Client::deleteComponentIndexWithOptions(const string &InstanceId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteComponentIndex"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/component-index/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComponentIndexResponse>();
}

/**
 * @summary 删除组合索引模板
 *
 * @return DeleteComponentIndexResponse
 */
DeleteComponentIndexResponse Client::deleteComponentIndex(const string &InstanceId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteComponentIndexWithOptions(InstanceId, name, headers, runtime);
}

/**
 * @param request DeleteConnectedClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConnectedClusterResponse
 */
DeleteConnectedClusterResponse Client::deleteConnectedClusterWithOptions(const string &InstanceId, const DeleteConnectedClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasConnectedInstanceId()) {
    query["connectedInstanceId"] = request.connectedInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConnectedCluster"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/connected-clusters")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConnectedClusterResponse>();
}

/**
 * @param request DeleteConnectedClusterRequest
 * @return DeleteConnectedClusterResponse
 */
DeleteConnectedClusterResponse Client::deleteConnectedCluster(const string &InstanceId, const DeleteConnectedClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConnectedClusterWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 删除数据流
 *
 * @param request DeleteDataStreamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataStreamResponse
 */
DeleteDataStreamResponse Client::deleteDataStreamWithOptions(const string &InstanceId, const string &DataStream, const DeleteDataStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataStream"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/data-streams/" , Darabonba::Http::URL::percentEncode(DataStream))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataStreamResponse>();
}

/**
 * @summary 删除数据流
 *
 * @param request DeleteDataStreamRequest
 * @return DeleteDataStreamResponse
 */
DeleteDataStreamResponse Client::deleteDataStream(const string &InstanceId, const string &DataStream, const DeleteDataStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDataStreamWithOptions(InstanceId, DataStream, request, headers, runtime);
}

/**
 * @param request DeleteDataTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataTaskResponse
 */
DeleteDataTaskResponse Client::deleteDataTaskWithOptions(const string &InstanceId, const DeleteDataTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataTask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/data-task")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataTaskResponse>();
}

/**
 * @param request DeleteDataTaskRequest
 * @return DeleteDataTaskResponse
 */
DeleteDataTaskResponse Client::deleteDataTask(const string &InstanceId, const DeleteDataTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDataTaskWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 删除历史索引模板
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeprecatedTemplateResponse
 */
DeleteDeprecatedTemplateResponse Client::deleteDeprecatedTemplateWithOptions(const string &InstanceId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDeprecatedTemplate"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/deprecated-templates/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDeprecatedTemplateResponse>();
}

/**
 * @summary 删除历史索引模板
 *
 * @return DeleteDeprecatedTemplateResponse
 */
DeleteDeprecatedTemplateResponse Client::deleteDeprecatedTemplate(const string &InstanceId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDeprecatedTemplateWithOptions(InstanceId, name, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteILMPolicyResponse
 */
DeleteILMPolicyResponse Client::deleteILMPolicyWithOptions(const string &InstanceId, const string &PolicyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteILMPolicy"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/ilm-policies/" , Darabonba::Http::URL::percentEncode(PolicyName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteILMPolicyResponse>();
}

/**
 * @return DeleteILMPolicyResponse
 */
DeleteILMPolicyResponse Client::deleteILMPolicy(const string &InstanceId, const string &PolicyName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteILMPolicyWithOptions(InstanceId, PolicyName, headers, runtime);
}

/**
 * @summary 删除ES集群索引模版
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIndexTemplateResponse
 */
DeleteIndexTemplateResponse Client::deleteIndexTemplateWithOptions(const string &InstanceId, const string &IndexTemplate, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIndexTemplate"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/index-templates/" , Darabonba::Http::URL::percentEncode(IndexTemplate))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIndexTemplateResponse>();
}

/**
 * @summary 删除ES集群索引模版
 *
 * @return DeleteIndexTemplateResponse
 */
DeleteIndexTemplateResponse Client::deleteIndexTemplate(const string &InstanceId, const string &IndexTemplate) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIndexTemplateWithOptions(InstanceId, IndexTemplate, headers, runtime);
}

/**
 * @param request DeleteInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const string &InstanceId, const DeleteInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasDeleteType()) {
    query["deleteType"] = request.deleteType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const string &InstanceId, const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Releases a Logstash cluster.
 *
 * @description Before you call this operation, take note of the following information: After the cluster is released, the physical resources used by the cluster are reclaimed. The data stored in the cluster is deleted and cannot be recovered. The disks attached to the nodes in the cluster and the snapshots created for the cluster are released.
 *
 * @param request DeleteLogstashRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLogstashResponse
 */
DeleteLogstashResponse Client::deleteLogstashWithOptions(const string &InstanceId, const DeleteLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasDeleteType()) {
    query["deleteType"] = request.deleteType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLogstash"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLogstashResponse>();
}

/**
 * @summary Releases a Logstash cluster.
 *
 * @description Before you call this operation, take note of the following information: After the cluster is released, the physical resources used by the cluster are reclaimed. The data stored in the cluster is deleted and cannot be recovered. The disks attached to the nodes in the cluster and the snapshots created for the cluster are released.
 *
 * @param request DeleteLogstashRequest
 * @return DeleteLogstashResponse
 */
DeleteLogstashResponse Client::deleteLogstash(const string &InstanceId, const DeleteLogstashRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLogstashWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Deletes a pipeline that is configured for a Logstash cluster.
 *
 * @param request DeletePipelinesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePipelinesResponse
 */
DeletePipelinesResponse Client::deletePipelinesWithOptions(const string &InstanceId, const DeletePipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasPipelineIds()) {
    query["pipelineIds"] = request.pipelineIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePipelines"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/pipelines")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePipelinesResponse>();
}

/**
 * @summary Deletes a pipeline that is configured for a Logstash cluster.
 *
 * @param request DeletePipelinesRequest
 * @return DeletePipelinesResponse
 */
DeletePipelinesResponse Client::deletePipelines(const string &InstanceId, const DeletePipelinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePipelinesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @param request DeleteSnapshotRepoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSnapshotRepoResponse
 */
DeleteSnapshotRepoResponse Client::deleteSnapshotRepoWithOptions(const string &InstanceId, const DeleteSnapshotRepoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasRepoPath()) {
    query["repoPath"] = request.repoPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSnapshotRepo"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/snapshot-repos")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSnapshotRepoResponse>();
}

/**
 * @param request DeleteSnapshotRepoRequest
 * @return DeleteSnapshotRepoResponse
 */
DeleteSnapshotRepoResponse Client::deleteSnapshotRepo(const string &InstanceId, const DeleteSnapshotRepoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSnapshotRepoWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 删除服务账号vpc下的终端节点
 *
 * @param request DeleteVpcEndpointRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVpcEndpointResponse
 */
DeleteVpcEndpointResponse Client::deleteVpcEndpointWithOptions(const string &InstanceId, const string &EndpointId, const DeleteVpcEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVpcEndpoint"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/vpc-endpoints/" , Darabonba::Http::URL::percentEncode(EndpointId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVpcEndpointResponse>();
}

/**
 * @summary 删除服务账号vpc下的终端节点
 *
 * @param request DeleteVpcEndpointRequest
 * @return DeleteVpcEndpointResponse
 */
DeleteVpcEndpointResponse Client::deleteVpcEndpoint(const string &InstanceId, const string &EndpointId, const DeleteVpcEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteVpcEndpointWithOptions(InstanceId, EndpointId, request, headers, runtime);
}

/**
 * @summary Queries the information of ES-operator that is installed for a specified Container Service for Kubernetes (ACK) cluster.
 *
 * @description > Before you install a shipper on an ACK cluster, you can call this operation to query the installation status of ES-operator for the ACK cluster.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAckOperatorResponse
 */
DescribeAckOperatorResponse Client::describeAckOperatorWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAckOperator"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ack-clusters/" , Darabonba::Http::URL::percentEncode(ClusterId) , "/operator")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAckOperatorResponse>();
}

/**
 * @summary Queries the information of ES-operator that is installed for a specified Container Service for Kubernetes (ACK) cluster.
 *
 * @description > Before you install a shipper on an ACK cluster, you can call this operation to query the installation status of ES-operator for the ACK cluster.
 *
 * @return DescribeAckOperatorResponse
 */
DescribeAckOperatorResponse Client::describeAckOperator(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeAckOperatorWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary Describe APM
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApmResponse
 */
DescribeApmResponse Client::describeApmWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApm"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/apm/" , Darabonba::Http::URL::percentEncode(instanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApmResponse>();
}

/**
 * @summary Describe APM
 *
 * @return DescribeApmResponse
 */
DescribeApmResponse Client::describeApm(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeApmWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Queries the details of a shipper.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCollectorResponse
 */
DescribeCollectorResponse Client::describeCollectorWithOptions(const string &ResId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCollector"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Http::URL::percentEncode(ResId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCollectorResponse>();
}

/**
 * @summary Queries the details of a shipper.
 *
 * @return DescribeCollectorResponse
 */
DescribeCollectorResponse Client::describeCollector(const string &ResId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeCollectorWithOptions(ResId, headers, runtime);
}

/**
 * @summary 查看组合索引模板详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComponentIndexResponse
 */
DescribeComponentIndexResponse Client::describeComponentIndexWithOptions(const string &InstanceId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComponentIndex"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/component-index/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComponentIndexResponse>();
}

/**
 * @summary 查看组合索引模板详情
 *
 * @return DescribeComponentIndexResponse
 */
DescribeComponentIndexResponse Client::describeComponentIndex(const string &InstanceId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeComponentIndexWithOptions(InstanceId, name, headers, runtime);
}

/**
 * @param request DescribeConnectableClustersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConnectableClustersResponse
 */
DescribeConnectableClustersResponse Client::describeConnectableClustersWithOptions(const string &InstanceId, const DescribeConnectableClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlreadySetItems()) {
    query["alreadySetItems"] = request.alreadySetItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConnectableClusters"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/connectable-clusters")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConnectableClustersResponse>();
}

/**
 * @param request DescribeConnectableClustersRequest
 * @return DescribeConnectableClustersResponse
 */
DescribeConnectableClustersResponse Client::describeConnectableClusters(const string &InstanceId, const DescribeConnectableClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeConnectableClustersWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary DescribeDeprecatedTemplate
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeprecatedTemplateResponse
 */
DescribeDeprecatedTemplateResponse Client::describeDeprecatedTemplateWithOptions(const string &InstanceId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeprecatedTemplate"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/deprecated-templates/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeprecatedTemplateResponse>();
}

/**
 * @summary DescribeDeprecatedTemplate
 *
 * @return DescribeDeprecatedTemplateResponse
 */
DescribeDeprecatedTemplateResponse Client::describeDeprecatedTemplate(const string &InstanceId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeDeprecatedTemplateWithOptions(InstanceId, name, headers, runtime);
}

/**
 * @param request DescribeDiagnoseReportRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnoseReportResponse
 */
DescribeDiagnoseReportResponse Client::describeDiagnoseReportWithOptions(const string &InstanceId, const string &ReportId, const DescribeDiagnoseReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnoseReport"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/reports/" , Darabonba::Http::URL::percentEncode(ReportId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnoseReportResponse>();
}

/**
 * @param request DescribeDiagnoseReportRequest
 * @return DescribeDiagnoseReportResponse
 */
DescribeDiagnoseReportResponse Client::describeDiagnoseReport(const string &InstanceId, const string &ReportId, const DescribeDiagnoseReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeDiagnoseReportWithOptions(InstanceId, ReportId, request, headers, runtime);
}

/**
 * @param request DescribeDiagnosisSettingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnosisSettingsResponse
 */
DescribeDiagnosisSettingsResponse Client::describeDiagnosisSettingsWithOptions(const string &InstanceId, const DescribeDiagnosisSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnosisSettings"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/settings")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosisSettingsResponse>();
}

/**
 * @param request DescribeDiagnosisSettingsRequest
 * @return DescribeDiagnosisSettingsResponse
 */
DescribeDiagnosisSettingsResponse Client::describeDiagnosisSettings(const string &InstanceId, const DescribeDiagnosisSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeDiagnosisSettingsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取集群动态指标
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDynamicSettingsResponse
 */
DescribeDynamicSettingsResponse Client::describeDynamicSettingsWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDynamicSettings"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/dynamic-settings")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDynamicSettingsResponse>();
}

/**
 * @summary 获取集群动态指标
 *
 * @return DescribeDynamicSettingsResponse
 */
DescribeDynamicSettingsResponse Client::describeDynamicSettings(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeDynamicSettingsWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Queries the health status of an Elasticsearch cluster.
 *
 * @description An Elasticsearch cluster can be in a health state indicated by one of the following colors:
 * *   GREEN: Primary shards and replica shards for the primary shards are normally allocated.
 * *   YELLOW: Primary shards are normally allocated, but replica shards for the primary shards are not normally allocated.
 * *   RED: Primary shards are not normally allocated.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticsearchHealthResponse
 */
DescribeElasticsearchHealthResponse Client::describeElasticsearchHealthWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticsearchHealth"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/elasticsearch-health")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticsearchHealthResponse>();
}

/**
 * @summary Queries the health status of an Elasticsearch cluster.
 *
 * @description An Elasticsearch cluster can be in a health state indicated by one of the following colors:
 * *   GREEN: Primary shards and replica shards for the primary shards are normally allocated.
 * *   YELLOW: Primary shards are normally allocated, but replica shards for the primary shards are not normally allocated.
 * *   RED: Primary shards are not normally allocated.
 *
 * @return DescribeElasticsearchHealthResponse
 */
DescribeElasticsearchHealthResponse Client::describeElasticsearchHealth(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeElasticsearchHealthWithOptions(InstanceId, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeILMPolicyResponse
 */
DescribeILMPolicyResponse Client::describeILMPolicyWithOptions(const string &InstanceId, const string &PolicyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeILMPolicy"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/ilm-policies/" , Darabonba::Http::URL::percentEncode(PolicyName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeILMPolicyResponse>();
}

/**
 * @return DescribeILMPolicyResponse
 */
DescribeILMPolicyResponse Client::describeILMPolicy(const string &InstanceId, const string &PolicyName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeILMPolicyWithOptions(InstanceId, PolicyName, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIndexTemplateResponse
 */
DescribeIndexTemplateResponse Client::describeIndexTemplateWithOptions(const string &InstanceId, const string &IndexTemplate, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIndexTemplate"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/index-templates/" , Darabonba::Http::URL::percentEncode(IndexTemplate))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIndexTemplateResponse>();
}

/**
 * @return DescribeIndexTemplateResponse
 */
DescribeIndexTemplateResponse Client::describeIndexTemplate(const string &InstanceId, const string &IndexTemplate) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeIndexTemplateWithOptions(InstanceId, IndexTemplate, headers, runtime);
}

/**
 * @summary The name of the dictionary file.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstance"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceResponse>();
}

/**
 * @summary The name of the dictionary file.
 *
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstance(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeInstanceWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary 获取Elasticsearch集群Kibana节点settings配置
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKibanaSettingsResponse
 */
DescribeKibanaSettingsResponse Client::describeKibanaSettingsWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeKibanaSettings"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/kibana-settings")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKibanaSettingsResponse>();
}

/**
 * @summary 获取Elasticsearch集群Kibana节点settings配置
 *
 * @return DescribeKibanaSettingsResponse
 */
DescribeKibanaSettingsResponse Client::describeKibanaSettings(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeKibanaSettingsWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary 查看Logstash实例详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogstashResponse
 */
DescribeLogstashResponse Client::describeLogstashWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLogstash"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogstashResponse>();
}

/**
 * @summary 查看Logstash实例详情
 *
 * @return DescribeLogstashResponse
 */
DescribeLogstashResponse Client::describeLogstash(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeLogstashWithOptions(InstanceId, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePipelineResponse
 */
DescribePipelineResponse Client::describePipelineWithOptions(const string &InstanceId, const string &PipelineId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePipeline"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/pipelines/" , Darabonba::Http::URL::percentEncode(PipelineId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePipelineResponse>();
}

/**
 * @return DescribePipelineResponse
 */
DescribePipelineResponse Client::describePipeline(const string &InstanceId, const string &PipelineId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describePipelineWithOptions(InstanceId, PipelineId, headers, runtime);
}

/**
 * @summary Queries the management configurations of pipelines in a Logstash cluster.
 *
 * @param request DescribePipelineManagementConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePipelineManagementConfigResponse
 */
DescribePipelineManagementConfigResponse Client::describePipelineManagementConfigWithOptions(const string &InstanceId, const DescribePipelineManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePipelineManagementConfig"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/pipeline-management-config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePipelineManagementConfigResponse>();
}

/**
 * @summary Queries the management configurations of pipelines in a Logstash cluster.
 *
 * @param request DescribePipelineManagementConfigRequest
 * @return DescribePipelineManagementConfigResponse
 */
DescribePipelineManagementConfigResponse Client::describePipelineManagementConfig(const string &InstanceId, const DescribePipelineManagementConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describePipelineManagementConfigWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/regions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(headers, runtime);
}

/**
 * @summary 查看备份设置
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSnapshotSettingResponse
 */
DescribeSnapshotSettingResponse Client::describeSnapshotSettingWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSnapshotSetting"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/snapshot-setting")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSnapshotSettingResponse>();
}

/**
 * @summary 查看备份设置
 *
 * @return DescribeSnapshotSettingResponse
 */
DescribeSnapshotSettingResponse Client::describeSnapshotSetting(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeSnapshotSettingWithOptions(InstanceId, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplatesResponse
 */
DescribeTemplatesResponse Client::describeTemplatesWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplates"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplatesResponse>();
}

/**
 * @return DescribeTemplatesResponse
 */
DescribeTemplatesResponse Client::describeTemplates(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeTemplatesWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Queries the configurations of the X-Pack Monitoring feature of a Logstash cluster.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeXpackMonitorConfigResponse
 */
DescribeXpackMonitorConfigResponse Client::describeXpackMonitorConfigWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeXpackMonitorConfig"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/xpack-monitor-config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeXpackMonitorConfigResponse>();
}

/**
 * @summary Queries the configurations of the X-Pack Monitoring feature of a Logstash cluster.
 *
 * @return DescribeXpackMonitorConfigResponse
 */
DescribeXpackMonitorConfigResponse Client::describeXpackMonitorConfig(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeXpackMonitorConfigWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary 触发ES实例智能诊断
 *
 * @param request DiagnoseInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DiagnoseInstanceResponse
 */
DiagnoseInstanceResponse Client::diagnoseInstanceWithOptions(const string &InstanceId, const DiagnoseInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.lang();
  }

  json body = {};
  if (!!request.hasDiagnoseItems()) {
    body["diagnoseItems"] = request.diagnoseItems();
  }

  if (!!request.hasIndices()) {
    body["indices"] = request.indices();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DiagnoseInstance"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/diagnose")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DiagnoseInstanceResponse>();
}

/**
 * @summary 触发ES实例智能诊断
 *
 * @param request DiagnoseInstanceRequest
 * @return DiagnoseInstanceResponse
 */
DiagnoseInstanceResponse Client::diagnoseInstance(const string &InstanceId, const DiagnoseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return diagnoseInstanceWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 关闭kibana私网
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableKibanaPvlNetworkResponse
 */
DisableKibanaPvlNetworkResponse Client::disableKibanaPvlNetworkWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableKibanaPvlNetwork"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/disable-kibana-private")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableKibanaPvlNetworkResponse>();
}

/**
 * @summary 关闭kibana私网
 *
 * @return DisableKibanaPvlNetworkResponse
 */
DisableKibanaPvlNetworkResponse Client::disableKibanaPvlNetwork(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableKibanaPvlNetworkWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary 开启v3 kibana私网
 *
 * @param request EnableKibanaPvlNetworkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableKibanaPvlNetworkResponse
 */
EnableKibanaPvlNetworkResponse Client::enableKibanaPvlNetworkWithOptions(const string &InstanceId, const EnableKibanaPvlNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndpointName()) {
    body["endpointName"] = request.endpointName();
  }

  if (!!request.hasSecurityGroups()) {
    body["securityGroups"] = request.securityGroups();
  }

  if (!!request.hasVSwitchIdsZone()) {
    body["vSwitchIdsZone"] = request.vSwitchIdsZone();
  }

  if (!!request.hasVpcId()) {
    body["vpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnableKibanaPvlNetwork"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/enable-kibana-private")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableKibanaPvlNetworkResponse>();
}

/**
 * @summary 开启v3 kibana私网
 *
 * @param request EnableKibanaPvlNetworkRequest
 * @return EnableKibanaPvlNetworkResponse
 */
EnableKibanaPvlNetworkResponse Client::enableKibanaPvlNetwork(const string &InstanceId, const EnableKibanaPvlNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableKibanaPvlNetworkWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries the estimated time that is required to restart a Logstash cluster.
 *
 * @param request EstimatedLogstashRestartTimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EstimatedLogstashRestartTimeResponse
 */
EstimatedLogstashRestartTimeResponse Client::estimatedLogstashRestartTimeWithOptions(const string &InstanceId, const EstimatedLogstashRestartTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["force"] = request.force();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "EstimatedLogstashRestartTime"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/estimated-time/restart-time")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EstimatedLogstashRestartTimeResponse>();
}

/**
 * @summary Queries the estimated time that is required to restart a Logstash cluster.
 *
 * @param request EstimatedLogstashRestartTimeRequest
 * @return EstimatedLogstashRestartTimeResponse
 */
EstimatedLogstashRestartTimeResponse Client::estimatedLogstashRestartTime(const string &InstanceId, const EstimatedLogstashRestartTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return estimatedLogstashRestartTimeWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries the estimated time that is required to restart an Elasticsearch cluster.
 *
 * @param request EstimatedRestartTimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EstimatedRestartTimeResponse
 */
EstimatedRestartTimeResponse Client::estimatedRestartTimeWithOptions(const string &InstanceId, const EstimatedRestartTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["force"] = request.force();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "EstimatedRestartTime"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/estimated-time/restart-time")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EstimatedRestartTimeResponse>();
}

/**
 * @summary Queries the estimated time that is required to restart an Elasticsearch cluster.
 *
 * @param request EstimatedRestartTimeRequest
 * @return EstimatedRestartTimeResponse
 */
EstimatedRestartTimeResponse Client::estimatedRestartTime(const string &InstanceId, const EstimatedRestartTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return estimatedRestartTimeWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Call GetClusterDataInformation to obtain the data information about the cluster.
 *
 * @param request GetClusterDataInformationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterDataInformationResponse
 */
GetClusterDataInformationResponse Client::getClusterDataInformationWithOptions(const GetClusterDataInformationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "GetClusterDataInformation"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/cluster/data-information")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterDataInformationResponse>();
}

/**
 * @summary Call GetClusterDataInformation to obtain the data information about the cluster.
 *
 * @param request GetClusterDataInformationRequest
 * @return GetClusterDataInformationResponse
 */
GetClusterDataInformationResponse Client::getClusterDataInformation(const GetClusterDataInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterDataInformationWithOptions(request, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetElastictaskResponse
 */
GetElastictaskResponse Client::getElastictaskWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetElastictask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/elastic-task")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetElastictaskResponse>();
}

/**
 * @return GetElastictaskResponse
 */
GetElastictaskResponse Client::getElastictask(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getElastictaskWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary GetEmonAlarmRecordStatisticsDistribute
 *
 * @param request GetEmonAlarmRecordStatisticsDistributeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEmonAlarmRecordStatisticsDistributeResponse
 */
GetEmonAlarmRecordStatisticsDistributeResponse Client::getEmonAlarmRecordStatisticsDistributeWithOptions(const GetEmonAlarmRecordStatisticsDistributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBody()) {
    query["body"] = request.body();
  }

  if (!!request.hasGroupId()) {
    query["groupId"] = request.groupId();
  }

  if (!!request.hasTimeEnd()) {
    query["timeEnd"] = request.timeEnd();
  }

  if (!!request.hasTimeStart()) {
    query["timeStart"] = request.timeStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEmonAlarmRecordStatisticsDistribute"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/emon/alarm-record-statistics/distribute")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEmonAlarmRecordStatisticsDistributeResponse>();
}

/**
 * @summary GetEmonAlarmRecordStatisticsDistribute
 *
 * @param request GetEmonAlarmRecordStatisticsDistributeRequest
 * @return GetEmonAlarmRecordStatisticsDistributeResponse
 */
GetEmonAlarmRecordStatisticsDistributeResponse Client::getEmonAlarmRecordStatisticsDistribute(const GetEmonAlarmRecordStatisticsDistributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEmonAlarmRecordStatisticsDistributeWithOptions(request, headers, runtime);
}

/**
 * @summary 获取高级监控报警自定义Grafana监控报警项
 *
 * @param request GetEmonGrafanaAlertsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEmonGrafanaAlertsResponse
 */
GetEmonGrafanaAlertsResponse Client::getEmonGrafanaAlertsWithOptions(const string &ProjectId, const GetEmonGrafanaAlertsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBody()) {
    query["body"] = request.body();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEmonGrafanaAlerts"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/emon/projects/" , Darabonba::Http::URL::percentEncode(ProjectId) , "/grafana/proxy/api/alerts")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEmonGrafanaAlertsResponse>();
}

/**
 * @summary 获取高级监控报警自定义Grafana监控报警项
 *
 * @param request GetEmonGrafanaAlertsRequest
 * @return GetEmonGrafanaAlertsResponse
 */
GetEmonGrafanaAlertsResponse Client::getEmonGrafanaAlerts(const string &ProjectId, const GetEmonGrafanaAlertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEmonGrafanaAlertsWithOptions(ProjectId, request, headers, runtime);
}

/**
 * @summary 获取高级监控报警自定义Grafana监控大盘列表
 *
 * @param request GetEmonGrafanaDashboardsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEmonGrafanaDashboardsResponse
 */
GetEmonGrafanaDashboardsResponse Client::getEmonGrafanaDashboardsWithOptions(const string &ProjectId, const GetEmonGrafanaDashboardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBody()) {
    query["body"] = request.body();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEmonGrafanaDashboards"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/emon/projects/" , Darabonba::Http::URL::percentEncode(ProjectId) , "/grafana/proxy/api/search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEmonGrafanaDashboardsResponse>();
}

/**
 * @summary 获取高级监控报警自定义Grafana监控大盘列表
 *
 * @param request GetEmonGrafanaDashboardsRequest
 * @return GetEmonGrafanaDashboardsResponse
 */
GetEmonGrafanaDashboardsResponse Client::getEmonGrafanaDashboards(const string &ProjectId, const GetEmonGrafanaDashboardsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEmonGrafanaDashboardsWithOptions(ProjectId, request, headers, runtime);
}

/**
 * @summary GetEmonMonitorData
 *
 * @param request GetEmonMonitorDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEmonMonitorDataResponse
 */
GetEmonMonitorDataResponse Client::getEmonMonitorDataWithOptions(const string &ProjectId, const GetEmonMonitorDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBody()) {
    query["body"] = request.body();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEmonMonitorData"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/emon/projects/" , Darabonba::Http::URL::percentEncode(ProjectId) , "/metrics/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEmonMonitorDataResponse>();
}

/**
 * @summary GetEmonMonitorData
 *
 * @param request GetEmonMonitorDataRequest
 * @return GetEmonMonitorDataResponse
 */
GetEmonMonitorDataResponse Client::getEmonMonitorData(const string &ProjectId, const GetEmonMonitorDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEmonMonitorDataWithOptions(ProjectId, request, headers, runtime);
}

/**
 * @summary 统计OpenStore实例的存储容量和使用情况
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOpenStoreUsageResponse
 */
GetOpenStoreUsageResponse Client::getOpenStoreUsageWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOpenStoreUsage"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/openstore/usage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOpenStoreUsageResponse>();
}

/**
 * @summary 统计OpenStore实例的存储容量和使用情况
 *
 * @return GetOpenStoreUsageResponse
 */
GetOpenStoreUsageResponse Client::getOpenStoreUsage(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getOpenStoreUsageWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary The maximum number of nodes.
 *
 * @param request GetRegionConfigurationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegionConfigurationResponse
 */
GetRegionConfigurationResponse Client::getRegionConfigurationWithOptions(const GetRegionConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasZoneId()) {
    query["zoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRegionConfiguration"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/region")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRegionConfigurationResponse>();
}

/**
 * @summary The maximum number of nodes.
 *
 * @param request GetRegionConfigurationRequest
 * @return GetRegionConfigurationResponse
 */
GetRegionConfigurationResponse Client::getRegionConfiguration(const GetRegionConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRegionConfigurationWithOptions(request, headers, runtime);
}

/**
 * @summary 实例区域商品化配置
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegionalInstanceConfigResponse
 */
GetRegionalInstanceConfigResponse Client::getRegionalInstanceConfigWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRegionalInstanceConfig"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/regions/instance-config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRegionalInstanceConfigResponse>();
}

/**
 * @summary 实例区域商品化配置
 *
 * @return GetRegionalInstanceConfigResponse
 */
GetRegionalInstanceConfigResponse Client::getRegionalInstanceConfig() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRegionalInstanceConfigWithOptions(headers, runtime);
}

/**
 * @summary ES集群可缩容节点
 *
 * @param request GetSuggestShrinkableNodesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSuggestShrinkableNodesResponse
 */
GetSuggestShrinkableNodesResponse Client::getSuggestShrinkableNodesWithOptions(const string &InstanceId, const GetSuggestShrinkableNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCount()) {
    query["count"] = request.count();
  }

  if (!!request.hasIgnoreStatus()) {
    query["ignoreStatus"] = request.ignoreStatus();
  }

  if (!!request.hasNodeType()) {
    query["nodeType"] = request.nodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSuggestShrinkableNodes"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/suggest-shrinkable-nodes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSuggestShrinkableNodesResponse>();
}

/**
 * @summary ES集群可缩容节点
 *
 * @param request GetSuggestShrinkableNodesRequest
 * @return GetSuggestShrinkableNodesResponse
 */
GetSuggestShrinkableNodesResponse Client::getSuggestShrinkableNodes(const string &InstanceId, const GetSuggestShrinkableNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSuggestShrinkableNodesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取可数据迁移节点
 *
 * @param request GetTransferableNodesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTransferableNodesResponse
 */
GetTransferableNodesResponse Client::getTransferableNodesWithOptions(const string &InstanceId, const GetTransferableNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCount()) {
    query["count"] = request.count();
  }

  if (!!request.hasNodeType()) {
    query["nodeType"] = request.nodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTransferableNodes"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/transferable-nodes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTransferableNodesResponse>();
}

/**
 * @summary 获取可数据迁移节点
 *
 * @param request GetTransferableNodesRequest
 * @return GetTransferableNodesResponse
 */
GetTransferableNodesResponse Client::getTransferableNodes(const string &InstanceId, const GetTransferableNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTransferableNodesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Creates a service-linked role.
 *
 * @description > Before you perform auto scaling for a cluster at the China site (aliyun.com) or you use shippers to collect logs, you must create a service-linked role.
 *
 * @param request InitializeOperationRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitializeOperationRoleResponse
 */
InitializeOperationRoleResponse Client::initializeOperationRoleWithOptions(const InitializeOperationRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "InitializeOperationRole"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/user/slr")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitializeOperationRoleResponse>();
}

/**
 * @summary Creates a service-linked role.
 *
 * @description > Before you perform auto scaling for a cluster at the China site (aliyun.com) or you use shippers to collect logs, you must create a service-linked role.
 *
 * @param request InitializeOperationRoleRequest
 * @return InitializeOperationRoleResponse
 */
InitializeOperationRoleResponse Client::initializeOperationRole(const InitializeOperationRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return initializeOperationRoleWithOptions(request, headers, runtime);
}

/**
 * @summary Installs ES-operator for a Container Service for Kubernetes (ACK) cluster.
 *
 * @description > Before you install a shipper for an ACK cluster, you must call this operation to install ES-operator for the cluster.
 *
 * @param request InstallAckOperatorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallAckOperatorResponse
 */
InstallAckOperatorResponse Client::installAckOperatorWithOptions(const string &ClusterId, const InstallAckOperatorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "InstallAckOperator"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ack-clusters/" , Darabonba::Http::URL::percentEncode(ClusterId) , "/operator")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallAckOperatorResponse>();
}

/**
 * @summary Installs ES-operator for a Container Service for Kubernetes (ACK) cluster.
 *
 * @description > Before you install a shipper for an ACK cluster, you must call this operation to install ES-operator for the cluster.
 *
 * @param request InstallAckOperatorRequest
 * @return InstallAckOperatorResponse
 */
InstallAckOperatorResponse Client::installAckOperator(const string &ClusterId, const InstallAckOperatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return installAckOperatorWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary Call InstallKibanaSystemPlugin to install the Kibana plug-in. The Kibana specification must be 2-Core 4 GB or higher.
 *
 * @param request InstallKibanaSystemPluginRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallKibanaSystemPluginResponse
 */
InstallKibanaSystemPluginResponse Client::installKibanaSystemPluginWithOptions(const string &InstanceId, const InstallKibanaSystemPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "InstallKibanaSystemPlugin"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/kibana-plugins/system/actions/install")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallKibanaSystemPluginResponse>();
}

/**
 * @summary Call InstallKibanaSystemPlugin to install the Kibana plug-in. The Kibana specification must be 2-Core 4 GB or higher.
 *
 * @param request InstallKibanaSystemPluginRequest
 * @return InstallKibanaSystemPluginResponse
 */
InstallKibanaSystemPluginResponse Client::installKibanaSystemPlugin(const string &InstanceId, const InstallKibanaSystemPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return installKibanaSystemPluginWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary The returned data also contains **Headers** parameters, indicating that header information is returned.
 *
 * @description ls-cn-oew1qbgl\\*\\*\\*\\*
 *
 * @param request InstallLogstashSystemPluginRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallLogstashSystemPluginResponse
 */
InstallLogstashSystemPluginResponse Client::installLogstashSystemPluginWithOptions(const string &InstanceId, const InstallLogstashSystemPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "InstallLogstashSystemPlugin"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/plugins/system/actions/install")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallLogstashSystemPluginResponse>();
}

/**
 * @summary The returned data also contains **Headers** parameters, indicating that header information is returned.
 *
 * @description ls-cn-oew1qbgl\\*\\*\\*\\*
 *
 * @param request InstallLogstashSystemPluginRequest
 * @return InstallLogstashSystemPluginResponse
 */
InstallLogstashSystemPluginResponse Client::installLogstashSystemPlugin(const string &InstanceId, const InstallLogstashSystemPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return installLogstashSystemPluginWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Call InstallSystemPlugin to install a system preset plug-in.
 *
 * @param request InstallSystemPluginRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallSystemPluginResponse
 */
InstallSystemPluginResponse Client::installSystemPluginWithOptions(const string &InstanceId, const InstallSystemPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "InstallSystemPlugin"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/plugins/system/actions/install")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallSystemPluginResponse>();
}

/**
 * @summary Call InstallSystemPlugin to install a system preset plug-in.
 *
 * @param request InstallSystemPluginRequest
 * @return InstallSystemPluginResponse
 */
InstallSystemPluginResponse Client::installSystemPlugin(const string &InstanceId, const InstallSystemPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return installSystemPluginWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Installs custom plug-ins that are uploaded to the Elasticsearch console.
 *
 * @param request InstallUserPluginsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallUserPluginsResponse
 */
InstallUserPluginsResponse Client::installUserPluginsWithOptions(const string &InstanceId, const InstallUserPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["force"] = request.force();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "InstallUserPlugins"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/plugins/user/actions/install")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallUserPluginsResponse>();
}

/**
 * @summary Installs custom plug-ins that are uploaded to the Elasticsearch console.
 *
 * @param request InstallUserPluginsRequest
 * @return InstallUserPluginsResponse
 */
InstallUserPluginsResponse Client::installUserPlugins(const string &InstanceId, const InstallUserPluginsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return installUserPluginsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @param request InterruptElasticsearchTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InterruptElasticsearchTaskResponse
 */
InterruptElasticsearchTaskResponse Client::interruptElasticsearchTaskWithOptions(const string &InstanceId, const InterruptElasticsearchTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InterruptElasticsearchTask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/interrupt")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InterruptElasticsearchTaskResponse>();
}

/**
 * @param request InterruptElasticsearchTaskRequest
 * @return InterruptElasticsearchTaskResponse
 */
InterruptElasticsearchTaskResponse Client::interruptElasticsearchTask(const string &InstanceId, const InterruptElasticsearchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return interruptElasticsearchTaskWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary After the task is suspended, the Logstash cluster is in the suspended state.
 *
 * @param request InterruptLogstashTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InterruptLogstashTaskResponse
 */
InterruptLogstashTaskResponse Client::interruptLogstashTaskWithOptions(const string &InstanceId, const InterruptLogstashTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InterruptLogstashTask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/interrupt")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InterruptLogstashTaskResponse>();
}

/**
 * @summary After the task is suspended, the Logstash cluster is in the suspended state.
 *
 * @param request InterruptLogstashTaskRequest
 * @return InterruptLogstashTaskResponse
 */
InterruptLogstashTaskResponse Client::interruptLogstashTask(const string &InstanceId, const InterruptLogstashTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return interruptLogstashTaskWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries a list of Container Service for Kubernetes (ACK) clusters.
 *
 * @param request ListAckClustersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAckClustersResponse
 */
ListAckClustersResponse Client::listAckClustersWithOptions(const ListAckClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasVpcId()) {
    query["vpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAckClusters"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ack-clusters")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAckClustersResponse>();
}

/**
 * @summary Queries a list of Container Service for Kubernetes (ACK) clusters.
 *
 * @param request ListAckClustersRequest
 * @return ListAckClustersResponse
 */
ListAckClustersResponse Client::listAckClusters(const ListAckClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAckClustersWithOptions(request, headers, runtime);
}

/**
 * @summary Queries all namespaces in a specified Container Service for Kubernetes (ACK) cluster.
 *
 * @description > When you install a shipper on an ACK cluster, you must specify a namespace. You can call this operation to query all namespaces in the ACK cluster, and select a namespace based on your business requirements.
 *
 * @param request ListAckNamespacesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAckNamespacesResponse
 */
ListAckNamespacesResponse Client::listAckNamespacesWithOptions(const string &ClusterId, const ListAckNamespacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAckNamespaces"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ack-clusters/" , Darabonba::Http::URL::percentEncode(ClusterId) , "/namespaces")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAckNamespacesResponse>();
}

/**
 * @summary Queries all namespaces in a specified Container Service for Kubernetes (ACK) cluster.
 *
 * @description > When you install a shipper on an ACK cluster, you must specify a namespace. You can call this operation to query all namespaces in the ACK cluster, and select a namespace based on your business requirements.
 *
 * @param request ListAckNamespacesRequest
 * @return ListAckNamespacesResponse
 */
ListAckNamespacesResponse Client::listAckNamespaces(const string &ClusterId, const ListAckNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAckNamespacesWithOptions(ClusterId, request, headers, runtime);
}

/**
 * @summary 变更记录 变更详情
 *
 * @param request ListActionRecordsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListActionRecordsResponse
 */
ListActionRecordsResponse Client::listActionRecordsWithOptions(const string &InstanceId, const ListActionRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionNames()) {
    query["actionNames"] = request.actionNames();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasFilter()) {
    query["filter"] = request.filter();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasRequestId()) {
    query["requestId"] = request.requestId();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  if (!!request.hasUserId()) {
    query["userId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListActionRecords"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/action-records")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListActionRecordsResponse>();
}

/**
 * @summary 变更记录 变更详情
 *
 * @param request ListActionRecordsRequest
 * @return ListActionRecordsResponse
 */
ListActionRecordsResponse Client::listActionRecords(const string &InstanceId, const ListActionRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listActionRecordsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary es-cn-tl32cpgwa002l\\*\\*\\*\\*
 *
 * @param request ListAllNodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllNodeResponse
 */
ListAllNodeResponse Client::listAllNodeWithOptions(const string &InstanceId, const ListAllNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtended()) {
    query["extended"] = request.extended();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllNode"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/nodes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllNodeResponse>();
}

/**
 * @summary es-cn-tl32cpgwa002l\\*\\*\\*\\*
 *
 * @param request ListAllNodeRequest
 * @return ListAllNodeResponse
 */
ListAllNodeResponse Client::listAllNode(const string &InstanceId, const ListAllNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAllNodeWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 实例可添加的OSS引用仓库
 *
 * @param request ListAlternativeSnapshotReposRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlternativeSnapshotReposResponse
 */
ListAlternativeSnapshotReposResponse Client::listAlternativeSnapshotReposWithOptions(const string &InstanceId, const ListAlternativeSnapshotReposRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlreadySetItems()) {
    query["alreadySetItems"] = request.alreadySetItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlternativeSnapshotRepos"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/alternative-snapshot-repos")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlternativeSnapshotReposResponse>();
}

/**
 * @summary 实例可添加的OSS引用仓库
 *
 * @param request ListAlternativeSnapshotReposRequest
 * @return ListAlternativeSnapshotReposResponse
 */
ListAlternativeSnapshotReposResponse Client::listAlternativeSnapshotRepos(const string &InstanceId, const ListAlternativeSnapshotReposRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAlternativeSnapshotReposWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary ListApm
 *
 * @param request ListApmRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApmResponse
 */
ListApmResponse Client::listApmWithOptions(const ListApmRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  if (!!request.hasOutput()) {
    query["output"] = request.output();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApm"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/apm")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApmResponse>();
}

/**
 * @summary ListApm
 *
 * @param request ListApmRequest
 * @return ListApmResponse
 */
ListApmResponse Client::listApm(const ListApmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listApmWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the Elasticsearch clusters that can be associated with a Logstash cluster when you configure the X-Pack Monitoring feature for the Logstash cluster.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAvailableEsInstanceIdsResponse
 */
ListAvailableEsInstanceIdsResponse Client::listAvailableEsInstanceIdsWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAvailableEsInstanceIds"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/available-elasticsearch-for-centralized-management")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAvailableEsInstanceIdsResponse>();
}

/**
 * @summary Queries the Elasticsearch clusters that can be associated with a Logstash cluster when you configure the X-Pack Monitoring feature for the Logstash cluster.
 *
 * @return ListAvailableEsInstanceIdsResponse
 */
ListAvailableEsInstanceIdsResponse Client::listAvailableEsInstanceIds(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAvailableEsInstanceIdsWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Queries shippers.
 *
 * @param request ListCollectorsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCollectorsResponse
 */
ListCollectorsResponse Client::listCollectorsWithOptions(const ListCollectorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasResId()) {
    query["resId"] = request.resId();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCollectors"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCollectorsResponse>();
}

/**
 * @summary Queries shippers.
 *
 * @param request ListCollectorsRequest
 * @return ListCollectorsResponse
 */
ListCollectorsResponse Client::listCollectors(const ListCollectorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCollectorsWithOptions(request, headers, runtime);
}

/**
 * @summary ES集群组合索引列表
 *
 * @param request ListComponentIndicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComponentIndicesResponse
 */
ListComponentIndicesResponse Client::listComponentIndicesWithOptions(const string &InstanceId, const ListComponentIndicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComponentIndices"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/component-index")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComponentIndicesResponse>();
}

/**
 * @summary ES集群组合索引列表
 *
 * @param request ListComponentIndicesRequest
 * @return ListComponentIndicesResponse
 */
ListComponentIndicesResponse Client::listComponentIndices(const string &InstanceId, const ListComponentIndicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listComponentIndicesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取与当前实例进行网络互通的实例列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConnectedClustersResponse
 */
ListConnectedClustersResponse Client::listConnectedClustersWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConnectedClusters"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/connected-clusters")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConnectedClustersResponse>();
}

/**
 * @summary 获取与当前实例进行网络互通的实例列表
 *
 * @return ListConnectedClustersResponse
 */
ListConnectedClustersResponse Client::listConnectedClusters(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConnectedClustersWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary 查询数据流
 *
 * @param request ListDataStreamsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataStreamsResponse
 */
ListDataStreamsResponse Client::listDataStreamsWithOptions(const string &InstanceId, const ListDataStreamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsManaged()) {
    query["isManaged"] = request.isManaged();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataStreams"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/data-streams")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataStreamsResponse>();
}

/**
 * @summary 查询数据流
 *
 * @param request ListDataStreamsRequest
 * @return ListDataStreamsResponse
 */
ListDataStreamsResponse Client::listDataStreams(const string &InstanceId, const ListDataStreamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataStreamsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataTasksResponse
 */
ListDataTasksResponse Client::listDataTasksWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataTasks"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/data-task")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataTasksResponse>();
}

/**
 * @return ListDataTasksResponse
 */
ListDataTasksResponse Client::listDataTasks(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataTasksWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Queries the default configuration files of shippers.
 *
 * @param request ListDefaultCollectorConfigurationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDefaultCollectorConfigurationsResponse
 */
ListDefaultCollectorConfigurationsResponse Client::listDefaultCollectorConfigurationsWithOptions(const ListDefaultCollectorConfigurationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResType()) {
    query["resType"] = request.resType();
  }

  if (!!request.hasResVersion()) {
    query["resVersion"] = request.resVersion();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDefaultCollectorConfigurations"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/beats/default-configurations")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDefaultCollectorConfigurationsResponse>();
}

/**
 * @summary Queries the default configuration files of shippers.
 *
 * @param request ListDefaultCollectorConfigurationsRequest
 * @return ListDefaultCollectorConfigurationsResponse
 */
ListDefaultCollectorConfigurationsResponse Client::listDefaultCollectorConfigurations(const ListDefaultCollectorConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDefaultCollectorConfigurationsWithOptions(request, headers, runtime);
}

/**
 * @summary ListDeprecatedTemplates
 *
 * @param request ListDeprecatedTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeprecatedTemplatesResponse
 */
ListDeprecatedTemplatesResponse Client::listDeprecatedTemplatesWithOptions(const string &InstanceId, const ListDeprecatedTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeprecatedTemplates"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/deprecated-templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeprecatedTemplatesResponse>();
}

/**
 * @summary ListDeprecatedTemplates
 *
 * @param request ListDeprecatedTemplatesRequest
 * @return ListDeprecatedTemplatesResponse
 */
ListDeprecatedTemplatesResponse Client::listDeprecatedTemplates(const string &InstanceId, const ListDeprecatedTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDeprecatedTemplatesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries the indexes for health diagnosis performed on an Elasticsearch cluster.
 *
 * @param request ListDiagnoseIndicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDiagnoseIndicesResponse
 */
ListDiagnoseIndicesResponse Client::listDiagnoseIndicesWithOptions(const string &InstanceId, const ListDiagnoseIndicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDiagnoseIndices"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/indices")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDiagnoseIndicesResponse>();
}

/**
 * @summary Queries the indexes for health diagnosis performed on an Elasticsearch cluster.
 *
 * @param request ListDiagnoseIndicesRequest
 * @return ListDiagnoseIndicesResponse
 */
ListDiagnoseIndicesResponse Client::listDiagnoseIndices(const string &InstanceId, const ListDiagnoseIndicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDiagnoseIndicesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取集群诊断报告列表
 *
 * @param request ListDiagnoseReportRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDiagnoseReportResponse
 */
ListDiagnoseReportResponse Client::listDiagnoseReportWithOptions(const string &InstanceId, const ListDiagnoseReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDetail()) {
    query["detail"] = request.detail();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.lang();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  if (!!request.hasTrigger()) {
    query["trigger"] = request.trigger();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDiagnoseReport"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/reports")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDiagnoseReportResponse>();
}

/**
 * @summary 获取集群诊断报告列表
 *
 * @param request ListDiagnoseReportRequest
 * @return ListDiagnoseReportResponse
 */
ListDiagnoseReportResponse Client::listDiagnoseReport(const string &InstanceId, const ListDiagnoseReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDiagnoseReportWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries the IDs of the historical intelligent O&M reports of an Elasticsearch cluster.
 *
 * @param request ListDiagnoseReportIdsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDiagnoseReportIdsResponse
 */
ListDiagnoseReportIdsResponse Client::listDiagnoseReportIdsWithOptions(const string &InstanceId, const ListDiagnoseReportIdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.lang();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  if (!!request.hasTrigger()) {
    query["trigger"] = request.trigger();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDiagnoseReportIds"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/report-ids")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDiagnoseReportIdsResponse>();
}

/**
 * @summary Queries the IDs of the historical intelligent O&M reports of an Elasticsearch cluster.
 *
 * @param request ListDiagnoseReportIdsRequest
 * @return ListDiagnoseReportIdsResponse
 */
ListDiagnoseReportIdsResponse Client::listDiagnoseReportIds(const string &InstanceId, const ListDiagnoseReportIdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDiagnoseReportIdsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary The diagnostic item is used to check whether data write requests of a cluster are accumulated. If data write requests are accumulated, a bulk rejection occurs. This may cause data loss and severely consume system resources.
 *
 * @param request ListDiagnosisItemsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDiagnosisItemsResponse
 */
ListDiagnosisItemsResponse Client::listDiagnosisItemsWithOptions(const ListDiagnosisItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDiagnosisItems"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/items")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDiagnosisItemsResponse>();
}

/**
 * @summary The diagnostic item is used to check whether data write requests of a cluster are accumulated. If data write requests are accumulated, a bulk rejection occurs. This may cause data loss and severely consume system resources.
 *
 * @param request ListDiagnosisItemsRequest
 * @return ListDiagnosisItemsResponse
 */
ListDiagnosisItemsResponse Client::listDiagnosisItems(const ListDiagnosisItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDiagnosisItemsWithOptions(request, headers, runtime);
}

/**
 * @param request ListDictInformationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDictInformationResponse
 */
ListDictInformationResponse Client::listDictInformationWithOptions(const string &InstanceId, const ListDictInformationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalyzerType()) {
    query["analyzerType"] = request.analyzerType();
  }

  if (!!request.hasBucketName()) {
    query["bucketName"] = request.bucketName();
  }

  if (!!request.hasKey()) {
    query["key"] = request.key();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDictInformation"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/dict/_info")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDictInformationResponse>();
}

/**
 * @param request ListDictInformationRequest
 * @return ListDictInformationResponse
 */
ListDictInformationResponse Client::listDictInformation(const string &InstanceId, const ListDictInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDictInformationWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries the details of a specified type of dictionary.
 *
 * @param request ListDictsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDictsResponse
 */
ListDictsResponse Client::listDictsWithOptions(const string &InstanceId, const ListDictsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalyzerType()) {
    query["analyzerType"] = request.analyzerType();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDicts"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/dicts")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDictsResponse>();
}

/**
 * @summary Queries the details of a specified type of dictionary.
 *
 * @param request ListDictsRequest
 * @return ListDictsResponse
 */
ListDictsResponse Client::listDicts(const string &InstanceId, const ListDictsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDictsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 查询ecs实例
 *
 * @description **Important** To call this operation, you must create the Aliyun Elasticsearch AccessingOOSRole and the system service role AliyunOOSAccessingECS 4ESRole to Elasticsearch the service account to obtain the ECS access permissions of the primary account. For more information, see [Collect ECS service logs](https://help.aliyun.com/document_detail/146446.html).
 *
 * @param request ListEcsInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEcsInstancesResponse
 */
ListEcsInstancesResponse Client::listEcsInstancesWithOptions(const ListEcsInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEcsInstanceIds()) {
    query["ecsInstanceIds"] = request.ecsInstanceIds();
  }

  if (!!request.hasEcsInstanceName()) {
    query["ecsInstanceName"] = request.ecsInstanceName();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasTags()) {
    query["tags"] = request.tags();
  }

  if (!!request.hasVpcId()) {
    query["vpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEcsInstances"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ecs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEcsInstancesResponse>();
}

/**
 * @summary 查询ecs实例
 *
 * @description **Important** To call this operation, you must create the Aliyun Elasticsearch AccessingOOSRole and the system service role AliyunOOSAccessingECS 4ESRole to Elasticsearch the service account to obtain the ECS access permissions of the primary account. For more information, see [Collect ECS service logs](https://help.aliyun.com/document_detail/146446.html).
 *
 * @param request ListEcsInstancesRequest
 * @return ListEcsInstancesResponse
 */
ListEcsInstancesResponse Client::listEcsInstances(const ListEcsInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEcsInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the driver files of a Logstash cluster.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExtendfilesResponse
 */
ListExtendfilesResponse Client::listExtendfilesWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExtendfiles"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/extendfiles")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExtendfilesResponse>();
}

/**
 * @summary Queries the driver files of a Logstash cluster.
 *
 * @return ListExtendfilesResponse
 */
ListExtendfilesResponse Client::listExtendfiles(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listExtendfilesWithOptions(InstanceId, headers, runtime);
}

/**
 * @param request ListILMPoliciesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListILMPoliciesResponse
 */
ListILMPoliciesResponse Client::listILMPoliciesWithOptions(const string &InstanceId, const ListILMPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["policyName"] = request.policyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListILMPolicies"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/ilm-policies")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListILMPoliciesResponse>();
}

/**
 * @param request ListILMPoliciesRequest
 * @return ListILMPoliciesResponse
 */
ListILMPoliciesResponse Client::listILMPolicies(const string &InstanceId, const ListILMPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listILMPoliciesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @param request ListIndexTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIndexTemplatesResponse
 */
ListIndexTemplatesResponse Client::listIndexTemplatesWithOptions(const string &InstanceId, const ListIndexTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndexTemplate()) {
    query["indexTemplate"] = request.indexTemplate();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIndexTemplates"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/index-templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIndexTemplatesResponse>();
}

/**
 * @param request ListIndexTemplatesRequest
 * @return ListIndexTemplatesResponse
 */
ListIndexTemplatesResponse Client::listIndexTemplates(const string &InstanceId, const ListIndexTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIndexTemplatesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 查询Elasticsearch实例列表
 *
 * @param request ListInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceResponse
 */
ListInstanceResponse Client::listInstanceWithOptions(const ListInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasEsVersion()) {
    query["esVersion"] = request.esVersion();
  }

  if (!!request.hasInstanceCategory()) {
    query["instanceCategory"] = request.instanceCategory();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPaymentType()) {
    query["paymentType"] = request.paymentType();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasTags()) {
    query["tags"] = request.tags();
  }

  if (!!request.hasVpcId()) {
    query["vpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    query["zoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstance"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceResponse>();
}

/**
 * @summary 查询Elasticsearch实例列表
 *
 * @param request ListInstanceRequest
 * @return ListInstanceResponse
 */
ListInstanceResponse Client::listInstance(const ListInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary 集群触发的硬件运维事件列表
 *
 * @param tmpReq ListInstanceHistoryEventsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceHistoryEventsResponse
 */
ListInstanceHistoryEventsResponse Client::listInstanceHistoryEventsWithOptions(const ListInstanceHistoryEventsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListInstanceHistoryEventsShrinkRequest request = ListInstanceHistoryEventsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEventCycleStatus()) {
    request.setEventCycleStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.eventCycleStatus(), "eventCycleStatus", "simple"));
  }

  if (!!tmpReq.hasEventLevel()) {
    request.setEventLevelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.eventLevel(), "eventLevel", "simple"));
  }

  if (!!tmpReq.hasEventType()) {
    request.setEventTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.eventType(), "eventType", "simple"));
  }

  json query = {};
  if (!!request.hasEventCreateEndTime()) {
    query["eventCreateEndTime"] = request.eventCreateEndTime();
  }

  if (!!request.hasEventCreateStartTime()) {
    query["eventCreateStartTime"] = request.eventCreateStartTime();
  }

  if (!!request.hasEventCycleStatusShrink()) {
    query["eventCycleStatus"] = request.eventCycleStatusShrink();
  }

  if (!!request.hasEventExecuteEndTime()) {
    query["eventExecuteEndTime"] = request.eventExecuteEndTime();
  }

  if (!!request.hasEventExecuteStartTime()) {
    query["eventExecuteStartTime"] = request.eventExecuteStartTime();
  }

  if (!!request.hasEventFinashEndTime()) {
    query["eventFinashEndTime"] = request.eventFinashEndTime();
  }

  if (!!request.hasEventFinashStartTime()) {
    query["eventFinashStartTime"] = request.eventFinashStartTime();
  }

  if (!!request.hasEventLevelShrink()) {
    query["eventLevel"] = request.eventLevelShrink();
  }

  if (!!request.hasEventTypeShrink()) {
    query["eventType"] = request.eventTypeShrink();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  if (!!request.hasNodeIP()) {
    query["nodeIP"] = request.nodeIP();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.body())}
  }));
  Params params = Params(json({
    {"action" , "ListInstanceHistoryEvents"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/events")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceHistoryEventsResponse>();
}

/**
 * @summary 集群触发的硬件运维事件列表
 *
 * @param request ListInstanceHistoryEventsRequest
 * @return ListInstanceHistoryEventsResponse
 */
ListInstanceHistoryEventsResponse Client::listInstanceHistoryEvents(const ListInstanceHistoryEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceHistoryEventsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取当前实例先特定的索引列表
 *
 * @param request ListInstanceIndicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceIndicesResponse
 */
ListInstanceIndicesResponse Client::listInstanceIndicesWithOptions(const string &InstanceId, const ListInstanceIndicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["all"] = request.all();
  }

  if (!!request.hasIsManaged()) {
    query["isManaged"] = request.isManaged();
  }

  if (!!request.hasIsOpenstore()) {
    query["isOpenstore"] = request.isOpenstore();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceIndices"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/indices")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceIndicesResponse>();
}

/**
 * @summary 获取当前实例先特定的索引列表
 *
 * @param request ListInstanceIndicesRequest
 * @return ListInstanceIndicesResponse
 */
ListInstanceIndicesResponse Client::listInstanceIndices(const string &InstanceId, const ListInstanceIndicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceIndicesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries a list of Kibana plug-ins.
 *
 * @param request ListKibanaPluginsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKibanaPluginsResponse
 */
ListKibanaPluginsResponse Client::listKibanaPluginsWithOptions(const string &InstanceId, const ListKibanaPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKibanaPlugins"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/kibana-plugins")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKibanaPluginsResponse>();
}

/**
 * @summary Queries a list of Kibana plug-ins.
 *
 * @param request ListKibanaPluginsRequest
 * @return ListKibanaPluginsResponse
 */
ListKibanaPluginsResponse Client::listKibanaPlugins(const string &InstanceId, const ListKibanaPluginsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKibanaPluginsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 查询kibana私网连接信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKibanaPvlNetworkResponse
 */
ListKibanaPvlNetworkResponse Client::listKibanaPvlNetworkWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKibanaPvlNetwork"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/get-kibana-private")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKibanaPvlNetworkResponse>();
}

/**
 * @summary 查询kibana私网连接信息
 *
 * @return ListKibanaPvlNetworkResponse
 */
ListKibanaPvlNetworkResponse Client::listKibanaPvlNetwork(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKibanaPvlNetworkWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Logstash集群列表
 *
 * @param request ListLogstashRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLogstashResponse
 */
ListLogstashResponse Client::listLogstashWithOptions(const ListLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasTags()) {
    query["tags"] = request.tags();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.version();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLogstash"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogstashResponse>();
}

/**
 * @summary Logstash集群列表
 *
 * @param request ListLogstashRequest
 * @return ListLogstashResponse
 */
ListLogstashResponse Client::listLogstash(const ListLogstashRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLogstashWithOptions(request, headers, runtime);
}

/**
 * @summary 获取Logstash日志
 *
 * @param request ListLogstashLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLogstashLogResponse
 */
ListLogstashLogResponse Client::listLogstashLogWithOptions(const string &InstanceId, const ListLogstashLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.query();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLogstashLog"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/search-log")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogstashLogResponse>();
}

/**
 * @summary 获取Logstash日志
 *
 * @param request ListLogstashLogRequest
 * @return ListLogstashLogResponse
 */
ListLogstashLogResponse Client::listLogstashLog(const string &InstanceId, const ListLogstashLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLogstashLogWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Logstash插件列表
 *
 * @param request ListLogstashPluginsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLogstashPluginsResponse
 */
ListLogstashPluginsResponse Client::listLogstashPluginsWithOptions(const string &InstanceId, const ListLogstashPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasSource()) {
    query["source"] = request.source();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLogstashPlugins"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/plugins")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogstashPluginsResponse>();
}

/**
 * @summary Logstash插件列表
 *
 * @param request ListLogstashPluginsRequest
 * @return ListLogstashPluginsResponse
 */
ListLogstashPluginsResponse Client::listLogstashPlugins(const string &InstanceId, const ListLogstashPluginsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLogstashPluginsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries the statuses of Elastic Compute Service (ECS) instances on which a shipper is installed.
 *
 * @param request ListNodesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodesWithOptions(const string &ResId, const ListNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEcsInstanceIds()) {
    query["ecsInstanceIds"] = request.ecsInstanceIds();
  }

  if (!!request.hasEcsInstanceName()) {
    query["ecsInstanceName"] = request.ecsInstanceName();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasTags()) {
    query["tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNodes"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Http::URL::percentEncode(ResId) , "/nodes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodesResponse>();
}

/**
 * @summary Queries the statuses of Elastic Compute Service (ECS) instances on which a shipper is installed.
 *
 * @param request ListNodesRequest
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodes(const string &ResId, const ListNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listNodesWithOptions(ResId, request, headers, runtime);
}

/**
 * @summary ListPipeline
 *
 * @param request ListPipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelineResponse
 */
ListPipelineResponse Client::listPipelineWithOptions(const string &InstanceId, const ListPipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPipelineId()) {
    query["pipelineId"] = request.pipelineId();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipeline"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/pipelines")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelineResponse>();
}

/**
 * @summary ListPipeline
 *
 * @param request ListPipelineRequest
 * @return ListPipelineResponse
 */
ListPipelineResponse Client::listPipeline(const string &InstanceId, const ListPipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPipelineWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary The error message returned.
 *
 * @param request ListPipelineIdsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelineIdsResponse
 */
ListPipelineIdsResponse Client::listPipelineIdsWithOptions(const string &InstanceId, const ListPipelineIdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "ListPipelineIds"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/pipeline-ids")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelineIdsResponse>();
}

/**
 * @summary The error message returned.
 *
 * @param request ListPipelineIdsRequest
 * @return ListPipelineIdsResponse
 */
ListPipelineIdsResponse Client::listPipelineIds(const string &InstanceId, const ListPipelineIdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPipelineIdsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary ES系统插件列表
 *
 * @param request ListPluginsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPluginsResponse
 */
ListPluginsResponse Client::listPluginsWithOptions(const string &InstanceId, const ListPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasSource()) {
    query["source"] = request.source();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPlugins"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/plugins")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPluginsResponse>();
}

/**
 * @summary ES系统插件列表
 *
 * @param request ListPluginsRequest
 * @return ListPluginsResponse
 */
ListPluginsResponse Client::listPlugins(const string &InstanceId, const ListPluginsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPluginsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 查看Elasticsearch集群各种类型的日志
 *
 * @param request ListSearchLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSearchLogResponse
 */
ListSearchLogResponse Client::listSearchLogWithOptions(const string &InstanceId, const ListSearchLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.query();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSearchLog"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/search-log")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSearchLogResponse>();
}

/**
 * @summary 查看Elasticsearch集群各种类型的日志
 *
 * @param request ListSearchLogRequest
 * @return ListSearchLogResponse
 */
ListSearchLogResponse Client::listSearchLog(const string &InstanceId, const ListSearchLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSearchLogWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries the information about shards that are being restored or shards that are restored. By default, this operation returns only the information about shards that are being restored after you call this operation.
 *
 * @description > The restoration of a shard is a process of synchronizing data from a primary shard to a replica shard. After the restoration is complete, the replica shard is available for data searches.
 *
 * @param request ListShardRecoveriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListShardRecoveriesResponse
 */
ListShardRecoveriesResponse Client::listShardRecoveriesWithOptions(const string &InstanceId, const ListShardRecoveriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveOnly()) {
    query["activeOnly"] = request.activeOnly();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListShardRecoveries"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/cat-recovery")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListShardRecoveriesResponse>();
}

/**
 * @summary Queries the information about shards that are being restored or shards that are restored. By default, this operation returns only the information about shards that are being restored after you call this operation.
 *
 * @description > The restoration of a shard is a process of synchronizing data from a primary shard to a replica shard. After the restoration is complete, the replica shard is available for data searches.
 *
 * @param request ListShardRecoveriesRequest
 * @return ListShardRecoveriesResponse
 */
ListShardRecoveriesResponse Client::listShardRecoveries(const string &InstanceId, const ListShardRecoveriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listShardRecoveriesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取跨集群索引仓库列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSnapshotReposByInstanceIdResponse
 */
ListSnapshotReposByInstanceIdResponse Client::listSnapshotReposByInstanceIdWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSnapshotReposByInstanceId"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/snapshot-repos")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSnapshotReposByInstanceIdResponse>();
}

/**
 * @summary 获取跨集群索引仓库列表
 *
 * @return ListSnapshotReposByInstanceIdResponse
 */
ListSnapshotReposByInstanceIdResponse Client::listSnapshotReposByInstanceId(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSnapshotReposByInstanceIdWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary 查看资源和标签关系
 *
 * @param request ListTagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tags")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary 查看资源和标签关系
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 查看所有已常见的标签
 *
 * @param request ListTagsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTagsWithOptions(const ListTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTags"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tags/all-tags")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagsResponse>();
}

/**
 * @summary 查看所有已常见的标签
 *
 * @param request ListTagsRequest
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTags(const ListTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTagsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the statuses of endpoints in the virtual private cloud (VPC) within the Elasticsearch service account.
 *
 * @param request ListVpcEndpointsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcEndpointsResponse
 */
ListVpcEndpointsResponse Client::listVpcEndpointsWithOptions(const string &InstanceId, const ListVpcEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpcEndpoints"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/vpc-endpoints")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcEndpointsResponse>();
}

/**
 * @summary Queries the statuses of endpoints in the virtual private cloud (VPC) within the Elasticsearch service account.
 *
 * @param request ListVpcEndpointsRequest
 * @return ListVpcEndpointsResponse
 */
ListVpcEndpointsResponse Client::listVpcEndpoints(const string &InstanceId, const ListVpcEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVpcEndpointsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Call the MigrateToOtherZone to migrate the nodes in the specified zone to the destination zone.
 *
 * @description If the specifications in your zone are insufficient, you can upgrade your instance to nodes in another zone. Before calling this interface, you must ensure that:
 * *   The error message returned because the current account is in a zone that has sufficient resources.
 *     After migrating nodes with current specifications to another zone, you need to manually [upgrade cluster](https://help.aliyun.com/document_detail/96650.html) because the cluster will not be upgraded during the migration process. Therefore, select a zone with sufficient resources to avoid cluster upgrade failure. We recommend that you choose new zones that are in lower alphabetical order. For example, for cn-hangzhou-e and cn-hangzhou-h zones, choose cn-hangzhou-h first.
 * *   The cluster is in the healthy state.
 *     Can be passed`  GET _cat/health?v  `command to view the health status of the cluster.
 *
 * @param request MigrateToOtherZoneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateToOtherZoneResponse
 */
MigrateToOtherZoneResponse Client::migrateToOtherZoneWithOptions(const string &InstanceId, const MigrateToOtherZoneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "MigrateToOtherZone"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/migrate-zones")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateToOtherZoneResponse>();
}

/**
 * @summary Call the MigrateToOtherZone to migrate the nodes in the specified zone to the destination zone.
 *
 * @description If the specifications in your zone are insufficient, you can upgrade your instance to nodes in another zone. Before calling this interface, you must ensure that:
 * *   The error message returned because the current account is in a zone that has sufficient resources.
 *     After migrating nodes with current specifications to another zone, you need to manually [upgrade cluster](https://help.aliyun.com/document_detail/96650.html) because the cluster will not be upgraded during the migration process. Therefore, select a zone with sufficient resources to avoid cluster upgrade failure. We recommend that you choose new zones that are in lower alphabetical order. For example, for cn-hangzhou-e and cn-hangzhou-h zones, choose cn-hangzhou-h first.
 * *   The cluster is in the healthy state.
 *     Can be passed`  GET _cat/health?v  `command to view the health status of the cluster.
 *
 * @param request MigrateToOtherZoneRequest
 * @return MigrateToOtherZoneResponse
 */
MigrateToOtherZoneResponse Client::migrateToOtherZone(const string &InstanceId, const MigrateToOtherZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return migrateToOtherZoneWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Changes the Elastic Compute Service (ECS) instances on which a shipper is installed.
 *
 * @param request ModifyDeployMachineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDeployMachineResponse
 */
ModifyDeployMachineResponse Client::modifyDeployMachineWithOptions(const string &ResId, const ModifyDeployMachineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "ModifyDeployMachine"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Http::URL::percentEncode(ResId) , "/actions/modify-deploy-machines")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDeployMachineResponse>();
}

/**
 * @summary Changes the Elastic Compute Service (ECS) instances on which a shipper is installed.
 *
 * @param request ModifyDeployMachineRequest
 * @return ModifyDeployMachineResponse
 */
ModifyDeployMachineResponse Client::modifyDeployMachine(const string &ResId, const ModifyDeployMachineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyDeployMachineWithOptions(ResId, request, headers, runtime);
}

/**
 * @param request ModifyElastictaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyElastictaskResponse
 */
ModifyElastictaskResponse Client::modifyElastictaskWithOptions(const string &InstanceId, const ModifyElastictaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "ModifyElastictask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/elastic-task")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyElastictaskResponse>();
}

/**
 * @param request ModifyElastictaskRequest
 * @return ModifyElastictaskResponse
 */
ModifyElastictaskResponse Client::modifyElastictask(const string &InstanceId, const ModifyElastictaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyElastictaskWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary ## RequestBody
 * You must also specify the following parameters in the RequestBody parameter to specify the maintenance window information.  
 * | Parameter | Type | Required | Example | Description |
 * | --------- | ---- | -------- | ------- | ----------- |
 * | maintainStartTime | String | No | 02:00Z | The start time of the maintenance window. Specify the time in the HH:mmZ format. The time must be in UTC. |
 * | maintainEndTime | String | No | 06:00Z | The end time of the maintenance window. Specify the time in the HH:mmZ format. The time must be displayed in UTC. |
 * | openMaintainTime | boolean | Yes | true | Specifies whether to enable the maintenance window feature. Only **true** is supported, indicating that the feature is enabled. |
 * Examples: 
 * ```
 * {
 *     "openMaintainTime": true,
 *     "maintainStartTime": "03:00Z",
 *     "maintainEndTime": "04:00Z"
 * }
 * ```
 *
 * @description es-cn-n6w1o1x0w001c\\*\\*\\*\\*
 *
 * @param request ModifyInstanceMaintainTimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceMaintainTimeResponse
 */
ModifyInstanceMaintainTimeResponse Client::modifyInstanceMaintainTimeWithOptions(const string &InstanceId, const ModifyInstanceMaintainTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "ModifyInstanceMaintainTime"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/modify-maintaintime")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceMaintainTimeResponse>();
}

/**
 * @summary ## RequestBody
 * You must also specify the following parameters in the RequestBody parameter to specify the maintenance window information.  
 * | Parameter | Type | Required | Example | Description |
 * | --------- | ---- | -------- | ------- | ----------- |
 * | maintainStartTime | String | No | 02:00Z | The start time of the maintenance window. Specify the time in the HH:mmZ format. The time must be in UTC. |
 * | maintainEndTime | String | No | 06:00Z | The end time of the maintenance window. Specify the time in the HH:mmZ format. The time must be displayed in UTC. |
 * | openMaintainTime | boolean | Yes | true | Specifies whether to enable the maintenance window feature. Only **true** is supported, indicating that the feature is enabled. |
 * Examples: 
 * ```
 * {
 *     "openMaintainTime": true,
 *     "maintainStartTime": "03:00Z",
 *     "maintainEndTime": "04:00Z"
 * }
 * ```
 *
 * @description es-cn-n6w1o1x0w001c\\*\\*\\*\\*
 *
 * @param request ModifyInstanceMaintainTimeRequest
 * @return ModifyInstanceMaintainTimeResponse
 */
ModifyInstanceMaintainTimeResponse Client::modifyInstanceMaintainTime(const string &InstanceId, const ModifyInstanceMaintainTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyInstanceMaintainTimeWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary >  If you want to add an IP address whitelist, you can set the modifyMode parameter only to Cover. If you set this parameter to Delete or Append, you can only update an IP address whitelist.
 * *   If you set the modifyMode parameter to Cover and leave the ips parameter empty, the system deletes the specified whitelist. If the whitelist specified by using the groupName parameter does not exist, the system creates such a whitelist.
 * *   If you set the modifyMode parameter to Delete, at least one IP address must be retained for the specified whitelist.
 * *   If you set the modifyMode parameter to Append, you must make sure that the specified whitelist exists. Otherwise, the system reports the NotFound error.
 *
 * @description The ID of the cluster.
 *
 * @param request ModifyWhiteIpsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWhiteIpsResponse
 */
ModifyWhiteIpsResponse Client::modifyWhiteIpsWithOptions(const string &InstanceId, const ModifyWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasModifyMode()) {
    body["modifyMode"] = request.modifyMode();
  }

  if (!!request.hasNetworkType()) {
    body["networkType"] = request.networkType();
  }

  if (!!request.hasNodeType()) {
    body["nodeType"] = request.nodeType();
  }

  if (!!request.hasWhiteIpGroup()) {
    body["whiteIpGroup"] = request.whiteIpGroup();
  }

  if (!!request.hasWhiteIpList()) {
    body["whiteIpList"] = request.whiteIpList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyWhiteIps"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/modify-white-ips")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWhiteIpsResponse>();
}

/**
 * @summary >  If you want to add an IP address whitelist, you can set the modifyMode parameter only to Cover. If you set this parameter to Delete or Append, you can only update an IP address whitelist.
 * *   If you set the modifyMode parameter to Cover and leave the ips parameter empty, the system deletes the specified whitelist. If the whitelist specified by using the groupName parameter does not exist, the system creates such a whitelist.
 * *   If you set the modifyMode parameter to Delete, at least one IP address must be retained for the specified whitelist.
 * *   If you set the modifyMode parameter to Append, you must make sure that the specified whitelist exists. Otherwise, the system reports the NotFound error.
 *
 * @description The ID of the cluster.
 *
 * @param request ModifyWhiteIpsRequest
 * @return ModifyWhiteIpsResponse
 */
ModifyWhiteIpsResponse Client::modifyWhiteIps(const string &InstanceId, const ModifyWhiteIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Migrates an Elasticsearch cluster to a specified resource group.
 *
 * @param request MoveResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const string &InstanceId, const MoveResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/resourcegroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceGroupResponse>();
}

/**
 * @summary Migrates an Elasticsearch cluster to a specified resource group.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const string &InstanceId, const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return moveResourceGroupWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @param request OpenDiagnosisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenDiagnosisResponse
 */
OpenDiagnosisResponse Client::openDiagnosisWithOptions(const string &InstanceId, const OpenDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenDiagnosis"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/open-diagnosis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenDiagnosisResponse>();
}

/**
 * @param request OpenDiagnosisRequest
 * @return OpenDiagnosisResponse
 */
OpenDiagnosisResponse Client::openDiagnosis(const string &InstanceId, const OpenDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return openDiagnosisWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @description >  To ensure data security, we recommend that you enable HTTPS.
 *
 * @param request OpenHttpsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenHttpsResponse
 */
OpenHttpsResponse Client::openHttpsWithOptions(const string &InstanceId, const OpenHttpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenHttps"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/open-https")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenHttpsResponse>();
}

/**
 * @description >  To ensure data security, we recommend that you enable HTTPS.
 *
 * @param request OpenHttpsRequest
 * @return OpenHttpsResponse
 */
OpenHttpsResponse Client::openHttps(const string &InstanceId, const OpenHttpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return openHttpsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary PostEmonTryAlarmRule
 *
 * @param request PostEmonTryAlarmRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PostEmonTryAlarmRuleResponse
 */
PostEmonTryAlarmRuleResponse Client::postEmonTryAlarmRuleWithOptions(const string &ProjectId, const string &AlarmGroupId, const PostEmonTryAlarmRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBody()) {
    query["body"] = request.body();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PostEmonTryAlarmRule"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/emon/projects/" , Darabonba::Http::URL::percentEncode(ProjectId) , "/alarm-groups/" , Darabonba::Http::URL::percentEncode(AlarmGroupId) , "/alarm-rules/_test")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PostEmonTryAlarmRuleResponse>();
}

/**
 * @summary PostEmonTryAlarmRule
 *
 * @param request PostEmonTryAlarmRuleRequest
 * @return PostEmonTryAlarmRuleResponse
 */
PostEmonTryAlarmRuleResponse Client::postEmonTryAlarmRule(const string &ProjectId, const string &AlarmGroupId, const PostEmonTryAlarmRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return postEmonTryAlarmRuleWithOptions(ProjectId, AlarmGroupId, request, headers, runtime);
}

/**
 * @param request RecommendTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecommendTemplatesResponse
 */
RecommendTemplatesResponse Client::recommendTemplatesWithOptions(const string &InstanceId, const RecommendTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUsageScenario()) {
    query["usageScenario"] = request.usageScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecommendTemplates"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/recommended-templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecommendTemplatesResponse>();
}

/**
 * @param request RecommendTemplatesRequest
 * @return RecommendTemplatesResponse
 */
RecommendTemplatesResponse Client::recommendTemplates(const string &InstanceId, const RecommendTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return recommendTemplatesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Installs a shipper that failed to be installed when you create the shipper.
 *
 * @param request ReinstallCollectorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReinstallCollectorResponse
 */
ReinstallCollectorResponse Client::reinstallCollectorWithOptions(const string &ResId, const ReinstallCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "ReinstallCollector"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Http::URL::percentEncode(ResId) , "/actions/reinstall")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReinstallCollectorResponse>();
}

/**
 * @summary Installs a shipper that failed to be installed when you create the shipper.
 *
 * @param request ReinstallCollectorRequest
 * @return ReinstallCollectorResponse
 */
ReinstallCollectorResponse Client::reinstallCollector(const string &ResId, const ReinstallCollectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reinstallCollectorWithOptions(ResId, request, headers, runtime);
}

/**
 * @summary RemoveApm
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveApmResponse
 */
RemoveApmResponse Client::removeApmWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveApm"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/apm/" , Darabonba::Http::URL::percentEncode(instanceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveApmResponse>();
}

/**
 * @summary RemoveApm
 *
 * @return RemoveApmResponse
 */
RemoveApmResponse Client::removeApm(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeApmWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Call RenewInstance to renew a subscription instance.
 *
 * @param request RenewInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstanceWithOptions(const string &InstanceId, const RenewInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "RenewInstance"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/renew")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewInstanceResponse>();
}

/**
 * @summary Call RenewInstance to renew a subscription instance.
 *
 * @param request RenewInstanceRequest
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstance(const string &InstanceId, const RenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renewInstanceWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Renews a Logstash cluster.
 *
 * @param request RenewLogstashRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewLogstashResponse
 */
RenewLogstashResponse Client::renewLogstashWithOptions(const string &InstanceId, const RenewLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "RenewLogstash"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/renew")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewLogstashResponse>();
}

/**
 * @summary Renews a Logstash cluster.
 *
 * @param request RenewLogstashRequest
 * @return RenewLogstashResponse
 */
RenewLogstashResponse Client::renewLogstash(const string &InstanceId, const RenewLogstashRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renewLogstashWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Restarts a shipper.
 *
 * @param request RestartCollectorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartCollectorResponse
 */
RestartCollectorResponse Client::restartCollectorWithOptions(const string &ResId, const RestartCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartCollector"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Http::URL::percentEncode(ResId) , "/actions/restart")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartCollectorResponse>();
}

/**
 * @summary Restarts a shipper.
 *
 * @param request RestartCollectorRequest
 * @return RestartCollectorResponse
 */
RestartCollectorResponse Client::restartCollector(const string &ResId, const RestartCollectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartCollectorWithOptions(ResId, request, headers, runtime);
}

/**
 * @summary You can call this operation to restart a specified Elasticsearch instance.
 *
 * @description >  After the instance is restarted, the instance enters the activating state. After the instance is restarted, its status changes to active. Alibaba Cloud Elasticsearch supports restarting a single node. Restarting a node can be divided into normal restart and blue-green restart.
 *
 * @param request RestartInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstanceWithOptions(const string &InstanceId, const RestartInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasForce()) {
    query["force"] = request.force();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "RestartInstance"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/restart")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartInstanceResponse>();
}

/**
 * @summary You can call this operation to restart a specified Elasticsearch instance.
 *
 * @description >  After the instance is restarted, the instance enters the activating state. After the instance is restarted, its status changes to active. Alibaba Cloud Elasticsearch supports restarting a single node. Restarting a node can be divided into normal restart and blue-green restart.
 *
 * @param request RestartInstanceRequest
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstance(const string &InstanceId, const RestartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartInstanceWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 重启Logstash集群
 *
 * @param request RestartLogstashRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartLogstashResponse
 */
RestartLogstashResponse Client::restartLogstashWithOptions(const string &InstanceId, const RestartLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasForce()) {
    query["force"] = request.force();
  }

  json body = {};
  if (!!request.hasBatchCount()) {
    body["batchCount"] = request.batchCount();
  }

  if (!!request.hasBlueGreenDep()) {
    body["blueGreenDep"] = request.blueGreenDep();
  }

  if (!!request.hasNodeTypes()) {
    body["nodeTypes"] = request.nodeTypes();
  }

  if (!!request.hasNodes()) {
    body["nodes"] = request.nodes();
  }

  if (!!request.hasRestartType()) {
    body["restartType"] = request.restartType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RestartLogstash"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/restart")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartLogstashResponse>();
}

/**
 * @summary 重启Logstash集群
 *
 * @param request RestartLogstashRequest
 * @return RestartLogstashResponse
 */
RestartLogstashResponse Client::restartLogstash(const string &InstanceId, const RestartLogstashRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartLogstashWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @param request ResumeElasticsearchTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeElasticsearchTaskResponse
 */
ResumeElasticsearchTaskResponse Client::resumeElasticsearchTaskWithOptions(const string &InstanceId, const ResumeElasticsearchTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeElasticsearchTask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/resume")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeElasticsearchTaskResponse>();
}

/**
 * @param request ResumeElasticsearchTaskRequest
 * @return ResumeElasticsearchTaskResponse
 */
ResumeElasticsearchTaskResponse Client::resumeElasticsearchTask(const string &InstanceId, const ResumeElasticsearchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeElasticsearchTaskWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Resumes a change task of a Logstash cluster. After the task is resumed, the Logstash cluster is in the activating state.
 *
 * @param request ResumeLogstashTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeLogstashTaskResponse
 */
ResumeLogstashTaskResponse Client::resumeLogstashTaskWithOptions(const string &InstanceId, const ResumeLogstashTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeLogstashTask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/resume")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeLogstashTaskResponse>();
}

/**
 * @summary Resumes a change task of a Logstash cluster. After the task is resumed, the Logstash cluster is in the activating state.
 *
 * @param request ResumeLogstashTaskRequest
 * @return ResumeLogstashTaskResponse
 */
ResumeLogstashTaskResponse Client::resumeLogstashTask(const string &InstanceId, const ResumeLogstashTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeLogstashTaskWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 滚动数据流，生成新索引
 *
 * @param request RolloverDataStreamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RolloverDataStreamResponse
 */
RolloverDataStreamResponse Client::rolloverDataStreamWithOptions(const string &InstanceId, const string &DataStream, const RolloverDataStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RolloverDataStream"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/data-streams/" , Darabonba::Http::URL::percentEncode(DataStream) , "/rollover")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RolloverDataStreamResponse>();
}

/**
 * @summary 滚动数据流，生成新索引
 *
 * @param request RolloverDataStreamRequest
 * @return RolloverDataStreamResponse
 */
RolloverDataStreamResponse Client::rolloverDataStream(const string &InstanceId, const string &DataStream, const RolloverDataStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rolloverDataStreamWithOptions(InstanceId, DataStream, request, headers, runtime);
}

/**
 * @summary Runs pipelines in a Logstash cluster.
 *
 * @param request RunPipelinesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunPipelinesResponse
 */
RunPipelinesResponse Client::runPipelinesWithOptions(const string &InstanceId, const RunPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "RunPipelines"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/pipelines/action/run")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunPipelinesResponse>();
}

/**
 * @summary Runs pipelines in a Logstash cluster.
 *
 * @param request RunPipelinesRequest
 * @return RunPipelinesResponse
 */
RunPipelinesResponse Client::runPipelines(const string &InstanceId, const RunPipelinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runPipelinesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary ES集群缩节点
 *
 * @param request ShrinkNodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ShrinkNodeResponse
 */
ShrinkNodeResponse Client::shrinkNodeWithOptions(const string &InstanceId, const ShrinkNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasCount()) {
    query["count"] = request.count();
  }

  if (!!request.hasIgnoreStatus()) {
    query["ignoreStatus"] = request.ignoreStatus();
  }

  if (!!request.hasNodeType()) {
    query["nodeType"] = request.nodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.body())}
  }));
  Params params = Params(json({
    {"action" , "ShrinkNode"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/shrink")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ShrinkNodeResponse>();
}

/**
 * @summary ES集群缩节点
 *
 * @param request ShrinkNodeRequest
 * @return ShrinkNodeResponse
 */
ShrinkNodeResponse Client::shrinkNode(const string &InstanceId, const ShrinkNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return shrinkNodeWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary StartApm
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartApmResponse
 */
StartApmResponse Client::startApmWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartApm"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/apm/" , Darabonba::Http::URL::percentEncode(instanceId) , "/actions/start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartApmResponse>();
}

/**
 * @summary StartApm
 *
 * @return StartApmResponse
 */
StartApmResponse Client::startApm(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startApmWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Starts a collector to collect data.
 *
 * @param request StartCollectorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartCollectorResponse
 */
StartCollectorResponse Client::startCollectorWithOptions(const string &ResId, const StartCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartCollector"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Http::URL::percentEncode(ResId) , "/actions/start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartCollectorResponse>();
}

/**
 * @summary Starts a collector to collect data.
 *
 * @param request StartCollectorRequest
 * @return StartCollectorResponse
 */
StartCollectorResponse Client::startCollector(const string &ResId, const StartCollectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startCollectorWithOptions(ResId, request, headers, runtime);
}

/**
 * @summary StopApm
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopApmResponse
 */
StopApmResponse Client::stopApmWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopApm"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/apm/" , Darabonba::Http::URL::percentEncode(instanceId) , "/actions/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopApmResponse>();
}

/**
 * @summary StopApm
 *
 * @return StopApmResponse
 */
StopApmResponse Client::stopApm(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopApmWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Stops a shipper.
 *
 * @param request StopCollectorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopCollectorResponse
 */
StopCollectorResponse Client::stopCollectorWithOptions(const string &ResId, const StopCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopCollector"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Http::URL::percentEncode(ResId) , "/actions/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopCollectorResponse>();
}

/**
 * @summary Stops a shipper.
 *
 * @param request StopCollectorRequest
 * @return StopCollectorResponse
 */
StopCollectorResponse Client::stopCollector(const string &ResId, const StopCollectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopCollectorWithOptions(ResId, request, headers, runtime);
}

/**
 * @summary Stops pipelines in a Logstash cluster.
 *
 * @param request StopPipelinesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopPipelinesResponse
 */
StopPipelinesResponse Client::stopPipelinesWithOptions(const string &InstanceId, const StopPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "StopPipelines"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/pipelines/action/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopPipelinesResponse>();
}

/**
 * @summary Stops pipelines in a Logstash cluster.
 *
 * @param request StopPipelinesRequest
 * @return StopPipelinesResponse
 */
StopPipelinesResponse Client::stopPipelines(const string &InstanceId, const StopPipelinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopPipelinesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary The information about the clusters and tags.
 *
 * @param request TagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary The information about the clusters and tags.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return tagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 缩节点，数据迁移
 *
 * @param request TransferNodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferNodeResponse
 */
TransferNodeResponse Client::transferNodeWithOptions(const string &InstanceId, const TransferNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasNodeType()) {
    query["nodeType"] = request.nodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.body())}
  }));
  Params params = Params(json({
    {"action" , "TransferNode"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/transfer")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferNodeResponse>();
}

/**
 * @summary 缩节点，数据迁移
 *
 * @param request TransferNodeRequest
 * @return TransferNodeResponse
 */
TransferNodeResponse Client::transferNode(const string &InstanceId, const TransferNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return transferNodeWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 开关ES集群及Kibana节点公私网访问
 *
 * @param request TriggerNetworkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TriggerNetworkResponse
 */
TriggerNetworkResponse Client::triggerNetworkWithOptions(const string &InstanceId, const TriggerNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasActionType()) {
    body["actionType"] = request.actionType();
  }

  if (!!request.hasNetworkType()) {
    body["networkType"] = request.networkType();
  }

  if (!!request.hasNodeType()) {
    body["nodeType"] = request.nodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TriggerNetwork"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/network-trigger")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TriggerNetworkResponse>();
}

/**
 * @summary 开关ES集群及Kibana节点公私网访问
 *
 * @param request TriggerNetworkRequest
 * @return TriggerNetworkResponse
 */
TriggerNetworkResponse Client::triggerNetwork(const string &InstanceId, const TriggerNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return triggerNetworkWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Call the UninstallKibanaPlugin to uninstall the Kibana plug-in.
 *
 * @param request UninstallKibanaPluginRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallKibanaPluginResponse
 */
UninstallKibanaPluginResponse Client::uninstallKibanaPluginWithOptions(const string &InstanceId, const UninstallKibanaPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UninstallKibanaPlugin"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/kibana-plugins/actions/uninstall")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallKibanaPluginResponse>();
}

/**
 * @summary Call the UninstallKibanaPlugin to uninstall the Kibana plug-in.
 *
 * @param request UninstallKibanaPluginRequest
 * @return UninstallKibanaPluginResponse
 */
UninstallKibanaPluginResponse Client::uninstallKibanaPlugin(const string &InstanceId, const UninstallKibanaPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uninstallKibanaPluginWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 卸载Logstash实例已安装的插件
 *
 * @param request UninstallLogstashPluginRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallLogstashPluginResponse
 */
UninstallLogstashPluginResponse Client::uninstallLogstashPluginWithOptions(const string &InstanceId, const UninstallLogstashPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UninstallLogstashPlugin"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/plugins/actions/uninstall")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallLogstashPluginResponse>();
}

/**
 * @summary 卸载Logstash实例已安装的插件
 *
 * @param request UninstallLogstashPluginRequest
 * @return UninstallLogstashPluginResponse
 */
UninstallLogstashPluginResponse Client::uninstallLogstashPlugin(const string &InstanceId, const UninstallLogstashPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uninstallLogstashPluginWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Call UninstallPlugin to uninstall the preset plug-in.
 *
 * @param request UninstallPluginRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallPluginResponse
 */
UninstallPluginResponse Client::uninstallPluginWithOptions(const string &InstanceId, const UninstallPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasForce()) {
    query["force"] = request.force();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UninstallPlugin"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/plugins/actions/uninstall")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallPluginResponse>();
}

/**
 * @summary Call UninstallPlugin to uninstall the preset plug-in.
 *
 * @param request UninstallPluginRequest
 * @return UninstallPluginResponse
 */
UninstallPluginResponse Client::uninstallPlugin(const string &InstanceId, const UninstallPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uninstallPluginWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 删除ES集群实例的用户可见标签
 *
 * @description When you call this operation, take note of the following items:
 * *   You can only delete user tags.
 * > User labels are manually added to instances by users. A system Tag is a tag that Alibaba Cloud services add to instances. System labels are divided into visible labels and invisible labels.
 * *   If you delete a resource tag relationship that is not associated with any resources, you must delete the tags.
 *
 * @param request UntagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKeys()) {
    query["TagKeys"] = request.tagKeys();
  }

  if (!!request.hasBody()) {
    query["body"] = request.body();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tags")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary 删除ES集群实例的用户可见标签
 *
 * @description When you call this operation, take note of the following items:
 * *   You can only delete user tags.
 * > User labels are manually added to instances by users. A system Tag is a tag that Alibaba Cloud services add to instances. System labels are divided into visible labels and invisible labels.
 * *   If you delete a resource tag relationship that is not associated with any resources, you must delete the tags.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return untagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 修改ES集群密码
 *
 * @description 5A2CFF0E-5718-45B5-9D4D-70B3FF\\*\\*\\*\\*
 *
 * @param request UpdateAdminPasswordRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAdminPasswordResponse
 */
UpdateAdminPasswordResponse Client::updateAdminPasswordWithOptions(const string &InstanceId, const UpdateAdminPasswordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasEsAdminPassword()) {
    body["esAdminPassword"] = request.esAdminPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAdminPassword"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/admin-pwd")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAdminPasswordResponse>();
}

/**
 * @summary 修改ES集群密码
 *
 * @description 5A2CFF0E-5718-45B5-9D4D-70B3FF\\*\\*\\*\\*
 *
 * @param request UpdateAdminPasswordRequest
 * @return UpdateAdminPasswordResponse
 */
UpdateAdminPasswordResponse Client::updateAdminPassword(const string &InstanceId, const UpdateAdminPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAdminPasswordWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Call UpdateAdvancedSetting to change the garbage collector configuration for the specified instance.
 *
 * @param request UpdateAdvancedSettingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAdvancedSettingResponse
 */
UpdateAdvancedSettingResponse Client::updateAdvancedSettingWithOptions(const string &InstanceId, const UpdateAdvancedSettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateAdvancedSetting"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/update-advanced-setting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAdvancedSettingResponse>();
}

/**
 * @summary Call UpdateAdvancedSetting to change the garbage collector configuration for the specified instance.
 *
 * @param request UpdateAdvancedSettingRequest
 * @return UpdateAdvancedSettingResponse
 */
UpdateAdvancedSettingResponse Client::updateAdvancedSetting(const string &InstanceId, const UpdateAdvancedSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAdvancedSettingWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Updates the dictionary file of the analysis-aliws plug-in.
 *
 * @description Before you call this operation, take note of the following items:
 * *   Elasticsearch V5.X clusters do not support the analysis-aliws plug-in.
 * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
 * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
 *
 * @param request UpdateAliwsDictRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAliwsDictResponse
 */
UpdateAliwsDictResponse Client::updateAliwsDictWithOptions(const string &InstanceId, const UpdateAliwsDictRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateAliwsDict"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/aliws-dict")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAliwsDictResponse>();
}

/**
 * @summary Updates the dictionary file of the analysis-aliws plug-in.
 *
 * @description Before you call this operation, take note of the following items:
 * *   Elasticsearch V5.X clusters do not support the analysis-aliws plug-in.
 * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
 * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
 *
 * @param request UpdateAliwsDictRequest
 * @return UpdateAliwsDictResponse
 */
UpdateAliwsDictResponse Client::updateAliwsDict(const string &InstanceId, const UpdateAliwsDictRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAliwsDictWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 修改APM实规格配置
 *
 * @param request UpdateApmRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApmResponse
 */
UpdateApmResponse Client::updateApmWithOptions(const string &instanceId, const UpdateApmRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasOutputES()) {
    body["outputES"] = request.outputES();
  }

  if (!!request.hasOutputESPassword()) {
    body["outputESPassword"] = request.outputESPassword();
  }

  if (!!request.hasOutputESUserName()) {
    body["outputESUserName"] = request.outputESUserName();
  }

  if (!!request.hasToken()) {
    body["token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateApm"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/apm/" , Darabonba::Http::URL::percentEncode(instanceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApmResponse>();
}

/**
 * @summary 修改APM实规格配置
 *
 * @param request UpdateApmRequest
 * @return UpdateApmResponse
 */
UpdateApmResponse Client::updateApm(const string &instanceId, const UpdateApmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateApmWithOptions(instanceId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI UpdateBlackIps is deprecated
 *
 * @summary 修改ES实例访问黑名单，已废弃
 *
 * @param request UpdateBlackIpsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBlackIpsResponse
 */
UpdateBlackIpsResponse Client::updateBlackIpsWithOptions(const string &InstanceId, const UpdateBlackIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateBlackIps"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/black-ips")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBlackIpsResponse>();
}

/**
 * @deprecated OpenAPI UpdateBlackIps is deprecated
 *
 * @summary 修改ES实例访问黑名单，已废弃
 *
 * @param request UpdateBlackIpsRequest
 * @return UpdateBlackIpsResponse
 */
UpdateBlackIpsResponse Client::updateBlackIps(const string &InstanceId, const UpdateBlackIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateBlackIpsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Updates the configurations of a shipper.
 *
 * @param request UpdateCollectorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCollectorResponse
 */
UpdateCollectorResponse Client::updateCollectorWithOptions(const string &ResId, const UpdateCollectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateCollector"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Http::URL::percentEncode(ResId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCollectorResponse>();
}

/**
 * @summary Updates the configurations of a shipper.
 *
 * @param request UpdateCollectorRequest
 * @return UpdateCollectorResponse
 */
UpdateCollectorResponse Client::updateCollector(const string &ResId, const UpdateCollectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCollectorWithOptions(ResId, request, headers, runtime);
}

/**
 * @summary Changes the name of a shipper.
 *
 * @param request UpdateCollectorNameRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCollectorNameResponse
 */
UpdateCollectorNameResponse Client::updateCollectorNameWithOptions(const string &ResId, const UpdateCollectorNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateCollectorName"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Http::URL::percentEncode(ResId) , "/actions/rename")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCollectorNameResponse>();
}

/**
 * @summary Changes the name of a shipper.
 *
 * @param request UpdateCollectorNameRequest
 * @return UpdateCollectorNameResponse
 */
UpdateCollectorNameResponse Client::updateCollectorName(const string &ResId, const UpdateCollectorNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCollectorNameWithOptions(ResId, request, headers, runtime);
}

/**
 * @summary 修改ES集群动态索引
 *
 * @param request UpdateComponentIndexRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComponentIndexResponse
 */
UpdateComponentIndexResponse Client::updateComponentIndexWithOptions(const string &InstanceId, const string &name, const UpdateComponentIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMeta()) {
    body["_meta"] = request.meta();
  }

  if (!!request.hasTemplate()) {
    body["template"] = request._template();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateComponentIndex"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/component-index/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComponentIndexResponse>();
}

/**
 * @summary 修改ES集群动态索引
 *
 * @param request UpdateComponentIndexRequest
 * @return UpdateComponentIndexResponse
 */
UpdateComponentIndexResponse Client::updateComponentIndex(const string &InstanceId, const string &name, const UpdateComponentIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateComponentIndexWithOptions(InstanceId, name, request, headers, runtime);
}

/**
 * @summary 修改elasticsearch实例名称名称
 *
 * @param request UpdateDescriptionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDescriptionResponse
 */
UpdateDescriptionResponse Client::updateDescriptionWithOptions(const string &InstanceId, const UpdateDescriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDescription"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/description")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDescriptionResponse>();
}

/**
 * @summary 修改elasticsearch实例名称名称
 *
 * @param request UpdateDescriptionRequest
 * @return UpdateDescriptionResponse
 */
UpdateDescriptionResponse Client::updateDescription(const string &InstanceId, const UpdateDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDescriptionWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Call UpdateDiagnosisSettings to update the instance of intelligent operation&maintenance (O&M) scene settings.
 *
 * @param request UpdateDiagnosisSettingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDiagnosisSettingsResponse
 */
UpdateDiagnosisSettingsResponse Client::updateDiagnosisSettingsWithOptions(const string &InstanceId, const UpdateDiagnosisSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateDiagnosisSettings"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/settings")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDiagnosisSettingsResponse>();
}

/**
 * @summary Call UpdateDiagnosisSettings to update the instance of intelligent operation&maintenance (O&M) scene settings.
 *
 * @param request UpdateDiagnosisSettingsRequest
 * @return UpdateDiagnosisSettingsResponse
 */
UpdateDiagnosisSettingsResponse Client::updateDiagnosisSettings(const string &InstanceId, const UpdateDiagnosisSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDiagnosisSettingsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Updates a dictionary of an Elasticsearch cluster.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
 * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
 *
 * @param request UpdateDictRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDictResponse
 */
UpdateDictResponse Client::updateDictWithOptions(const string &InstanceId, const UpdateDictRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateDict"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/dict")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDictResponse>();
}

/**
 * @summary Updates a dictionary of an Elasticsearch cluster.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
 * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
 *
 * @param request UpdateDictRequest
 * @return UpdateDictResponse
 */
UpdateDictResponse Client::updateDict(const string &InstanceId, const UpdateDictRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDictWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 修改集群动态配置
 *
 * @param request UpdateDynamicSettingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDynamicSettingsResponse
 */
UpdateDynamicSettingsResponse Client::updateDynamicSettingsWithOptions(const string &InstanceId, const UpdateDynamicSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasMode()) {
    query["mode"] = request.mode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateDynamicSettings"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/dynamic-settings")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDynamicSettingsResponse>();
}

/**
 * @summary 修改集群动态配置
 *
 * @param request UpdateDynamicSettingsRequest
 * @return UpdateDynamicSettingsResponse
 */
UpdateDynamicSettingsResponse Client::updateDynamicSettings(const string &InstanceId, const UpdateDynamicSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDynamicSettingsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @param request UpdateExtendConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExtendConfigResponse
 */
UpdateExtendConfigResponse Client::updateExtendConfigWithOptions(const string &InstanceId, const UpdateExtendConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateExtendConfig"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/extend-configs/actions/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExtendConfigResponse>();
}

/**
 * @param request UpdateExtendConfigRequest
 * @return UpdateExtendConfigResponse
 */
UpdateExtendConfigResponse Client::updateExtendConfig(const string &InstanceId, const UpdateExtendConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateExtendConfigWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Updates the driver files of a Logstash cluster.
 *
 * @description When you call this operation, take note of the following items: You can call this operation only to delete the driver files that are uploaded to a Logstash cluster in the Alibaba Cloud Management Console. You can add or modify driver files only in the Alibaba Cloud Management Console.
 *
 * @param request UpdateExtendfilesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExtendfilesResponse
 */
UpdateExtendfilesResponse Client::updateExtendfilesWithOptions(const string &InstanceId, const UpdateExtendfilesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateExtendfiles"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/extendfiles")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExtendfilesResponse>();
}

/**
 * @summary Updates the driver files of a Logstash cluster.
 *
 * @description When you call this operation, take note of the following items: You can call this operation only to delete the driver files that are uploaded to a Logstash cluster in the Alibaba Cloud Management Console. You can add or modify driver files only in the Alibaba Cloud Management Console.
 *
 * @param request UpdateExtendfilesRequest
 * @return UpdateExtendfilesResponse
 */
UpdateExtendfilesResponse Client::updateExtendfiles(const string &InstanceId, const UpdateExtendfilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateExtendfilesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Performs a rolling update for the IK dictionaries of an Elasticsearch cluster.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
 * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
 *
 * @param request UpdateHotIkDictsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHotIkDictsResponse
 */
UpdateHotIkDictsResponse Client::updateHotIkDictsWithOptions(const string &InstanceId, const UpdateHotIkDictsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateHotIkDicts"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/ik-hot-dict")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHotIkDictsResponse>();
}

/**
 * @summary Performs a rolling update for the IK dictionaries of an Elasticsearch cluster.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
 * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
 *
 * @param request UpdateHotIkDictsRequest
 * @return UpdateHotIkDictsResponse
 */
UpdateHotIkDictsResponse Client::updateHotIkDicts(const string &InstanceId, const UpdateHotIkDictsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateHotIkDictsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 修改ES集群索引生命周期策略
 *
 * @param request UpdateILMPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateILMPolicyResponse
 */
UpdateILMPolicyResponse Client::updateILMPolicyWithOptions(const string &InstanceId, const string &PolicyName, const UpdateILMPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateILMPolicy"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/ilm-policies/" , Darabonba::Http::URL::percentEncode(PolicyName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateILMPolicyResponse>();
}

/**
 * @summary 修改ES集群索引生命周期策略
 *
 * @param request UpdateILMPolicyRequest
 * @return UpdateILMPolicyResponse
 */
UpdateILMPolicyResponse Client::updateILMPolicy(const string &InstanceId, const string &PolicyName, const UpdateILMPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateILMPolicyWithOptions(InstanceId, PolicyName, request, headers, runtime);
}

/**
 * @summary 修改ES集群索引模版配置
 *
 * @param request UpdateIndexTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIndexTemplateResponse
 */
UpdateIndexTemplateResponse Client::updateIndexTemplateWithOptions(const string &InstanceId, const string &IndexTemplate, const UpdateIndexTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateIndexTemplate"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/index-templates/" , Darabonba::Http::URL::percentEncode(IndexTemplate))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIndexTemplateResponse>();
}

/**
 * @summary 修改ES集群索引模版配置
 *
 * @param request UpdateIndexTemplateRequest
 * @return UpdateIndexTemplateResponse
 */
UpdateIndexTemplateResponse Client::updateIndexTemplate(const string &InstanceId, const string &IndexTemplate, const UpdateIndexTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateIndexTemplateWithOptions(InstanceId, IndexTemplate, request, headers, runtime);
}

/**
 * @summary 修改ES集群节点配置
 *
 * @description es-cn-n6w1ptcb30009\\*\\*\\*\\*
 *
 * @param request UpdateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstanceWithOptions(const string &InstanceId, const UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasForce()) {
    query["force"] = request.force();
  }

  if (!!request.hasOrderActionType()) {
    query["orderActionType"] = request.orderActionType();
  }

  json body = {};
  if (!!request.hasClientNodeConfiguration()) {
    body["clientNodeConfiguration"] = request.clientNodeConfiguration();
  }

  if (!!request.hasElasticDataNodeConfiguration()) {
    body["elasticDataNodeConfiguration"] = request.elasticDataNodeConfiguration();
  }

  if (!!request.hasInstanceCategory()) {
    body["instanceCategory"] = request.instanceCategory();
  }

  if (!!request.hasKibanaConfiguration()) {
    body["kibanaConfiguration"] = request.kibanaConfiguration();
  }

  if (!!request.hasMasterConfiguration()) {
    body["masterConfiguration"] = request.masterConfiguration();
  }

  if (!!request.hasNodeAmount()) {
    body["nodeAmount"] = request.nodeAmount();
  }

  if (!!request.hasNodeSpec()) {
    body["nodeSpec"] = request.nodeSpec();
  }

  if (!!request.hasWarmNodeConfiguration()) {
    body["warmNodeConfiguration"] = request.warmNodeConfiguration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary 修改ES集群节点配置
 *
 * @description es-cn-n6w1ptcb30009\\*\\*\\*\\*
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const string &InstanceId, const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Call UpdateInstanceChargeType to change the billing method of a pay-as-you-go instance to subscription.
 *
 * @param request UpdateInstanceChargeTypeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceChargeTypeResponse
 */
UpdateInstanceChargeTypeResponse Client::updateInstanceChargeTypeWithOptions(const string &InstanceId, const UpdateInstanceChargeTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstanceChargeType"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/convert-pay-type")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceChargeTypeResponse>();
}

/**
 * @summary Call UpdateInstanceChargeType to change the billing method of a pay-as-you-go instance to subscription.
 *
 * @param request UpdateInstanceChargeTypeRequest
 * @return UpdateInstanceChargeTypeResponse
 */
UpdateInstanceChargeTypeResponse Client::updateInstanceChargeType(const string &InstanceId, const UpdateInstanceChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceChargeTypeWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Call UpdateInstanceSettings to update the YML configuration of a specified instance.
 *
 * @description When you call this operation, take note of the following items:
 * When the instance is in the activating, invalid, or inactive state, you cannot update the configuration.
 *
 * @param request UpdateInstanceSettingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceSettingsResponse
 */
UpdateInstanceSettingsResponse Client::updateInstanceSettingsWithOptions(const string &InstanceId, const UpdateInstanceSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasForce()) {
    query["force"] = request.force();
  }

  if (!!request.hasUpdateStrategy()) {
    query["updateStrategy"] = request.updateStrategy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstanceSettings"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/instance-settings")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceSettingsResponse>();
}

/**
 * @summary Call UpdateInstanceSettings to update the YML configuration of a specified instance.
 *
 * @description When you call this operation, take note of the following items:
 * When the instance is in the activating, invalid, or inactive state, you cannot update the configuration.
 *
 * @param request UpdateInstanceSettingsRequest
 * @return UpdateInstanceSettingsResponse
 */
UpdateInstanceSettingsResponse Client::updateInstanceSettings(const string &InstanceId, const UpdateInstanceSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceSettingsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 更新kibana私网链接
 *
 * @param request UpdateKibanaPvlNetworkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKibanaPvlNetworkResponse
 */
UpdateKibanaPvlNetworkResponse Client::updateKibanaPvlNetworkWithOptions(const string &InstanceId, const UpdateKibanaPvlNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPvlId()) {
    query["pvlId"] = request.pvlId();
  }

  json body = {};
  if (!!request.hasEndpointName()) {
    body["endpointName"] = request.endpointName();
  }

  if (!!request.hasSecurityGroups()) {
    body["securityGroups"] = request.securityGroups();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKibanaPvlNetwork"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/update-kibana-private")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKibanaPvlNetworkResponse>();
}

/**
 * @summary 更新kibana私网链接
 *
 * @param request UpdateKibanaPvlNetworkRequest
 * @return UpdateKibanaPvlNetworkResponse
 */
UpdateKibanaPvlNetworkResponse Client::updateKibanaPvlNetwork(const string &InstanceId, const UpdateKibanaPvlNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKibanaPvlNetworkWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Call UpdateKibanaSettings to modify the Kibana configuration. Currently, you can only modify the Kibana language configuration.
 *
 * @param request UpdateKibanaSettingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKibanaSettingsResponse
 */
UpdateKibanaSettingsResponse Client::updateKibanaSettingsWithOptions(const string &InstanceId, const UpdateKibanaSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateKibanaSettings"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/update-kibana-settings")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKibanaSettingsResponse>();
}

/**
 * @summary Call UpdateKibanaSettings to modify the Kibana configuration. Currently, you can only modify the Kibana language configuration.
 *
 * @param request UpdateKibanaSettingsRequest
 * @return UpdateKibanaSettingsResponse
 */
UpdateKibanaSettingsResponse Client::updateKibanaSettings(const string &InstanceId, const UpdateKibanaSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKibanaSettingsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Updates an IP address whitelist for access to the Kibana console of a specified Elasticsearch cluster.
 *
 * @description *   Before you call this operation, you must make sure that the cluster is not in the activating, invalid, or inactive state.
 * *   You can update an IP address whitelist by using the following parameters:
 *     *   kibanaIPWhitelist
 *     *   modifyMode and whiteIpGroup
 * *   You cannot specify private IP addresses for public IP address whitelists and cannot specify public IP addresses for private IP address whitelists.
 *
 * @param request UpdateKibanaWhiteIpsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKibanaWhiteIpsResponse
 */
UpdateKibanaWhiteIpsResponse Client::updateKibanaWhiteIpsWithOptions(const string &InstanceId, const UpdateKibanaWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasModifyMode()) {
    query["modifyMode"] = request.modifyMode();
  }

  json body = {};
  if (!!request.hasKibanaIPWhitelist()) {
    body["kibanaIPWhitelist"] = request.kibanaIPWhitelist();
  }

  if (!!request.hasWhiteIpGroup()) {
    body["whiteIpGroup"] = request.whiteIpGroup();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKibanaWhiteIps"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/kibana-white-ips")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKibanaWhiteIpsResponse>();
}

/**
 * @summary Updates an IP address whitelist for access to the Kibana console of a specified Elasticsearch cluster.
 *
 * @description *   Before you call this operation, you must make sure that the cluster is not in the activating, invalid, or inactive state.
 * *   You can update an IP address whitelist by using the following parameters:
 *     *   kibanaIPWhitelist
 *     *   modifyMode and whiteIpGroup
 * *   You cannot specify private IP addresses for public IP address whitelists and cannot specify public IP addresses for private IP address whitelists.
 *
 * @param request UpdateKibanaWhiteIpsRequest
 * @return UpdateKibanaWhiteIpsResponse
 */
UpdateKibanaWhiteIpsResponse Client::updateKibanaWhiteIps(const string &InstanceId, const UpdateKibanaWhiteIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKibanaWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 修改Logstash节点规格磁盘配置
 *
 * @param request UpdateLogstashRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLogstashResponse
 */
UpdateLogstashResponse Client::updateLogstashWithOptions(const string &InstanceId, const UpdateLogstashRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasNodeAmount()) {
    body["nodeAmount"] = request.nodeAmount();
  }

  if (!!request.hasNodeSpec()) {
    body["nodeSpec"] = request.nodeSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateLogstash"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLogstashResponse>();
}

/**
 * @summary 修改Logstash节点规格磁盘配置
 *
 * @param request UpdateLogstashRequest
 * @return UpdateLogstashResponse
 */
UpdateLogstashResponse Client::updateLogstash(const string &InstanceId, const UpdateLogstashRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLogstashWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Switches the billing method of a Logstash cluster from pay-as-you-go to subscription.
 *
 * @param request UpdateLogstashChargeTypeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLogstashChargeTypeResponse
 */
UpdateLogstashChargeTypeResponse Client::updateLogstashChargeTypeWithOptions(const string &InstanceId, const UpdateLogstashChargeTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateLogstashChargeType"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/convert-pay-type")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLogstashChargeTypeResponse>();
}

/**
 * @summary Switches the billing method of a Logstash cluster from pay-as-you-go to subscription.
 *
 * @param request UpdateLogstashChargeTypeRequest
 * @return UpdateLogstashChargeTypeResponse
 */
UpdateLogstashChargeTypeResponse Client::updateLogstashChargeType(const string &InstanceId, const UpdateLogstashChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLogstashChargeTypeWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Changes the name of a specified Logstash cluster.
 *
 * @description When you call this operation, take note of the following items: You cannot change the name of a cluster that is in the activating, invalid, or inactive state.
 *
 * @param request UpdateLogstashDescriptionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLogstashDescriptionResponse
 */
UpdateLogstashDescriptionResponse Client::updateLogstashDescriptionWithOptions(const string &InstanceId, const UpdateLogstashDescriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateLogstashDescription"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/description")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLogstashDescriptionResponse>();
}

/**
 * @summary Changes the name of a specified Logstash cluster.
 *
 * @description When you call this operation, take note of the following items: You cannot change the name of a cluster that is in the activating, invalid, or inactive state.
 *
 * @param request UpdateLogstashDescriptionRequest
 * @return UpdateLogstashDescriptionResponse
 */
UpdateLogstashDescriptionResponse Client::updateLogstashDescription(const string &InstanceId, const UpdateLogstashDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLogstashDescriptionWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Updates the configuration of a specified Logstash cluster.
 *
 * @description When you call this operation, take note of the following items:
 * If the instance is in the Active (activating), Invalid (invalid), and Inactive (inactive) state, the information cannot be updated.
 *
 * @param request UpdateLogstashSettingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLogstashSettingsResponse
 */
UpdateLogstashSettingsResponse Client::updateLogstashSettingsWithOptions(const string &InstanceId, const UpdateLogstashSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateLogstashSettings"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/instance-settings")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLogstashSettingsResponse>();
}

/**
 * @summary Updates the configuration of a specified Logstash cluster.
 *
 * @description When you call this operation, take note of the following items:
 * If the instance is in the Active (activating), Invalid (invalid), and Inactive (inactive) state, the information cannot be updated.
 *
 * @param request UpdateLogstashSettingsRequest
 * @return UpdateLogstashSettingsResponse
 */
UpdateLogstashSettingsResponse Client::updateLogstashSettings(const string &InstanceId, const UpdateLogstashSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLogstashSettingsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 修改Logstash管道配置
 *
 * @param request UpdatePipelineManagementConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePipelineManagementConfigResponse
 */
UpdatePipelineManagementConfigResponse Client::updatePipelineManagementConfigWithOptions(const string &InstanceId, const UpdatePipelineManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasEndpoints()) {
    body["endpoints"] = request.endpoints();
  }

  if (!!request.hasEsInstanceId()) {
    body["esInstanceId"] = request.esInstanceId();
  }

  if (!!request.hasPassword()) {
    body["password"] = request.password();
  }

  if (!!request.hasPipelineIds()) {
    body["pipelineIds"] = request.pipelineIds();
  }

  if (!!request.hasPipelineManagementType()) {
    body["pipelineManagementType"] = request.pipelineManagementType();
  }

  if (!!request.hasUserName()) {
    body["userName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePipelineManagementConfig"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/pipeline-management-config")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePipelineManagementConfigResponse>();
}

/**
 * @summary 修改Logstash管道配置
 *
 * @param request UpdatePipelineManagementConfigRequest
 * @return UpdatePipelineManagementConfigResponse
 */
UpdatePipelineManagementConfigResponse Client::updatePipelineManagementConfig(const string &InstanceId, const UpdatePipelineManagementConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePipelineManagementConfigWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Updates a pipeline of a Logstash cluster.
 *
 * @param request UpdatePipelinesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePipelinesResponse
 */
UpdatePipelinesResponse Client::updatePipelinesWithOptions(const string &InstanceId, const UpdatePipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasTrigger()) {
    query["trigger"] = request.trigger();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdatePipelines"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/pipelines")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePipelinesResponse>();
}

/**
 * @summary Updates a pipeline of a Logstash cluster.
 *
 * @param request UpdatePipelinesRequest
 * @return UpdatePipelinesResponse
 */
UpdatePipelinesResponse Client::updatePipelines(const string &InstanceId, const UpdatePipelinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePipelinesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary ## RequestBody
 * | Property | Type | Required | Example | Description |
 * | -------- | ---- | -------- | ------- | ----------- |
 * | privateNetworkIpWhiteList | List<String> | No | ["0.0.XX.XX","10.2.XX.XX","192.168.XX.XX/25"] | The list of IP address whitelists. This parameter is available if whiteIpGroup is left empty. The value of this parameter updates the IP address whitelist configurations in the Default whitelist group.  
 * You cannot configure both privateNetworkIpWhiteList and whiteIpGroup. |
 * | whiteIpGroup | Object | No |  | You can update the whitelist configurations of an instance by using a whitelist group. You can update only one whitelist group.  
 * You cannot configure both privateNetworkIpWhiteList and whiteIpGroup. |
 * | └ groupName | String | No | test_group_name | The group name of the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
 * | └ ips | List<String> | No | ["0.0.0.0", "10.2.XX.XX"] | The list of IP addresses in the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
 * > **Notice**  The addition and deletion of whitelist groups are implemented by calling modifyMode to Cover. Delete and Append cannot add or delete whitelist groups at the same time. You can only modify the IP address list in the whitelist group. Take note of the following items: - If the modifyMode parameter is set to Cover, the whitelist group is deleted if ips is empty. If groupName is not in the list of existing whitelist group names, a whitelist group is created.
 * - If the modifyMode parameter is set to Delete, you must retain at least one IP address for the deleted ips.
 * - If the modifyMode parameter is set to Append, make sure that the whitelist group name has been created. Otherwise, the NotFound error message appears.
 *
 * @description >  In the following returned example, only the parameters in the returned data list are guaranteed to be included, and the parameters not mentioned are for reference only. For more information about the parameters, see [ListInstance](https://help.aliyun.com/document_detail/142230.html). You cannot force a dependency in a program to get these parameters.
 *
 * @param request UpdatePrivateNetworkWhiteIpsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrivateNetworkWhiteIpsResponse
 */
UpdatePrivateNetworkWhiteIpsResponse Client::updatePrivateNetworkWhiteIpsWithOptions(const string &InstanceId, const UpdatePrivateNetworkWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasModifyMode()) {
    query["modifyMode"] = request.modifyMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdatePrivateNetworkWhiteIps"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/private-network-white-ips")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrivateNetworkWhiteIpsResponse>();
}

/**
 * @summary ## RequestBody
 * | Property | Type | Required | Example | Description |
 * | -------- | ---- | -------- | ------- | ----------- |
 * | privateNetworkIpWhiteList | List<String> | No | ["0.0.XX.XX","10.2.XX.XX","192.168.XX.XX/25"] | The list of IP address whitelists. This parameter is available if whiteIpGroup is left empty. The value of this parameter updates the IP address whitelist configurations in the Default whitelist group.  
 * You cannot configure both privateNetworkIpWhiteList and whiteIpGroup. |
 * | whiteIpGroup | Object | No |  | You can update the whitelist configurations of an instance by using a whitelist group. You can update only one whitelist group.  
 * You cannot configure both privateNetworkIpWhiteList and whiteIpGroup. |
 * | └ groupName | String | No | test_group_name | The group name of the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
 * | └ ips | List<String> | No | ["0.0.0.0", "10.2.XX.XX"] | The list of IP addresses in the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
 * > **Notice**  The addition and deletion of whitelist groups are implemented by calling modifyMode to Cover. Delete and Append cannot add or delete whitelist groups at the same time. You can only modify the IP address list in the whitelist group. Take note of the following items: - If the modifyMode parameter is set to Cover, the whitelist group is deleted if ips is empty. If groupName is not in the list of existing whitelist group names, a whitelist group is created.
 * - If the modifyMode parameter is set to Delete, you must retain at least one IP address for the deleted ips.
 * - If the modifyMode parameter is set to Append, make sure that the whitelist group name has been created. Otherwise, the NotFound error message appears.
 *
 * @description >  In the following returned example, only the parameters in the returned data list are guaranteed to be included, and the parameters not mentioned are for reference only. For more information about the parameters, see [ListInstance](https://help.aliyun.com/document_detail/142230.html). You cannot force a dependency in a program to get these parameters.
 *
 * @param request UpdatePrivateNetworkWhiteIpsRequest
 * @return UpdatePrivateNetworkWhiteIpsResponse
 */
UpdatePrivateNetworkWhiteIpsResponse Client::updatePrivateNetworkWhiteIps(const string &InstanceId, const UpdatePrivateNetworkWhiteIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePrivateNetworkWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Call UpdatePublicNetwork to open or close the public network address of the specified elasticsearch instance.
 *
 * @description When you call this operation, take note of the following items:
 * When the instance is in the activating, invalid, or inactive state, its configuration cannot be updated.
 *
 * @param request UpdatePublicNetworkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePublicNetworkResponse
 */
UpdatePublicNetworkResponse Client::updatePublicNetworkWithOptions(const string &InstanceId, const UpdatePublicNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdatePublicNetwork"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/public-network")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePublicNetworkResponse>();
}

/**
 * @summary Call UpdatePublicNetwork to open or close the public network address of the specified elasticsearch instance.
 *
 * @description When you call this operation, take note of the following items:
 * When the instance is in the activating, invalid, or inactive state, its configuration cannot be updated.
 *
 * @param request UpdatePublicNetworkRequest
 * @return UpdatePublicNetworkResponse
 */
UpdatePublicNetworkResponse Client::updatePublicNetwork(const string &InstanceId, const UpdatePublicNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePublicNetworkWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary ## RequestBody
 * | Property | Type | Required | Example | Description |
 * | -------- | ---- | -------- | ------- | ----------- |
 * | publicIpWhitelist | List<String> | Yes | ["0.0.0.0/0","0.0.0.0/1"] | The list of IP address whitelists. This parameter is available if whiteIpGroup is left empty. The value of this parameter updates the IP address whitelist configurations in the Default whitelist group.  
 * You cannot configure both publicIpWhitelist and whiteIpGroup. |
 * | whiteIpGroup | Object | No |  | You can update the whitelist configurations of an instance by using a whitelist group. You can update only one whitelist group.  
 * You cannot configure both publicIpWhitelist and whiteIpGroup. |
 * | └ groupName | String | No | test_group_name | The group name of the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
 * | └ ips | List<String> | No | ["0.0.0.0", "10.2.XX.XX"] | The list of IP addresses in the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
 * > **Notice**  The addition and deletion of whitelist groups are implemented by calling modifyMode to Cover. Delete and Append cannot add or delete whitelist groups at the same time. You can only modify the IP address list in the whitelist group. Take note of the following items: - If the modifyMode parameter is set to Cover, the whitelist group is deleted if ips is empty. If groupName is not in the list of existing whitelist group names, a whitelist group is created.
 * - If the modifyMode parameter is set to Delete, you must retain at least one IP address for the deleted ips.
 * - If the modifyMode parameter is set to Append, make sure that the whitelist group name has been created. Otherwise, the NotFound error message appears.
 *
 * @description >  In the following example, only the parameters in the returned data list are guaranteed to be included. The parameters that are not mentioned are for reference only. For more information about the parameters, see [ListInstance](https://help.aliyun.com/document_detail/142230.html). You cannot force a dependency in a program to get these parameters.
 *
 * @param request UpdatePublicWhiteIpsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePublicWhiteIpsResponse
 */
UpdatePublicWhiteIpsResponse Client::updatePublicWhiteIpsWithOptions(const string &InstanceId, const UpdatePublicWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasModifyMode()) {
    query["modifyMode"] = request.modifyMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdatePublicWhiteIps"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/public-white-ips")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePublicWhiteIpsResponse>();
}

/**
 * @summary ## RequestBody
 * | Property | Type | Required | Example | Description |
 * | -------- | ---- | -------- | ------- | ----------- |
 * | publicIpWhitelist | List<String> | Yes | ["0.0.0.0/0","0.0.0.0/1"] | The list of IP address whitelists. This parameter is available if whiteIpGroup is left empty. The value of this parameter updates the IP address whitelist configurations in the Default whitelist group.  
 * You cannot configure both publicIpWhitelist and whiteIpGroup. |
 * | whiteIpGroup | Object | No |  | You can update the whitelist configurations of an instance by using a whitelist group. You can update only one whitelist group.  
 * You cannot configure both publicIpWhitelist and whiteIpGroup. |
 * | └ groupName | String | No | test_group_name | The group name of the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
 * | └ ips | List<String> | No | ["0.0.0.0", "10.2.XX.XX"] | The list of IP addresses in the whitelist group. This parameter is required if the whiteIpGroup parameter is optional. |
 * > **Notice**  The addition and deletion of whitelist groups are implemented by calling modifyMode to Cover. Delete and Append cannot add or delete whitelist groups at the same time. You can only modify the IP address list in the whitelist group. Take note of the following items: - If the modifyMode parameter is set to Cover, the whitelist group is deleted if ips is empty. If groupName is not in the list of existing whitelist group names, a whitelist group is created.
 * - If the modifyMode parameter is set to Delete, you must retain at least one IP address for the deleted ips.
 * - If the modifyMode parameter is set to Append, make sure that the whitelist group name has been created. Otherwise, the NotFound error message appears.
 *
 * @description >  In the following example, only the parameters in the returned data list are guaranteed to be included. The parameters that are not mentioned are for reference only. For more information about the parameters, see [ListInstance](https://help.aliyun.com/document_detail/142230.html). You cannot force a dependency in a program to get these parameters.
 *
 * @param request UpdatePublicWhiteIpsRequest
 * @return UpdatePublicWhiteIpsResponse
 */
UpdatePublicWhiteIpsResponse Client::updatePublicWhiteIps(const string &InstanceId, const UpdatePublicWhiteIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePublicWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 更改ES集群高可用策略
 *
 * @param request UpdateReadWritePolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateReadWritePolicyResponse
 */
UpdateReadWritePolicyResponse Client::updateReadWritePolicyWithOptions(const string &InstanceId, const UpdateReadWritePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateReadWritePolicy"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/update-read-write-policy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateReadWritePolicyResponse>();
}

/**
 * @summary 更改ES集群高可用策略
 *
 * @param request UpdateReadWritePolicyRequest
 * @return UpdateReadWritePolicyResponse
 */
UpdateReadWritePolicyResponse Client::updateReadWritePolicy(const string &InstanceId, const UpdateReadWritePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateReadWritePolicyWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Call UpdateSnapshotSetting to update the data backup configuration of the specified instance.
 *
 * @param request UpdateSnapshotSettingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSnapshotSettingResponse
 */
UpdateSnapshotSettingResponse Client::updateSnapshotSettingWithOptions(const string &InstanceId, const UpdateSnapshotSettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateSnapshotSetting"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/snapshot-setting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSnapshotSettingResponse>();
}

/**
 * @summary Call UpdateSnapshotSetting to update the data backup configuration of the specified instance.
 *
 * @param request UpdateSnapshotSettingRequest
 * @return UpdateSnapshotSettingResponse
 */
UpdateSnapshotSettingResponse Client::updateSnapshotSetting(const string &InstanceId, const UpdateSnapshotSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSnapshotSettingWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Updates the synonym dictionaries of an Elasticsearch cluster.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
 * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
 *
 * @param request UpdateSynonymsDictsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSynonymsDictsResponse
 */
UpdateSynonymsDictsResponse Client::updateSynonymsDictsWithOptions(const string &InstanceId, const UpdateSynonymsDictsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateSynonymsDicts"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/synonymsDict")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSynonymsDictsResponse>();
}

/**
 * @summary Updates the synonym dictionaries of an Elasticsearch cluster.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If the dictionary file is stored in an Object Storage Service (OSS) bucket, you must make sure that the access control list (ACL) of the bucket is public read.
 * *   If you do not set sourceType to ORIGIN for an uploaded dictionary file, the file will be deleted after you call this operation.
 *
 * @param request UpdateSynonymsDictsRequest
 * @return UpdateSynonymsDictsResponse
 */
UpdateSynonymsDictsResponse Client::updateSynonymsDicts(const string &InstanceId, const UpdateSynonymsDictsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSynonymsDictsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @param request UpdateTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplateWithOptions(const string &InstanceId, const string &TemplateName, const UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateTemplate"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/templates/" , Darabonba::Http::URL::percentEncode(TemplateName))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTemplateResponse>();
}

/**
 * @param request UpdateTemplateRequest
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplate(const string &InstanceId, const string &TemplateName, const UpdateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTemplateWithOptions(InstanceId, TemplateName, request, headers, runtime);
}

/**
 * @summary >  If you want to add an IP address whitelist, you can set the modifyMode parameter only to Cover. If you set this parameter to Delete or Append, you can only update an IP address whitelist.
 * *   If you set the modifyMode parameter to Cover and leave the ips parameter empty, the system deletes the specified whitelist. If the whitelist specified by using the groupName parameter does not exist, the system creates such a whitelist.
 * *   If you set the modifyMode parameter to Delete, at least one IP address must be retained for the specified whitelist.
 * *   If you set the modifyMode parameter to Append, you must make sure that the specified whitelist exists. Otherwise, the system reports the NotFound error.
 *
 * @description > For more information about the parameters displayed in the following sample code but not provided in the preceding tables, see [ListInstance](https://help.aliyun.com/document_detail/142230.html). You cannot force your program to obtain these parameters.
 *
 * @param request UpdateWhiteIpsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWhiteIpsResponse
 */
UpdateWhiteIpsResponse Client::updateWhiteIpsWithOptions(const string &InstanceId, const UpdateWhiteIpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasModifyMode()) {
    query["modifyMode"] = request.modifyMode();
  }

  json body = {};
  if (!!request.hasEsIPWhitelist()) {
    body["esIPWhitelist"] = request.esIPWhitelist();
  }

  if (!!request.hasWhiteIpGroup()) {
    body["whiteIpGroup"] = request.whiteIpGroup();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWhiteIps"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/white-ips")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWhiteIpsResponse>();
}

/**
 * @summary >  If you want to add an IP address whitelist, you can set the modifyMode parameter only to Cover. If you set this parameter to Delete or Append, you can only update an IP address whitelist.
 * *   If you set the modifyMode parameter to Cover and leave the ips parameter empty, the system deletes the specified whitelist. If the whitelist specified by using the groupName parameter does not exist, the system creates such a whitelist.
 * *   If you set the modifyMode parameter to Delete, at least one IP address must be retained for the specified whitelist.
 * *   If you set the modifyMode parameter to Append, you must make sure that the specified whitelist exists. Otherwise, the system reports the NotFound error.
 *
 * @description > For more information about the parameters displayed in the following sample code but not provided in the preceding tables, see [ListInstance](https://help.aliyun.com/document_detail/142230.html). You cannot force your program to obtain these parameters.
 *
 * @param request UpdateWhiteIpsRequest
 * @return UpdateWhiteIpsResponse
 */
UpdateWhiteIpsResponse Client::updateWhiteIps(const string &InstanceId, const UpdateWhiteIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 修改Logstash实例的X-Pack监控报警配置。
 *
 * @param request UpdateXpackMonitorConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateXpackMonitorConfigResponse
 */
UpdateXpackMonitorConfigResponse Client::updateXpackMonitorConfigWithOptions(const string &InstanceId, const UpdateXpackMonitorConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasEnable()) {
    body["enable"] = request.enable();
  }

  if (!!request.hasEndpoints()) {
    body["endpoints"] = request.endpoints();
  }

  if (!!request.hasPassword()) {
    body["password"] = request.password();
  }

  if (!!request.hasUserName()) {
    body["userName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateXpackMonitorConfig"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/xpack-monitor-config")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateXpackMonitorConfigResponse>();
}

/**
 * @summary 修改Logstash实例的X-Pack监控报警配置。
 *
 * @param request UpdateXpackMonitorConfigRequest
 * @return UpdateXpackMonitorConfigResponse
 */
UpdateXpackMonitorConfigResponse Client::updateXpackMonitorConfig(const string &InstanceId, const UpdateXpackMonitorConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateXpackMonitorConfigWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary ES集群版本升级
 *
 * @description 5A2CFF0E-5718-45B5-9D4D-70B3FF\\*\\*\\*\\*
 *
 * @param request UpgradeEngineVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeEngineVersionResponse
 */
UpgradeEngineVersionResponse Client::upgradeEngineVersionWithOptions(const string &InstanceId, const UpgradeEngineVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  if (!!request.hasUpdateStrategy()) {
    query["updateStrategy"] = request.updateStrategy();
  }

  json body = {};
  if (!!request.hasPlugins()) {
    body["plugins"] = request.plugins();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.version();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpgradeEngineVersion"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/actions/upgrade-version")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeEngineVersionResponse>();
}

/**
 * @summary ES集群版本升级
 *
 * @description 5A2CFF0E-5718-45B5-9D4D-70B3FF\\*\\*\\*\\*
 *
 * @param request UpgradeEngineVersionRequest
 * @return UpgradeEngineVersionResponse
 */
UpgradeEngineVersionResponse Client::upgradeEngineVersion(const string &InstanceId, const UpgradeEngineVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return upgradeEngineVersionWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Tests the connectivity between a Logstash cluster and its associated Elasticsearch cluster when you configure the X-Pack Monitoring feature for the Logstash cluster.
 *
 * @description > Before you enable the X-Pack Monitoring feature for a Logstash cluster, you must associate the Logstash cluster with an Elasticsearch cluster. This way, you can view the monitoring data of the Logstash cluster in the Kibana console of the Elasticsearch cluster.
 *
 * @param request ValidateConnectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateConnectionResponse
 */
ValidateConnectionResponse Client::validateConnectionWithOptions(const string &InstanceId, const ValidateConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "ValidateConnection"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/validate-connection")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateConnectionResponse>();
}

/**
 * @summary Tests the connectivity between a Logstash cluster and its associated Elasticsearch cluster when you configure the X-Pack Monitoring feature for the Logstash cluster.
 *
 * @description > Before you enable the X-Pack Monitoring feature for a Logstash cluster, you must associate the Logstash cluster with an Elasticsearch cluster. This way, you can view the monitoring data of the Logstash cluster in the Kibana console of the Elasticsearch cluster.
 *
 * @param request ValidateConnectionRequest
 * @return ValidateConnectionResponse
 */
ValidateConnectionResponse Client::validateConnection(const string &InstanceId, const ValidateConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return validateConnectionWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 校验缩节点合法性
 *
 * @param request ValidateShrinkNodesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateShrinkNodesResponse
 */
ValidateShrinkNodesResponse Client::validateShrinkNodesWithOptions(const string &InstanceId, const ValidateShrinkNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCount()) {
    query["count"] = request.count();
  }

  if (!!request.hasIgnoreStatus()) {
    query["ignoreStatus"] = request.ignoreStatus();
  }

  if (!!request.hasNodeType()) {
    query["nodeType"] = request.nodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.body())}
  }));
  Params params = Params(json({
    {"action" , "ValidateShrinkNodes"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/validate-shrink-nodes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateShrinkNodesResponse>();
}

/**
 * @summary 校验缩节点合法性
 *
 * @param request ValidateShrinkNodesRequest
 * @return ValidateShrinkNodesResponse
 */
ValidateShrinkNodesResponse Client::validateShrinkNodes(const string &InstanceId, const ValidateShrinkNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return validateShrinkNodesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @param request ValidateSlrPermissionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateSlrPermissionResponse
 */
ValidateSlrPermissionResponse Client::validateSlrPermissionWithOptions(const ValidateSlrPermissionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRolename()) {
    query["rolename"] = request.rolename();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ValidateSlrPermission"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/user/servicerolepermission")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateSlrPermissionResponse>();
}

/**
 * @param request ValidateSlrPermissionRequest
 * @return ValidateSlrPermissionResponse
 */
ValidateSlrPermissionResponse Client::validateSlrPermission(const ValidateSlrPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return validateSlrPermissionWithOptions(request, headers, runtime);
}

/**
 * @summary 缩节点校验数据迁移合法性
 *
 * @param request ValidateTransferableNodesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateTransferableNodesResponse
 */
ValidateTransferableNodesResponse Client::validateTransferableNodesWithOptions(const string &InstanceId, const ValidateTransferableNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeType()) {
    query["nodeType"] = request.nodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.body())}
  }));
  Params params = Params(json({
    {"action" , "ValidateTransferableNodes"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Http::URL::percentEncode(InstanceId) , "/validate-transfer-nodes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateTransferableNodesResponse>();
}

/**
 * @summary 缩节点校验数据迁移合法性
 *
 * @param request ValidateTransferableNodesRequest
 * @return ValidateTransferableNodesResponse
 */
ValidateTransferableNodesResponse Client::validateTransferableNodes(const string &InstanceId, const ValidateTransferableNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return validateTransferableNodesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary The configurations of dedicated master nodes.
 *
 * @description The configurations of warm nodes.
 *
 * @param request CreateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasClientNodeConfiguration()) {
    body["clientNodeConfiguration"] = request.clientNodeConfiguration();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasElasticDataNodeConfiguration()) {
    body["elasticDataNodeConfiguration"] = request.elasticDataNodeConfiguration();
  }

  if (!!request.hasEsAdminPassword()) {
    body["esAdminPassword"] = request.esAdminPassword();
  }

  if (!!request.hasEsVersion()) {
    body["esVersion"] = request.esVersion();
  }

  if (!!request.hasInstanceCategory()) {
    body["instanceCategory"] = request.instanceCategory();
  }

  if (!!request.hasKibanaConfiguration()) {
    body["kibanaConfiguration"] = request.kibanaConfiguration();
  }

  if (!!request.hasMasterConfiguration()) {
    body["masterConfiguration"] = request.masterConfiguration();
  }

  if (!!request.hasNetworkConfig()) {
    body["networkConfig"] = request.networkConfig();
  }

  if (!!request.hasNodeAmount()) {
    body["nodeAmount"] = request.nodeAmount();
  }

  if (!!request.hasNodeSpec()) {
    body["nodeSpec"] = request.nodeSpec();
  }

  if (!!request.hasPaymentInfo()) {
    body["paymentInfo"] = request.paymentInfo();
  }

  if (!!request.hasPaymentType()) {
    body["paymentType"] = request.paymentType();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  if (!!request.hasWarmNodeConfiguration()) {
    body["warmNodeConfiguration"] = request.warmNodeConfiguration();
  }

  if (!!request.hasZoneCount()) {
    body["zoneCount"] = request.zoneCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "createInstance"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary The configurations of dedicated master nodes.
 *
 * @description The configurations of warm nodes.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613