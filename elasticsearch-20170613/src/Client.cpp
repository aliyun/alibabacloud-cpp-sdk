#include <darabonba/Core.hpp>
#include <alibabacloud/Elasticsearch20170613.hpp>
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
using namespace AlibabaCloud::Elasticsearch20170613::Models;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{

AlibabaCloud::Elasticsearch20170613::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "elasticsearch.us-west-1.aliyuncs.com"},
    {"us-east-1" , "elasticsearch.us-east-1.aliyuncs.com"},
    {"eu-west-1" , "elasticsearch.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "elasticsearch.eu-central-1.aliyuncs.com"},
    {"cn-zhangjiakou" , "elasticsearch.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu" , "elasticsearch.cn-wulanchabu.aliyuncs.com"},
    {"cn-shenzhen" , "elasticsearch.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "elasticsearch.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai" , "elasticsearch.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "elasticsearch.cn-qingdao.aliyuncs.com"},
    {"cn-north-2-gov-1" , "elasticsearch.cn-north-2-gov-1.aliyuncs.com"},
    {"cn-hongkong" , "elasticsearch.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou-finance" , "elasticsearch.cn-hangzhou-finance.aliyuncs.com"},
    {"cn-hangzhou" , "elasticsearch.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "elasticsearch.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu" , "elasticsearch.cn-chengdu.aliyuncs.com"},
    {"cn-beijing" , "elasticsearch.cn-beijing.aliyuncs.com"},
    {"ap-southeast-5" , "elasticsearch.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "elasticsearch.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-2" , "elasticsearch.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-1" , "elasticsearch.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "elasticsearch.ap-south-1.aliyuncs.com"},
    {"ap-northeast-1" , "elasticsearch.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Resumes an offline zone. This operation is valid only for multi-zone instances.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "ActivateZones"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/recover-zones")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateZonesResponse>();
}

/**
 * @summary Resumes an offline zone. This operation is valid only for multi-zone instances.
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
 * @summary Configures network connectivity to establish a connection between different instances.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "AddConnectableCluster"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/connected-clusters")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddConnectableClusterResponse>();
}

/**
 * @summary Configures network connectivity to establish a connection between different instances.
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
 * @summary Creates a reference repository when setting up a cross-cluster OSS repository.
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
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "AddSnapshotRepo"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/snapshot-repos")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSnapshotRepoResponse>();
}

/**
 * @summary Creates a reference repository when setting up a cross-cluster OSS repository.
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
 * @summary Recovers a frozen Elasticsearch instance that was released.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelDeletion"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/cancel-deletion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelDeletionResponse>();
}

/**
 * @summary Recovers a frozen Elasticsearch instance that was released.
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
 * @summary Resumes a frozen Logstash instance that was frozen after release.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelLogstashDeletion"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/cancel-deletion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelLogstashDeletionResponse>();
}

/**
 * @summary Resumes a frozen Logstash instance that was frozen after release.
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
 * @summary Cancels a running data migration task.
 *
 * @param request CancelTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTaskWithOptions(const string &InstanceId, const CancelTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasTaskType()) {
    query["taskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelTask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/cancel-task")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelTaskResponse>();
}

/**
 * @summary Cancels a running data migration task.
 *
 * @param request CancelTaskRequest
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTask(const string &InstanceId, const CancelTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelTaskWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Recommends optimal cluster capacity planning configurations based on business scenarios, QPS, and log generation volume.
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
    body["complexQueryAvailable"] = request.getComplexQueryAvailable();
  }

  if (!!request.hasDataInfo()) {
    body["dataInfo"] = request.getDataInfo();
  }

  if (!!request.hasMetric()) {
    body["metric"] = request.getMetric();
  }

  if (!!request.hasUsageScenario()) {
    body["usageScenario"] = request.getUsageScenario();
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
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<CapacityPlanResponse>();
}

/**
 * @summary Recommends optimal cluster capacity planning configurations based on business scenarios, QPS, and log generation volume.
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
 * @summary Disables the intelligent O&M feature for an instance.
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
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseDiagnosis"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/close-diagnosis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseDiagnosisResponse>();
}

/**
 * @summary Disables the intelligent O&M feature for an instance.
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
 * @summary Disables the HTTPS protocol for a cluster.
 *
 * @param request CloseHttpsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseHttpsResponse
 */
CloseHttpsResponse Client::closeHttpsWithOptions(const string &InstanceId, const CloseHttpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseHttps"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/close-https")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseHttpsResponse>();
}

/**
 * @summary Disables the HTTPS protocol for a cluster.
 *
 * @param request CloseHttpsRequest
 * @return CloseHttpsResponse
 */
CloseHttpsResponse Client::closeHttps(const string &InstanceId, const CloseHttpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return closeHttpsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Disables the cloud managed feature for a specified index in an Indexing Service cluster. This operation is irreversible. After the feature is disabled, it cannot be enabled again.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseManagedIndex"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/indices/" , Darabonba::Encode::Encoder::percentEncode(Index) , "/close-managed")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseManagedIndexResponse>();
}

/**
 * @summary Disables the cloud managed feature for a specified index in an Indexing Service cluster. This operation is irreversible. After the feature is disabled, it cannot be enabled again.
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
 * @summary Creates a collector to collect data from a specified service.
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
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasCollectorPaths()) {
    body["collectorPaths"] = request.getCollectorPaths();
  }

  if (!!request.hasConfigs()) {
    body["configs"] = request.getConfigs();
  }

  if (!!request.hasDryRun()) {
    body["dryRun"] = request.getDryRun();
  }

  if (!!request.hasExtendConfigs()) {
    body["extendConfigs"] = request.getExtendConfigs();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasResType()) {
    body["resType"] = request.getResType();
  }

  if (!!request.hasResVersion()) {
    body["resVersion"] = request.getResVersion();
  }

  if (!!request.hasVpcId()) {
    body["vpcId"] = request.getVpcId();
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
 * @summary Creates a collector to collect data from a specified service.
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
 * @summary Creates an Elasticsearch composable template.
 *
 * @description For more information, see [Store large volumes of data by using OpenStore](https://help.aliyun.com/document_detail/317694.html).
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
    body["_meta"] = request.getMeta();
  }

  if (!!request.hasTemplate()) {
    body["template"] = request.getTemplate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateComponentIndex"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/component-index/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComponentIndexResponse>();
}

/**
 * @summary Creates an Elasticsearch composable template.
 *
 * @description For more information, see [Store large volumes of data by using OpenStore](https://help.aliyun.com/document_detail/317694.html).
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
 * @summary Creates a data stream to manage a set of indexes.
 *
 * @description > The data stream name you create must have a one-to-one correspondence with the index pattern in the index template, and the index template must have the data stream feature enabled. For example, if the index pattern in the index template is ds-\\*, the corresponding data stream name should be ds-.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "CreateDataStream"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/data-streams")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataStreamResponse>();
}

/**
 * @summary Creates a data stream to manage a set of indexes.
 *
 * @description > The data stream name you create must have a one-to-one correspondence with the index pattern in the index template, and the index template must have the data stream feature enabled. For example, if the index pattern in the index template is ds-\\*, the corresponding data stream name should be ds-.
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
 * @summary Creates an index lifecycle policy. If a policy with the specified name already exists, the existing policy is replaced and its version is incremented.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "CreateILMPolicy"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/ilm-policies")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateILMPolicyResponse>();
}

/**
 * @summary Creates an index lifecycle policy. If a policy with the specified name already exists, the existing policy is replaced and its version is incremented.
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
 * @summary Creates a cluster index template that can be used for component-based index template settings.
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
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasDataStream()) {
    body["dataStream"] = request.getDataStream();
  }

  if (!!request.hasIlmPolicy()) {
    body["ilmPolicy"] = request.getIlmPolicy();
  }

  if (!!request.hasIndexPatterns()) {
    body["indexPatterns"] = request.getIndexPatterns();
  }

  if (!!request.hasIndexTemplate()) {
    body["indexTemplate"] = request.getIndexTemplate();
  }

  if (!!request.hasPriority()) {
    body["priority"] = request.getPriority();
  }

  if (!!request.hasTemplate()) {
    body["template"] = request.getTemplate();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/index-templates")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIndexTemplateResponse>();
}

/**
 * @summary Creates a cluster index template that can be used for component-based index template settings.
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
 * @summary Creates a Logstash instance by calling CreateLogstash.
 *
 * @description Before calling this operation, note the following:
 * - Make sure that you are familiar with the billing method and pricing of Logstash. <props="china"><ph>For more information, see [Billing](https://help.aliyun.com/document_detail/260882.html).</ph>
 * - To create an instance, complete real-name verification. <props="china"><ph>For more information, see [Real-name verification](https://help.aliyun.com/document_detail/37175.html).</ph>.
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
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasNetworkConfig()) {
    body["networkConfig"] = request.getNetworkConfig();
  }

  if (!!request.hasNodeAmount()) {
    body["nodeAmount"] = request.getNodeAmount();
  }

  if (!!request.hasNodeSpec()) {
    body["nodeSpec"] = request.getNodeSpec();
  }

  if (!!request.hasPaymentInfo()) {
    body["paymentInfo"] = request.getPaymentInfo();
  }

  if (!!request.hasPaymentType()) {
    body["paymentType"] = request.getPaymentType();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
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
 * @summary Creates a Logstash instance by calling CreateLogstash.
 *
 * @description Before calling this operation, note the following:
 * - Make sure that you are familiar with the billing method and pricing of Logstash. <props="china"><ph>For more information, see [Billing](https://help.aliyun.com/document_detail/260882.html).</ph>
 * - To create an instance, complete real-name verification. <props="china"><ph>For more information, see [Real-name verification](https://help.aliyun.com/document_detail/37175.html).</ph>.
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
 * @summary Creates a Logstash pipeline to collect data.
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
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasTrigger()) {
    query["trigger"] = request.getTrigger();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePipelines"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/pipelines")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePipelinesResponse>();
}

/**
 * @summary Creates a Logstash pipeline to collect data.
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
 * @summary Calls CreateSnapshot to manually create a snapshot backup of a cluster.
 *
 * @param request CreateSnapshotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshotWithOptions(const string &InstanceId, const CreateSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "CreateSnapshot"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/snapshots")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSnapshotResponse>();
}

/**
 * @summary Calls CreateSnapshot to manually create a snapshot backup of a cluster.
 *
 * @param request CreateSnapshotRequest
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshot(const string &InstanceId, const CreateSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSnapshotWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Creates a PrivateLink VPC endpoint to connect to an endpoint service created in a user VPC.
 *
 * @description For more information about this API operation, see [Configure private connectivity for an instance](https://help.aliyun.com/document_detail/279559.html).
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
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasServiceId()) {
    body["serviceId"] = request.getServiceId();
  }

  if (!!request.hasZoneId()) {
    body["zoneId"] = request.getZoneId();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/vpc-endpoints")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVpcEndpointResponse>();
}

/**
 * @summary Creates a PrivateLink VPC endpoint to connect to an endpoint service created in a user VPC.
 *
 * @description For more information about this API operation, see [Configure private connectivity for an instance](https://help.aliyun.com/document_detail/279559.html).
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
 * @summary Takes part of the zones offline when multiple zones are available, and migrates the nodes in the offline zones to other zones.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "DeactivateZones"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/down-zones")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeactivateZonesResponse>();
}

/**
 * @summary Takes part of the zones offline when multiple zones are available, and migrates the nodes in the offline zones to other zones.
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
 * @summary Deletes a specified collector.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCollector"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Encode::Encoder::percentEncode(ResId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCollectorResponse>();
}

/**
 * @summary Deletes a specified collector.
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
 * @summary Deletes a component index template of Elasticsearch.
 *
 * @description For more information, see [Store massive amounts of data by using OpenStore](https://help.aliyun.com/document_detail/317694.html).
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/component-index/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComponentIndexResponse>();
}

/**
 * @summary Deletes a component index template of Elasticsearch.
 *
 * @description For more information, see [Store massive amounts of data by using OpenStore](https://help.aliyun.com/document_detail/317694.html).
 *
 * @return DeleteComponentIndexResponse
 */
DeleteComponentIndexResponse Client::deleteComponentIndex(const string &InstanceId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteComponentIndexWithOptions(InstanceId, name, headers, runtime);
}

/**
 * @summary Deletes the network connectivity between two instances.
 *
 * @param request DeleteConnectedClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConnectedClusterResponse
 */
DeleteConnectedClusterResponse Client::deleteConnectedClusterWithOptions(const string &InstanceId, const DeleteConnectedClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectedInstanceId()) {
    query["connectedInstanceId"] = request.getConnectedInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConnectedCluster"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/connected-clusters")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConnectedClusterResponse>();
}

/**
 * @summary Deletes the network connectivity between two instances.
 *
 * @param request DeleteConnectedClusterRequest
 * @return DeleteConnectedClusterResponse
 */
DeleteConnectedClusterResponse Client::deleteConnectedCluster(const string &InstanceId, const DeleteConnectedClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConnectedClusterWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Deletes a specified cluster data stream.
 *
 * @description > - Deleting a data stream also deletes its backing indexes. Proceed with caution.- When an index template has associated data streams, you must delete the data streams associated with the index template before you can delete the index template. On the data stream list page, view the data stream details to find the index template that matches the data stream.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataStream"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/data-streams/" , Darabonba::Encode::Encoder::percentEncode(DataStream))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataStreamResponse>();
}

/**
 * @summary Deletes a specified cluster data stream.
 *
 * @description > - Deleting a data stream also deletes its backing indexes. Proceed with caution.- When an index template has associated data streams, you must delete the data streams associated with the index template before you can delete the index template. On the data stream list page, view the data stream details to find the index template that matches the data stream.
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
 * @summary Deletes an Elasticsearch index migration task.
 *
 * @param request DeleteDataTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataTaskResponse
 */
DeleteDataTaskResponse Client::deleteDataTaskWithOptions(const string &InstanceId, const DeleteDataTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataTask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/data-task")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataTaskResponse>();
}

/**
 * @summary Deletes an Elasticsearch index migration task.
 *
 * @param request DeleteDataTaskRequest
 * @return DeleteDataTaskResponse
 */
DeleteDataTaskResponse Client::deleteDataTask(const string &InstanceId, const DeleteDataTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDataTaskWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Deletes a historical index template.
 *
 * @description For more information, see [Store massive amounts of data through OpenStore](https://help.aliyun.com/document_detail/317694.html).
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/deprecated-templates/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDeprecatedTemplateResponse>();
}

/**
 * @summary Deletes a historical index template.
 *
 * @description For more information, see [Store massive amounts of data through OpenStore](https://help.aliyun.com/document_detail/317694.html).
 *
 * @return DeleteDeprecatedTemplateResponse
 */
DeleteDeprecatedTemplateResponse Client::deleteDeprecatedTemplate(const string &InstanceId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDeprecatedTemplateWithOptions(InstanceId, name, headers, runtime);
}

/**
 * @summary Deletes a specified index lifecycle policy.
 *
 * @description > You cannot delete a policy that is currently in use. If the policy is being used to manage any index, the request fails and returns an error.
 *
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/ilm-policies/" , Darabonba::Encode::Encoder::percentEncode(PolicyName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteILMPolicyResponse>();
}

/**
 * @summary Deletes a specified index lifecycle policy.
 *
 * @description > You cannot delete a policy that is currently in use. If the policy is being used to manage any index, the request fails and returns an error.
 *
 * @return DeleteILMPolicyResponse
 */
DeleteILMPolicyResponse Client::deleteILMPolicy(const string &InstanceId, const string &PolicyName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteILMPolicyWithOptions(InstanceId, PolicyName, headers, runtime);
}

/**
 * @summary Deletes a specified index template.
 *
 * @description > Before deleting an index template, delete the data streams associated with the index template. Otherwise, the index template cannot be deleted.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/index-templates/" , Darabonba::Encode::Encoder::percentEncode(IndexTemplate))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIndexTemplateResponse>();
}

/**
 * @summary Deletes a specified index template.
 *
 * @description > Before deleting an index template, delete the data streams associated with the index template. Otherwise, the index template cannot be deleted.
 *
 * @return DeleteIndexTemplateResponse
 */
DeleteIndexTemplateResponse Client::deleteIndexTemplate(const string &InstanceId, const string &IndexTemplate) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIndexTemplateWithOptions(InstanceId, IndexTemplate, headers, runtime);
}

/**
 * @summary All physical resources used by the instance are reclaimed, all related data is permanently lost and cannot be recovered, and the cloud disks mounted to the instance nodes along with their corresponding snapshots are released.
 *
 * @description Before you invoke this operation, note the following:
 * Data cannot be recovered after the instance is released. Back up your data before releasing the instance. For more information, see [Snapshot backup and recovery commands](https://help.aliyun.com/document_detail/65675.html).
 *
 * @param request DeleteInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const string &InstanceId, const DeleteInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDeleteType()) {
    query["deleteType"] = request.getDeleteType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary All physical resources used by the instance are reclaimed, all related data is permanently lost and cannot be recovered, and the cloud disks mounted to the instance nodes along with their corresponding snapshots are released.
 *
 * @description Before you invoke this operation, note the following:
 * Data cannot be recovered after the instance is released. Back up your data before releasing the instance. For more information, see [Snapshot backup and recovery commands](https://help.aliyun.com/document_detail/65675.html).
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const string &InstanceId, const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Proactively releases a Logstash instance.
 *
 * @description Before calling this operation, note the following:
 * After the instance is released, all physical resources used by the instance are reclaimed, all related data is permanently lost and cannot be recovered, cloud disks mounted to the instance nodes are also released, and the corresponding snapshots are deleted.
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDeleteType()) {
    query["deleteType"] = request.getDeleteType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLogstash"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLogstashResponse>();
}

/**
 * @summary Proactively releases a Logstash instance.
 *
 * @description Before calling this operation, note the following:
 * After the instance is released, all physical resources used by the instance are reclaimed, all related data is permanently lost and cannot be recovered, cloud disks mounted to the instance nodes are also released, and the corresponding snapshots are deleted.
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
 * @summary Deletes pipelines configured for a Logstash instance.
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
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasPipelineIds()) {
    query["pipelineIds"] = request.getPipelineIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePipelines"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/pipelines")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePipelinesResponse>();
}

/**
 * @summary Deletes pipelines configured for a Logstash instance.
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
 * @summary Deletes a cross-cluster OSS reference repository from an instance.
 *
 * @param request DeleteSnapshotRepoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSnapshotRepoResponse
 */
DeleteSnapshotRepoResponse Client::deleteSnapshotRepoWithOptions(const string &InstanceId, const DeleteSnapshotRepoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasRepoPath()) {
    query["repoPath"] = request.getRepoPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSnapshotRepo"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/snapshot-repos")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSnapshotRepoResponse>();
}

/**
 * @summary Deletes a cross-cluster OSS reference repository from an instance.
 *
 * @param request DeleteSnapshotRepoRequest
 * @return DeleteSnapshotRepoResponse
 */
DeleteSnapshotRepoResponse Client::deleteSnapshotRepo(const string &InstanceId, const DeleteSnapshotRepoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSnapshotRepoWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Calls DeleteVpcEndpoint to delete a VPC endpoint under a service account.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVpcEndpoint"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/vpc-endpoints/" , Darabonba::Encode::Encoder::percentEncode(EndpointId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVpcEndpointResponse>();
}

/**
 * @summary Calls DeleteVpcEndpoint to delete a VPC endpoint under a service account.
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
 * @summary Calls the DescribeAckOperator operation to query the Elasticsearch Operator information installed on a specified Container Service for Kubernetes (ACK) cluster.
 *
 * @description > Before installing a collector on an ACK cluster, you can call this operation to check the installation status of the Elasticsearch Operator on the target cluster.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ack-clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/operator")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAckOperatorResponse>();
}

/**
 * @summary Calls the DescribeAckOperator operation to query the Elasticsearch Operator information installed on a specified Container Service for Kubernetes (ACK) cluster.
 *
 * @description > Before installing a collector on an ACK cluster, you can call this operation to check the installation status of the Elasticsearch Operator on the target cluster.
 *
 * @return DescribeAckOperatorResponse
 */
DescribeAckOperatorResponse Client::describeAckOperator(const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeAckOperatorWithOptions(ClusterId, headers, runtime);
}

/**
 * @summary Retrieves the details of a collector instance.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Encode::Encoder::percentEncode(ResId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCollectorResponse>();
}

/**
 * @summary Retrieves the details of a collector instance.
 *
 * @return DescribeCollectorResponse
 */
DescribeCollectorResponse Client::describeCollector(const string &ResId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeCollectorWithOptions(ResId, headers, runtime);
}

/**
 * @summary Queries the details of a composable index template in Elasticsearch.
 *
 * @description For more information, see [Use OpenStore to store massive amounts of data](https://help.aliyun.com/document_detail/317694.html).
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/component-index/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComponentIndexResponse>();
}

/**
 * @summary Queries the details of a composable index template in Elasticsearch.
 *
 * @description For more information, see [Use OpenStore to store massive amounts of data](https://help.aliyun.com/document_detail/317694.html).
 *
 * @return DescribeComponentIndexResponse
 */
DescribeComponentIndexResponse Client::describeComponentIndex(const string &InstanceId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeComponentIndexWithOptions(InstanceId, name, headers, runtime);
}

/**
 * @summary Retrieves a list of instances that can establish private network peering with the current instance. Instances that are already connected are not included.
 *
 * @param request DescribeConnectableClustersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConnectableClustersResponse
 */
DescribeConnectableClustersResponse Client::describeConnectableClustersWithOptions(const string &InstanceId, const DescribeConnectableClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlreadySetItems()) {
    query["alreadySetItems"] = request.getAlreadySetItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConnectableClusters"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/connectable-clusters")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConnectableClustersResponse>();
}

/**
 * @summary Retrieves a list of instances that can establish private network peering with the current instance. Instances that are already connected are not included.
 *
 * @param request DescribeConnectableClustersRequest
 * @return DescribeConnectableClustersResponse
 */
DescribeConnectableClustersResponse Client::describeConnectableClusters(const string &InstanceId, const DescribeConnectableClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeConnectableClustersWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries the details of a historical index template.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/deprecated-templates/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeprecatedTemplateResponse>();
}

/**
 * @summary Queries the details of a historical index template.
 *
 * @return DescribeDeprecatedTemplateResponse
 */
DescribeDeprecatedTemplateResponse Client::describeDeprecatedTemplate(const string &InstanceId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeDeprecatedTemplateWithOptions(InstanceId, name, headers, runtime);
}

/**
 * @summary Calls the DescribeDiagnoseReport operation to view historical reports of intelligent O&M.
 *
 * @param request DescribeDiagnoseReportRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnoseReportResponse
 */
DescribeDiagnoseReportResponse Client::describeDiagnoseReportWithOptions(const string &InstanceId, const string &ReportId, const DescribeDiagnoseReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnoseReport"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/reports/" , Darabonba::Encode::Encoder::percentEncode(ReportId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnoseReportResponse>();
}

/**
 * @summary Calls the DescribeDiagnoseReport operation to view historical reports of intelligent O&M.
 *
 * @param request DescribeDiagnoseReportRequest
 * @return DescribeDiagnoseReportResponse
 */
DescribeDiagnoseReportResponse Client::describeDiagnoseReport(const string &InstanceId, const string &ReportId, const DescribeDiagnoseReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeDiagnoseReportWithOptions(InstanceId, ReportId, request, headers, runtime);
}

/**
 * @summary Calls the DescribeDiagnosisSettings operation to obtain the scenario settings of intelligent O&M.
 *
 * @param request DescribeDiagnosisSettingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnosisSettingsResponse
 */
DescribeDiagnosisSettingsResponse Client::describeDiagnosisSettingsWithOptions(const string &InstanceId, const DescribeDiagnosisSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnosisSettings"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/settings")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosisSettingsResponse>();
}

/**
 * @summary Calls the DescribeDiagnosisSettings operation to obtain the scenario settings of intelligent O&M.
 *
 * @param request DescribeDiagnosisSettingsRequest
 * @return DescribeDiagnosisSettingsResponse
 */
DescribeDiagnosisSettingsResponse Client::describeDiagnosisSettings(const string &InstanceId, const DescribeDiagnosisSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeDiagnosisSettingsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Retrieves dynamic metrics of a cluster.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/dynamic-settings")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDynamicSettingsResponse>();
}

/**
 * @summary Retrieves dynamic metrics of a cluster.
 *
 * @return DescribeDynamicSettingsResponse
 */
DescribeDynamicSettingsResponse Client::describeDynamicSettings(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeDynamicSettingsWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Queries the health status of a cluster to check whether it is running properly.
 *
 * @description The instance health status. The following three states are supported:
 * - GREEN: Primary and replica shards are allocated properly.
 * - YELLOW: Primary shards are allocated properly, but replica shards are not allocated properly.
 * - RED: Primary shards are not allocated properly.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/elasticsearch-health")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticsearchHealthResponse>();
}

/**
 * @summary Queries the health status of a cluster to check whether it is running properly.
 *
 * @description The instance health status. The following three states are supported:
 * - GREEN: Primary and replica shards are allocated properly.
 * - YELLOW: Primary shards are allocated properly, but replica shards are not allocated properly.
 * - RED: Primary shards are not allocated properly.
 *
 * @return DescribeElasticsearchHealthResponse
 */
DescribeElasticsearchHealthResponse Client::describeElasticsearchHealth(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeElasticsearchHealthWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Queries the details of a specified index lifecycle policy.
 *
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/ilm-policies/" , Darabonba::Encode::Encoder::percentEncode(PolicyName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeILMPolicyResponse>();
}

/**
 * @summary Queries the details of a specified index lifecycle policy.
 *
 * @return DescribeILMPolicyResponse
 */
DescribeILMPolicyResponse Client::describeILMPolicy(const string &InstanceId, const string &PolicyName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeILMPolicyWithOptions(InstanceId, PolicyName, headers, runtime);
}

/**
 * @summary Returns information about an index template.
 *
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/index-templates/" , Darabonba::Encode::Encoder::percentEncode(IndexTemplate))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIndexTemplateResponse>();
}

/**
 * @summary Returns information about an index template.
 *
 * @return DescribeIndexTemplateResponse
 */
DescribeIndexTemplateResponse Client::describeIndexTemplate(const string &InstanceId, const string &IndexTemplate) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeIndexTemplateWithOptions(InstanceId, IndexTemplate, headers, runtime);
}

/**
 * @summary Queries the details of a specified instance.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceResponse>();
}

/**
 * @summary Queries the details of a specified instance.
 *
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstance(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeInstanceWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Retrieves the Kibana node configuration of an Elasticsearch instance.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/kibana-settings")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKibanaSettingsResponse>();
}

/**
 * @summary Retrieves the Kibana node configuration of an Elasticsearch instance.
 *
 * @return DescribeKibanaSettingsResponse
 */
DescribeKibanaSettingsResponse Client::describeKibanaSettings(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeKibanaSettingsWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Queries the details of a Logstash instance.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogstashResponse>();
}

/**
 * @summary Queries the details of a Logstash instance.
 *
 * @return DescribeLogstashResponse
 */
DescribeLogstashResponse Client::describeLogstash(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeLogstashWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Retrieves the pipeline information of a Logstash instance.
 *
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/pipelines/" , Darabonba::Encode::Encoder::percentEncode(PipelineId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePipelineResponse>();
}

/**
 * @summary Retrieves the pipeline information of a Logstash instance.
 *
 * @return DescribePipelineResponse
 */
DescribePipelineResponse Client::describePipeline(const string &InstanceId, const string &PipelineId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describePipelineWithOptions(InstanceId, PipelineId, headers, runtime);
}

/**
 * @summary Calls DescribePipelineManagementConfig to retrieve the pipeline management configuration of a Logstash instance.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePipelineManagementConfig"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/pipeline-management-config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePipelineManagementConfigResponse>();
}

/**
 * @summary Calls DescribePipelineManagementConfig to retrieve the pipeline management configuration of a Logstash instance.
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
 * @summary Retrieves the region information of Alibaba Cloud Elasticsearch.
 *
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
 * @summary Retrieves the region information of Alibaba Cloud Elasticsearch.
 *
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(headers, runtime);
}

/**
 * @summary Retrieves the snapshot backup settings and backup cycle of a cluster.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/snapshot-setting")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSnapshotSettingResponse>();
}

/**
 * @summary Retrieves the snapshot backup settings and backup cycle of a cluster.
 *
 * @return DescribeSnapshotSettingResponse
 */
DescribeSnapshotSettingResponse Client::describeSnapshotSetting(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeSnapshotSettingWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Retrieves the scenario-specific template configuration and cluster settings of an instance.
 *
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplatesResponse>();
}

/**
 * @summary Retrieves the scenario-specific template configuration and cluster settings of an instance.
 *
 * @return DescribeTemplatesResponse
 */
DescribeTemplatesResponse Client::describeTemplates(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeTemplatesWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Retrieves the X-Pack monitoring configuration of a Logstash instance.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/xpack-monitor-config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeXpackMonitorConfigResponse>();
}

/**
 * @summary Retrieves the X-Pack monitoring configuration of a Logstash instance.
 *
 * @return DescribeXpackMonitorConfigResponse
 */
DescribeXpackMonitorConfigResponse Client::describeXpackMonitorConfig(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeXpackMonitorConfigWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Calls DiagnoseInstance to immediately diagnose an instance.
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
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.getLang();
  }

  json body = {};
  if (!!request.hasDiagnoseItems()) {
    body["diagnoseItems"] = request.getDiagnoseItems();
  }

  if (!!request.hasIndices()) {
    body["indices"] = request.getIndices();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/diagnose")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DiagnoseInstanceResponse>();
}

/**
 * @summary Calls DiagnoseInstance to immediately diagnose an instance.
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
 * @summary Disables Kibana private network access.
 *
 * @description This API operation supports only cloud-native instances. For legacy architecture instances, use the TriggerNetwork method.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/disable-kibana-private")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableKibanaPvlNetworkResponse>();
}

/**
 * @summary Disables Kibana private network access.
 *
 * @description This API operation supports only cloud-native instances. For legacy architecture instances, use the TriggerNetwork method.
 *
 * @return DisableKibanaPvlNetworkResponse
 */
DisableKibanaPvlNetworkResponse Client::disableKibanaPvlNetwork(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableKibanaPvlNetworkWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Invokes the EnableKibanaPvlNetwork operation to enable private network access for Kibana.
 *
 * @description 1. This API operation is supported only for cloud-native instances. For legacy architecture instances, use the TriggerNetwork method.
 * 2. The Kibana specification must be greater than 1 vCPU and 2 GB of memory.
 *
 * @param request EnableKibanaPvlNetworkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableKibanaPvlNetworkResponse
 */
EnableKibanaPvlNetworkResponse Client::enableKibanaPvlNetworkWithOptions(const string &InstanceId, const EnableKibanaPvlNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasEndpointName()) {
    body["endpointName"] = request.getEndpointName();
  }

  if (!!request.hasSecurityGroups()) {
    body["securityGroups"] = request.getSecurityGroups();
  }

  if (!!request.hasVSwitchIdsZone()) {
    body["vSwitchIdsZone"] = request.getVSwitchIdsZone();
  }

  if (!!request.hasVpcId()) {
    body["vpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnableKibanaPvlNetwork"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/enable-kibana-private")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableKibanaPvlNetworkResponse>();
}

/**
 * @summary Invokes the EnableKibanaPvlNetwork operation to enable private network access for Kibana.
 *
 * @description 1. This API operation is supported only for cloud-native instances. For legacy architecture instances, use the TriggerNetwork method.
 * 2. The Kibana specification must be greater than 1 vCPU and 2 GB of memory.
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
 * @summary Retrieves the estimated restart time of a Logstash instance.
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
    query["force"] = request.getForce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "EstimatedLogstashRestartTime"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/estimated-time/restart-time")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EstimatedLogstashRestartTimeResponse>();
}

/**
 * @summary Retrieves the estimated restart time of a Logstash instance.
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
 * @summary Retrieves the estimated restart time for an instance.
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
    query["force"] = request.getForce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "EstimatedRestartTime"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/estimated-time/restart-time")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EstimatedRestartTimeResponse>();
}

/**
 * @summary Retrieves the estimated restart time for an instance.
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
 * @summary Retrieves index migration data information.
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
    {"body" , request.getBody()}
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
 * @summary Retrieves index migration data information.
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
 * @summary Retrieves the elastic scaling rules of a cluster. Elastic nodes must be purchased when the instance is created.
 *
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/elastic-task")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetElastictaskResponse>();
}

/**
 * @summary Retrieves the elastic scaling rules of a cluster. Elastic nodes must be purchased when the instance is created.
 *
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
    query["body"] = request.getBody();
  }

  if (!!request.hasGroupId()) {
    query["groupId"] = request.getGroupId();
  }

  if (!!request.hasTimeEnd()) {
    query["timeEnd"] = request.getTimeEnd();
  }

  if (!!request.hasTimeStart()) {
    query["timeStart"] = request.getTimeStart();
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
 * @summary Calls GetEmonGrafanaAlerts to retrieve the Grafana alert list.
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
    query["body"] = request.getBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEmonGrafanaAlerts"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/emon/projects/" , Darabonba::Encode::Encoder::percentEncode(ProjectId) , "/grafana/proxy/api/alerts")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEmonGrafanaAlertsResponse>();
}

/**
 * @summary Calls GetEmonGrafanaAlerts to retrieve the Grafana alert list.
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
 * @summary Calls GetEmonGrafanaDashboards to retrieve the list of Grafana dashboards.
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
    query["body"] = request.getBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEmonGrafanaDashboards"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/emon/projects/" , Darabonba::Encode::Encoder::percentEncode(ProjectId) , "/grafana/proxy/api/search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEmonGrafanaDashboardsResponse>();
}

/**
 * @summary Calls GetEmonGrafanaDashboards to retrieve the list of Grafana dashboards.
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
 * @summary Queries the Grafana metric monitoring data of an Elasticsearch instance.
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
    query["body"] = request.getBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEmonMonitorData"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/emon/projects/" , Darabonba::Encode::Encoder::percentEncode(ProjectId) , "/metrics/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEmonMonitorDataResponse>();
}

/**
 * @summary Queries the Grafana metric monitoring data of an Elasticsearch instance.
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
 * @summary Retrieve keystore information
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKeystoresResponse
 */
GetKeystoresResponse Client::getKeystoresWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKeystores"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/keystores")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKeystoresResponse>();
}

/**
 * @summary Retrieve keystore information
 *
 * @return GetKeystoresResponse
 */
GetKeystoresResponse Client::getKeystores(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKeystoresWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Queries the storage capacity and usage of an OpenStore instance.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/openstore/usage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOpenStoreUsageResponse>();
}

/**
 * @summary Queries the storage capacity and usage of an OpenStore instance.
 *
 * @return GetOpenStoreUsageResponse
 */
GetOpenStoreUsageResponse Client::getOpenStoreUsage(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getOpenStoreUsageWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Retrieves the current region information.
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
    query["zoneId"] = request.getZoneId();
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
 * @summary Retrieves the current region information.
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
 * @summary Retrieves the nodes that can be removed based on the specified node type and quantity.
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
    query["count"] = request.getCount();
  }

  if (!!request.hasIgnoreStatus()) {
    query["ignoreStatus"] = request.getIgnoreStatus();
  }

  if (!!request.hasNodeType()) {
    query["nodeType"] = request.getNodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSuggestShrinkableNodes"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/suggest-shrinkable-nodes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSuggestShrinkableNodesResponse>();
}

/**
 * @summary Retrieves the nodes that can be removed based on the specified node type and quantity.
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
 * @summary Retrieves the nodes available for data migration based on the specified node type and count.
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
    query["count"] = request.getCount();
  }

  if (!!request.hasNodeType()) {
    query["nodeType"] = request.getNodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTransferableNodes"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/transferable-nodes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTransferableNodesResponse>();
}

/**
 * @summary Retrieves the nodes available for data migration based on the specified node type and count.
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
 * @summary Continue restarting the remaining edge zones of the Elasticsearch instance after the phased release is completed.
 *
 * @param request GrayPublishRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrayPublishResponse
 */
GrayPublishResponse Client::grayPublishWithOptions(const string &InstanceId, const GrayPublishRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasXRequestChangeId()) {
    query["X-Request-ChangeId"] = request.getXRequestChangeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrayPublish"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/grayPublish")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrayPublishResponse>();
}

/**
 * @summary Continue restarting the remaining edge zones of the Elasticsearch instance after the phased release is completed.
 *
 * @param request GrayPublishRequest
 * @return GrayPublishResponse
 */
GrayPublishResponse Client::grayPublish(const string &InstanceId, const GrayPublishRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return grayPublishWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Initialize AI model
 *
 * @param request InitModelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitModelResponse
 */
InitModelResponse Client::initModelWithOptions(const string &InstanceId, const InitModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiKey()) {
    body["api_key"] = request.getApiKey();
  }

  if (!!request.hasHost()) {
    body["host"] = request.getHost();
  }

  if (!!request.hasHttpSchema()) {
    body["http_schema"] = request.getHttpSchema();
  }

  if (!!request.hasModels()) {
    body["models"] = request.getModels();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InitModel"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/initModel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitModelResponse>();
}

/**
 * @summary Initialize AI model
 *
 * @param request InitModelRequest
 * @return InitModelResponse
 */
InitModelResponse Client::initModel(const string &InstanceId, const InitModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return initModelWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Calls the InitializeOperationRole operation to create a service-linked role.
 *
 * @description > Before you use a collector to collect logs from different data sources or perform elastic scaling tasks for a cluster (applicable only to the China site), you must create a service-linked role.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
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
 * @summary Calls the InitializeOperationRole operation to create a service-linked role.
 *
 * @description > Before you use a collector to collect logs from different data sources or perform elastic scaling tasks for a cluster (applicable only to the China site), you must create a service-linked role.
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
 * @summary Installs the ACK Operator on a specified Container Service cluster.
 *
 * @description > Before installing a collector on an ACK cluster, call this operation to install the Elasticsearch Operator on the target cluster.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "InstallAckOperator"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ack-clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/operator")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallAckOperatorResponse>();
}

/**
 * @summary Installs the ACK Operator on a specified Container Service cluster.
 *
 * @description > Before installing a collector on an ACK cluster, call this operation to install the Elasticsearch Operator on the target cluster.
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
 * @summary Installs preset plug-ins for Kibana. The Kibana instance must have specifications of 2 vCPUs and 4 GB of memory or higher.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "InstallKibanaSystemPlugin"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/kibana-plugins/system/actions/install")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallKibanaSystemPluginResponse>();
}

/**
 * @summary Installs preset plug-ins for Kibana. The Kibana instance must have specifications of 2 vCPUs and 4 GB of memory or higher.
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
 * @summary Installs system plugins for a specified Logstash instance.
 *
 * @description Before calling this operation, note the following:
 * The plugins to be installed must be included in the Alibaba Cloud Logstash [default system plugin list](https://help.aliyun.com/document_detail/139626.html). External open source plugins are not supported.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "InstallLogstashSystemPlugin"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/plugins/system/actions/install")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallLogstashSystemPluginResponse>();
}

/**
 * @summary Installs system plugins for a specified Logstash instance.
 *
 * @description Before calling this operation, note the following:
 * The plugins to be installed must be included in the Alibaba Cloud Logstash [default system plugin list](https://help.aliyun.com/document_detail/139626.html). External open source plugins are not supported.
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
 * @summary Installs system plug-ins on an Elasticsearch instance.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "InstallSystemPlugin"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/plugins/system/actions/install")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallSystemPluginResponse>();
}

/**
 * @summary Installs system plug-ins on an Elasticsearch instance.
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
 * @summary Installs custom plugins that have been uploaded to the Elasticsearch console.
 *
 * @description > The custom plugin installation feature is being upgraded internally and is temporarily unavailable. If you urgently need this feature, submit a ticket to contact us.
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
    query["force"] = request.getForce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "InstallUserPlugins"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/plugins/user/actions/install")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallUserPluginsResponse>();
}

/**
 * @summary Installs custom plugins that have been uploaded to the Elasticsearch console.
 *
 * @description > The custom plugin installation feature is being upgraded internally and is temporarily unavailable. If you urgently need this feature, submit a ticket to contact us.
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
 * @summary Interrupts an instance change task. This operation is valid only for instances in the Effecting state. After the interruption, the instance enters the suspended state.
 *
 * @param request InterruptElasticsearchTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InterruptElasticsearchTaskResponse
 */
InterruptElasticsearchTaskResponse Client::interruptElasticsearchTaskWithOptions(const string &InstanceId, const InterruptElasticsearchTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InterruptElasticsearchTask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/interrupt")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InterruptElasticsearchTaskResponse>();
}

/**
 * @summary Interrupts an instance change task. This operation is valid only for instances in the Effecting state. After the interruption, the instance enters the suspended state.
 *
 * @param request InterruptElasticsearchTaskRequest
 * @return InterruptElasticsearchTaskResponse
 */
InterruptElasticsearchTaskResponse Client::interruptElasticsearchTask(const string &InstanceId, const InterruptElasticsearchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return interruptElasticsearchTaskWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary After the interruption, the instance enters the suspended state.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InterruptLogstashTask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/interrupt")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InterruptLogstashTaskResponse>();
}

/**
 * @summary After the interruption, the instance enters the suspended state.
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
 * @summary Retrieves the list of Container Service for Kubernetes (ACK) clusters.
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
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasVpcId()) {
    query["vpcId"] = request.getVpcId();
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
 * @summary Retrieves the list of Container Service for Kubernetes (ACK) clusters.
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
 * @description This operation is deprecated and will be taken offline soon.
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
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAckNamespaces"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ack-clusters/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/namespaces")},
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
 * @description This operation is deprecated and will be taken offline soon.
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
 * @summary Release notes Release notes details.
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
    query["actionNames"] = request.getActionNames();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasFilter()) {
    query["filter"] = request.getFilter();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasRequestId()) {
    query["requestId"] = request.getRequestId();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasUserId()) {
    query["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListActionRecords"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/action-records")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListActionRecordsResponse>();
}

/**
 * @summary Release notes Release notes details.
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
 * @summary Retrieves information about all nodes in an Elasticsearch cluster.
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
    query["extended"] = request.getExtended();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllNode"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/nodes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllNodeResponse>();
}

/**
 * @summary Retrieves information about all nodes in an Elasticsearch cluster.
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
 * @summary Retrieves the OSS reference repositories that can be added to the current instance.
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
    query["alreadySetItems"] = request.getAlreadySetItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlternativeSnapshotRepos"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/alternative-snapshot-repos")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlternativeSnapshotReposResponse>();
}

/**
 * @summary Retrieves the OSS reference repositories that can be added to the current instance.
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
 * @summary Retrieves a list of available Elasticsearch instances when configuring X-Pack monitoring for a Logstash instance.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/available-elasticsearch-for-centralized-management")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAvailableEsInstanceIdsResponse>();
}

/**
 * @summary Retrieves a list of available Elasticsearch instances when configuring X-Pack monitoring for a Logstash instance.
 *
 * @return ListAvailableEsInstanceIdsResponse
 */
ListAvailableEsInstanceIdsResponse Client::listAvailableEsInstanceIds(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAvailableEsInstanceIdsWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Retrieves a list of collectors.
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
    query["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasResId()) {
    query["resId"] = request.getResId();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.getSourceType();
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
 * @summary Retrieves a list of collectors.
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
 * @summary Retrieves the list of composable templates for an Elasticsearch instance.
 *
 * @description For more information, see [Store massive amounts of data through OpenStore](https://help.aliyun.com/document_detail/317694.html).
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
    query["name"] = request.getName();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComponentIndices"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/component-index")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComponentIndicesResponse>();
}

/**
 * @summary Retrieves the list of composable templates for an Elasticsearch instance.
 *
 * @description For more information, see [Store massive amounts of data through OpenStore](https://help.aliyun.com/document_detail/317694.html).
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
 * @summary Retrieves a list of instances that have established private network peering with the current instance.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/connected-clusters")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConnectedClustersResponse>();
}

/**
 * @summary Retrieves a list of instances that have established private network peering with the current instance.
 *
 * @return ListConnectedClustersResponse
 */
ListConnectedClustersResponse Client::listConnectedClusters(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConnectedClustersWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Retrieves the list of index data streams in an Elasticsearch cluster.
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
    query["isManaged"] = request.getIsManaged();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataStreams"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/data-streams")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataStreamsResponse>();
}

/**
 * @summary Retrieves the list of index data streams in an Elasticsearch cluster.
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
 * @summary Retrieves a list of data migration tasks between different Elasticsearch clusters.
 *
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/data-task")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataTasksResponse>();
}

/**
 * @summary Retrieves a list of data migration tasks between different Elasticsearch clusters.
 *
 * @return ListDataTasksResponse
 */
ListDataTasksResponse Client::listDataTasks(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataTasksWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Invokes the ListDefaultCollectorConfigurations operation to retrieve the default configuration file of a collector.
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
    query["resType"] = request.getResType();
  }

  if (!!request.hasResVersion()) {
    query["resVersion"] = request.getResVersion();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.getSourceType();
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
 * @summary Invokes the ListDefaultCollectorConfigurations operation to retrieve the default configuration file of a collector.
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
 * @summary Queries the list of historical index templates.
 *
 * @description For more information, see [Use OpenStore to store large volumes of data](https://help.aliyun.com/document_detail/317694.html).
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
    query["name"] = request.getName();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeprecatedTemplates"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/deprecated-templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeprecatedTemplatesResponse>();
}

/**
 * @summary Queries the list of historical index templates.
 *
 * @description For more information, see [Use OpenStore to store large volumes of data](https://help.aliyun.com/document_detail/317694.html).
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
 * @summary Retrieves the diagnostic indexes from the intelligent O&M module for a specified instance.
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
    query["lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDiagnoseIndices"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/indices")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDiagnoseIndicesResponse>();
}

/**
 * @summary Retrieves the diagnostic indexes from the intelligent O&M module for a specified instance.
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
 * @summary Calls ListDiagnoseReport to retrieve historical reports of intelligent O&M.
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
    query["detail"] = request.getDetail();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.getLang();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasTrigger()) {
    query["trigger"] = request.getTrigger();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDiagnoseReport"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/reports")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDiagnoseReportResponse>();
}

/**
 * @summary Calls ListDiagnoseReport to retrieve historical reports of intelligent O&M.
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
 * @summary Retrieves all IDs of Intelligent O&M Center historical reports.
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
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.getLang();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasTrigger()) {
    query["trigger"] = request.getTrigger();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDiagnoseReportIds"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/report-ids")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDiagnoseReportIdsResponse>();
}

/**
 * @summary Retrieves all IDs of Intelligent O&M Center historical reports.
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
 * @summary Lists the intelligent diagnostic items for an Elasticsearch instance.
 *
 * @param request ListDiagnosisItemsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDiagnosisItemsResponse
 */
ListDiagnosisItemsResponse Client::listDiagnosisItemsWithOptions(const ListDiagnosisItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.getLang();
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
 * @summary Lists the intelligent diagnostic items for an Elasticsearch instance.
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
 * @summary Queries the information of a specified dictionary.
 *
 * @param request ListDictInformationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDictInformationResponse
 */
ListDictInformationResponse Client::listDictInformationWithOptions(const string &InstanceId, const ListDictInformationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalyzerType()) {
    query["analyzerType"] = request.getAnalyzerType();
  }

  if (!!request.hasBucketName()) {
    query["bucketName"] = request.getBucketName();
  }

  if (!!request.hasKey()) {
    query["key"] = request.getKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDictInformation"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/dict/_info")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDictInformationResponse>();
}

/**
 * @summary Queries the information of a specified dictionary.
 *
 * @param request ListDictInformationRequest
 * @return ListDictInformationResponse
 */
ListDictInformationResponse Client::listDictInformation(const string &InstanceId, const ListDictInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDictInformationWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries the details of the dictionary list for a specified type.
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
    query["analyzerType"] = request.getAnalyzerType();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDicts"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/dicts")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDictsResponse>();
}

/**
 * @summary Queries the details of the dictionary list for a specified type.
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
 * @summary Retrieves the list of ECS instances under the current user\\"s VPC and vSwitch.
 *
 * @description >Notice:  Before calling this operation, create the AliyunElasticsearchAccessingOOSRole and AliyunOOSAccessingECS4ESRole service-linked roles. These roles allow the Elasticsearch service account to obtain ECS access permissions of the Alibaba Cloud account. For more information, see [Collect ECS service logs](https://help.aliyun.com/document_detail/146446.html).
 * .
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
    query["ecsInstanceIds"] = request.getEcsInstanceIds();
  }

  if (!!request.hasEcsInstanceName()) {
    query["ecsInstanceName"] = request.getEcsInstanceName();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasTags()) {
    query["tags"] = request.getTags();
  }

  if (!!request.hasVpcId()) {
    query["vpcId"] = request.getVpcId();
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
 * @summary Retrieves the list of ECS instances under the current user\\"s VPC and vSwitch.
 *
 * @description >Notice:  Before calling this operation, create the AliyunElasticsearchAccessingOOSRole and AliyunOOSAccessingECS4ESRole service-linked roles. These roles allow the Elasticsearch service account to obtain ECS access permissions of the Alibaba Cloud account. For more information, see [Collect ECS service logs](https://help.aliyun.com/document_detail/146446.html).
 * .
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
 * @summary Obtain Event List
 *
 * @param request ListEventRecordsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEventRecordsResponse
 */
ListEventRecordsResponse Client::listEventRecordsWithOptions(const string &eventType, const ListEventRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasTermContent()) {
    query["termContent"] = request.getTermContent();
  }

  if (!!request.hasTermType()) {
    query["termType"] = request.getTermType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEventRecords"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/" , Darabonba::Encode::Encoder::percentEncode(eventType) , "/listEventRecords")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEventRecordsResponse>();
}

/**
 * @summary Obtain Event List
 *
 * @param request ListEventRecordsRequest
 * @return ListEventRecordsResponse
 */
ListEventRecordsResponse Client::listEventRecords(const string &eventType, const ListEventRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEventRecordsWithOptions(eventType, request, headers, runtime);
}

/**
 * @summary Retrieves the extension file configuration of a Logstash instance.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/extendfiles")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExtendfilesResponse>();
}

/**
 * @summary Retrieves the extension file configuration of a Logstash instance.
 *
 * @return ListExtendfilesResponse
 */
ListExtendfilesResponse Client::listExtendfiles(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listExtendfilesWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Queries the list of index lifecycle policies that have been created for a cluster.
 *
 * @param request ListILMPoliciesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListILMPoliciesResponse
 */
ListILMPoliciesResponse Client::listILMPoliciesWithOptions(const string &InstanceId, const ListILMPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["policyName"] = request.getPolicyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListILMPolicies"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/ilm-policies")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListILMPoliciesResponse>();
}

/**
 * @summary Queries the list of index lifecycle policies that have been created for a cluster.
 *
 * @param request ListILMPoliciesRequest
 * @return ListILMPoliciesResponse
 */
ListILMPoliciesResponse Client::listILMPolicies(const string &InstanceId, const ListILMPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listILMPoliciesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries a list of index templates.
 *
 * @param request ListIndexTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIndexTemplatesResponse
 */
ListIndexTemplatesResponse Client::listIndexTemplatesWithOptions(const string &InstanceId, const ListIndexTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndexTemplate()) {
    query["indexTemplate"] = request.getIndexTemplate();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIndexTemplates"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/index-templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIndexTemplatesResponse>();
}

/**
 * @summary Queries a list of index templates.
 *
 * @param request ListIndexTemplatesRequest
 * @return ListIndexTemplatesResponse
 */
ListIndexTemplatesResponse Client::listIndexTemplates(const string &InstanceId, const ListIndexTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIndexTemplatesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries the information about Elasticsearch instances.
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
    query["description"] = request.getDescription();
  }

  if (!!request.hasEsVersion()) {
    query["esVersion"] = request.getEsVersion();
  }

  if (!!request.hasInstanceCategory()) {
    query["instanceCategory"] = request.getInstanceCategory();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPaymentType()) {
    query["paymentType"] = request.getPaymentType();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTags()) {
    query["tags"] = request.getTags();
  }

  if (!!request.hasVpcId()) {
    query["vpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    query["zoneId"] = request.getZoneId();
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
 * @summary Queries the information about Elasticsearch instances.
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
 * @summary Queries the list of hardware O&M events triggered by an Elasticsearch cluster.
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
    request.setEventCycleStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventCycleStatus(), "eventCycleStatus", "simple"));
  }

  if (!!tmpReq.hasEventLevel()) {
    request.setEventLevelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventLevel(), "eventLevel", "simple"));
  }

  if (!!tmpReq.hasEventType()) {
    request.setEventTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventType(), "eventType", "simple"));
  }

  json query = {};
  if (!!request.hasEventCreateEndTime()) {
    query["eventCreateEndTime"] = request.getEventCreateEndTime();
  }

  if (!!request.hasEventCreateStartTime()) {
    query["eventCreateStartTime"] = request.getEventCreateStartTime();
  }

  if (!!request.hasEventCycleStatusShrink()) {
    query["eventCycleStatus"] = request.getEventCycleStatusShrink();
  }

  if (!!request.hasEventExecuteEndTime()) {
    query["eventExecuteEndTime"] = request.getEventExecuteEndTime();
  }

  if (!!request.hasEventExecuteStartTime()) {
    query["eventExecuteStartTime"] = request.getEventExecuteStartTime();
  }

  if (!!request.hasEventFinashEndTime()) {
    query["eventFinashEndTime"] = request.getEventFinashEndTime();
  }

  if (!!request.hasEventFinashStartTime()) {
    query["eventFinashStartTime"] = request.getEventFinashStartTime();
  }

  if (!!request.hasEventLevelShrink()) {
    query["eventLevel"] = request.getEventLevelShrink();
  }

  if (!!request.hasEventTypeShrink()) {
    query["eventType"] = request.getEventTypeShrink();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeIP()) {
    query["nodeIP"] = request.getNodeIP();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.getBody())}
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
 * @summary Queries the list of hardware O&M events triggered by an Elasticsearch cluster.
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
 * @summary Filters system indexes from the index list of a cluster.
 *
 * @description The ListInstanceIndices operation is applicable only to Elasticsearch instances that have the indexing service enabled. Query index information by using the Elasticsearch API. For more information, see [cat indices API
 * ](https://www.elastic.co/guide/en/elasticsearch/reference/current/cat-indices.html).
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
    query["all"] = request.getAll();
  }

  if (!!request.hasIsManaged()) {
    query["isManaged"] = request.getIsManaged();
  }

  if (!!request.hasIsOpenstore()) {
    query["isOpenstore"] = request.getIsOpenstore();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceIndices"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/indices")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceIndicesResponse>();
}

/**
 * @summary Filters system indexes from the index list of a cluster.
 *
 * @description The ListInstanceIndices operation is applicable only to Elasticsearch instances that have the indexing service enabled. Query index information by using the Elasticsearch API. For more information, see [cat indices API
 * ](https://www.elastic.co/guide/en/elasticsearch/reference/current/cat-indices.html).
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
 * @summary Retrieves the list of plugins installed on the Kibana node of an Elasticsearch instance.
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
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKibanaPlugins"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/kibana-plugins")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKibanaPluginsResponse>();
}

/**
 * @summary Retrieves the list of plugins installed on the Kibana node of an Elasticsearch instance.
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
 * @summary Queries the details of the Kibana private network connection.
 *
 * @description This API operation supports only cloud-native instances.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/get-kibana-private")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKibanaPvlNetworkResponse>();
}

/**
 * @summary Queries the details of the Kibana private network connection.
 *
 * @description This API operation supports only cloud-native instances.
 *
 * @return ListKibanaPvlNetworkResponse
 */
ListKibanaPvlNetworkResponse Client::listKibanaPvlNetwork(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKibanaPvlNetworkWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Displays the details of all or specified Logstash instances in a list.
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
    query["description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasTags()) {
    query["tags"] = request.getTags();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
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
 * @summary Displays the details of all or specified Logstash instances in a list.
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
 * @summary Queries the logs of a Logstash instance.
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
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLogstashLog"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/search-log")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogstashLogResponse>();
}

/**
 * @summary Queries the logs of a Logstash instance.
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
 * @summary Calls ListLogstashPlugins to retrieve detailed information about all or specified plugins.
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
    query["name"] = request.getName();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLogstashPlugins"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/plugins")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogstashPluginsResponse>();
}

/**
 * @summary Calls ListLogstashPlugins to retrieve detailed information about all or specified plugins.
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
 * @summary Historical report list of intelligent O&M.
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
    query["ecsInstanceIds"] = request.getEcsInstanceIds();
  }

  if (!!request.hasEcsInstanceName()) {
    query["ecsInstanceName"] = request.getEcsInstanceName();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasTags()) {
    query["tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNodes"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Encode::Encoder::percentEncode(ResId) , "/nodes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodesResponse>();
}

/**
 * @summary Historical report list of intelligent O&M.
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
 * @summary Retrieves the pipeline list of a Logstash instance.
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
    query["page"] = request.getPage();
  }

  if (!!request.hasPipelineId()) {
    query["pipelineId"] = request.getPipelineId();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipeline"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/pipelines")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelineResponse>();
}

/**
 * @summary Retrieves the pipeline list of a Logstash instance.
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
 * @summary Retrieves the list of pipeline IDs for a Logstash instance.
 *
 * @description > Pipeline management is divided into configuration file management and Kibana pipeline management. Kibana pipeline management is not available in the console for some regions.
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
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "ListPipelineIds"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/pipeline-ids")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelineIdsResponse>();
}

/**
 * @summary Retrieves the list of pipeline IDs for a Logstash instance.
 *
 * @description > Pipeline management is divided into configuration file management and Kibana pipeline management. Kibana pipeline management is not available in the console for some regions.
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
 * @summary Retrieves the plugin list of a specified Alibaba Cloud Elasticsearch instance.
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
    query["name"] = request.getName();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPlugins"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/plugins")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPluginsResponse>();
}

/**
 * @summary Retrieves the plugin list of a specified Alibaba Cloud Elasticsearch instance.
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
 * @summary Queries logs of different types for an Elasticsearch instance.
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
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSearchLog"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/search-log")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSearchLogResponse>();
}

/**
 * @summary Queries logs of different types for an Elasticsearch instance.
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
 * @summary Queries the data progress list of ongoing and completed shard recoveries. By default, only ongoing shard recovery information is returned.
 *
 * @description > Shard recovery is the process of synchronizing data from a primary shard to a replica shard. After recovery is complete, the replica shard becomes available for search.
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
    query["activeOnly"] = request.getActiveOnly();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListShardRecoveries"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/cat-recovery")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListShardRecoveriesResponse>();
}

/**
 * @summary Queries the data progress list of ongoing and completed shard recoveries. By default, only ongoing shard recovery information is returned.
 *
 * @description > Shard recovery is the process of synchronizing data from a primary shard to a replica shard. After recovery is complete, the replica shard becomes available for search.
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
 * @summary Retrieves the list of cross-cluster OSS repository settings for the current instance.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/snapshot-repos")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSnapshotReposByInstanceIdResponse>();
}

/**
 * @summary Retrieves the list of cross-cluster OSS repository settings for the current instance.
 *
 * @return ListSnapshotReposByInstanceIdResponse
 */
ListSnapshotReposByInstanceIdResponse Client::listSnapshotReposByInstanceId(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSnapshotReposByInstanceIdWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Statistics of management event records
 *
 * @param request ListStatsEventRecordsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStatsEventRecordsResponse
 */
ListStatsEventRecordsResponse Client::listStatsEventRecordsWithOptions(const ListStatsEventRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventType()) {
    query["eventType"] = request.getEventType();
  }

  if (!!request.hasLevel()) {
    query["level"] = request.getLevel();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStatsEventRecords"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/event/statsEventRecords")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStatsEventRecordsResponse>();
}

/**
 * @summary Statistics of management event records
 *
 * @param request ListStatsEventRecordsRequest
 * @return ListStatsEventRecordsResponse
 */
ListStatsEventRecordsResponse Client::listStatsEventRecords(const ListStatsEventRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listStatsEventRecordsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the relationships between all instances and tags.
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
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.getSize();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
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
 * @summary Retrieves the relationships between all instances and tags.
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
 * @summary Queries all labels created by the user in the current region.
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
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
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
 * @summary Queries all labels created by the user in the current region.
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
 * @summary Custom plugin list
 *
 * @param request ListUserPluginRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserPluginResponse
 */
ListUserPluginResponse Client::listUserPluginWithOptions(const string &instanceId, const ListUserPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserPlugin"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/userPlugins")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserPluginResponse>();
}

/**
 * @summary Custom plugin list
 *
 * @param request ListUserPluginRequest
 * @return ListUserPluginResponse
 */
ListUserPluginResponse Client::listUserPlugin(const string &instanceId, const ListUserPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserPluginWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Queries the status of endpoints in the VPC of a service account.
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
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpcEndpoints"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/vpc-endpoints")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcEndpointsResponse>();
}

/**
 * @summary Queries the status of endpoints in the VPC of a service account.
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
 * @summary Migrates nodes in a specified zone to a destination zone.
 *
 * @description When you upgrade the specifications of an instance and encounter insufficient inventory in the current zone, you can resolve this issue by migrating zone nodes. Before calling this operation, make sure that:
 * - Your account has a zone with sufficient resources.
 *    After migrating nodes of the current specifications to another zone, you must manually [upgrade the cluster](https://help.aliyun.com/document_detail/96650.html). The cluster is not upgraded during the migration. Therefore, select a zone with sufficient resources to avoid cluster upgrade failures. Select a zone with a later alphabetical order first. For example, between ap-southeast-1e and ap-southeast-1h, select ap-southeast-1h first.
 * - The cluster is in a healthy state.
 *    You can run the `GET _cat/health?v` command to check the cluster health status.
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
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "MigrateToOtherZone"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/migrate-zones")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateToOtherZoneResponse>();
}

/**
 * @summary Migrates nodes in a specified zone to a destination zone.
 *
 * @description When you upgrade the specifications of an instance and encounter insufficient inventory in the current zone, you can resolve this issue by migrating zone nodes. Before calling this operation, make sure that:
 * - Your account has a zone with sufficient resources.
 *    After migrating nodes of the current specifications to another zone, you must manually [upgrade the cluster](https://help.aliyun.com/document_detail/96650.html). The cluster is not upgraded during the migration. Therefore, select a zone with sufficient resources to avoid cluster upgrade failures. Select a zone with a later alphabetical order first. For example, between ap-southeast-1e and ap-southeast-1h, select ap-southeast-1h first.
 * - The cluster is in a healthy state.
 *    You can run the `GET _cat/health?v` command to check the cluster health status.
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
 * @summary Updates the ECS instances on which a collector is installed.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "ModifyDeployMachine"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Encode::Encoder::percentEncode(ResId) , "/actions/modify-deploy-machines")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDeployMachineResponse>();
}

/**
 * @summary Updates the ECS instances on which a collector is installed.
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
 * @summary Updates the elastic scaling rules of a cluster.
 *
 * @param request ModifyElastictaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyElastictaskResponse
 */
ModifyElastictaskResponse Client::modifyElastictaskWithOptions(const string &InstanceId, const ModifyElastictaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "ModifyElastictask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/elastic-task")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyElastictaskResponse>();
}

/**
 * @summary Updates the elastic scaling rules of a cluster.
 *
 * @param request ModifyElastictaskRequest
 * @return ModifyElastictaskResponse
 */
ModifyElastictaskResponse Client::modifyElastictask(const string &InstanceId, const ModifyElastictaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyElastictaskWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Modifies and enables the maintenance window for an instance.
 *
 * @description Before calling this operation, note the following:
 * - Before the scheduled maintenance, Alibaba Cloud sends SMS messages and emails to the contacts configured in your Alibaba Cloud account. Check your messages promptly.
 * - On the day of instance maintenance, to ensure stability throughout the maintenance process, the instance enters the Effective state before the maintenance window begins. While the instance is in this state, access to the cluster and query operations such as performance monitoring are not affected. However, cluster change operations such as cluster upgrades and restarts are temporarily unavailable.
 * - During the maintenance window, transient disconnections may occur. Ensure that your application has a reconnection mechanism.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "ModifyInstanceMaintainTime"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/modify-maintaintime")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceMaintainTimeResponse>();
}

/**
 * @summary Modifies and enables the maintenance window for an instance.
 *
 * @description Before calling this operation, note the following:
 * - Before the scheduled maintenance, Alibaba Cloud sends SMS messages and emails to the contacts configured in your Alibaba Cloud account. Check your messages promptly.
 * - On the day of instance maintenance, to ensure stability throughout the maintenance process, the instance enters the Effective state before the maintenance window begins. While the instance is in this state, access to the cluster and query operations such as performance monitoring are not affected. However, cluster change operations such as cluster upgrades and restarts are temporarily unavailable.
 * - During the maintenance window, transient disconnections may occur. Ensure that your application has a reconnection mechanism.
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
 * @summary For O&M events in the Event Center, you can specify a restart event, and the system will restart the specified edge zone of the relevant instance at the scheduled time.
 *
 * @param request ModifyScheduleExecuteTimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScheduleExecuteTimeResponse
 */
ModifyScheduleExecuteTimeResponse Client::modifyScheduleExecuteTimeWithOptions(const string &instanceId, const ModifyScheduleExecuteTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventId()) {
    query["eventId"] = request.getEventId();
  }

  if (!!request.hasScheduleExecuteTime()) {
    query["scheduleExecuteTime"] = request.getScheduleExecuteTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyScheduleExecuteTime"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/event/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/actions/modify-execute-time")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyScheduleExecuteTimeResponse>();
}

/**
 * @summary For O&M events in the Event Center, you can specify a restart event, and the system will restart the specified edge zone of the relevant instance at the scheduled time.
 *
 * @param request ModifyScheduleExecuteTimeRequest
 * @return ModifyScheduleExecuteTimeResponse
 */
ModifyScheduleExecuteTimeResponse Client::modifyScheduleExecuteTime(const string &instanceId, const ModifyScheduleExecuteTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyScheduleExecuteTimeWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Calls ModifyWhiteIps to update the access whitelist of a specified instance.
 *
 * @description ## Before you begin
 * - You cannot update information for an instance whose instance status is activating, invalid, or freeze (inactive).
 * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters:
 *     - IP whitelist list: whiteIpList, nodeType, networkType
 *     - IP whitelist group: modifyMode, whiteIpGroup
 * - The public network access whitelist does not support private network IP addresses, and the internal-facing whitelist does not support public IP addresses.
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
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasModifyMode()) {
    body["modifyMode"] = request.getModifyMode();
  }

  if (!!request.hasNetworkType()) {
    body["networkType"] = request.getNetworkType();
  }

  if (!!request.hasNodeType()) {
    body["nodeType"] = request.getNodeType();
  }

  if (!!request.hasWhiteIpGroup()) {
    body["whiteIpGroup"] = request.getWhiteIpGroup();
  }

  if (!!request.hasWhiteIpList()) {
    body["whiteIpList"] = request.getWhiteIpList();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/modify-white-ips")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWhiteIpsResponse>();
}

/**
 * @summary Calls ModifyWhiteIps to update the access whitelist of a specified instance.
 *
 * @description ## Before you begin
 * - You cannot update information for an instance whose instance status is activating, invalid, or freeze (inactive).
 * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters:
 *     - IP whitelist list: whiteIpList, nodeType, networkType
 *     - IP whitelist group: modifyMode, whiteIpGroup
 * - The public network access whitelist does not support private network IP addresses, and the internal-facing whitelist does not support public IP addresses.
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
 * @summary Modifies the resource group to which an instance belongs.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resourcegroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceGroupResponse>();
}

/**
 * @summary Modifies the resource group to which an instance belongs.
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
 * @summary Enables the intelligent O&M feature for an instance.
 *
 * @param request OpenDiagnosisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenDiagnosisResponse
 */
OpenDiagnosisResponse Client::openDiagnosisWithOptions(const string &InstanceId, const OpenDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenDiagnosis"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/open-diagnosis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenDiagnosisResponse>();
}

/**
 * @summary Enables the intelligent O&M feature for an instance.
 *
 * @param request OpenDiagnosisRequest
 * @return OpenDiagnosisResponse
 */
OpenDiagnosisResponse Client::openDiagnosis(const string &InstanceId, const OpenDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return openDiagnosisWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Enables the HTTPS protocol. Before enabling HTTPS, make sure that you have purchased client nodes.
 *
 * @description > - To ensure data security, enable the HTTPS protocol.
 * - Except for versions 8.5 and 7.16<props="china"><ph> and version 7.10 in some regions</ph>, make sure that you have purchased client nodes before enabling HTTPS.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenHttps"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/open-https")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenHttpsResponse>();
}

/**
 * @summary Enables the HTTPS protocol. Before enabling HTTPS, make sure that you have purchased client nodes.
 *
 * @description > - To ensure data security, enable the HTTPS protocol.
 * - Except for versions 8.5 and 7.16<props="china"><ph> and version 7.10 in some regions</ph>, make sure that you have purchased client nodes before enabling HTTPS.
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
 * @summary Upload a custom plugin to the plugin repository. After uploading, the plugin is in the pending installation status.
 *
 * @param request PluginAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PluginAnalysisResponse
 */
PluginAnalysisResponse Client::pluginAnalysisWithOptions(const string &instanceId, const PluginAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "PluginAnalysis"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/plugins/actions/analysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PluginAnalysisResponse>();
}

/**
 * @summary Upload a custom plugin to the plugin repository. After uploading, the plugin is in the pending installation status.
 *
 * @param request PluginAnalysisRequest
 * @return PluginAnalysisResponse
 */
PluginAnalysisResponse Client::pluginAnalysis(const string &instanceId, const PluginAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pluginAnalysisWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Sends a test alert message by calling PostEmonTryAlarmRule.
 *
 * @description > This API operation can be called up to 10 times per hour.
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
    query["body"] = request.getBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PostEmonTryAlarmRule"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/emon/projects/" , Darabonba::Encode::Encoder::percentEncode(ProjectId) , "/alarm-groups/" , Darabonba::Encode::Encoder::percentEncode(AlarmGroupId) , "/alarm-rules/_test")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PostEmonTryAlarmRuleResponse>();
}

/**
 * @summary Sends a test alert message by calling PostEmonTryAlarmRule.
 *
 * @description > This API operation can be called up to 10 times per hour.
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
 * @summary Calls RecommendTemplates to retrieve recommended cluster configurations.
 *
 * @param request RecommendTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecommendTemplatesResponse
 */
RecommendTemplatesResponse Client::recommendTemplatesWithOptions(const string &InstanceId, const RecommendTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUsageScenario()) {
    query["usageScenario"] = request.getUsageScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecommendTemplates"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/recommended-templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecommendTemplatesResponse>();
}

/**
 * @summary Calls RecommendTemplates to retrieve recommended cluster configurations.
 *
 * @param request RecommendTemplatesRequest
 * @return RecommendTemplatesResponse
 */
RecommendTemplatesResponse Client::recommendTemplates(const string &InstanceId, const RecommendTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return recommendTemplatesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Retries the installation of a collector that failed to install during creation.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "ReinstallCollector"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Encode::Encoder::percentEncode(ResId) , "/actions/reinstall")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReinstallCollectorResponse>();
}

/**
 * @summary Retries the installation of a collector that failed to install during creation.
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
 * @summary You can delete uploaded but uninstalled plugins from the plugin library.
 *
 * @param request RemovePluginRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePluginResponse
 */
RemovePluginResponse Client::removePluginWithOptions(const string &instanceId, const RemovePluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "RemovePlugin"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/plugins/actions/remove")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemovePluginResponse>();
}

/**
 * @summary You can delete uploaded but uninstalled plugins from the plugin library.
 *
 * @param request RemovePluginRequest
 * @return RemovePluginResponse
 */
RemovePluginResponse Client::removePlugin(const string &instanceId, const RemovePluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removePluginWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Renews a subscription Elasticsearch instance.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "RenewInstance"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/renew")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewInstanceResponse>();
}

/**
 * @summary Renews a subscription Elasticsearch instance.
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
 * @summary Renews a specified Logstash instance.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "RenewLogstash"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/renew")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewLogstashResponse>();
}

/**
 * @summary Renews a specified Logstash instance.
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
 * @summary Restarts a collector to perform data collection.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartCollector"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Encode::Encoder::percentEncode(ResId) , "/actions/restart")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartCollectorResponse>();
}

/**
 * @summary Restarts a collector to perform data collection.
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
 * @summary Restarts an Elasticsearch cluster.
 *
 * @description > After the restart, the instance enters the activating state. After the restart is complete, the instance status changes to active. Alibaba Cloud Elasticsearch supports single-node restarts. Node restarts are classified into normal restarts and blue-green restarts.
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasForce()) {
    query["force"] = request.getForce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "RestartInstance"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/restart")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartInstanceResponse>();
}

/**
 * @summary Restarts an Elasticsearch cluster.
 *
 * @description > After the restart, the instance enters the activating state. After the restart is complete, the instance status changes to active. Alibaba Cloud Elasticsearch supports single-node restarts. Node restarts are classified into normal restarts and blue-green restarts.
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
 * @summary Restarts a specified instance. After the restart, the instance enters the activating (activing) state.
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasForce()) {
    query["force"] = request.getForce();
  }

  json body = {};
  if (!!request.hasBatchCount()) {
    body["batchCount"] = request.getBatchCount();
  }

  if (!!request.hasBlueGreenDep()) {
    body["blueGreenDep"] = request.getBlueGreenDep();
  }

  if (!!request.hasNodeTypes()) {
    body["nodeTypes"] = request.getNodeTypes();
  }

  if (!!request.hasNodes()) {
    body["nodes"] = request.getNodes();
  }

  if (!!request.hasRestartType()) {
    body["restartType"] = request.getRestartType();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/restart")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartLogstashResponse>();
}

/**
 * @summary Restarts a specified instance. After the restart, the instance enters the activating (activing) state.
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
 * @summary Resumes an interrupted change task for an instance.
 *
 * @param request ResumeElasticsearchTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeElasticsearchTaskResponse
 */
ResumeElasticsearchTaskResponse Client::resumeElasticsearchTaskWithOptions(const string &InstanceId, const ResumeElasticsearchTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeElasticsearchTask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/resume")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeElasticsearchTaskResponse>();
}

/**
 * @summary Resumes an interrupted change task for an instance.
 *
 * @param request ResumeElasticsearchTaskRequest
 * @return ResumeElasticsearchTaskResponse
 */
ResumeElasticsearchTaskResponse Client::resumeElasticsearchTask(const string &InstanceId, const ResumeElasticsearchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeElasticsearchTaskWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Resumes an interrupted instance change task. After the task is resumed, the instance enters the activating state.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeLogstashTask"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/resume")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeLogstashTaskResponse>();
}

/**
 * @summary Resumes an interrupted instance change task. After the task is resumed, the instance enters the activating state.
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
 * @summary Creates a new index for a data stream or index alias.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RolloverDataStream"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/data-streams/" , Darabonba::Encode::Encoder::percentEncode(DataStream) , "/rollover")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RolloverDataStreamResponse>();
}

/**
 * @summary Creates a new index for a data stream or index alias.
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
 * @summary Deploys Logstash pipelines immediately.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "RunPipelines"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/pipelines/action/run")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunPipelinesResponse>();
}

/**
 * @summary Deploys Logstash pipelines immediately.
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
 * @summary Scales in nodes of a specified role in an Elasticsearch cluster.
 *
 * @description Note the following when you invoke this operation:
 * Before scaling in data nodes of a cluster, perform data migration from the nodes to be removed to other nodes. After you confirm that the nodes to be removed contain no data, proceed with the scale-in operation.
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasCount()) {
    query["count"] = request.getCount();
  }

  if (!!request.hasIgnoreStatus()) {
    query["ignoreStatus"] = request.getIgnoreStatus();
  }

  if (!!request.hasNodeType()) {
    query["nodeType"] = request.getNodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ShrinkNode"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/shrink")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ShrinkNodeResponse>();
}

/**
 * @summary Scales in nodes of a specified role in an Elasticsearch cluster.
 *
 * @description Note the following when you invoke this operation:
 * Before scaling in data nodes of a cluster, perform data migration from the nodes to be removed to other nodes. After you confirm that the nodes to be removed contain no data, proceed with the scale-in operation.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartCollector"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Encode::Encoder::percentEncode(ResId) , "/actions/start")},
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
 * @summary Calls StopCollector to stop a running collector.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopCollector"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Encode::Encoder::percentEncode(ResId) , "/actions/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopCollectorResponse>();
}

/**
 * @summary Calls StopCollector to stop a running collector.
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
 * @summary Stops Logstash pipelines by calling StopPipelines.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "StopPipelines"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/pipelines/action/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopPipelinesResponse>();
}

/**
 * @summary Stops Logstash pipelines by calling StopPipelines.
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
 * @summary Creates tag-resource relationships for a specified instance.
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
    body["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
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
 * @summary Creates tag-resource relationships for a specified instance.
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
 * @summary Performs data migration on a node to facilitate node scale-in operations.
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasNodeType()) {
    query["nodeType"] = request.getNodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "TransferNode"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/transfer")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferNodeResponse>();
}

/**
 * @summary Performs data migration on a node to facilitate node scale-in operations.
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
 * @summary Enables or shuts down public or private network access for an Elasticsearch or Kibana cluster.
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
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasActionType()) {
    body["actionType"] = request.getActionType();
  }

  if (!!request.hasNetworkType()) {
    body["networkType"] = request.getNetworkType();
  }

  if (!!request.hasNodeType()) {
    body["nodeType"] = request.getNodeType();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/network-trigger")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TriggerNetworkResponse>();
}

/**
 * @summary Enables or shuts down public or private network access for an Elasticsearch or Kibana cluster.
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
 * @summary Disables an existing zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
 *
 * @description Disables an existing zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
 *
 * @param request TurnOffZoneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TurnOffZoneResponse
 */
TurnOffZoneResponse Client::turnOffZoneWithOptions(const string &instanceId, const TurnOffZoneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHpAlbZoneDrained()) {
    query["hpAlbZoneDrained"] = request.getHpAlbZoneDrained();
  }

  if (!!request.hasZone()) {
    query["zone"] = request.getZone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TurnOffZone"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/actions/turnOff-zone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TurnOffZoneResponse>();
}

/**
 * @summary Disables an existing zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
 *
 * @description Disables an existing zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
 *
 * @param request TurnOffZoneRequest
 * @return TurnOffZoneResponse
 */
TurnOffZoneResponse Client::turnOffZone(const string &instanceId, const TurnOffZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return turnOffZoneWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Reopens an offline zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
 *
 * @description Reopens an offline zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
 *
 * @param request TurnOnZoneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TurnOnZoneResponse
 */
TurnOnZoneResponse Client::turnOnZoneWithOptions(const string &instanceId, const TurnOnZoneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHpAlbZoneDrained()) {
    query["hpAlbZoneDrained"] = request.getHpAlbZoneDrained();
  }

  if (!!request.hasZone()) {
    query["zone"] = request.getZone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TurnOnZone"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/actions/turnOn-zone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TurnOnZoneResponse>();
}

/**
 * @summary Reopens an offline zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
 *
 * @description Reopens an offline zone for a multi-zone instance. This operation is intended only for disaster recovery drills. Proceed with caution.
 *
 * @param request TurnOnZoneRequest
 * @return TurnOnZoneResponse
 */
TurnOnZoneResponse Client::turnOnZone(const string &instanceId, const TurnOnZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return turnOnZoneWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Uninstalls plug-ins from the Kibana node of an Elasticsearch instance.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UninstallKibanaPlugin"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/kibana-plugins/actions/uninstall")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallKibanaPluginResponse>();
}

/**
 * @summary Uninstalls plug-ins from the Kibana node of an Elasticsearch instance.
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
 * @summary Uninstalls installed plug-ins from a Logstash instance.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UninstallLogstashPlugin"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/plugins/actions/uninstall")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallLogstashPluginResponse>();
}

/**
 * @summary Uninstalls installed plug-ins from a Logstash instance.
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
 * @summary Uninstalls system plug-ins from an Elasticsearch instance.
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasForce()) {
    query["force"] = request.getForce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UninstallPlugin"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/plugins/actions/uninstall")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallPluginResponse>();
}

/**
 * @summary Uninstalls system plug-ins from an Elasticsearch instance.
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
 * @summary Deletes user resource tag associations for a specified instance.
 *
 * @description When calling this operation, note the following:
 * - Only user tags can be deleted.
 *   
 *     > User tags are tags that users manually add to instances. System tags are tags that Alibaba Cloud services add to user instances. System tags are classified into visible tags and invisible tags.
 * - If a tag is not associated with any resource, the tag is also deleted when the resource tag association is deleted.
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
    query["All"] = request.getAll();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKeys()) {
    query["TagKeys"] = request.getTagKeys();
  }

  if (!!request.hasBody()) {
    query["body"] = request.getBody();
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
 * @summary Deletes user resource tag associations for a specified instance.
 *
 * @description When calling this operation, note the following:
 * - Only user tags can be deleted.
 *   
 *     > User tags are tags that users manually add to instances. System tags are tags that Alibaba Cloud services add to user instances. System tags are classified into visible tags and invisible tags.
 * - If a tag is not associated with any resource, the tag is also deleted when the resource tag association is deleted.
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
 * @summary Updates the password of the elastic account for a specified Elasticsearch instance.
 *
 * @description When you invoke this operation, note the following:
 * You cannot update information when the instance status is activating, invalid, or freeze (inactive).
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
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasEsAdminPassword()) {
    body["esAdminPassword"] = request.getEsAdminPassword();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/admin-pwd")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAdminPasswordResponse>();
}

/**
 * @summary Updates the password of the elastic account for a specified Elasticsearch instance.
 *
 * @description When you invoke this operation, note the following:
 * You cannot update information when the instance status is activating, invalid, or freeze (inactive).
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
 * @summary Changes the garbage collector configuration of a specified Elasticsearch instance.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateAdvancedSetting"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/update-advanced-setting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAdvancedSettingResponse>();
}

/**
 * @summary Changes the garbage collector configuration of a specified Elasticsearch instance.
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
 * @summary Updates the dictionary of the AliNLP tokenizer plugin (analysis-aliws).
 *
 * @description When calling this operation, note the following:
 * - Instances of version 5.x do not support the AliNLP tokenizer plugin.
 * - If the dictionary file is sourced from OSS, ensure that the OSS bucket has public-read permission.
 * - If a previously uploaded dictionary is not configured with ORIGIN, calling this operation will delete the dictionary file.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateAliwsDict"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/aliws-dict")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAliwsDictResponse>();
}

/**
 * @summary Updates the dictionary of the AliNLP tokenizer plugin (analysis-aliws).
 *
 * @description When calling this operation, note the following:
 * - Instances of version 5.x do not support the AliNLP tokenizer plugin.
 * - If the dictionary file is sourced from OSS, ensure that the OSS bucket has public-read permission.
 * - If a previously uploaded dictionary is not configured with ORIGIN, calling this operation will delete the dictionary file.
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
 * @deprecated OpenAPI UpdateBlackIps is deprecated
 *
 * @summary Modifies the access blacklist of an Elasticsearch instance. This operation is deprecated.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateBlackIps"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/black-ips")},
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
 * @summary Modifies the access blacklist of an Elasticsearch instance. This operation is deprecated.
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
 * @summary Modifies the configuration of a collector.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateCollector"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Encode::Encoder::percentEncode(ResId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCollectorResponse>();
}

/**
 * @summary Modifies the configuration of a collector.
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
 * @summary Calls UpdateCollectorName to modify the name of a collector.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateCollectorName"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/collectors/" , Darabonba::Encode::Encoder::percentEncode(ResId) , "/actions/rename")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCollectorNameResponse>();
}

/**
 * @summary Calls UpdateCollectorName to modify the name of a collector.
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
 * @summary Updates a composable index template for an Elasticsearch instance.
 *
 * @description For more information, see [Use OpenStore to store massive amounts of data](https://help.aliyun.com/document_detail/317694.html).
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
    body["_meta"] = request.getMeta();
  }

  if (!!request.hasTemplate()) {
    body["template"] = request.getTemplate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateComponentIndex"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/component-index/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComponentIndexResponse>();
}

/**
 * @summary Updates a composable index template for an Elasticsearch instance.
 *
 * @description For more information, see [Use OpenStore to store massive amounts of data](https://help.aliyun.com/document_detail/317694.html).
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
 * @summary Changes the name of an Elasticsearch instance.
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
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/description")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDescriptionResponse>();
}

/**
 * @summary Changes the name of an Elasticsearch instance.
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
 * @summary Modifies the intelligent O&M scenario settings of a specified Elasticsearch instance.
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
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateDiagnosisSettings"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/diagnosis/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/settings")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDiagnosisSettingsResponse>();
}

/**
 * @summary Modifies the intelligent O&M scenario settings of a specified Elasticsearch instance.
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
 * @summary Updates the user dictionary of an Elasticsearch instance.
 *
 * @description When calling this operation, note the following:
 * - If the dictionary file originates from OSS, ensure that the OSS storage space is publicly readable.
 * - If previously uploaded dictionaries are not configured with ORIGIN, the dictionary files will be deleted after this operation is called.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateDict"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/dict")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDictResponse>();
}

/**
 * @summary Updates the user dictionary of an Elasticsearch instance.
 *
 * @description When calling this operation, note the following:
 * - If the dictionary file originates from OSS, ensure that the OSS storage space is publicly readable.
 * - If previously uploaded dictionaries are not configured with ORIGIN, the dictionary files will be deleted after this operation is called.
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
 * @summary Modify Cluster Dynamic Configuration
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
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasMode()) {
    query["mode"] = request.getMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateDynamicSettings"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/dynamic-settings")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDynamicSettingsResponse>();
}

/**
 * @summary Modify Cluster Dynamic Configuration
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
 * @summary Modifies the scenario-based configuration template of an Elasticsearch instance.
 *
 * @param request UpdateExtendConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExtendConfigResponse
 */
UpdateExtendConfigResponse Client::updateExtendConfigWithOptions(const string &InstanceId, const UpdateExtendConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateExtendConfig"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/extend-configs/actions/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExtendConfigResponse>();
}

/**
 * @summary Modifies the scenario-based configuration template of an Elasticsearch instance.
 *
 * @param request UpdateExtendConfigRequest
 * @return UpdateExtendConfigResponse
 */
UpdateExtendConfigResponse Client::updateExtendConfig(const string &InstanceId, const UpdateExtendConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateExtendConfigWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Updates the extension file configuration of a Logstash instance.
 *
 * @description When calling this operation, note the following: Currently, this operation only supports deleting extension files that have been uploaded through the console. To add or modify extension files, perform the operations in the console.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateExtendfiles"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/extendfiles")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExtendfilesResponse>();
}

/**
 * @summary Updates the extension file configuration of a Logstash instance.
 *
 * @description When calling this operation, note the following: Currently, this operation only supports deleting extension files that have been uploaded through the console. To add or modify extension files, perform the operations in the console.
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
 * @summary Toggle the FalconSeek cloud-native kernel attribute for instances of Version 8.17.
 *
 * @param request UpdateFalconSeekRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFalconSeekResponse
 */
UpdateFalconSeekResponse Client::updateFalconSeekWithOptions(const string &InstanceId, const UpdateFalconSeekRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["enable"] = request.getEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFalconSeek"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/falconseek")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFalconSeekResponse>();
}

/**
 * @summary Toggle the FalconSeek cloud-native kernel attribute for instances of Version 8.17.
 *
 * @param request UpdateFalconSeekRequest
 * @return UpdateFalconSeekResponse
 */
UpdateFalconSeekResponse Client::updateFalconSeek(const string &InstanceId, const UpdateFalconSeekRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFalconSeekWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Updates the IK hot-word dictionary of an Alibaba Cloud Elasticsearch instance.
 *
 * @description When calling this operation, note the following:
 * - If the dictionary file is sourced from OSS, make sure the OSS bucket has public-read permission.
 * - If a previously uploaded dictionary is not configured with ORIGIN, the dictionary file will be deleted after this operation is called.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateHotIkDicts"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/ik-hot-dict")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHotIkDictsResponse>();
}

/**
 * @summary Updates the IK hot-word dictionary of an Alibaba Cloud Elasticsearch instance.
 *
 * @description When calling this operation, note the following:
 * - If the dictionary file is sourced from OSS, make sure the OSS bucket has public-read permission.
 * - If a previously uploaded dictionary is not configured with ORIGIN, the dictionary file will be deleted after this operation is called.
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
 * @summary Modifies the lifecycle policy of an Elasticsearch index.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateILMPolicy"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/ilm-policies/" , Darabonba::Encode::Encoder::percentEncode(PolicyName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateILMPolicyResponse>();
}

/**
 * @summary Modifies the lifecycle policy of an Elasticsearch index.
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
 * @summary Modifies the template configuration of an Elasticsearch instance.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateIndexTemplate"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/index-templates/" , Darabonba::Encode::Encoder::percentEncode(IndexTemplate))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIndexTemplateResponse>();
}

/**
 * @summary Modifies the template configuration of an Elasticsearch instance.
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
 * @summary Upgrades the configuration of an Elasticsearch cluster, including the number of nodes, roles, specifications, and disk configurations.
 *
 * @description When you call this operation, note the following items:
 * For more precautions, see [Upgrade cluster configuration](https://help.aliyun.com/document_detail/96650.html) and [Downgrade cluster configuration](https://help.aliyun.com/document_detail/198887.html).
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasForce()) {
    query["force"] = request.getForce();
  }

  if (!!request.hasOrderActionType()) {
    query["orderActionType"] = request.getOrderActionType();
  }

  json body = {};
  if (!!request.hasClientNodeConfiguration()) {
    body["clientNodeConfiguration"] = request.getClientNodeConfiguration();
  }

  if (!!request.hasElasticDataNodeConfiguration()) {
    body["elasticDataNodeConfiguration"] = request.getElasticDataNodeConfiguration();
  }

  if (!!request.hasInstanceCategory()) {
    body["instanceCategory"] = request.getInstanceCategory();
  }

  if (!!request.hasKibanaConfiguration()) {
    body["kibanaConfiguration"] = request.getKibanaConfiguration();
  }

  if (!!request.hasMasterConfiguration()) {
    body["masterConfiguration"] = request.getMasterConfiguration();
  }

  if (!!request.hasNodeAmount()) {
    body["nodeAmount"] = request.getNodeAmount();
  }

  if (!!request.hasNodeSpec()) {
    body["nodeSpec"] = request.getNodeSpec();
  }

  if (!!request.hasUpdateType()) {
    body["updateType"] = request.getUpdateType();
  }

  if (!!request.hasWarmNodeConfiguration()) {
    body["warmNodeConfiguration"] = request.getWarmNodeConfiguration();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary Upgrades the configuration of an Elasticsearch cluster, including the number of nodes, roles, specifications, and disk configurations.
 *
 * @description When you call this operation, note the following items:
 * For more precautions, see [Upgrade cluster configuration](https://help.aliyun.com/document_detail/96650.html) and [Downgrade cluster configuration](https://help.aliyun.com/document_detail/198887.html).
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
 * @summary Transforms the billing method of an Elasticsearch instance from pay-as-you-go to a subscription instance.
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
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasPaymentInfo()) {
    body["paymentInfo"] = request.getPaymentInfo();
  }

  if (!!request.hasPaymentType()) {
    body["paymentType"] = request.getPaymentType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstanceChargeType"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/convert-pay-type")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceChargeTypeResponse>();
}

/**
 * @summary Transforms the billing method of an Elasticsearch instance from pay-as-you-go to a subscription instance.
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
 * @summary Modifies the YML parameter settings of a specified Elasticsearch instance.
 *
 * @description When you invoke this operation, note the following:
 * You cannot update the configuration when the instance status is activating, invalid, or inactive (freeze).
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasForce()) {
    query["force"] = request.getForce();
  }

  if (!!request.hasUpdateStrategy()) {
    query["updateStrategy"] = request.getUpdateStrategy();
  }

  json body = {};
  if (!!request.hasEsConfig()) {
    body["esConfig"] = request.getEsConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstanceSettings"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/instance-settings")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceSettingsResponse>();
}

/**
 * @summary Modifies the YML parameter settings of a specified Elasticsearch instance.
 *
 * @description When you invoke this operation, note the following:
 * You cannot update the configuration when the instance status is activating, invalid, or inactive (freeze).
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
 * @summary Update keystore
 *
 * @param request UpdateKeystoresRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKeystoresResponse
 */
UpdateKeystoresResponse Client::updateKeystoresWithOptions(const string &InstanceId, const UpdateKeystoresRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["force"] = request.getForce();
  }

  json body = {};
  if (!!request.hasRemove()) {
    body["remove"] = request.getRemove();
  }

  if (!!request.hasUpdate()) {
    body["update"] = request.getUpdate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKeystores"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/keystores")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKeystoresResponse>();
}

/**
 * @summary Update keystore
 *
 * @param request UpdateKeystoresRequest
 * @return UpdateKeystoresResponse
 */
UpdateKeystoresResponse Client::updateKeystores(const string &InstanceId, const UpdateKeystoresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKeystoresWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Update Kibana private network access
 *
 * @description 1. This API operation supports only cloud-native instances. For instances of the legacy architecture, use the TriggerNetwork operation.
 * 2. The Kibana specifications must be greater than 1 vCPU and 2 GB of memory.
 *
 * @param request UpdateKibanaPvlNetworkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKibanaPvlNetworkResponse
 */
UpdateKibanaPvlNetworkResponse Client::updateKibanaPvlNetworkWithOptions(const string &InstanceId, const UpdateKibanaPvlNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasPvlId()) {
    query["pvlId"] = request.getPvlId();
  }

  json body = {};
  if (!!request.hasEndpointName()) {
    body["endpointName"] = request.getEndpointName();
  }

  if (!!request.hasSecurityGroups()) {
    body["securityGroups"] = request.getSecurityGroups();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/update-kibana-private")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKibanaPvlNetworkResponse>();
}

/**
 * @summary Update Kibana private network access
 *
 * @description 1. This API operation supports only cloud-native instances. For instances of the legacy architecture, use the TriggerNetwork operation.
 * 2. The Kibana specifications must be greater than 1 vCPU and 2 GB of memory.
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
 * @summary Modifies the Kibana configuration. Currently, only the Kibana language configuration can be modified.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateKibanaSettings"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/update-kibana-settings")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKibanaSettingsResponse>();
}

/**
 * @summary Modifies the Kibana configuration. Currently, only the Kibana language configuration can be modified.
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
 * @summary Enable or disable Alibaba Cloud account authentication for Kibana. After Alibaba Cloud account authentication is enabled, you must log on with your Alibaba Cloud account before you can use Kibana features.
 *
 * @param request UpdateKibanaSsoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKibanaSsoResponse
 */
UpdateKibanaSsoResponse Client::updateKibanaSsoWithOptions(const string &InstanceId, const UpdateKibanaSsoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["enable"] = request.getEnable();
  }

  if (!!request.hasNetworkType()) {
    query["networkType"] = request.getNetworkType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateKibanaSso"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/kibana-sso")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKibanaSsoResponse>();
}

/**
 * @summary Enable or disable Alibaba Cloud account authentication for Kibana. After Alibaba Cloud account authentication is enabled, you must log on with your Alibaba Cloud account before you can use Kibana features.
 *
 * @param request UpdateKibanaSsoRequest
 * @return UpdateKibanaSsoResponse
 */
UpdateKibanaSsoResponse Client::updateKibanaSso(const string &InstanceId, const UpdateKibanaSsoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKibanaSsoWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Updates the Kibana access whitelist of a specified Alibaba Cloud Elasticsearch instance.
 *
 * @description ## Before you begin
 * - When you invoke this operation, you cannot update information if the instance status is activating, invalid, or freeze (inactive).
 * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters, as follows: 
 *     - IP whitelist list: kibanaIPWhitelist
 *     - IP whitelist group: modifyMode, whiteIpGroup
 * - The public network access whitelist does not support private IP addresses, and the internal-facing whitelist does not support public IP addresses.
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasModifyMode()) {
    query["modifyMode"] = request.getModifyMode();
  }

  json body = {};
  if (!!request.hasKibanaIPWhitelist()) {
    body["kibanaIPWhitelist"] = request.getKibanaIPWhitelist();
  }

  if (!!request.hasWhiteIpGroup()) {
    body["whiteIpGroup"] = request.getWhiteIpGroup();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/kibana-white-ips")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKibanaWhiteIpsResponse>();
}

/**
 * @summary Updates the Kibana access whitelist of a specified Alibaba Cloud Elasticsearch instance.
 *
 * @description ## Before you begin
 * - When you invoke this operation, you cannot update information if the instance status is activating, invalid, or freeze (inactive).
 * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters, as follows: 
 *     - IP whitelist list: kibanaIPWhitelist
 *     - IP whitelist group: modifyMode, whiteIpGroup
 * - The public network access whitelist does not support private IP addresses, and the internal-facing whitelist does not support public IP addresses.
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
 * @summary Modifies some information about a specified instance, such as the number of nodes, quota, name, and disk size.
 *
 * @description ### Before you begin
 * You cannot modify instance information when the instance status is activating, invalid, or freeze (inactive).
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
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasNodeAmount()) {
    body["nodeAmount"] = request.getNodeAmount();
  }

  if (!!request.hasNodeSpec()) {
    body["nodeSpec"] = request.getNodeSpec();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLogstashResponse>();
}

/**
 * @summary Modifies some information about a specified instance, such as the number of nodes, quota, name, and disk size.
 *
 * @description ### Before you begin
 * You cannot modify instance information when the instance status is activating, invalid, or freeze (inactive).
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
 * @summary Converts a pay-as-you-go Alibaba Cloud Logstash instance to a subscription instance.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateLogstashChargeType"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/convert-pay-type")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLogstashChargeTypeResponse>();
}

/**
 * @summary Converts a pay-as-you-go Alibaba Cloud Logstash instance to a subscription instance.
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
 * @summary Modifies the name of a specified Logstash instance.
 *
 * @description When you call this operation, take note of the following items:
 * You cannot modify the instance name when the instance status is activating, invalid, or freeze (inactive).
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
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/description")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLogstashDescriptionResponse>();
}

/**
 * @summary Modifies the name of a specified Logstash instance.
 *
 * @description When you call this operation, take note of the following items:
 * You cannot modify the instance name when the instance status is activating, invalid, or freeze (inactive).
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
 * @summary Updates the configuration of a specified Logstash instance.
 *
 * @description When you invoke this operation, note the following: The instance configuration cannot be updated when the instance status is activating, invalid, or freeze (inactive).
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateLogstashSettings"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/instance-settings")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLogstashSettingsResponse>();
}

/**
 * @summary Updates the configuration of a specified Logstash instance.
 *
 * @description When you invoke this operation, note the following: The instance configuration cannot be updated when the instance status is activating, invalid, or freeze (inactive).
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
 * @summary Modifies the pipeline management method for a specified Logstash instance.
 *
 * @description > Pipeline management methods include configuration file management and Kibana pipeline management. The console no longer supports Kibana pipeline management. You can use this feature only through the API.
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
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasEndpoints()) {
    body["endpoints"] = request.getEndpoints();
  }

  if (!!request.hasEsInstanceId()) {
    body["esInstanceId"] = request.getEsInstanceId();
  }

  if (!!request.hasPassword()) {
    body["password"] = request.getPassword();
  }

  if (!!request.hasPipelineIds()) {
    body["pipelineIds"] = request.getPipelineIds();
  }

  if (!!request.hasPipelineManagementType()) {
    body["pipelineManagementType"] = request.getPipelineManagementType();
  }

  if (!!request.hasUserName()) {
    body["userName"] = request.getUserName();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/pipeline-management-config")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePipelineManagementConfigResponse>();
}

/**
 * @summary Modifies the pipeline management method for a specified Logstash instance.
 *
 * @description > Pipeline management methods include configuration file management and Kibana pipeline management. The console no longer supports Kibana pipeline management. You can use this feature only through the API.
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
 * @summary Calls UpdatePipelines to update Logstash pipeline information.
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasTrigger()) {
    query["trigger"] = request.getTrigger();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdatePipelines"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/pipelines")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePipelinesResponse>();
}

/**
 * @summary Calls UpdatePipelines to update Logstash pipeline information.
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
 * @summary Updates the VPC private network access whitelist of a specified instance.
 *
 * @description ## Before you begin
 * - You cannot update the VPC private network access whitelist of an instance when the instance status is Activating (activating), Invalid (invalid), or Freeze (inactive).
 * - You can update the whitelist in two ways: by using an IP whitelist list or by using an IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters:
 *     - IP whitelist list: privateNetworkIpWhiteList
 *     - IP whitelist group: modifyMode, whiteIpGroup
 * - The public network access whitelist does not support private IP addresses, and the private network access whitelist does not support public IP addresses.
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasModifyMode()) {
    query["modifyMode"] = request.getModifyMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdatePrivateNetworkWhiteIps"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/private-network-white-ips")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrivateNetworkWhiteIpsResponse>();
}

/**
 * @summary Updates the VPC private network access whitelist of a specified instance.
 *
 * @description ## Before you begin
 * - You cannot update the VPC private network access whitelist of an instance when the instance status is Activating (activating), Invalid (invalid), or Freeze (inactive).
 * - You can update the whitelist in two ways: by using an IP whitelist list or by using an IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters:
 *     - IP whitelist list: privateNetworkIpWhiteList
 *     - IP whitelist group: modifyMode, whiteIpGroup
 * - The public network access whitelist does not support private IP addresses, and the private network access whitelist does not support public IP addresses.
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
 * @summary Enables or disables the public network address for a specified Elasticsearch instance.
 *
 * @description When you call this operation, note the following:
 * You cannot update information when the instance status is activating, invalid, or freeze (inactive).
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdatePublicNetwork"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/public-network")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePublicNetworkResponse>();
}

/**
 * @summary Enables or disables the public network address for a specified Elasticsearch instance.
 *
 * @description When you call this operation, note the following:
 * You cannot update information when the instance status is activating, invalid, or freeze (inactive).
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
 * @summary Updates the public endpoint access whitelist of a specified Elasticsearch instance.
 *
 * @description ## Before you begin
 * - You cannot update the public endpoint access whitelist of an instance when the instance status is activating, invalid, or inactive (freeze).
 * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters:   
 *     - IP whitelist list: publicIpWhitelist
 *     - IP whitelist group: modifyMode, whiteIpGroup
 * - The public network access whitelist does not support private network IP addresses, and the private network access whitelist does not support public network IP addresses.
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasModifyMode()) {
    query["modifyMode"] = request.getModifyMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdatePublicWhiteIps"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/public-white-ips")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePublicWhiteIpsResponse>();
}

/**
 * @summary Updates the public endpoint access whitelist of a specified Elasticsearch instance.
 *
 * @description ## Before you begin
 * - You cannot update the public endpoint access whitelist of an instance when the instance status is activating, invalid, or inactive (freeze).
 * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time. In addition to InstanceId and clientToken, the two methods support different parameters:   
 *     - IP whitelist list: publicIpWhitelist
 *     - IP whitelist group: modifyMode, whiteIpGroup
 * - The public network access whitelist does not support private network IP addresses, and the private network access whitelist does not support public network IP addresses.
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
 * @summary Enables or disables the write high availability feature for a cluster. Currently, only instances in the China (Beijing) region are supported.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateReadWritePolicy"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/update-read-write-policy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateReadWritePolicyResponse>();
}

/**
 * @summary Enables or disables the write high availability feature for a cluster. Currently, only instances in the China (Beijing) region are supported.
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
 * @summary Updates the data backup configuration of a specified instance.
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
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateSnapshotSetting"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/snapshot-setting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSnapshotSettingResponse>();
}

/**
 * @summary Updates the data backup configuration of a specified instance.
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
 * @summary Updates the synonym dictionary of an Alibaba Cloud Elasticsearch instance.
 *
 * @description When calling this operation, note the following:
 * - If the dictionary file is sourced from OSS, make sure the OSS bucket has public-read permission.
 * - If a previously uploaded dictionary is not configured with ORIGIN, the dictionary file will be deleted after this operation is called.
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
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateSynonymsDicts"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/synonymsDict")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSynonymsDictsResponse>();
}

/**
 * @summary Updates the synonym dictionary of an Alibaba Cloud Elasticsearch instance.
 *
 * @description When calling this operation, note the following:
 * - If the dictionary file is sourced from OSS, make sure the OSS bucket has public-read permission.
 * - If a previously uploaded dictionary is not configured with ORIGIN, the dictionary file will be deleted after this operation is called.
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
 * @summary Modifies the scenario-specific template configuration of a cluster.
 *
 * @param request UpdateTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplateWithOptions(const string &InstanceId, const string &TemplateName, const UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateTemplate"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/templates/" , Darabonba::Encode::Encoder::percentEncode(TemplateName))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTemplateResponse>();
}

/**
 * @summary Modifies the scenario-specific template configuration of a cluster.
 *
 * @param request UpdateTemplateRequest
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplate(const string &InstanceId, const string &TemplateName, const UpdateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTemplateWithOptions(InstanceId, TemplateName, request, headers, runtime);
}

/**
 * @summary Modifies the VPC internal-facing access whitelist of an Elasticsearch instance.
 *
 * @description ## Before you begin
 * - You cannot update information when the instance status is activating, invalid, or freeze (inactive).
 * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time, and they support different parameters besides InstanceId and clientToken. The details are as follows: 
 *     - IP whitelist list: esIPWhitelist
 *     - IP whitelist group: modifyMode, whiteIpGroup
 * - The public access whitelist does not support private network IP addresses, and the internal-facing access whitelist does not support public IP addresses.
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasModifyMode()) {
    query["modifyMode"] = request.getModifyMode();
  }

  json body = {};
  if (!!request.hasEsIPWhitelist()) {
    body["esIPWhitelist"] = request.getEsIPWhitelist();
  }

  if (!!request.hasWhiteIpGroup()) {
    body["whiteIpGroup"] = request.getWhiteIpGroup();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/white-ips")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWhiteIpsResponse>();
}

/**
 * @summary Modifies the VPC internal-facing access whitelist of an Elasticsearch instance.
 *
 * @description ## Before you begin
 * - You cannot update information when the instance status is activating, invalid, or freeze (inactive).
 * - You can update the whitelist in two ways: IP whitelist list and IP whitelist group. The two methods cannot be used at the same time, and they support different parameters besides InstanceId and clientToken. The details are as follows: 
 *     - IP whitelist list: esIPWhitelist
 *     - IP whitelist group: modifyMode, whiteIpGroup
 * - The public access whitelist does not support private network IP addresses, and the internal-facing access whitelist does not support public IP addresses.
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
 * @summary Updates the X-Pack monitoring and alerting configuration of a Logstash instance.
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
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasEnable()) {
    body["enable"] = request.getEnable();
  }

  if (!!request.hasEndpoints()) {
    body["endpoints"] = request.getEndpoints();
  }

  if (!!request.hasPassword()) {
    body["password"] = request.getPassword();
  }

  if (!!request.hasUserName()) {
    body["userName"] = request.getUserName();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/xpack-monitor-config")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateXpackMonitorConfigResponse>();
}

/**
 * @summary Updates the X-Pack monitoring and alerting configuration of a Logstash instance.
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
 * @summary Upgrades the version of an Elasticsearch instance. Both major version upgrades and kernel version upgrades are supported.
 *
 * @description > The version upgrade feature currently supports only the following upgrade paths: 5.5.3 to 5.6.16, 5.6.16 to 6.3.2, and 6.3.2 to 6.7.0. Upgrades between other versions are not supported. For more information, see [Upgrade version](https://help.aliyun.com/document_detail/148786.html).
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  if (!!request.hasUpdateStrategy()) {
    query["updateStrategy"] = request.getUpdateStrategy();
  }

  json body = {};
  if (!!request.hasPlugins()) {
    body["plugins"] = request.getPlugins();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/actions/upgrade-version")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeEngineVersionResponse>();
}

/**
 * @summary Upgrades the version of an Elasticsearch instance. Both major version upgrades and kernel version upgrades are supported.
 *
 * @description > The version upgrade feature currently supports only the following upgrade paths: 5.5.3 to 5.6.16, 5.6.16 to 6.3.2, and 6.3.2 to 6.7.0. Upgrades between other versions are not supported. For more information, see [Upgrade version](https://help.aliyun.com/document_detail/148786.html).
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
 * @summary Query whether a minor version is available for upgrade.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeInfoResponse
 */
UpgradeInfoResponse Client::upgradeInfoWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeInfo"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/upgradeInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeInfoResponse>();
}

/**
 * @summary Query whether a minor version is available for upgrade.
 *
 * @return UpgradeInfoResponse
 */
UpgradeInfoResponse Client::upgradeInfo(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return upgradeInfoWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Validates the connectivity of an Elasticsearch instance that provides X-Pack monitoring.
 *
 * @description > To enable X-Pack monitoring for Logstash, configure an Elasticsearch instance. After the configuration, you can monitor the Logstash instance in the Kibana console of the corresponding Elasticsearch instance.
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
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "ValidateConnection"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/logstashes/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/validate-connection")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateConnectionResponse>();
}

/**
 * @summary Validates the connectivity of an Elasticsearch instance that provides X-Pack monitoring.
 *
 * @description > To enable X-Pack monitoring for Logstash, configure an Elasticsearch instance. After the configuration, you can monitor the Logstash instance in the Kibana console of the corresponding Elasticsearch instance.
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
 * @summary Checks whether specific nodes in a specified instance can be scaled in.
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
    query["count"] = request.getCount();
  }

  if (!!request.hasIgnoreStatus()) {
    query["ignoreStatus"] = request.getIgnoreStatus();
  }

  if (!!request.hasNodeType()) {
    query["nodeType"] = request.getNodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ValidateShrinkNodes"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/validate-shrink-nodes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateShrinkNodesResponse>();
}

/**
 * @summary Checks whether specific nodes in a specified instance can be scaled in.
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
 * @summary Verifies the service-linked role (SLR) permission of the current account.
 *
 * @description > When you use a collector to collect logs from different data sources, you must first authorize the creation of a service-linked role. You can call this operation to check whether the service-linked role has been created.
 *
 * @param request ValidateSlrPermissionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateSlrPermissionResponse
 */
ValidateSlrPermissionResponse Client::validateSlrPermissionWithOptions(const ValidateSlrPermissionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRolename()) {
    query["rolename"] = request.getRolename();
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
 * @summary Verifies the service-linked role (SLR) permission of the current account.
 *
 * @description > When you use a collector to collect logs from different data sources, you must first authorize the creation of a service-linked role. You can call this operation to check whether the service-linked role has been created.
 *
 * @param request ValidateSlrPermissionRequest
 * @return ValidateSlrPermissionResponse
 */
ValidateSlrPermissionResponse Client::validateSlrPermission(const ValidateSlrPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return validateSlrPermissionWithOptions(request, headers, runtime);
}

/**
 * @summary Validates whether data on specific nodes in a specified instance can be migrated.
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
    query["nodeType"] = request.getNodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ValidateTransferableNodes"},
    {"version" , "2017-06-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/validate-transfer-nodes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateTransferableNodesResponse>();
}

/**
 * @summary Validates whether data on specific nodes in a specified instance can be migrated.
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
 * @summary Creates an Elasticsearch instance.
 *
 * @description ### Precautions
 * - Before using this operation, make sure that you fully understand the billing methods and pricing of Elasticsearch. For more information, see [Alibaba Cloud Elasticsearch pricing](https://www.aliyun.com/price/product?spm=a2c4g.11186623.2.7.657d2cbeRoSPCd#/elasticsearch/detail).
 * - Real-name verification is required to create instances.<props="china"><ph> For more information, see [Real-name verification](https://help.aliyun.com/document_detail/37175.html).</ph>
 * - You do not need to specify a zone when creating an instance. By default, the instance is in the same zone as the selected VPC.
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
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasClientNodeConfiguration()) {
    body["clientNodeConfiguration"] = request.getClientNodeConfiguration();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasElasticDataNodeConfiguration()) {
    body["elasticDataNodeConfiguration"] = request.getElasticDataNodeConfiguration();
  }

  if (!!request.hasEsAdminPassword()) {
    body["esAdminPassword"] = request.getEsAdminPassword();
  }

  if (!!request.hasEsVersion()) {
    body["esVersion"] = request.getEsVersion();
  }

  if (!!request.hasInstanceCategory()) {
    body["instanceCategory"] = request.getInstanceCategory();
  }

  if (!!request.hasKibanaConfiguration()) {
    body["kibanaConfiguration"] = request.getKibanaConfiguration();
  }

  if (!!request.hasMasterConfiguration()) {
    body["masterConfiguration"] = request.getMasterConfiguration();
  }

  if (!!request.hasNetworkConfig()) {
    body["networkConfig"] = request.getNetworkConfig();
  }

  if (!!request.hasNodeAmount()) {
    body["nodeAmount"] = request.getNodeAmount();
  }

  if (!!request.hasNodeSpec()) {
    body["nodeSpec"] = request.getNodeSpec();
  }

  if (!!request.hasPaymentInfo()) {
    body["paymentInfo"] = request.getPaymentInfo();
  }

  if (!!request.hasPaymentType()) {
    body["paymentType"] = request.getPaymentType();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasWarmNodeConfiguration()) {
    body["warmNodeConfiguration"] = request.getWarmNodeConfiguration();
  }

  if (!!request.hasZoneCount()) {
    body["zoneCount"] = request.getZoneCount();
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
 * @summary Creates an Elasticsearch instance.
 *
 * @description ### Precautions
 * - Before using this operation, make sure that you fully understand the billing methods and pricing of Elasticsearch. For more information, see [Alibaba Cloud Elasticsearch pricing](https://www.aliyun.com/price/product?spm=a2c4g.11186623.2.7.657d2cbeRoSPCd#/elasticsearch/detail).
 * - Real-name verification is required to create instances.<props="china"><ph> For more information, see [Real-name verification](https://help.aliyun.com/document_detail/37175.html).</ph>
 * - You do not need to specify a zone when creating an instance. By default, the instance is in the same zone as the selected VPC.
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