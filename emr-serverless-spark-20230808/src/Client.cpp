#include <darabonba/Core.hpp>
#include <alibabacloud/EmrServerlessSpark20230808.hpp>
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
using namespace AlibabaCloud::EmrServerlessSpark20230808::Models;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{

AlibabaCloud::EmrServerlessSpark20230808::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("emr-serverless-spark", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds a RAM user or RAM role to a workspace as a member.
 *
 * @param request AddMembersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMembersResponse
 */
AddMembersResponse Client::addMembersWithOptions(const AddMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasMemberArns()) {
    body["memberArns"] = request.getMemberArns();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddMembers"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/auth/members")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMembersResponse>();
}

/**
 * @summary Adds a RAM user or RAM role to a workspace as a member.
 *
 * @param request AddMembersRequest
 * @return AddMembersResponse
 */
AddMembersResponse Client::addMembers(const AddMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addMembersWithOptions(request, headers, runtime);
}

/**
 * @summary Terminates a Spark job.
 *
 * @param request CancelJobRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelJobRunResponse
 */
CancelJobRunResponse Client::cancelJobRunWithOptions(const string &workspaceId, const string &jobRunId, const CancelJobRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "CancelJobRun"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/jobRuns/" , Darabonba::Encode::Encoder::percentEncode(jobRunId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelJobRunResponse>();
}

/**
 * @summary Terminates a Spark job.
 *
 * @param request CancelJobRunRequest
 * @return CancelJobRunResponse
 */
CancelJobRunResponse Client::cancelJobRun(const string &workspaceId, const string &jobRunId, const CancelJobRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelJobRunWithOptions(workspaceId, jobRunId, request, headers, runtime);
}

/**
 * @summary CancelKyuubiSparkApplication
 *
 * @param request CancelKyuubiSparkApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelKyuubiSparkApplicationResponse
 */
CancelKyuubiSparkApplicationResponse Client::cancelKyuubiSparkApplicationWithOptions(const string &workspaceId, const string &kyuubiServiceId, const string &applicationId, const CancelKyuubiSparkApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "CancelKyuubiSparkApplication"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/kyuubi/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/" , Darabonba::Encode::Encoder::percentEncode(kyuubiServiceId) , "/application/" , Darabonba::Encode::Encoder::percentEncode(applicationId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelKyuubiSparkApplicationResponse>();
}

/**
 * @summary CancelKyuubiSparkApplication
 *
 * @param request CancelKyuubiSparkApplicationRequest
 * @return CancelKyuubiSparkApplicationResponse
 */
CancelKyuubiSparkApplicationResponse Client::cancelKyuubiSparkApplication(const string &workspaceId, const string &kyuubiServiceId, const string &applicationId, const CancelKyuubiSparkApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelKyuubiSparkApplicationWithOptions(workspaceId, kyuubiServiceId, applicationId, request, headers, runtime);
}

/**
 * @summary CreateKyuubiService
 *
 * @param request CreateKyuubiServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKyuubiServiceResponse
 */
CreateKyuubiServiceResponse Client::createKyuubiServiceWithOptions(const string &workspaceId, const CreateKyuubiServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComputeInstance()) {
    body["computeInstance"] = request.getComputeInstance();
  }

  if (!!request.hasKyuubiConfigs()) {
    body["kyuubiConfigs"] = request.getKyuubiConfigs();
  }

  if (!!request.hasKyuubiReleaseVersion()) {
    body["kyuubiReleaseVersion"] = request.getKyuubiReleaseVersion();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasPublicEndpointEnabled()) {
    body["publicEndpointEnabled"] = request.getPublicEndpointEnabled();
  }

  if (!!request.hasQueue()) {
    body["queue"] = request.getQueue();
  }

  if (!!request.hasReleaseVersion()) {
    body["releaseVersion"] = request.getReleaseVersion();
  }

  if (!!request.hasReplica()) {
    body["replica"] = request.getReplica();
  }

  if (!!request.hasSparkConfigs()) {
    body["sparkConfigs"] = request.getSparkConfigs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKyuubiService"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/kyuubi/" , Darabonba::Encode::Encoder::percentEncode(workspaceId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKyuubiServiceResponse>();
}

/**
 * @summary CreateKyuubiService
 *
 * @param request CreateKyuubiServiceRequest
 * @return CreateKyuubiServiceResponse
 */
CreateKyuubiServiceResponse Client::createKyuubiService(const string &workspaceId, const CreateKyuubiServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKyuubiServiceWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 创建kyuubi的token
 *
 * @param request CreateKyuubiTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKyuubiTokenResponse
 */
CreateKyuubiTokenResponse Client::createKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const CreateKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasAutoExpireConfiguration()) {
    body["autoExpireConfiguration"] = request.getAutoExpireConfiguration();
  }

  if (!!request.hasMemberArns()) {
    body["memberArns"] = request.getMemberArns();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasToken()) {
    body["token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKyuubiToken"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/kyuubiService/" , Darabonba::Encode::Encoder::percentEncode(kyuubiServiceId) , "/token")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKyuubiTokenResponse>();
}

/**
 * @summary 创建kyuubi的token
 *
 * @param request CreateKyuubiTokenRequest
 * @return CreateKyuubiTokenResponse
 */
CreateKyuubiTokenResponse Client::createKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const CreateKyuubiTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKyuubiTokenWithOptions(workspaceId, kyuubiServiceId, request, headers, runtime);
}

/**
 * @summary 创建Livy compute
 *
 * @param request CreateLivyComputeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLivyComputeResponse
 */
CreateLivyComputeResponse Client::createLivyComputeWithOptions(const string &workspaceBizId, const CreateLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasAuthType()) {
    body["authType"] = request.getAuthType();
  }

  if (!!request.hasAutoStartConfiguration()) {
    body["autoStartConfiguration"] = request.getAutoStartConfiguration();
  }

  if (!!request.hasAutoStopConfiguration()) {
    body["autoStopConfiguration"] = request.getAutoStopConfiguration();
  }

  if (!!request.hasCpuLimit()) {
    body["cpuLimit"] = request.getCpuLimit();
  }

  if (!!request.hasDisplayReleaseVersion()) {
    body["displayReleaseVersion"] = request.getDisplayReleaseVersion();
  }

  if (!!request.hasEnablePublic()) {
    body["enablePublic"] = request.getEnablePublic();
  }

  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.getEnvironmentId();
  }

  if (!!request.hasFusion()) {
    body["fusion"] = request.getFusion();
  }

  if (!!request.hasLivyServerConf()) {
    body["livyServerConf"] = request.getLivyServerConf();
  }

  if (!!request.hasLivyVersion()) {
    body["livyVersion"] = request.getLivyVersion();
  }

  if (!!request.hasMemoryLimit()) {
    body["memoryLimit"] = request.getMemoryLimit();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNetworkName()) {
    body["networkName"] = request.getNetworkName();
  }

  if (!!request.hasQueueName()) {
    body["queueName"] = request.getQueueName();
  }

  if (!!request.hasReleaseVersion()) {
    body["releaseVersion"] = request.getReleaseVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLivyCompute"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceBizId) , "/livycompute")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLivyComputeResponse>();
}

/**
 * @summary 创建Livy compute
 *
 * @param request CreateLivyComputeRequest
 * @return CreateLivyComputeResponse
 */
CreateLivyComputeResponse Client::createLivyCompute(const string &workspaceBizId, const CreateLivyComputeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLivyComputeWithOptions(workspaceBizId, request, headers, runtime);
}

/**
 * @summary 创建Livy Compute的token
 *
 * @param request CreateLivyComputeTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLivyComputeTokenResponse
 */
CreateLivyComputeTokenResponse Client::createLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const CreateLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasAutoExpireConfiguration()) {
    body["autoExpireConfiguration"] = request.getAutoExpireConfiguration();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasToken()) {
    body["token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLivyComputeToken"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceBizId) , "/livycompute/" , Darabonba::Encode::Encoder::percentEncode(livyComputeId) , "/token")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLivyComputeTokenResponse>();
}

/**
 * @summary 创建Livy Compute的token
 *
 * @param request CreateLivyComputeTokenRequest
 * @return CreateLivyComputeTokenResponse
 */
CreateLivyComputeTokenResponse Client::createLivyComputeToken(const string &workspaceBizId, const string &livyComputeId, const CreateLivyComputeTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLivyComputeTokenWithOptions(workspaceBizId, livyComputeId, request, headers, runtime);
}

/**
 * @summary Creates a workflow.
 *
 * @param tmpReq CreateProcessDefinitionWithScheduleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProcessDefinitionWithScheduleResponse
 */
CreateProcessDefinitionWithScheduleResponse Client::createProcessDefinitionWithScheduleWithOptions(const string &bizId, const CreateProcessDefinitionWithScheduleRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateProcessDefinitionWithScheduleShrinkRequest request = CreateProcessDefinitionWithScheduleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGlobalParams()) {
    request.setGlobalParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGlobalParams(), "globalParams", "json"));
  }

  if (!!tmpReq.hasSchedule()) {
    request.setScheduleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSchedule(), "schedule", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "tags", "json"));
  }

  if (!!tmpReq.hasTaskDefinitionJson()) {
    request.setTaskDefinitionJsonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskDefinitionJson(), "taskDefinitionJson", "json"));
  }

  if (!!tmpReq.hasTaskRelationJson()) {
    request.setTaskRelationJsonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskRelationJson(), "taskRelationJson", "json"));
  }

  json query = {};
  if (!!request.hasAlertEmailAddress()) {
    query["alertEmailAddress"] = request.getAlertEmailAddress();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasExecutionType()) {
    query["executionType"] = request.getExecutionType();
  }

  if (!!request.hasGlobalParamsShrink()) {
    query["globalParams"] = request.getGlobalParamsShrink();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasProductNamespace()) {
    query["productNamespace"] = request.getProductNamespace();
  }

  if (!!request.hasPublish()) {
    query["publish"] = request.getPublish();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasResourceQueue()) {
    query["resourceQueue"] = request.getResourceQueue();
  }

  if (!!request.hasRetryTimes()) {
    query["retryTimes"] = request.getRetryTimes();
  }

  if (!!request.hasRunAs()) {
    query["runAs"] = request.getRunAs();
  }

  if (!!request.hasScheduleShrink()) {
    query["schedule"] = request.getScheduleShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["tags"] = request.getTagsShrink();
  }

  if (!!request.hasTaskDefinitionJsonShrink()) {
    query["taskDefinitionJson"] = request.getTaskDefinitionJsonShrink();
  }

  if (!!request.hasTaskParallelism()) {
    query["taskParallelism"] = request.getTaskParallelism();
  }

  if (!!request.hasTaskRelationJsonShrink()) {
    query["taskRelationJson"] = request.getTaskRelationJsonShrink();
  }

  if (!!request.hasTimeout()) {
    query["timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProcessDefinitionWithSchedule"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/projects/" , Darabonba::Encode::Encoder::percentEncode(bizId) , "/process-definition")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProcessDefinitionWithScheduleResponse>();
}

/**
 * @summary Creates a workflow.
 *
 * @param request CreateProcessDefinitionWithScheduleRequest
 * @return CreateProcessDefinitionWithScheduleResponse
 */
CreateProcessDefinitionWithScheduleResponse Client::createProcessDefinitionWithSchedule(const string &bizId, const CreateProcessDefinitionWithScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createProcessDefinitionWithScheduleWithOptions(bizId, request, headers, runtime);
}

/**
 * @summary Creates a session.
 *
 * @param request CreateSessionClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSessionClusterResponse
 */
CreateSessionClusterResponse Client::createSessionClusterWithOptions(const string &workspaceId, const CreateSessionClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasApplicationConfigs()) {
    body["applicationConfigs"] = request.getApplicationConfigs();
  }

  if (!!request.hasAutoStartConfiguration()) {
    body["autoStartConfiguration"] = request.getAutoStartConfiguration();
  }

  if (!!request.hasAutoStopConfiguration()) {
    body["autoStopConfiguration"] = request.getAutoStopConfiguration();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDisplayReleaseVersion()) {
    body["displayReleaseVersion"] = request.getDisplayReleaseVersion();
  }

  if (!!request.hasEnvId()) {
    body["envId"] = request.getEnvId();
  }

  if (!!request.hasFusion()) {
    body["fusion"] = request.getFusion();
  }

  if (!!request.hasKind()) {
    body["kind"] = request.getKind();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasPublicEndpointEnabled()) {
    body["publicEndpointEnabled"] = request.getPublicEndpointEnabled();
  }

  if (!!request.hasQueueName()) {
    body["queueName"] = request.getQueueName();
  }

  if (!!request.hasReleaseVersion()) {
    body["releaseVersion"] = request.getReleaseVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSessionCluster"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/sessionClusters")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSessionClusterResponse>();
}

/**
 * @summary Creates a session.
 *
 * @param request CreateSessionClusterRequest
 * @return CreateSessionClusterResponse
 */
CreateSessionClusterResponse Client::createSessionCluster(const string &workspaceId, const CreateSessionClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSessionClusterWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates an SQL query task.
 *
 * @param request CreateSqlStatementRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSqlStatementResponse
 */
CreateSqlStatementResponse Client::createSqlStatementWithOptions(const string &workspaceId, const CreateSqlStatementRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasCodeContent()) {
    body["codeContent"] = request.getCodeContent();
  }

  if (!!request.hasDefaultCatalog()) {
    body["defaultCatalog"] = request.getDefaultCatalog();
  }

  if (!!request.hasDefaultDatabase()) {
    body["defaultDatabase"] = request.getDefaultDatabase();
  }

  if (!!request.hasLimit()) {
    body["limit"] = request.getLimit();
  }

  if (!!request.hasSqlComputeId()) {
    body["sqlComputeId"] = request.getSqlComputeId();
  }

  if (!!request.hasTaskBizId()) {
    body["taskBizId"] = request.getTaskBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSqlStatement"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/statement")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSqlStatementResponse>();
}

/**
 * @summary Creates an SQL query task.
 *
 * @param request CreateSqlStatementRequest
 * @return CreateSqlStatementResponse
 */
CreateSqlStatementResponse Client::createSqlStatement(const string &workspaceId, const CreateSqlStatementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSqlStatementWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a workspace.
 *
 * @param request CreateWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspaceWithOptions(const CreateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasAutoRenew()) {
    body["autoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    body["autoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasAutoRenewPeriodUnit()) {
    body["autoRenewPeriodUnit"] = request.getAutoRenewPeriodUnit();
  }

  if (!!request.hasAutoStartSessionCluster()) {
    body["autoStartSessionCluster"] = request.getAutoStartSessionCluster();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDlfCatalogId()) {
    body["dlfCatalogId"] = request.getDlfCatalogId();
  }

  if (!!request.hasDlfType()) {
    body["dlfType"] = request.getDlfType();
  }

  if (!!request.hasDuration()) {
    body["duration"] = request.getDuration();
  }

  if (!!request.hasOssBucket()) {
    body["ossBucket"] = request.getOssBucket();
  }

  if (!!request.hasPaymentDurationUnit()) {
    body["paymentDurationUnit"] = request.getPaymentDurationUnit();
  }

  if (!!request.hasPaymentType()) {
    body["paymentType"] = request.getPaymentType();
  }

  if (!!request.hasRamRoleName()) {
    body["ramRoleName"] = request.getRamRoleName();
  }

  if (!!request.hasReleaseType()) {
    body["releaseType"] = request.getReleaseType();
  }

  if (!!request.hasResourceSpec()) {
    body["resourceSpec"] = request.getResourceSpec();
  }

  if (!!request.hasTag()) {
    body["tag"] = request.getTag();
  }

  if (!!request.hasWorkspaceName()) {
    body["workspaceName"] = request.getWorkspaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkspace"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkspaceResponse>();
}

/**
 * @summary Creates a workspace.
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
 * @summary DeleteKyuubiService
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKyuubiServiceResponse
 */
DeleteKyuubiServiceResponse Client::deleteKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKyuubiService"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/kyuubi/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/" , Darabonba::Encode::Encoder::percentEncode(kyuubiServiceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKyuubiServiceResponse>();
}

/**
 * @summary DeleteKyuubiService
 *
 * @return DeleteKyuubiServiceResponse
 */
DeleteKyuubiServiceResponse Client::deleteKyuubiService(const string &workspaceId, const string &kyuubiServiceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteKyuubiServiceWithOptions(workspaceId, kyuubiServiceId, headers, runtime);
}

/**
 * @summary 删除compute的token
 *
 * @param request DeleteKyuubiTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKyuubiTokenResponse
 */
DeleteKyuubiTokenResponse Client::deleteKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const DeleteKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DeleteKyuubiToken"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/kyuubiService/" , Darabonba::Encode::Encoder::percentEncode(kyuubiServiceId) , "/token/" , Darabonba::Encode::Encoder::percentEncode(tokenId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKyuubiTokenResponse>();
}

/**
 * @summary 删除compute的token
 *
 * @param request DeleteKyuubiTokenRequest
 * @return DeleteKyuubiTokenResponse
 */
DeleteKyuubiTokenResponse Client::deleteKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const DeleteKyuubiTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteKyuubiTokenWithOptions(workspaceId, kyuubiServiceId, tokenId, request, headers, runtime);
}

/**
 * @summary 删除livy compute
 *
 * @param request DeleteLivyComputeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLivyComputeResponse
 */
DeleteLivyComputeResponse Client::deleteLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const DeleteLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DeleteLivyCompute"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceBizId) , "/livycompute/" , Darabonba::Encode::Encoder::percentEncode(livyComputeId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLivyComputeResponse>();
}

/**
 * @summary 删除livy compute
 *
 * @param request DeleteLivyComputeRequest
 * @return DeleteLivyComputeResponse
 */
DeleteLivyComputeResponse Client::deleteLivyCompute(const string &workspaceBizId, const string &livyComputeId, const DeleteLivyComputeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLivyComputeWithOptions(workspaceBizId, livyComputeId, request, headers, runtime);
}

/**
 * @summary 删除Livy Compute的token
 *
 * @param request DeleteLivyComputeTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLivyComputeTokenResponse
 */
DeleteLivyComputeTokenResponse Client::deleteLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const DeleteLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DeleteLivyComputeToken"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceBizId) , "/livycompute/" , Darabonba::Encode::Encoder::percentEncode(livyComputeId) , "/token/" , Darabonba::Encode::Encoder::percentEncode(tokenId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLivyComputeTokenResponse>();
}

/**
 * @summary 删除Livy Compute的token
 *
 * @param request DeleteLivyComputeTokenRequest
 * @return DeleteLivyComputeTokenResponse
 */
DeleteLivyComputeTokenResponse Client::deleteLivyComputeToken(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const DeleteLivyComputeTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLivyComputeTokenWithOptions(workspaceBizId, livyComputeId, tokenId, request, headers, runtime);
}

/**
 * @summary Modifies the queue of a workspace.
 *
 * @param request EditWorkspaceQueueRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditWorkspaceQueueResponse
 */
EditWorkspaceQueueResponse Client::editWorkspaceQueueWithOptions(const EditWorkspaceQueueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasEnvironments()) {
    body["environments"] = request.getEnvironments();
  }

  if (!!request.hasResourceSpec()) {
    body["resourceSpec"] = request.getResourceSpec();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceQueueName()) {
    body["workspaceQueueName"] = request.getWorkspaceQueueName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EditWorkspaceQueue"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/queues/action/edit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditWorkspaceQueueResponse>();
}

/**
 * @summary Modifies the queue of a workspace.
 *
 * @param request EditWorkspaceQueueRequest
 * @return EditWorkspaceQueueResponse
 */
EditWorkspaceQueueResponse Client::editWorkspaceQueue(const EditWorkspaceQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return editWorkspaceQueueWithOptions(request, headers, runtime);
}

/**
 * @summary 上线工作流及其调度
 *
 * @param request GenerateTaskCodesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateTaskCodesResponse
 */
GenerateTaskCodesResponse Client::generateTaskCodesWithOptions(const string &bizId, const GenerateTaskCodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGenNum()) {
    query["genNum"] = request.getGenNum();
  }

  if (!!request.hasProductNamespace()) {
    query["productNamespace"] = request.getProductNamespace();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateTaskCodes"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/projects/" , Darabonba::Encode::Encoder::percentEncode(bizId) , "/task-definition/gen-task-codes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateTaskCodesResponse>();
}

/**
 * @summary 上线工作流及其调度
 *
 * @param request GenerateTaskCodesRequest
 * @return GenerateTaskCodesResponse
 */
GenerateTaskCodesResponse Client::generateTaskCodes(const string &bizId, const GenerateTaskCodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateTaskCodesWithOptions(bizId, request, headers, runtime);
}

/**
 * @summary Queries the number of CU-hours consumed by a queue during a specified cycle.
 *
 * @param request GetCuHoursRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCuHoursResponse
 */
GetCuHoursResponse Client::getCuHoursWithOptions(const string &workspaceId, const string &queue, const GetCuHoursRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCuHours"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/metric/cuHours/" , Darabonba::Encode::Encoder::percentEncode(queue))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCuHoursResponse>();
}

/**
 * @summary Queries the number of CU-hours consumed by a queue during a specified cycle.
 *
 * @param request GetCuHoursRequest
 * @return GetCuHoursResponse
 */
GetCuHoursResponse Client::getCuHours(const string &workspaceId, const string &queue, const GetCuHoursRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCuHoursWithOptions(workspaceId, queue, request, headers, runtime);
}

/**
 * @summary Obtains job analysis information on E-MapReduce (EMR) Doctor.
 *
 * @param request GetDoctorApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoctorApplicationResponse
 */
GetDoctorApplicationResponse Client::getDoctorApplicationWithOptions(const string &workspaceId, const string &runId, const GetDoctorApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLocale()) {
    query["locale"] = request.getLocale();
  }

  if (!!request.hasQueryTime()) {
    query["queryTime"] = request.getQueryTime();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoctorApplication"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/runs/" , Darabonba::Encode::Encoder::percentEncode(runId) , "/action/getDoctorApplication")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoctorApplicationResponse>();
}

/**
 * @summary Obtains job analysis information on E-MapReduce (EMR) Doctor.
 *
 * @param request GetDoctorApplicationRequest
 * @return GetDoctorApplicationResponse
 */
GetDoctorApplicationResponse Client::getDoctorApplication(const string &workspaceId, const string &runId, const GetDoctorApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDoctorApplicationWithOptions(workspaceId, runId, request, headers, runtime);
}

/**
 * @summary Obtain the job details.
 *
 * @param request GetJobRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobRunResponse
 */
GetJobRunResponse Client::getJobRunWithOptions(const string &workspaceId, const string &jobRunId, const GetJobRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetJobRun"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/jobRuns/" , Darabonba::Encode::Encoder::percentEncode(jobRunId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobRunResponse>();
}

/**
 * @summary Obtain the job details.
 *
 * @param request GetJobRunRequest
 * @return GetJobRunResponse
 */
GetJobRunResponse Client::getJobRun(const string &workspaceId, const string &jobRunId, const GetJobRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getJobRunWithOptions(workspaceId, jobRunId, request, headers, runtime);
}

/**
 * @summary GetKyuubiService
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKyuubiServiceResponse
 */
GetKyuubiServiceResponse Client::getKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKyuubiService"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/kyuubi/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/" , Darabonba::Encode::Encoder::percentEncode(kyuubiServiceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKyuubiServiceResponse>();
}

/**
 * @summary GetKyuubiService
 *
 * @return GetKyuubiServiceResponse
 */
GetKyuubiServiceResponse Client::getKyuubiService(const string &workspaceId, const string &kyuubiServiceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKyuubiServiceWithOptions(workspaceId, kyuubiServiceId, headers, runtime);
}

/**
 * @summary 获取compute的token
 *
 * @param request GetKyuubiTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKyuubiTokenResponse
 */
GetKyuubiTokenResponse Client::getKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const GetKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetKyuubiToken"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/kyuubiService/" , Darabonba::Encode::Encoder::percentEncode(kyuubiServiceId) , "/token/" , Darabonba::Encode::Encoder::percentEncode(tokenId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKyuubiTokenResponse>();
}

/**
 * @summary 获取compute的token
 *
 * @param request GetKyuubiTokenRequest
 * @return GetKyuubiTokenResponse
 */
GetKyuubiTokenResponse Client::getKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const GetKyuubiTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKyuubiTokenWithOptions(workspaceId, kyuubiServiceId, tokenId, request, headers, runtime);
}

/**
 * @summary 获取livy compute
 *
 * @param request GetLivyComputeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLivyComputeResponse
 */
GetLivyComputeResponse Client::getLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const GetLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetLivyCompute"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceBizId) , "/livycompute/" , Darabonba::Encode::Encoder::percentEncode(livyComputeId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLivyComputeResponse>();
}

/**
 * @summary 获取livy compute
 *
 * @param request GetLivyComputeRequest
 * @return GetLivyComputeResponse
 */
GetLivyComputeResponse Client::getLivyCompute(const string &workspaceBizId, const string &livyComputeId, const GetLivyComputeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLivyComputeWithOptions(workspaceBizId, livyComputeId, request, headers, runtime);
}

/**
 * @summary 获取livy compute token
 *
 * @param request GetLivyComputeTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLivyComputeTokenResponse
 */
GetLivyComputeTokenResponse Client::getLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const GetLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetLivyComputeToken"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceBizId) , "/livycompute/" , Darabonba::Encode::Encoder::percentEncode(livyComputeId) , "/token/" , Darabonba::Encode::Encoder::percentEncode(tokenId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLivyComputeTokenResponse>();
}

/**
 * @summary 获取livy compute token
 *
 * @param request GetLivyComputeTokenRequest
 * @return GetLivyComputeTokenResponse
 */
GetLivyComputeTokenResponse Client::getLivyComputeToken(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const GetLivyComputeTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLivyComputeTokenWithOptions(workspaceBizId, livyComputeId, tokenId, request, headers, runtime);
}

/**
 * @summary 获取任务配置
 *
 * @param request GetRunConfigurationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRunConfigurationResponse
 */
GetRunConfigurationResponse Client::getRunConfigurationWithOptions(const string &workspaceId, const string &runId, const GetRunConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetRunConfiguration"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/runs/" , Darabonba::Encode::Encoder::percentEncode(runId) , "/action/getRunConfiguration")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRunConfigurationResponse>();
}

/**
 * @summary 获取任务配置
 *
 * @param request GetRunConfigurationRequest
 * @return GetRunConfigurationResponse
 */
GetRunConfigurationResponse Client::getRunConfiguration(const string &workspaceId, const string &runId, const GetRunConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRunConfigurationWithOptions(workspaceId, runId, request, headers, runtime);
}

/**
 * @summary Queries the information about a session.
 *
 * @param request GetSessionClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSessionClusterResponse
 */
GetSessionClusterResponse Client::getSessionClusterWithOptions(const string &workspaceId, const string &sessionClusterId, const GetSessionClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetSessionCluster"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/sessionClusters/" , Darabonba::Encode::Encoder::percentEncode(sessionClusterId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSessionClusterResponse>();
}

/**
 * @summary Queries the information about a session.
 *
 * @param request GetSessionClusterRequest
 * @return GetSessionClusterResponse
 */
GetSessionClusterResponse Client::getSessionCluster(const string &workspaceId, const string &sessionClusterId, const GetSessionClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSessionClusterWithOptions(workspaceId, sessionClusterId, request, headers, runtime);
}

/**
 * @summary Queries the status of an SQL query task.
 *
 * @param request GetSqlStatementRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSqlStatementResponse
 */
GetSqlStatementResponse Client::getSqlStatementWithOptions(const string &workspaceId, const string &statementId, const GetSqlStatementRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetSqlStatement"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/statement/" , Darabonba::Encode::Encoder::percentEncode(statementId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSqlStatementResponse>();
}

/**
 * @summary Queries the status of an SQL query task.
 *
 * @param request GetSqlStatementRequest
 * @return GetSqlStatementResponse
 */
GetSqlStatementResponse Client::getSqlStatement(const string &workspaceId, const string &statementId, const GetSqlStatementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSqlStatementWithOptions(workspaceId, statementId, request, headers, runtime);
}

/**
 * @summary Queries task templates.
 *
 * @param request GetTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplateWithOptions(const string &workspaceBizId, const GetTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasTemplateBizId()) {
    query["templateBizId"] = request.getTemplateBizId();
  }

  if (!!request.hasTemplateType()) {
    query["templateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplate"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceBizId) , "/template")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateResponse>();
}

/**
 * @summary Queries task templates.
 *
 * @param request GetTemplateRequest
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplate(const string &workspaceBizId, const GetTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTemplateWithOptions(workspaceBizId, request, headers, runtime);
}

/**
 * @summary Assigns a specified role to users.
 *
 * @param request GrantRoleToUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantRoleToUsersResponse
 */
GrantRoleToUsersResponse Client::grantRoleToUsersWithOptions(const GrantRoleToUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasRoleArn()) {
    body["roleArn"] = request.getRoleArn();
  }

  if (!!request.hasUserArns()) {
    body["userArns"] = request.getUserArns();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GrantRoleToUsers"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/auth/roles/grant")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantRoleToUsersResponse>();
}

/**
 * @summary Assigns a specified role to users.
 *
 * @param request GrantRoleToUsersRequest
 * @return GrantRoleToUsersResponse
 */
GrantRoleToUsersResponse Client::grantRoleToUsers(const GrantRoleToUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return grantRoleToUsersWithOptions(request, headers, runtime);
}

/**
 * @summary 查看数据目录列表
 *
 * @param request ListCatalogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCatalogsResponse
 */
ListCatalogsResponse Client::listCatalogsWithOptions(const string &workspaceId, const ListCatalogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironment()) {
    query["environment"] = request.getEnvironment();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCatalogs"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/catalogs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCatalogsResponse>();
}

/**
 * @summary 查看数据目录列表
 *
 * @param request ListCatalogsRequest
 * @return ListCatalogsResponse
 */
ListCatalogsResponse Client::listCatalogs(const string &workspaceId, const ListCatalogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCatalogsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 列出作业的executors
 *
 * @param request ListJobExecutorsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobExecutorsResponse
 */
ListJobExecutorsResponse Client::listJobExecutorsWithOptions(const string &workspaceId, const string &jobRunId, const ListJobExecutorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExecutorType()) {
    query["executorType"] = request.getExecutorType();
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

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobExecutors"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/jobRuns/" , Darabonba::Encode::Encoder::percentEncode(jobRunId) , "/executors")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobExecutorsResponse>();
}

/**
 * @summary 列出作业的executors
 *
 * @param request ListJobExecutorsRequest
 * @return ListJobExecutorsResponse
 */
ListJobExecutorsResponse Client::listJobExecutors(const string &workspaceId, const string &jobRunId, const ListJobExecutorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listJobExecutorsWithOptions(workspaceId, jobRunId, request, headers, runtime);
}

/**
 * @summary Queries a list of Spark jobs.
 *
 * @param tmpReq ListJobRunsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobRunsResponse
 */
ListJobRunsResponse Client::listJobRunsWithOptions(const string &workspaceId, const ListJobRunsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListJobRunsShrinkRequest request = ListJobRunsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEndTime()) {
    request.setEndTimeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEndTime(), "endTime", "json"));
  }

  if (!!tmpReq.hasStartTime()) {
    request.setStartTimeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStartTime(), "startTime", "json"));
  }

  if (!!tmpReq.hasStates()) {
    request.setStatesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStates(), "states", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "tags", "json"));
  }

  json query = {};
  if (!!request.hasApplicationConfigs()) {
    query["applicationConfigs"] = request.getApplicationConfigs();
  }

  if (!!request.hasCreator()) {
    query["creator"] = request.getCreator();
  }

  if (!!request.hasEndTimeShrink()) {
    query["endTime"] = request.getEndTimeShrink();
  }

  if (!!request.hasIsWorkflow()) {
    query["isWorkflow"] = request.getIsWorkflow();
  }

  if (!!request.hasJobRunDeploymentId()) {
    query["jobRunDeploymentId"] = request.getJobRunDeploymentId();
  }

  if (!!request.hasJobRunId()) {
    query["jobRunId"] = request.getJobRunId();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasMinDuration()) {
    query["minDuration"] = request.getMinDuration();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasResourceQueueId()) {
    query["resourceQueueId"] = request.getResourceQueueId();
  }

  if (!!request.hasRuntimeConfigs()) {
    query["runtimeConfigs"] = request.getRuntimeConfigs();
  }

  if (!!request.hasStartTimeShrink()) {
    query["startTime"] = request.getStartTimeShrink();
  }

  if (!!request.hasStatesShrink()) {
    query["states"] = request.getStatesShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobRuns"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/jobRuns")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobRunsResponse>();
}

/**
 * @summary Queries a list of Spark jobs.
 *
 * @param request ListJobRunsRequest
 * @return ListJobRunsResponse
 */
ListJobRunsResponse Client::listJobRuns(const string &workspaceId, const ListJobRunsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listJobRunsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary ListKyuubiServices
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKyuubiServicesResponse
 */
ListKyuubiServicesResponse Client::listKyuubiServicesWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKyuubiServices"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/kyuubi/" , Darabonba::Encode::Encoder::percentEncode(workspaceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKyuubiServicesResponse>();
}

/**
 * @summary ListKyuubiServices
 *
 * @return ListKyuubiServicesResponse
 */
ListKyuubiServicesResponse Client::listKyuubiServices(const string &workspaceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKyuubiServicesWithOptions(workspaceId, headers, runtime);
}

/**
 * @summary Queries the applications that are submitted by using a Kyuubi gateway.
 *
 * @param tmpReq ListKyuubiSparkApplicationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKyuubiSparkApplicationsResponse
 */
ListKyuubiSparkApplicationsResponse Client::listKyuubiSparkApplicationsWithOptions(const string &workspaceId, const string &kyuubiServiceId, const ListKyuubiSparkApplicationsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListKyuubiSparkApplicationsShrinkRequest request = ListKyuubiSparkApplicationsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOrderBy()) {
    request.setOrderByShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOrderBy(), "orderBy", "json"));
  }

  if (!!tmpReq.hasStartTime()) {
    request.setStartTimeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStartTime(), "startTime", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["applicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationName()) {
    query["applicationName"] = request.getApplicationName();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasMinDuration()) {
    query["minDuration"] = request.getMinDuration();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderByShrink()) {
    query["orderBy"] = request.getOrderByShrink();
  }

  if (!!request.hasResourceQueueId()) {
    query["resourceQueueId"] = request.getResourceQueueId();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.getSort();
  }

  if (!!request.hasStartTimeShrink()) {
    query["startTime"] = request.getStartTimeShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKyuubiSparkApplications"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/kyuubi/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/" , Darabonba::Encode::Encoder::percentEncode(kyuubiServiceId) , "/applications")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKyuubiSparkApplicationsResponse>();
}

/**
 * @summary Queries the applications that are submitted by using a Kyuubi gateway.
 *
 * @param request ListKyuubiSparkApplicationsRequest
 * @return ListKyuubiSparkApplicationsResponse
 */
ListKyuubiSparkApplicationsResponse Client::listKyuubiSparkApplications(const string &workspaceId, const string &kyuubiServiceId, const ListKyuubiSparkApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKyuubiSparkApplicationsWithOptions(workspaceId, kyuubiServiceId, request, headers, runtime);
}

/**
 * @summary 列出compute的token
 *
 * @param request ListKyuubiTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKyuubiTokenResponse
 */
ListKyuubiTokenResponse Client::listKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const ListKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListKyuubiToken"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/kyuubiService/" , Darabonba::Encode::Encoder::percentEncode(kyuubiServiceId) , "/token")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKyuubiTokenResponse>();
}

/**
 * @summary 列出compute的token
 *
 * @param request ListKyuubiTokenRequest
 * @return ListKyuubiTokenResponse
 */
ListKyuubiTokenResponse Client::listKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const ListKyuubiTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKyuubiTokenWithOptions(workspaceId, kyuubiServiceId, request, headers, runtime);
}

/**
 * @summary 列出livy compute
 *
 * @param request ListLivyComputeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLivyComputeResponse
 */
ListLivyComputeResponse Client::listLivyComputeWithOptions(const string &workspaceBizId, const ListLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["environmentId"] = request.getEnvironmentId();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLivyCompute"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceBizId) , "/livycompute")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLivyComputeResponse>();
}

/**
 * @summary 列出livy compute
 *
 * @param request ListLivyComputeRequest
 * @return ListLivyComputeResponse
 */
ListLivyComputeResponse Client::listLivyCompute(const string &workspaceBizId, const ListLivyComputeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLivyComputeWithOptions(workspaceBizId, request, headers, runtime);
}

/**
 * @summary 获取livy gateway历史session
 *
 * @param request ListLivyComputeSessionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLivyComputeSessionsResponse
 */
ListLivyComputeSessionsResponse Client::listLivyComputeSessionsWithOptions(const string &workspaceId, const string &livyComputeId, const ListLivyComputeSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["pageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLivyComputeSessions"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/livycompute/" , Darabonba::Encode::Encoder::percentEncode(livyComputeId) , "/session")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLivyComputeSessionsResponse>();
}

/**
 * @summary 获取livy gateway历史session
 *
 * @param request ListLivyComputeSessionsRequest
 * @return ListLivyComputeSessionsResponse
 */
ListLivyComputeSessionsResponse Client::listLivyComputeSessions(const string &workspaceId, const string &livyComputeId, const ListLivyComputeSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLivyComputeSessionsWithOptions(workspaceId, livyComputeId, request, headers, runtime);
}

/**
 * @summary 列出livy compute token
 *
 * @param request ListLivyComputeTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLivyComputeTokenResponse
 */
ListLivyComputeTokenResponse Client::listLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const ListLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListLivyComputeToken"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceBizId) , "/livycompute/" , Darabonba::Encode::Encoder::percentEncode(livyComputeId) , "/token")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLivyComputeTokenResponse>();
}

/**
 * @summary 列出livy compute token
 *
 * @param request ListLivyComputeTokenRequest
 * @return ListLivyComputeTokenResponse
 */
ListLivyComputeTokenResponse Client::listLivyComputeToken(const string &workspaceBizId, const string &livyComputeId, const ListLivyComputeTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLivyComputeTokenWithOptions(workspaceBizId, livyComputeId, request, headers, runtime);
}

/**
 * @summary Get Log Content
 *
 * @param request ListLogContentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLogContentsResponse
 */
ListLogContentsResponse Client::listLogContentsWithOptions(const string &workspaceId, const ListLogContentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.getFileName();
  }

  if (!!request.hasLength()) {
    query["length"] = request.getLength();
  }

  if (!!request.hasOffset()) {
    query["offset"] = request.getOffset();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLogContents"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/action/listLogContents")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogContentsResponse>();
}

/**
 * @summary Get Log Content
 *
 * @param request ListLogContentsRequest
 * @return ListLogContentsResponse
 */
ListLogContentsResponse Client::listLogContents(const string &workspaceId, const ListLogContentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLogContentsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 查询用户列表
 *
 * @param request ListMembersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMembersResponse
 */
ListMembersResponse Client::listMembersWithOptions(const string &workspaceId, const ListMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "ListMembers"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/auth/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/members")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMembersResponse>();
}

/**
 * @summary 查询用户列表
 *
 * @param request ListMembersRequest
 * @return ListMembersResponse
 */
ListMembersResponse Client::listMembers(const string &workspaceId, const ListMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMembersWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the list of published versions of E-MapReduce (EMR) Serverless Spark.
 *
 * @param request ListReleaseVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListReleaseVersionsResponse
 */
ListReleaseVersionsResponse Client::listReleaseVersionsWithOptions(const ListReleaseVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasReleaseType()) {
    query["releaseType"] = request.getReleaseType();
  }

  if (!!request.hasReleaseVersion()) {
    query["releaseVersion"] = request.getReleaseVersion();
  }

  if (!!request.hasReleaseVersionStatus()) {
    query["releaseVersionStatus"] = request.getReleaseVersionStatus();
  }

  if (!!request.hasServiceFilter()) {
    query["serviceFilter"] = request.getServiceFilter();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListReleaseVersions"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/releaseVersions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListReleaseVersionsResponse>();
}

/**
 * @summary Queries the list of published versions of E-MapReduce (EMR) Serverless Spark.
 *
 * @param request ListReleaseVersionsRequest
 * @return ListReleaseVersionsResponse
 */
ListReleaseVersionsResponse Client::listReleaseVersions(const ListReleaseVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listReleaseVersionsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of sessions.
 *
 * @param request ListSessionClustersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSessionClustersResponse
 */
ListSessionClustersResponse Client::listSessionClustersWithOptions(const string &workspaceId, const ListSessionClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKind()) {
    query["kind"] = request.getKind();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasQueueName()) {
    query["queueName"] = request.getQueueName();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasSessionClusterId()) {
    query["sessionClusterId"] = request.getSessionClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSessionClusters"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/sessionClusters")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSessionClustersResponse>();
}

/**
 * @summary Queries the list of sessions.
 *
 * @param request ListSessionClustersRequest
 * @return ListSessionClustersResponse
 */
ListSessionClustersResponse Client::listSessionClusters(const string &workspaceId, const ListSessionClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSessionClustersWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取sql statement内容
 *
 * @param request ListSqlStatementContentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSqlStatementContentsResponse
 */
ListSqlStatementContentsResponse Client::listSqlStatementContentsWithOptions(const string &workspaceId, const ListSqlStatementContentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.getFileName();
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
    {"action" , "ListSqlStatementContents"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/action/listSqlStatementContents")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSqlStatementContentsResponse>();
}

/**
 * @summary 获取sql statement内容
 *
 * @param request ListSqlStatementContentsRequest
 * @return ListSqlStatementContentsResponse
 */
ListSqlStatementContentsResponse Client::listSqlStatementContents(const string &workspaceId, const ListSqlStatementContentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSqlStatementContentsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取任务模板列表
 *
 * @param request ListTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplateResponse
 */
ListTemplateResponse Client::listTemplateWithOptions(const string &workspaceBizId, const ListTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListTemplate"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceBizId) , "/template/listing")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplateResponse>();
}

/**
 * @summary 获取任务模板列表
 *
 * @param request ListTemplateRequest
 * @return ListTemplateResponse
 */
ListTemplateResponse Client::listTemplate(const string &workspaceBizId, const ListTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTemplateWithOptions(workspaceBizId, request, headers, runtime);
}

/**
 * @summary Queries the list of queues in a Spark workspace.
 *
 * @param request ListWorkspaceQueuesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspaceQueuesResponse
 */
ListWorkspaceQueuesResponse Client::listWorkspaceQueuesWithOptions(const string &workspaceId, const ListWorkspaceQueuesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironment()) {
    query["environment"] = request.getEnvironment();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaceQueues"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/queues")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspaceQueuesResponse>();
}

/**
 * @summary Queries the list of queues in a Spark workspace.
 *
 * @param request ListWorkspaceQueuesRequest
 * @return ListWorkspaceQueuesResponse
 */
ListWorkspaceQueuesResponse Client::listWorkspaceQueues(const string &workspaceId, const ListWorkspaceQueuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkspaceQueuesWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries a list of workspaces.
 *
 * @param tmpReq ListWorkspacesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspacesWithOptions(const ListWorkspacesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListWorkspacesShrinkRequest request = ListWorkspacesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasState()) {
    query["state"] = request.getState();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaces"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspacesResponse>();
}

/**
 * @summary Queries a list of workspaces.
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
 * @summary 更新Livy Compute的token
 *
 * @param request RefreshLivyComputeTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshLivyComputeTokenResponse
 */
RefreshLivyComputeTokenResponse Client::refreshLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const RefreshLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasAutoExpireConfiguration()) {
    body["autoExpireConfiguration"] = request.getAutoExpireConfiguration();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasToken()) {
    body["token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RefreshLivyComputeToken"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceBizId) , "/livycompute/" , Darabonba::Encode::Encoder::percentEncode(livyComputeId) , "/token/" , Darabonba::Encode::Encoder::percentEncode(tokenId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshLivyComputeTokenResponse>();
}

/**
 * @summary 更新Livy Compute的token
 *
 * @param request RefreshLivyComputeTokenRequest
 * @return RefreshLivyComputeTokenResponse
 */
RefreshLivyComputeTokenResponse Client::refreshLivyComputeToken(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const RefreshLivyComputeTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return refreshLivyComputeTokenWithOptions(workspaceBizId, livyComputeId, tokenId, request, headers, runtime);
}

/**
 * @summary Starts a Spark job.
 *
 * @param request StartJobRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartJobRunResponse
 */
StartJobRunResponse Client::startJobRunWithOptions(const string &workspaceId, const StartJobRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasCodeType()) {
    body["codeType"] = request.getCodeType();
  }

  if (!!request.hasConfigurationOverrides()) {
    body["configurationOverrides"] = request.getConfigurationOverrides();
  }

  if (!!request.hasDisplayReleaseVersion()) {
    body["displayReleaseVersion"] = request.getDisplayReleaseVersion();
  }

  if (!!request.hasExecutionTimeoutSeconds()) {
    body["executionTimeoutSeconds"] = request.getExecutionTimeoutSeconds();
  }

  if (!!request.hasFusion()) {
    body["fusion"] = request.getFusion();
  }

  if (!!request.hasJobDriver()) {
    body["jobDriver"] = request.getJobDriver();
  }

  if (!!request.hasJobId()) {
    body["jobId"] = request.getJobId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasReleaseVersion()) {
    body["releaseVersion"] = request.getReleaseVersion();
  }

  if (!!request.hasResourceQueueId()) {
    body["resourceQueueId"] = request.getResourceQueueId();
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
    {"action" , "StartJobRun"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/jobRuns")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartJobRunResponse>();
}

/**
 * @summary Starts a Spark job.
 *
 * @param request StartJobRunRequest
 * @return StartJobRunResponse
 */
StartJobRunResponse Client::startJobRun(const string &workspaceId, const StartJobRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startJobRunWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary StartKyuubiService
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartKyuubiServiceResponse
 */
StartKyuubiServiceResponse Client::startKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartKyuubiService"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/kyuubi/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/" , Darabonba::Encode::Encoder::percentEncode(kyuubiServiceId) , "/start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartKyuubiServiceResponse>();
}

/**
 * @summary StartKyuubiService
 *
 * @return StartKyuubiServiceResponse
 */
StartKyuubiServiceResponse Client::startKyuubiService(const string &workspaceId, const string &kyuubiServiceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startKyuubiServiceWithOptions(workspaceId, kyuubiServiceId, headers, runtime);
}

/**
 * @summary 启动livy compute
 *
 * @param request StartLivyComputeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartLivyComputeResponse
 */
StartLivyComputeResponse Client::startLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const StartLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "StartLivyCompute"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceBizId) , "/livycompute/" , Darabonba::Encode::Encoder::percentEncode(livyComputeId) , "/start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartLivyComputeResponse>();
}

/**
 * @summary 启动livy compute
 *
 * @param request StartLivyComputeRequest
 * @return StartLivyComputeResponse
 */
StartLivyComputeResponse Client::startLivyCompute(const string &workspaceBizId, const string &livyComputeId, const StartLivyComputeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startLivyComputeWithOptions(workspaceBizId, livyComputeId, request, headers, runtime);
}

/**
 * @summary Manually runs a workflow.
 *
 * @param request StartProcessInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartProcessInstanceResponse
 */
StartProcessInstanceResponse Client::startProcessInstanceWithOptions(const string &bizId, const StartProcessInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAction()) {
    query["action"] = request.getAction();
  }

  if (!!request.hasComments()) {
    query["comments"] = request.getComments();
  }

  if (!!request.hasEmail()) {
    query["email"] = request.getEmail();
  }

  if (!!request.hasInterval()) {
    query["interval"] = request.getInterval();
  }

  if (!!request.hasIsProd()) {
    query["isProd"] = request.getIsProd();
  }

  if (!!request.hasProcessDefinitionCode()) {
    query["processDefinitionCode"] = request.getProcessDefinitionCode();
  }

  if (!!request.hasProductNamespace()) {
    query["productNamespace"] = request.getProductNamespace();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasRuntimeQueue()) {
    query["runtimeQueue"] = request.getRuntimeQueue();
  }

  if (!!request.hasVersionHashCode()) {
    query["versionHashCode"] = request.getVersionHashCode();
  }

  if (!!request.hasVersionNumber()) {
    query["versionNumber"] = request.getVersionNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartProcessInstance"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/projects/" , Darabonba::Encode::Encoder::percentEncode(bizId) , "/executors/start-process-instance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartProcessInstanceResponse>();
}

/**
 * @summary Manually runs a workflow.
 *
 * @param request StartProcessInstanceRequest
 * @return StartProcessInstanceResponse
 */
StartProcessInstanceResponse Client::startProcessInstance(const string &bizId, const StartProcessInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startProcessInstanceWithOptions(bizId, request, headers, runtime);
}

/**
 * @summary Starts a session.
 *
 * @param request StartSessionClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSessionClusterResponse
 */
StartSessionClusterResponse Client::startSessionClusterWithOptions(const string &workspaceId, const StartSessionClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasQueueName()) {
    body["queueName"] = request.getQueueName();
  }

  if (!!request.hasSessionClusterId()) {
    body["sessionClusterId"] = request.getSessionClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartSessionCluster"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/sessionClusters/action/startSessionCluster")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartSessionClusterResponse>();
}

/**
 * @summary Starts a session.
 *
 * @param request StartSessionClusterRequest
 * @return StartSessionClusterResponse
 */
StartSessionClusterResponse Client::startSessionCluster(const string &workspaceId, const StartSessionClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startSessionClusterWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary StopKyuubiService
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopKyuubiServiceResponse
 */
StopKyuubiServiceResponse Client::stopKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopKyuubiService"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/kyuubi/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/" , Darabonba::Encode::Encoder::percentEncode(kyuubiServiceId) , "/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopKyuubiServiceResponse>();
}

/**
 * @summary StopKyuubiService
 *
 * @return StopKyuubiServiceResponse
 */
StopKyuubiServiceResponse Client::stopKyuubiService(const string &workspaceId, const string &kyuubiServiceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopKyuubiServiceWithOptions(workspaceId, kyuubiServiceId, headers, runtime);
}

/**
 * @summary 停止livy compute
 *
 * @param request StopLivyComputeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopLivyComputeResponse
 */
StopLivyComputeResponse Client::stopLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const StopLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "StopLivyCompute"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceBizId) , "/livycompute/" , Darabonba::Encode::Encoder::percentEncode(livyComputeId) , "/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopLivyComputeResponse>();
}

/**
 * @summary 停止livy compute
 *
 * @param request StopLivyComputeRequest
 * @return StopLivyComputeResponse
 */
StopLivyComputeResponse Client::stopLivyCompute(const string &workspaceBizId, const string &livyComputeId, const StopLivyComputeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopLivyComputeWithOptions(workspaceBizId, livyComputeId, request, headers, runtime);
}

/**
 * @summary Stops a session.
 *
 * @param request StopSessionClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopSessionClusterResponse
 */
StopSessionClusterResponse Client::stopSessionClusterWithOptions(const string &workspaceId, const StopSessionClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasQueueName()) {
    body["queueName"] = request.getQueueName();
  }

  if (!!request.hasSessionClusterId()) {
    body["sessionClusterId"] = request.getSessionClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopSessionCluster"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/sessionClusters/action/stopSessionCluster")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopSessionClusterResponse>();
}

/**
 * @summary Stops a session.
 *
 * @param request StopSessionClusterRequest
 * @return StopSessionClusterResponse
 */
StopSessionClusterResponse Client::stopSessionCluster(const string &workspaceId, const StopSessionClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopSessionClusterWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Terminates an SQL query task.
 *
 * @param request TerminateSqlStatementRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminateSqlStatementResponse
 */
TerminateSqlStatementResponse Client::terminateSqlStatementWithOptions(const string &workspaceId, const string &statementId, const TerminateSqlStatementRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "TerminateSqlStatement"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/statement/" , Darabonba::Encode::Encoder::percentEncode(statementId) , "/terminate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TerminateSqlStatementResponse>();
}

/**
 * @summary Terminates an SQL query task.
 *
 * @param request TerminateSqlStatementRequest
 * @return TerminateSqlStatementResponse
 */
TerminateSqlStatementResponse Client::terminateSqlStatement(const string &workspaceId, const string &statementId, const TerminateSqlStatementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return terminateSqlStatementWithOptions(workspaceId, statementId, request, headers, runtime);
}

/**
 * @summary UpdateKyuubiService
 *
 * @param request UpdateKyuubiServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKyuubiServiceResponse
 */
UpdateKyuubiServiceResponse Client::updateKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const UpdateKyuubiServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComputeInstance()) {
    body["computeInstance"] = request.getComputeInstance();
  }

  if (!!request.hasKyuubiConfigs()) {
    body["kyuubiConfigs"] = request.getKyuubiConfigs();
  }

  if (!!request.hasKyuubiReleaseVersion()) {
    body["kyuubiReleaseVersion"] = request.getKyuubiReleaseVersion();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasPublicEndpointEnabled()) {
    body["publicEndpointEnabled"] = request.getPublicEndpointEnabled();
  }

  if (!!request.hasQueue()) {
    body["queue"] = request.getQueue();
  }

  if (!!request.hasReleaseVersion()) {
    body["releaseVersion"] = request.getReleaseVersion();
  }

  if (!!request.hasReplica()) {
    body["replica"] = request.getReplica();
  }

  if (!!request.hasRestart()) {
    body["restart"] = request.getRestart();
  }

  if (!!request.hasSparkConfigs()) {
    body["sparkConfigs"] = request.getSparkConfigs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKyuubiService"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/kyuubi/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/" , Darabonba::Encode::Encoder::percentEncode(kyuubiServiceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKyuubiServiceResponse>();
}

/**
 * @summary UpdateKyuubiService
 *
 * @param request UpdateKyuubiServiceRequest
 * @return UpdateKyuubiServiceResponse
 */
UpdateKyuubiServiceResponse Client::updateKyuubiService(const string &workspaceId, const string &kyuubiServiceId, const UpdateKyuubiServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKyuubiServiceWithOptions(workspaceId, kyuubiServiceId, request, headers, runtime);
}

/**
 * @summary 更新kyuubi的token
 *
 * @param request UpdateKyuubiTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKyuubiTokenResponse
 */
UpdateKyuubiTokenResponse Client::updateKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const UpdateKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasAutoExpireConfiguration()) {
    body["autoExpireConfiguration"] = request.getAutoExpireConfiguration();
  }

  if (!!request.hasMemberArns()) {
    body["memberArns"] = request.getMemberArns();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasToken()) {
    body["token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKyuubiToken"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/kyuubiService/" , Darabonba::Encode::Encoder::percentEncode(kyuubiServiceId) , "/token/" , Darabonba::Encode::Encoder::percentEncode(tokenId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKyuubiTokenResponse>();
}

/**
 * @summary 更新kyuubi的token
 *
 * @param request UpdateKyuubiTokenRequest
 * @return UpdateKyuubiTokenResponse
 */
UpdateKyuubiTokenResponse Client::updateKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const UpdateKyuubiTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKyuubiTokenWithOptions(workspaceId, kyuubiServiceId, tokenId, request, headers, runtime);
}

/**
 * @summary 更新livy compute
 *
 * @param request UpdateLivyComputeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLivyComputeResponse
 */
UpdateLivyComputeResponse Client::updateLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const UpdateLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasAuthType()) {
    body["authType"] = request.getAuthType();
  }

  if (!!request.hasAutoStartConfiguration()) {
    body["autoStartConfiguration"] = request.getAutoStartConfiguration();
  }

  if (!!request.hasAutoStopConfiguration()) {
    body["autoStopConfiguration"] = request.getAutoStopConfiguration();
  }

  if (!!request.hasCpuLimit()) {
    body["cpuLimit"] = request.getCpuLimit();
  }

  if (!!request.hasDisplayReleaseVersion()) {
    body["displayReleaseVersion"] = request.getDisplayReleaseVersion();
  }

  if (!!request.hasEnablePublic()) {
    body["enablePublic"] = request.getEnablePublic();
  }

  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.getEnvironmentId();
  }

  if (!!request.hasFusion()) {
    body["fusion"] = request.getFusion();
  }

  if (!!request.hasLivyServerConf()) {
    body["livyServerConf"] = request.getLivyServerConf();
  }

  if (!!request.hasLivyVersion()) {
    body["livyVersion"] = request.getLivyVersion();
  }

  if (!!request.hasMemoryLimit()) {
    body["memoryLimit"] = request.getMemoryLimit();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNetworkName()) {
    body["networkName"] = request.getNetworkName();
  }

  if (!!request.hasQueueName()) {
    body["queueName"] = request.getQueueName();
  }

  if (!!request.hasReleaseVersion()) {
    body["releaseVersion"] = request.getReleaseVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateLivyCompute"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/interactive/v1/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceBizId) , "/livycompute/" , Darabonba::Encode::Encoder::percentEncode(livyComputeId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLivyComputeResponse>();
}

/**
 * @summary 更新livy compute
 *
 * @param request UpdateLivyComputeRequest
 * @return UpdateLivyComputeResponse
 */
UpdateLivyComputeResponse Client::updateLivyCompute(const string &workspaceBizId, const string &livyComputeId, const UpdateLivyComputeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLivyComputeWithOptions(workspaceBizId, livyComputeId, request, headers, runtime);
}

/**
 * @summary Updates the workflow and time-based scheduling configurations.
 *
 * @param tmpReq UpdateProcessDefinitionWithScheduleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProcessDefinitionWithScheduleResponse
 */
UpdateProcessDefinitionWithScheduleResponse Client::updateProcessDefinitionWithScheduleWithOptions(const string &bizId, const string &code, const UpdateProcessDefinitionWithScheduleRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateProcessDefinitionWithScheduleShrinkRequest request = UpdateProcessDefinitionWithScheduleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGlobalParams()) {
    request.setGlobalParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGlobalParams(), "globalParams", "json"));
  }

  if (!!tmpReq.hasSchedule()) {
    request.setScheduleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSchedule(), "schedule", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "tags", "json"));
  }

  if (!!tmpReq.hasTaskDefinitionJson()) {
    request.setTaskDefinitionJsonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskDefinitionJson(), "taskDefinitionJson", "json"));
  }

  if (!!tmpReq.hasTaskRelationJson()) {
    request.setTaskRelationJsonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskRelationJson(), "taskRelationJson", "json"));
  }

  json query = {};
  if (!!request.hasAlertEmailAddress()) {
    query["alertEmailAddress"] = request.getAlertEmailAddress();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasExecutionType()) {
    query["executionType"] = request.getExecutionType();
  }

  if (!!request.hasGlobalParamsShrink()) {
    query["globalParams"] = request.getGlobalParamsShrink();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasProductNamespace()) {
    query["productNamespace"] = request.getProductNamespace();
  }

  if (!!request.hasPublish()) {
    query["publish"] = request.getPublish();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasReleaseState()) {
    query["releaseState"] = request.getReleaseState();
  }

  if (!!request.hasResourceQueue()) {
    query["resourceQueue"] = request.getResourceQueue();
  }

  if (!!request.hasRetryTimes()) {
    query["retryTimes"] = request.getRetryTimes();
  }

  if (!!request.hasRunAs()) {
    query["runAs"] = request.getRunAs();
  }

  if (!!request.hasScheduleShrink()) {
    query["schedule"] = request.getScheduleShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["tags"] = request.getTagsShrink();
  }

  if (!!request.hasTaskDefinitionJsonShrink()) {
    query["taskDefinitionJson"] = request.getTaskDefinitionJsonShrink();
  }

  if (!!request.hasTaskParallelism()) {
    query["taskParallelism"] = request.getTaskParallelism();
  }

  if (!!request.hasTaskRelationJsonShrink()) {
    query["taskRelationJson"] = request.getTaskRelationJsonShrink();
  }

  if (!!request.hasTimeout()) {
    query["timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateProcessDefinitionWithSchedule"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dolphinscheduler/projects/" , Darabonba::Encode::Encoder::percentEncode(bizId) , "/process-definition/" , Darabonba::Encode::Encoder::percentEncode(code))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProcessDefinitionWithScheduleResponse>();
}

/**
 * @summary Updates the workflow and time-based scheduling configurations.
 *
 * @param request UpdateProcessDefinitionWithScheduleRequest
 * @return UpdateProcessDefinitionWithScheduleResponse
 */
UpdateProcessDefinitionWithScheduleResponse Client::updateProcessDefinitionWithSchedule(const string &bizId, const string &code, const UpdateProcessDefinitionWithScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProcessDefinitionWithScheduleWithOptions(bizId, code, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808