#include <darabonba/Core.hpp>
#include <alibabacloud/PaiDsw20220101.hpp>
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
using namespace AlibabaCloud::PaiDsw20220101::Models;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{

AlibabaCloud::PaiDsw20220101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("pai-dsw", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 诊断问题
 *
 * @param request CreateDiagnosisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDiagnosisResponse
 */
CreateDiagnosisResponse Client::createDiagnosisWithOptions(const CreateDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGmtFailureTime()) {
    body["GmtFailureTime"] = request.getGmtFailureTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProblemCategory()) {
    body["ProblemCategory"] = request.getProblemCategory();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDiagnosis"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/diagnoses")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDiagnosisResponse>();
}

/**
 * @summary 诊断问题
 *
 * @param request CreateDiagnosisRequest
 * @return CreateDiagnosisResponse
 */
CreateDiagnosisResponse Client::createDiagnosis(const CreateDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDiagnosisWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an automatic stop policy for a specific Data Science Workshop (DSW) instance. When the conditions are met, the instance is automatically stopped. You can create only one automatic stop policy for an idle DSW instance. If the specific instance has an automatic stop policy, call DeleteIdleInstanceCuller to delete it first.
 *
 * @param request CreateIdleInstanceCullerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIdleInstanceCullerResponse
 */
CreateIdleInstanceCullerResponse Client::createIdleInstanceCullerWithOptions(const string &InstanceId, const CreateIdleInstanceCullerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCpuPercentThreshold()) {
    body["CpuPercentThreshold"] = request.getCpuPercentThreshold();
  }

  if (!!request.hasGpuPercentThreshold()) {
    body["GpuPercentThreshold"] = request.getGpuPercentThreshold();
  }

  if (!!request.hasMaxIdleTimeInMinutes()) {
    body["MaxIdleTimeInMinutes"] = request.getMaxIdleTimeInMinutes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateIdleInstanceCuller"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/idleinstanceculler")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIdleInstanceCullerResponse>();
}

/**
 * @summary Creates an automatic stop policy for a specific Data Science Workshop (DSW) instance. When the conditions are met, the instance is automatically stopped. You can create only one automatic stop policy for an idle DSW instance. If the specific instance has an automatic stop policy, call DeleteIdleInstanceCuller to delete it first.
 *
 * @param request CreateIdleInstanceCullerRequest
 * @return CreateIdleInstanceCullerResponse
 */
CreateIdleInstanceCullerResponse Client::createIdleInstanceCuller(const string &InstanceId, const CreateIdleInstanceCullerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIdleInstanceCullerWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Creates a Data Science Workshop (DSW) instance.
 *
 * @param request CreateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasAffinity()) {
    body["Affinity"] = request.getAffinity();
  }

  if (!!request.hasAssignNodeSpec()) {
    body["AssignNodeSpec"] = request.getAssignNodeSpec();
  }

  if (!!request.hasCloudDisks()) {
    body["CloudDisks"] = request.getCloudDisks();
  }

  if (!!request.hasCredentialConfig()) {
    body["CredentialConfig"] = request.getCredentialConfig();
  }

  if (!!request.hasDatasets()) {
    body["Datasets"] = request.getDatasets();
  }

  if (!!request.hasDriver()) {
    body["Driver"] = request.getDriver();
  }

  if (!!request.hasDynamicMount()) {
    body["DynamicMount"] = request.getDynamicMount();
  }

  if (!!request.hasEcsSpec()) {
    body["EcsSpec"] = request.getEcsSpec();
  }

  if (!!request.hasEnvironmentVariables()) {
    body["EnvironmentVariables"] = request.getEnvironmentVariables();
  }

  if (!!request.hasImageAuth()) {
    body["ImageAuth"] = request.getImageAuth();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasImageUrl()) {
    body["ImageUrl"] = request.getImageUrl();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.getLabels();
  }

  if (!!request.hasMigrationOptions()) {
    body["MigrationOptions"] = request.getMigrationOptions();
  }

  if (!!request.hasOversoldType()) {
    body["OversoldType"] = request.getOversoldType();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasRequestedResource()) {
    body["RequestedResource"] = request.getRequestedResource();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasSpotSpec()) {
    body["SpotSpec"] = request.getSpotSpec();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  if (!!request.hasUserCommand()) {
    body["UserCommand"] = request.getUserCommand();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  if (!!request.hasUserVpc()) {
    body["UserVpc"] = request.getUserVpc();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceSource()) {
    body["WorkspaceSource"] = request.getWorkspaceSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates a Data Science Workshop (DSW) instance.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a scheduled stop task for an instance.
 *
 * @param request CreateInstanceShutdownTimerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceShutdownTimerResponse
 */
CreateInstanceShutdownTimerResponse Client::createInstanceShutdownTimerWithOptions(const string &InstanceId, const CreateInstanceShutdownTimerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDueTime()) {
    body["DueTime"] = request.getDueTime();
  }

  if (!!request.hasRemainingTimeInMs()) {
    body["RemainingTimeInMs"] = request.getRemainingTimeInMs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstanceShutdownTimer"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/shutdowntimer")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceShutdownTimerResponse>();
}

/**
 * @summary Creates a scheduled stop task for an instance.
 *
 * @param request CreateInstanceShutdownTimerRequest
 * @return CreateInstanceShutdownTimerResponse
 */
CreateInstanceShutdownTimerResponse Client::createInstanceShutdownTimer(const string &InstanceId, const CreateInstanceShutdownTimerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceShutdownTimerWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建实例快照
 *
 * @param request CreateInstanceSnapshotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceSnapshotResponse
 */
CreateInstanceSnapshotResponse Client::createInstanceSnapshotWithOptions(const string &InstanceId, const CreateInstanceSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExcludePaths()) {
    body["ExcludePaths"] = request.getExcludePaths();
  }

  if (!!request.hasImageUrl()) {
    body["ImageUrl"] = request.getImageUrl();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.getLabels();
  }

  if (!!request.hasOverwrite()) {
    body["Overwrite"] = request.getOverwrite();
  }

  if (!!request.hasSnapshotDescription()) {
    body["SnapshotDescription"] = request.getSnapshotDescription();
  }

  if (!!request.hasSnapshotName()) {
    body["SnapshotName"] = request.getSnapshotName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstanceSnapshot"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/snapshots")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceSnapshotResponse>();
}

/**
 * @summary 创建实例快照
 *
 * @param request CreateInstanceSnapshotRequest
 * @return CreateInstanceSnapshotResponse
 */
CreateInstanceSnapshotResponse Client::createInstanceSnapshot(const string &InstanceId, const CreateInstanceSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceSnapshotWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建一个健康检查任务
 *
 * @param request CreateSanityCheckTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSanityCheckTaskResponse
 */
CreateSanityCheckTaskResponse Client::createSanityCheckTaskWithOptions(const string &CheckType, const CreateSanityCheckTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSanityCheckTask"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/sanitychecks/" , Darabonba::Encode::Encoder::percentEncode(CheckType))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSanityCheckTaskResponse>();
}

/**
 * @summary 创建一个健康检查任务
 *
 * @param request CreateSanityCheckTaskRequest
 * @return CreateSanityCheckTaskResponse
 */
CreateSanityCheckTaskResponse Client::createSanityCheckTask(const string &CheckType, const CreateSanityCheckTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSanityCheckTaskWithOptions(CheckType, request, headers, runtime);
}

/**
 * @summary Deletes the automatic stop policy of an instance.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIdleInstanceCullerResponse
 */
DeleteIdleInstanceCullerResponse Client::deleteIdleInstanceCullerWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIdleInstanceCuller"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/idleinstanceculler")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIdleInstanceCullerResponse>();
}

/**
 * @summary Deletes the automatic stop policy of an instance.
 *
 * @return DeleteIdleInstanceCullerResponse
 */
DeleteIdleInstanceCullerResponse Client::deleteIdleInstanceCuller(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIdleInstanceCullerWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Deletes a specific instance.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Deletes a specific instance.
 *
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Delete tags from a Data Science Workshop (DSW) instance.
 *
 * @param request DeleteInstanceLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceLabelsResponse
 */
DeleteInstanceLabelsResponse Client::deleteInstanceLabelsWithOptions(const string &InstanceId, const DeleteInstanceLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabelKeys()) {
    query["LabelKeys"] = request.getLabelKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstanceLabels"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/labels")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceLabelsResponse>();
}

/**
 * @summary Delete tags from a Data Science Workshop (DSW) instance.
 *
 * @param request DeleteInstanceLabelsRequest
 * @return DeleteInstanceLabelsResponse
 */
DeleteInstanceLabelsResponse Client::deleteInstanceLabels(const string &InstanceId, const DeleteInstanceLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceLabelsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Deletes a scheduled stop task of an instance.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceShutdownTimerResponse
 */
DeleteInstanceShutdownTimerResponse Client::deleteInstanceShutdownTimerWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstanceShutdownTimer"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/shutdowntimer")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceShutdownTimerResponse>();
}

/**
 * @summary Deletes a scheduled stop task of an instance.
 *
 * @return DeleteInstanceShutdownTimerResponse
 */
DeleteInstanceShutdownTimerResponse Client::deleteInstanceShutdownTimer(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceShutdownTimerWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary 获取实例快照详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceSnapshotResponse
 */
DeleteInstanceSnapshotResponse Client::deleteInstanceSnapshotWithOptions(const string &InstanceId, const string &SnapshotId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstanceSnapshot"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/snapshots/" , Darabonba::Encode::Encoder::percentEncode(SnapshotId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceSnapshotResponse>();
}

/**
 * @summary 获取实例快照详情
 *
 * @return DeleteInstanceSnapshotResponse
 */
DeleteInstanceSnapshotResponse Client::deleteInstanceSnapshot(const string &InstanceId, const string &SnapshotId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceSnapshotWithOptions(InstanceId, SnapshotId, headers, runtime);
}

/**
 * @summary 批量删除实例
 *
 * @param request DeleteInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstancesResponse
 */
DeleteInstancesResponse Client::deleteInstancesWithOptions(const DeleteInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceIds()) {
    body["InstanceIds"] = request.getInstanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteInstances"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/batch/instances/delete")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstancesResponse>();
}

/**
 * @summary 批量删除实例
 *
 * @param request DeleteInstancesRequest
 * @return DeleteInstancesResponse
 */
DeleteInstancesResponse Client::deleteInstances(const DeleteInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the information about an auto stop policy for a specific idle instance.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdleInstanceCullerResponse
 */
GetIdleInstanceCullerResponse Client::getIdleInstanceCullerWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdleInstanceCuller"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/idleinstanceculler")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdleInstanceCullerResponse>();
}

/**
 * @summary Queries the information about an auto stop policy for a specific idle instance.
 *
 * @return GetIdleInstanceCullerResponse
 */
GetIdleInstanceCullerResponse Client::getIdleInstanceCuller(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIdleInstanceCullerWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary Queries the details of a DSW instance.
 *
 * @param request GetInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const string &InstanceId, const GetInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFields()) {
    query["Fields"] = request.getFields();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary Queries the details of a DSW instance.
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const string &InstanceId, const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries a list of system events for a Data Science Workshop (DSW) instance.
 *
 * @param request GetInstanceEventsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceEventsResponse
 */
GetInstanceEventsResponse Client::getInstanceEventsWithOptions(const string &InstanceId, const GetInstanceEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventLevel()) {
    query["EventLevel"] = request.getEventLevel();
  }

  if (!!request.hasMaxEventsNum()) {
    query["MaxEventsNum"] = request.getMaxEventsNum();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceEvents"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/events")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceEventsResponse>();
}

/**
 * @summary Queries a list of system events for a Data Science Workshop (DSW) instance.
 *
 * @param request GetInstanceEventsRequest
 * @return GetInstanceEventsResponse
 */
GetInstanceEventsResponse Client::getInstanceEvents(const string &InstanceId, const GetInstanceEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceEventsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Queries the resource metrics of an instance.
 *
 * @param request GetInstanceMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceMetricsResponse
 */
GetInstanceMetricsResponse Client::getInstanceMetricsWithOptions(const string &InstanceId, const GetInstanceMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTimeStep()) {
    query["TimeStep"] = request.getTimeStep();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceMetrics"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instance/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/metrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceMetricsResponse>();
}

/**
 * @summary Queries the resource metrics of an instance.
 *
 * @param request GetInstanceMetricsRequest
 * @return GetInstanceMetricsResponse
 */
GetInstanceMetricsResponse Client::getInstanceMetrics(const string &InstanceId, const GetInstanceMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceMetricsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取定时关机任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceShutdownTimerResponse
 */
GetInstanceShutdownTimerResponse Client::getInstanceShutdownTimerWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceShutdownTimer"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/shutdowntimer")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceShutdownTimerResponse>();
}

/**
 * @summary 获取定时关机任务
 *
 * @return GetInstanceShutdownTimerResponse
 */
GetInstanceShutdownTimerResponse Client::getInstanceShutdownTimer(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceShutdownTimerWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary 获取实例快照详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceSnapshotResponse
 */
GetInstanceSnapshotResponse Client::getInstanceSnapshotWithOptions(const string &InstanceId, const string &SnapshotId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceSnapshot"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/snapshots/" , Darabonba::Encode::Encoder::percentEncode(SnapshotId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceSnapshotResponse>();
}

/**
 * @summary 获取实例快照详情
 *
 * @return GetInstanceSnapshotResponse
 */
GetInstanceSnapshotResponse Client::getInstanceSnapshot(const string &InstanceId, const string &SnapshotId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceSnapshotWithOptions(InstanceId, SnapshotId, headers, runtime);
}

/**
 * @summary Obtains the lifecycle of an instance
 *
 * @description Obtains the lifecycle transition information for an instance, including details on the status an instance transitions to at a specific point in time.
 *
 * @param request GetLifecycleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLifecycleResponse
 */
GetLifecycleResponse Client::getLifecycleWithOptions(const string &InstanceId, const GetLifecycleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasSessionNumber()) {
    query["SessionNumber"] = request.getSessionNumber();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLifecycle"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/lifecycle")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLifecycleResponse>();
}

/**
 * @summary Obtains the lifecycle of an instance
 *
 * @description Obtains the lifecycle transition information for an instance, including details on the status an instance transitions to at a specific point in time.
 *
 * @param request GetLifecycleRequest
 * @return GetLifecycleResponse
 */
GetLifecycleResponse Client::getLifecycle(const string &InstanceId, const GetLifecycleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLifecycleWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取metrics数据
 *
 * @param request GetMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetricsResponse
 */
GetMetricsResponse Client::getMetricsWithOptions(const string &InstanceId, const GetMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.getLength();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetrics"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instance/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/cms/metrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetricsResponse>();
}

/**
 * @summary 获取metrics数据
 *
 * @param request GetMetricsRequest
 * @return GetMetricsResponse
 */
GetMetricsResponse Client::getMetrics(const string &InstanceId, const GetMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMetricsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @param request GetResourceGroupStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceGroupStatisticsResponse
 */
GetResourceGroupStatisticsResponse Client::getResourceGroupStatisticsWithOptions(const GetResourceGroupStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasWorkspaceIds()) {
    query["WorkspaceIds"] = request.getWorkspaceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceGroupStatistics"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resourcegroupstatistics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceGroupStatisticsResponse>();
}

/**
 * @param request GetResourceGroupStatisticsRequest
 * @return GetResourceGroupStatisticsResponse
 */
GetResourceGroupStatisticsResponse Client::getResourceGroupStatistics(const GetResourceGroupStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourceGroupStatisticsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询健康检查任务结果
 *
 * @param request GetSanityCheckTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSanityCheckTaskResponse
 */
GetSanityCheckTaskResponse Client::getSanityCheckTaskWithOptions(const string &CheckType, const string &TaskId, const GetSanityCheckTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVerbose()) {
    query["Verbose"] = request.getVerbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSanityCheckTask"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/sanitychecks/" , Darabonba::Encode::Encoder::percentEncode(CheckType) , "/" , Darabonba::Encode::Encoder::percentEncode(TaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSanityCheckTaskResponse>();
}

/**
 * @summary 查询健康检查任务结果
 *
 * @param request GetSanityCheckTaskRequest
 * @return GetSanityCheckTaskResponse
 */
GetSanityCheckTaskResponse Client::getSanityCheckTask(const string &CheckType, const string &TaskId, const GetSanityCheckTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSanityCheckTaskWithOptions(CheckType, TaskId, request, headers, runtime);
}

/**
 * @summary Obtains the temporary authentication information of a DSW instance.
 *
 * @param request GetTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTokenResponse
 */
GetTokenResponse Client::getTokenWithOptions(const GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudience()) {
    query["Audience"] = request.getAudience();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetToken"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/tokens")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenResponse>();
}

/**
 * @summary Obtains the temporary authentication information of a DSW instance.
 *
 * @param request GetTokenRequest
 * @return GetTokenResponse
 */
GetTokenResponse Client::getToken(const GetTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTokenWithOptions(request, headers, runtime);
}

/**
 * @summary 获取自定义用户命令
 *
 * @param request GetUserCommandRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserCommandResponse
 */
GetUserCommandResponse Client::getUserCommandWithOptions(const string &UserCommandId, const GetUserCommandRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserCommand"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/usercommands/" , Darabonba::Encode::Encoder::percentEncode(UserCommandId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserCommandResponse>();
}

/**
 * @summary 获取自定义用户命令
 *
 * @param request GetUserCommandRequest
 * @return GetUserCommandResponse
 */
GetUserCommandResponse Client::getUserCommand(const string &UserCommandId, const GetUserCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserCommandWithOptions(UserCommandId, request, headers, runtime);
}

/**
 * @summary 获取用户配置
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserConfigResponse
 */
GetUserConfigResponse Client::getUserConfigWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserConfig"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/userconfig")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserConfigResponse>();
}

/**
 * @summary 获取用户配置
 *
 * @return GetUserConfigResponse
 */
GetUserConfigResponse Client::getUserConfig() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserConfigWithOptions(headers, runtime);
}

/**
 * @summary Queries a list of specifications of ECS instances.
 *
 * @param request ListEcsSpecsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEcsSpecsResponse
 */
ListEcsSpecsResponse Client::listEcsSpecsWithOptions(const ListEcsSpecsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorType()) {
    query["AcceleratorType"] = request.getAcceleratorType();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEcsSpecs"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/ecsspecs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEcsSpecsResponse>();
}

/**
 * @summary Queries a list of specifications of ECS instances.
 *
 * @param request ListEcsSpecsRequest
 * @return ListEcsSpecsResponse
 */
ListEcsSpecsResponse Client::listEcsSpecs(const ListEcsSpecsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEcsSpecsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询实例快照列表
 *
 * @param request ListInstanceSnapshotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceSnapshotResponse
 */
ListInstanceSnapshotResponse Client::listInstanceSnapshotWithOptions(const string &InstanceId, const ListInstanceSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceSnapshot"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/snapshots")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceSnapshotResponse>();
}

/**
 * @summary 查询实例快照列表
 *
 * @param request ListInstanceSnapshotRequest
 * @return ListInstanceSnapshotResponse
 */
ListInstanceSnapshotResponse Client::listInstanceSnapshot(const string &InstanceId, const ListInstanceSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceSnapshotWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取实例统计信息
 *
 * @param request ListInstanceStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceStatisticsResponse
 */
ListInstanceStatisticsResponse Client::listInstanceStatisticsWithOptions(const ListInstanceStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceIds()) {
    query["WorkspaceIds"] = request.getWorkspaceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceStatistics"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instancestatistics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceStatisticsResponse>();
}

/**
 * @summary 获取实例统计信息
 *
 * @param request ListInstanceStatisticsRequest
 * @return ListInstanceStatisticsResponse
 */
ListInstanceStatisticsResponse Client::listInstanceStatistics(const ListInstanceStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceStatisticsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of Data Science Workshop (DSW) instances.
 *
 * @param tmpReq ListInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListInstancesShrinkRequest request = ListInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabels()) {
    request.setLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLabels(), "Labels", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasAcceleratorType()) {
    query["AcceleratorType"] = request.getAcceleratorType();
  }

  if (!!request.hasAccessibility()) {
    query["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasCreateTimeAfter()) {
    query["CreateTimeAfter"] = request.getCreateTimeAfter();
  }

  if (!!request.hasCreateTimeBefore()) {
    query["CreateTimeBefore"] = request.getCreateTimeBefore();
  }

  if (!!request.hasCreateUserId()) {
    query["CreateUserId"] = request.getCreateUserId();
  }

  if (!!request.hasGpuType()) {
    query["GpuType"] = request.getGpuType();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasLabelsShrink()) {
    query["Labels"] = request.getLabelsShrink();
  }

  if (!!request.hasMaxCpu()) {
    query["MaxCpu"] = request.getMaxCpu();
  }

  if (!!request.hasMaxGpu()) {
    query["MaxGpu"] = request.getMaxGpu();
  }

  if (!!request.hasMaxGpuMemory()) {
    query["MaxGpuMemory"] = request.getMaxGpuMemory();
  }

  if (!!request.hasMaxMemory()) {
    query["MaxMemory"] = request.getMaxMemory();
  }

  if (!!request.hasMinCpu()) {
    query["MinCpu"] = request.getMinCpu();
  }

  if (!!request.hasMinGpu()) {
    query["MinGpu"] = request.getMinGpu();
  }

  if (!!request.hasMinGpuMemory()) {
    query["MinGpuMemory"] = request.getMinGpuMemory();
  }

  if (!!request.hasMinMemory()) {
    query["MinMemory"] = request.getMinMemory();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOversoldInfo()) {
    query["OversoldInfo"] = request.getOversoldInfo();
  }

  if (!!request.hasOversoldType()) {
    query["OversoldType"] = request.getOversoldType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Queries a list of Data Science Workshop (DSW) instances.
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
 * @summary 获取系统日志
 *
 * @param request ListSystemLogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSystemLogsResponse
 */
ListSystemLogsResponse Client::listSystemLogsWithOptions(const ListSystemLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGmtEndTime()) {
    query["GmtEndTime"] = request.getGmtEndTime();
  }

  if (!!request.hasGmtStartTime()) {
    query["GmtStartTime"] = request.getGmtStartTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLifecycleId()) {
    query["LifecycleId"] = request.getLifecycleId();
  }

  if (!!request.hasLogLevel()) {
    query["LogLevel"] = request.getLogLevel();
  }

  if (!!request.hasLogRepository()) {
    query["LogRepository"] = request.getLogRepository();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.getOffset();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasProblemCategory()) {
    query["ProblemCategory"] = request.getProblemCategory();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSourceRequestId()) {
    query["SourceRequestId"] = request.getSourceRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSystemLogs"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/systemlogs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSystemLogsResponse>();
}

/**
 * @summary 获取系统日志
 *
 * @param request ListSystemLogsRequest
 * @return ListSystemLogsResponse
 */
ListSystemLogsResponse Client::listSystemLogs(const ListSystemLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSystemLogsWithOptions(request, headers, runtime);
}

/**
 * @summary 启动实例
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartInstance"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/start")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstanceResponse>();
}

/**
 * @summary 启动实例
 *
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstance(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startInstanceWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary 停止实例
 *
 * @param request StopInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstanceWithOptions(const string &InstanceId, const StopInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSaveImage()) {
    query["SaveImage"] = request.getSaveImage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopInstance"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInstanceResponse>();
}

/**
 * @summary 停止实例
 *
 * @param request StopInstanceRequest
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstance(const string &InstanceId, const StopInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopInstanceWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 批量停止实例
 *
 * @param request StopInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstancesResponse
 */
StopInstancesResponse Client::stopInstancesWithOptions(const StopInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceIds()) {
    body["InstanceIds"] = request.getInstanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopInstances"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/batch/instances/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInstancesResponse>();
}

/**
 * @summary 批量停止实例
 *
 * @param request StopInstancesRequest
 * @return StopInstancesResponse
 */
StopInstancesResponse Client::stopInstances(const StopInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the properties of a DSW instance.
 *
 * @param request UpdateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstanceWithOptions(const string &InstanceId, const UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasAffinity()) {
    body["Affinity"] = request.getAffinity();
  }

  if (!!request.hasAssignNodeSpec()) {
    body["AssignNodeSpec"] = request.getAssignNodeSpec();
  }

  if (!!request.hasCloudDisks()) {
    body["CloudDisks"] = request.getCloudDisks();
  }

  if (!!request.hasCredentialConfig()) {
    body["CredentialConfig"] = request.getCredentialConfig();
  }

  if (!!request.hasDatasets()) {
    body["Datasets"] = request.getDatasets();
  }

  if (!!request.hasDisassociateAssignNode()) {
    body["DisassociateAssignNode"] = request.getDisassociateAssignNode();
  }

  if (!!request.hasDisassociateCredential()) {
    body["DisassociateCredential"] = request.getDisassociateCredential();
  }

  if (!!request.hasDisassociateDatasets()) {
    body["DisassociateDatasets"] = request.getDisassociateDatasets();
  }

  if (!!request.hasDisassociateDriver()) {
    body["DisassociateDriver"] = request.getDisassociateDriver();
  }

  if (!!request.hasDisassociateEnvironmentVariables()) {
    body["DisassociateEnvironmentVariables"] = request.getDisassociateEnvironmentVariables();
  }

  if (!!request.hasDisassociateForwardInfos()) {
    body["DisassociateForwardInfos"] = request.getDisassociateForwardInfos();
  }

  if (!!request.hasDisassociateMigrationOptions()) {
    body["DisassociateMigrationOptions"] = request.getDisassociateMigrationOptions();
  }

  if (!!request.hasDisassociateSpot()) {
    body["DisassociateSpot"] = request.getDisassociateSpot();
  }

  if (!!request.hasDisassociateUserCommand()) {
    body["DisassociateUserCommand"] = request.getDisassociateUserCommand();
  }

  if (!!request.hasDisassociateVpc()) {
    body["DisassociateVpc"] = request.getDisassociateVpc();
  }

  if (!!request.hasDriver()) {
    body["Driver"] = request.getDriver();
  }

  if (!!request.hasDynamicMount()) {
    body["DynamicMount"] = request.getDynamicMount();
  }

  if (!!request.hasEcsSpec()) {
    body["EcsSpec"] = request.getEcsSpec();
  }

  if (!!request.hasEnvironmentVariables()) {
    body["EnvironmentVariables"] = request.getEnvironmentVariables();
  }

  if (!!request.hasImageAuth()) {
    body["ImageAuth"] = request.getImageAuth();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasImageUrl()) {
    body["ImageUrl"] = request.getImageUrl();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasMigrationOptions()) {
    body["MigrationOptions"] = request.getMigrationOptions();
  }

  if (!!request.hasOversoldType()) {
    body["OversoldType"] = request.getOversoldType();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasRequestedResource()) {
    body["RequestedResource"] = request.getRequestedResource();
  }

  if (!!request.hasSpotSpec()) {
    body["SpotSpec"] = request.getSpotSpec();
  }

  if (!!request.hasStartInstance()) {
    body["StartInstance"] = request.getStartInstance();
  }

  if (!!request.hasUserCommand()) {
    body["UserCommand"] = request.getUserCommand();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  if (!!request.hasUserVpc()) {
    body["UserVpc"] = request.getUserVpc();
  }

  if (!!request.hasWorkspaceSource()) {
    body["WorkspaceSource"] = request.getWorkspaceSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary Updates the properties of a DSW instance.
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
 * @summary Updates the tags of a Data Science Workshop (DSW) instance. If the tags do not exist, the system adds tags.
 *
 * @param request UpdateInstanceLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceLabelsResponse
 */
UpdateInstanceLabelsResponse Client::updateInstanceLabelsWithOptions(const string &InstanceId, const UpdateInstanceLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLabels()) {
    body["Labels"] = request.getLabels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstanceLabels"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/labels")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceLabelsResponse>();
}

/**
 * @summary Updates the tags of a Data Science Workshop (DSW) instance. If the tags do not exist, the system adds tags.
 *
 * @param request UpdateInstanceLabelsRequest
 * @return UpdateInstanceLabelsResponse
 */
UpdateInstanceLabelsResponse Client::updateInstanceLabels(const string &InstanceId, const UpdateInstanceLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceLabelsWithOptions(InstanceId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PaiDsw20220101