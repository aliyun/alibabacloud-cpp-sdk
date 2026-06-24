#include <darabonba/Core.hpp>
#include <alibabacloud/Dms20250414.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::Dms20250414::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Dms20250414
{

AlibabaCloud::Dms20250414::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "dms.us-west-1.aliyuncs.com"},
    {"us-east-1" , "dms.us-east-1.aliyuncs.com"},
    {"cn-shenzhen" , "dms.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "dms.cn-shanghai.aliyuncs.com"},
    {"cn-hongkong" , "dms.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou" , "dms.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing" , "dms.cn-beijing.aliyuncs.com"},
    {"ap-southeast-1" , "dms.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("dms", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds a user to a specified workspace.
 *
 * @param request AddUserToDataAgentWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserToDataAgentWorkspaceResponse
 */
AddUserToDataAgentWorkspaceResponse Client::addUserToDataAgentWorkspaceWithOptions(const AddUserToDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.getMemberId();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserToDataAgentWorkspace"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserToDataAgentWorkspaceResponse>();
}

/**
 * @summary Adds a user to a specified workspace.
 *
 * @param request AddUserToDataAgentWorkspaceRequest
 * @return AddUserToDataAgentWorkspaceResponse
 */
AddUserToDataAgentWorkspaceResponse Client::addUserToDataAgentWorkspace(const AddUserToDataAgentWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserToDataAgentWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Creates partitions for a data lake table in a batch.
 *
 * @param tmpReq BatchCreateDataLakePartitionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateDataLakePartitionsResponse
 */
BatchCreateDataLakePartitionsResponse Client::batchCreateDataLakePartitionsWithOptions(const BatchCreateDataLakePartitionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchCreateDataLakePartitionsShrinkRequest request = BatchCreateDataLakePartitionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartitionInputs()) {
    request.setPartitionInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPartitionInputs(), "PartitionInputs", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasIfNotExists()) {
    query["IfNotExists"] = request.getIfNotExists();
  }

  if (!!request.hasNeedResult()) {
    query["NeedResult"] = request.getNeedResult();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasPartitionInputsShrink()) {
    body["PartitionInputs"] = request.getPartitionInputsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchCreateDataLakePartitions"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateDataLakePartitionsResponse>();
}

/**
 * @summary Creates partitions for a data lake table in a batch.
 *
 * @param request BatchCreateDataLakePartitionsRequest
 * @return BatchCreateDataLakePartitionsResponse
 */
BatchCreateDataLakePartitionsResponse Client::batchCreateDataLakePartitions(const BatchCreateDataLakePartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateDataLakePartitionsWithOptions(request, runtime);
}

/**
 * @summary Batch deletes partitions from a data lake table.
 *
 * @param request BatchDeleteDataLakePartitionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteDataLakePartitionsResponse
 */
BatchDeleteDataLakePartitionsResponse Client::batchDeleteDataLakePartitionsWithOptions(const BatchDeleteDataLakePartitionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasIfExists()) {
    query["IfExists"] = request.getIfExists();
  }

  if (!!request.hasPartitionValuesList()) {
    query["PartitionValuesList"] = request.getPartitionValuesList();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchDeleteDataLakePartitions"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteDataLakePartitionsResponse>();
}

/**
 * @summary Batch deletes partitions from a data lake table.
 *
 * @param request BatchDeleteDataLakePartitionsRequest
 * @return BatchDeleteDataLakePartitionsResponse
 */
BatchDeleteDataLakePartitionsResponse Client::batchDeleteDataLakePartitions(const BatchDeleteDataLakePartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteDataLakePartitionsWithOptions(request, runtime);
}

/**
 * @summary Update partitions in a data lake table in batch.
 *
 * @param tmpReq BatchUpdateDataLakePartitionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUpdateDataLakePartitionsResponse
 */
BatchUpdateDataLakePartitionsResponse Client::batchUpdateDataLakePartitionsWithOptions(const BatchUpdateDataLakePartitionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchUpdateDataLakePartitionsShrinkRequest request = BatchUpdateDataLakePartitionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartitionInputs()) {
    request.setPartitionInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPartitionInputs(), "PartitionInputs", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasPartitionInputsShrink()) {
    body["PartitionInputs"] = request.getPartitionInputsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchUpdateDataLakePartitions"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUpdateDataLakePartitionsResponse>();
}

/**
 * @summary Update partitions in a data lake table in batch.
 *
 * @param request BatchUpdateDataLakePartitionsRequest
 * @return BatchUpdateDataLakePartitionsResponse
 */
BatchUpdateDataLakePartitionsResponse Client::batchUpdateDataLakePartitions(const BatchUpdateDataLakePartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUpdateDataLakePartitionsWithOptions(request, runtime);
}

/**
 * @summary Update an Airflow instance\\"s custom configuration
 *
 * @description Configure the airflow\\.cfg file for DMS Airflow.
 *
 * @param tmpReq ConfigAirflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigAirflowResponse
 */
ConfigAirflowResponse Client::configAirflowWithOptions(const ConfigAirflowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ConfigAirflowShrinkRequest request = ConfigAirflowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomAirflowCfg()) {
    request.setCustomAirflowCfgShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomAirflowCfg(), "CustomAirflowCfg", "simple"));
  }

  json query = {};
  if (!!request.hasAirflowId()) {
    query["AirflowId"] = request.getAirflowId();
  }

  if (!!request.hasCustomAirflowCfgShrink()) {
    query["CustomAirflowCfg"] = request.getCustomAirflowCfgShrink();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigAirflow"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigAirflowResponse>();
}

/**
 * @summary Update an Airflow instance\\"s custom configuration
 *
 * @description Configure the airflow\\.cfg file for DMS Airflow.
 *
 * @param request ConfigAirflowRequest
 * @return ConfigAirflowResponse
 */
ConfigAirflowResponse Client::configAirflow(const ConfigAirflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configAirflowWithOptions(request, runtime);
}

/**
 * @summary Creates an Airflow instance in a workspace.
 *
 * @description Creates an Airflow instance in a workspace.
 *
 * @param tmpReq CreateAirflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAirflowResponse
 */
CreateAirflowResponse Client::createAirflowWithOptions(const CreateAirflowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAirflowShrinkRequest request = CreateAirflowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataMountInfoList()) {
    request.setDataMountInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataMountInfoList(), "DataMountInfoList", "json"));
  }

  json query = {};
  if (!!request.hasAirflowName()) {
    query["AirflowName"] = request.getAirflowName();
  }

  if (!!request.hasAirflowVersion()) {
    query["AirflowVersion"] = request.getAirflowVersion();
  }

  if (!!request.hasAppSpec()) {
    query["AppSpec"] = request.getAppSpec();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDagsDir()) {
    query["DagsDir"] = request.getDagsDir();
  }

  if (!!request.hasDataMountInfoListShrink()) {
    query["DataMountInfoList"] = request.getDataMountInfoListShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnableServerless()) {
    query["EnableServerless"] = request.getEnableServerless();
  }

  if (!!request.hasGracefulShutdownTimeout()) {
    query["GracefulShutdownTimeout"] = request.getGracefulShutdownTimeout();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasOssPath()) {
    query["OssPath"] = request.getOssPath();
  }

  if (!!request.hasPluginsDir()) {
    query["PluginsDir"] = request.getPluginsDir();
  }

  if (!!request.hasRequirementFile()) {
    query["RequirementFile"] = request.getRequirementFile();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasStartupFile()) {
    query["StartupFile"] = request.getStartupFile();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasWorkerServerlessReplicas()) {
    query["WorkerServerlessReplicas"] = request.getWorkerServerlessReplicas();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAirflow"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAirflowResponse>();
}

/**
 * @summary Creates an Airflow instance in a workspace.
 *
 * @description Creates an Airflow instance in a workspace.
 *
 * @param request CreateAirflowRequest
 * @return CreateAirflowResponse
 */
CreateAirflowResponse Client::createAirflow(const CreateAirflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAirflowWithOptions(request, runtime);
}

/**
 * @summary Obtains logon credentials for an Airflow instance hosted by Data Management Service (DMS). Use the returned token and host endpoint to construct a logon URL for the Airflow web UI.
 *
 * @param request CreateAirflowLoginTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAirflowLoginTokenResponse
 */
CreateAirflowLoginTokenResponse Client::createAirflowLoginTokenWithOptions(const CreateAirflowLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAirflowId()) {
    query["AirflowId"] = request.getAirflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAirflowLoginToken"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAirflowLoginTokenResponse>();
}

/**
 * @summary Obtains logon credentials for an Airflow instance hosted by Data Management Service (DMS). Use the returned token and host endpoint to construct a logon URL for the Airflow web UI.
 *
 * @param request CreateAirflowLoginTokenRequest
 * @return CreateAirflowLoginTokenResponse
 */
CreateAirflowLoginTokenResponse Client::createAirflowLoginToken(const CreateAirflowLoginTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAirflowLoginTokenWithOptions(request, runtime);
}

/**
 * @summary Create a custom agent in your personal space or a workspace.
 *
 * @param tmpReq CreateCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomAgentResponse
 */
CreateCustomAgentResponse Client::createCustomAgentWithOptions(const CreateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCustomAgentShrinkRequest request = CreateCustomAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCallbackConfig()) {
    request.setCallbackConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallbackConfig(), "CallbackConfig", "json"));
  }

  if (!!tmpReq.hasExecutionConfig()) {
    request.setExecutionConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExecutionConfig(), "ExecutionConfig", "json"));
  }

  if (!!tmpReq.hasKnowledgeConfigList()) {
    request.setKnowledgeConfigListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKnowledgeConfigList(), "KnowledgeConfigList", "json"));
  }

  if (!!tmpReq.hasScheduleTaskConfig()) {
    request.setScheduleTaskConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScheduleTaskConfig(), "ScheduleTaskConfig", "json"));
  }

  json query = {};
  if (!!request.hasCallbackConfigShrink()) {
    query["CallbackConfig"] = request.getCallbackConfigShrink();
  }

  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasDataJson()) {
    query["DataJson"] = request.getDataJson();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExecutionConfigShrink()) {
    query["ExecutionConfig"] = request.getExecutionConfigShrink();
  }

  if (!!request.hasInstruction()) {
    query["Instruction"] = request.getInstruction();
  }

  if (!!request.hasKnowledge()) {
    query["Knowledge"] = request.getKnowledge();
  }

  if (!!request.hasKnowledgeConfigListShrink()) {
    query["KnowledgeConfigList"] = request.getKnowledgeConfigListShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRelatedSessionId()) {
    query["RelatedSessionId"] = request.getRelatedSessionId();
  }

  if (!!request.hasScheduleTaskConfigShrink()) {
    query["ScheduleTaskConfig"] = request.getScheduleTaskConfigShrink();
  }

  if (!!request.hasTextReportConfig()) {
    query["TextReportConfig"] = request.getTextReportConfig();
  }

  if (!!request.hasWebReportConfig()) {
    query["WebReportConfig"] = request.getWebReportConfig();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomAgent"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomAgentResponse>();
}

/**
 * @summary Create a custom agent in your personal space or a workspace.
 *
 * @param request CreateCustomAgentRequest
 * @return CreateCustomAgentResponse
 */
CreateCustomAgentResponse Client::createCustomAgent(const CreateCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Creates a DataAgent knowledge base. The knowledge base creator has read and write permissions. Other workspace members have permission to use it.
 *
 * @param request CreateDataAgentKnowledgeBaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataAgentKnowledgeBaseResponse
 */
CreateDataAgentKnowledgeBaseResponse Client::createDataAgentKnowledgeBaseWithOptions(const CreateDataAgentKnowledgeBaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFromKbUuid()) {
    query["FromKbUuid"] = request.getFromKbUuid();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataAgentKnowledgeBase"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataAgentKnowledgeBaseResponse>();
}

/**
 * @summary Creates a DataAgent knowledge base. The knowledge base creator has read and write permissions. Other workspace members have permission to use it.
 *
 * @param request CreateDataAgentKnowledgeBaseRequest
 * @return CreateDataAgentKnowledgeBaseResponse
 */
CreateDataAgentKnowledgeBaseResponse Client::createDataAgentKnowledgeBase(const CreateDataAgentKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataAgentKnowledgeBaseWithOptions(request, runtime);
}

/**
 * @summary Create a DataAgent session
 *
 * @param tmpReq CreateDataAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataAgentSessionResponse
 */
CreateDataAgentSessionResponse Client::createDataAgentSessionWithOptions(const CreateDataAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataAgentSessionShrinkRequest request = CreateDataAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSessionConfig()) {
    request.setSessionConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSessionConfig(), "SessionConfig", "json"));
  }

  json query = {};
  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasFile()) {
    query["File"] = request.getFile();
  }

  if (!!request.hasSessionConfigShrink()) {
    query["SessionConfig"] = request.getSessionConfigShrink();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataAgentSession"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataAgentSessionResponse>();
}

/**
 * @summary Create a DataAgent session
 *
 * @param request CreateDataAgentSessionRequest
 * @return CreateDataAgentSessionResponse
 */
CreateDataAgentSessionResponse Client::createDataAgentSession(const CreateDataAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataAgentSessionWithOptions(request, runtime);
}

/**
 * @summary Creates a DataAgent collaborative workspace.
 *
 * @param request CreateDataAgentWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataAgentWorkspaceResponse
 */
CreateDataAgentWorkspaceResponse Client::createDataAgentWorkspaceWithOptions(const CreateDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasIsSessionShareEnabled()) {
    query["IsSessionShareEnabled"] = request.getIsSessionShareEnabled();
  }

  if (!!request.hasWorkspaceDesc()) {
    query["WorkspaceDesc"] = request.getWorkspaceDesc();
  }

  if (!!request.hasWorkspaceName()) {
    query["WorkspaceName"] = request.getWorkspaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataAgentWorkspace"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataAgentWorkspaceResponse>();
}

/**
 * @summary Creates a DataAgent collaborative workspace.
 *
 * @param request CreateDataAgentWorkspaceRequest
 * @return CreateDataAgentWorkspaceResponse
 */
CreateDataAgentWorkspaceResponse Client::createDataAgentWorkspace(const CreateDataAgentWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataAgentWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Creates a data lake database.
 *
 * @param tmpReq CreateDataLakeDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataLakeDatabaseResponse
 */
CreateDataLakeDatabaseResponse Client::createDataLakeDatabaseWithOptions(const CreateDataLakeDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataLakeDatabaseShrinkRequest request = CreateDataLakeDatabaseShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasLocation()) {
    query["Location"] = request.getLocation();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataLakeDatabase"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataLakeDatabaseResponse>();
}

/**
 * @summary Creates a data lake database.
 *
 * @param request CreateDataLakeDatabaseRequest
 * @return CreateDataLakeDatabaseResponse
 */
CreateDataLakeDatabaseResponse Client::createDataLakeDatabase(const CreateDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary Creates a user-defined function (UDF) for a data lake.
 *
 * @param tmpReq CreateDataLakeFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataLakeFunctionResponse
 */
CreateDataLakeFunctionResponse Client::createDataLakeFunctionWithOptions(const CreateDataLakeFunctionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataLakeFunctionShrinkRequest request = CreateDataLakeFunctionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFunctionInput()) {
    request.setFunctionInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFunctionInput(), "FunctionInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasFunctionInputShrink()) {
    body["FunctionInput"] = request.getFunctionInputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataLakeFunction"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataLakeFunctionResponse>();
}

/**
 * @summary Creates a user-defined function (UDF) for a data lake.
 *
 * @param request CreateDataLakeFunctionRequest
 * @return CreateDataLakeFunctionResponse
 */
CreateDataLakeFunctionResponse Client::createDataLakeFunction(const CreateDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary Creates a partition for a data lake table.
 *
 * @param tmpReq CreateDataLakePartitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataLakePartitionResponse
 */
CreateDataLakePartitionResponse Client::createDataLakePartitionWithOptions(const CreateDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataLakePartitionShrinkRequest request = CreateDataLakePartitionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartitionInput()) {
    request.setPartitionInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPartitionInput(), "PartitionInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasIfNotExists()) {
    query["IfNotExists"] = request.getIfNotExists();
  }

  if (!!request.hasNeedResult()) {
    query["NeedResult"] = request.getNeedResult();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasPartitionInputShrink()) {
    body["PartitionInput"] = request.getPartitionInputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataLakePartition"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataLakePartitionResponse>();
}

/**
 * @summary Creates a partition for a data lake table.
 *
 * @param request CreateDataLakePartitionRequest
 * @return CreateDataLakePartitionResponse
 */
CreateDataLakePartitionResponse Client::createDataLakePartition(const CreateDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary Creates a data lake table in Data Management (DMS).
 *
 * @param tmpReq CreateDataLakeTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataLakeTableResponse
 */
CreateDataLakeTableResponse Client::createDataLakeTableWithOptions(const CreateDataLakeTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataLakeTableShrinkRequest request = CreateDataLakeTableShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTableInput()) {
    request.setTableInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTableInput(), "TableInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasTableInputShrink()) {
    body["TableInput"] = request.getTableInputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataLakeTable"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataLakeTableResponse>();
}

/**
 * @summary Creates a data lake table in Data Management (DMS).
 *
 * @param request CreateDataLakeTableRequest
 * @return CreateDataLakeTableResponse
 */
CreateDataLakeTableResponse Client::createDataLakeTable(const CreateDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataLakeTableWithOptions(request, runtime);
}

/**
 * @summary Deletes an Airflow instance.
 *
 * @param request DeleteAirflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAirflowResponse
 */
DeleteAirflowResponse Client::deleteAirflowWithOptions(const DeleteAirflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAirflowId()) {
    query["AirflowId"] = request.getAirflowId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAirflow"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAirflowResponse>();
}

/**
 * @summary Deletes an Airflow instance.
 *
 * @param request DeleteAirflowRequest
 * @return DeleteAirflowResponse
 */
DeleteAirflowResponse Client::deleteAirflow(const DeleteAirflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAirflowWithOptions(request, runtime);
}

/**
 * @summary Delete a custom agent in your personal workspace or a shared workspace. Note: Only custom agents that are newly created or offline can be deleted.
 *
 * @param request DeleteCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomAgentResponse
 */
DeleteCustomAgentResponse Client::deleteCustomAgentWithOptions(const DeleteCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomAgentId()) {
    query["CustomAgentId"] = request.getCustomAgentId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomAgent"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomAgentResponse>();
}

/**
 * @summary Delete a custom agent in your personal workspace or a shared workspace. Note: Only custom agents that are newly created or offline can be deleted.
 *
 * @param request DeleteCustomAgentRequest
 * @return DeleteCustomAgentResponse
 */
DeleteCustomAgentResponse Client::deleteCustomAgent(const DeleteCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Deletes a DataAgent knowledge base.
 *
 * @param request DeleteDataAgentKnowledgeBaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataAgentKnowledgeBaseResponse
 */
DeleteDataAgentKnowledgeBaseResponse Client::deleteDataAgentKnowledgeBaseWithOptions(const DeleteDataAgentKnowledgeBaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasKbUuid()) {
    query["KbUuid"] = request.getKbUuid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataAgentKnowledgeBase"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataAgentKnowledgeBaseResponse>();
}

/**
 * @summary Deletes a DataAgent knowledge base.
 *
 * @param request DeleteDataAgentKnowledgeBaseRequest
 * @return DeleteDataAgentKnowledgeBaseResponse
 */
DeleteDataAgentKnowledgeBaseResponse Client::deleteDataAgentKnowledgeBase(const DeleteDataAgentKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataAgentKnowledgeBaseWithOptions(request, runtime);
}

/**
 * @summary Deletes a DataAgent workspace.
 *
 * @param request DeleteDataAgentWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataAgentWorkspaceResponse
 */
DeleteDataAgentWorkspaceResponse Client::deleteDataAgentWorkspaceWithOptions(const DeleteDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataAgentWorkspace"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataAgentWorkspaceResponse>();
}

/**
 * @summary Deletes a DataAgent workspace.
 *
 * @param request DeleteDataAgentWorkspaceRequest
 * @return DeleteDataAgentWorkspaceResponse
 */
DeleteDataAgentWorkspaceResponse Client::deleteDataAgentWorkspace(const DeleteDataAgentWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataAgentWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Deletes a data lake database.
 *
 * @param request DeleteDataLakeDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataLakeDatabaseResponse
 */
DeleteDataLakeDatabaseResponse Client::deleteDataLakeDatabaseWithOptions(const DeleteDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataLakeDatabase"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataLakeDatabaseResponse>();
}

/**
 * @summary Deletes a data lake database.
 *
 * @param request DeleteDataLakeDatabaseRequest
 * @return DeleteDataLakeDatabaseResponse
 */
DeleteDataLakeDatabaseResponse Client::deleteDataLakeDatabase(const DeleteDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary Deletes a user-defined function in a data lake.
 *
 * @param request DeleteDataLakeFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataLakeFunctionResponse
 */
DeleteDataLakeFunctionResponse Client::deleteDataLakeFunctionWithOptions(const DeleteDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.getFunctionName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataLakeFunction"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataLakeFunctionResponse>();
}

/**
 * @summary Deletes a user-defined function in a data lake.
 *
 * @param request DeleteDataLakeFunctionRequest
 * @return DeleteDataLakeFunctionResponse
 */
DeleteDataLakeFunctionResponse Client::deleteDataLakeFunction(const DeleteDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary Deletes a partition from a data lake table.
 *
 * @param tmpReq DeleteDataLakePartitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataLakePartitionResponse
 */
DeleteDataLakePartitionResponse Client::deleteDataLakePartitionWithOptions(const DeleteDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteDataLakePartitionShrinkRequest request = DeleteDataLakePartitionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartitionValues()) {
    request.setPartitionValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPartitionValues(), "PartitionValues", "simple"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasIfExists()) {
    query["IfExists"] = request.getIfExists();
  }

  if (!!request.hasPartitionValuesShrink()) {
    query["PartitionValues"] = request.getPartitionValuesShrink();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataLakePartition"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataLakePartitionResponse>();
}

/**
 * @summary Deletes a partition from a data lake table.
 *
 * @param request DeleteDataLakePartitionRequest
 * @return DeleteDataLakePartitionResponse
 */
DeleteDataLakePartitionResponse Client::deleteDataLakePartition(const DeleteDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary Deletes a data lake table.
 *
 * @param request DeleteDataLakeTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataLakeTableResponse
 */
DeleteDataLakeTableResponse Client::deleteDataLakeTableWithOptions(const DeleteDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataLakeTable"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataLakeTableResponse>();
}

/**
 * @summary Deletes a data lake table.
 *
 * @param request DeleteDataLakeTableRequest
 * @return DeleteDataLakeTableResponse
 */
DeleteDataLakeTableResponse Client::deleteDataLakeTable(const DeleteDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLakeTableWithOptions(request, runtime);
}

/**
 * @summary Deletes a document from a specified knowledge base.
 *
 * @param request DeleteDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDocumentResponse
 */
DeleteDocumentResponse Client::deleteDocumentWithOptions(const DeleteDocumentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocumentName()) {
    body["DocumentName"] = request.getDocumentName();
  }

  if (!!request.hasKbUuid()) {
    body["KbUuid"] = request.getKbUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDocument"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDocumentResponse>();
}

/**
 * @summary Deletes a document from a specified knowledge base.
 *
 * @param request DeleteDocumentRequest
 * @return DeleteDocumentResponse
 */
DeleteDocumentResponse Client::deleteDocument(const DeleteDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDocumentWithOptions(request, runtime);
}

/**
 * @summary Deletes chunks from a document in a knowledge base.
 *
 * @param tmpReq DeleteDocumentChunksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDocumentChunksResponse
 */
DeleteDocumentChunksResponse Client::deleteDocumentChunksWithOptions(const DeleteDocumentChunksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteDocumentChunksShrinkRequest request = DeleteDocumentChunksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChunkIds()) {
    request.setChunkIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChunkIds(), "ChunkIds", "json"));
  }

  json body = {};
  if (!!request.hasChunkIdsShrink()) {
    body["ChunkIds"] = request.getChunkIdsShrink();
  }

  if (!!request.hasDocumentName()) {
    body["DocumentName"] = request.getDocumentName();
  }

  if (!!request.hasKbUuid()) {
    body["KbUuid"] = request.getKbUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDocumentChunks"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDocumentChunksResponse>();
}

/**
 * @summary Deletes chunks from a document in a knowledge base.
 *
 * @param request DeleteDocumentChunksRequest
 * @return DeleteDocumentChunksResponse
 */
DeleteDocumentChunksResponse Client::deleteDocumentChunks(const DeleteDocumentChunksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDocumentChunksWithOptions(request, runtime);
}

/**
 * @summary DeleteFileUpload
 *
 * @param request DeleteFileUploadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFileUploadResponse
 */
DeleteFileUploadResponse Client::deleteFileUploadWithOptions(const DeleteFileUploadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallFrom()) {
    query["CallFrom"] = request.getCallFrom();
  }

  if (!!request.hasDmsUnit()) {
    query["DmsUnit"] = request.getDmsUnit();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFileUpload"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFileUploadResponse>();
}

/**
 * @summary DeleteFileUpload
 *
 * @param request DeleteFileUploadRequest
 * @return DeleteFileUploadResponse
 */
DeleteFileUploadResponse Client::deleteFileUpload(const DeleteFileUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFileUploadWithOptions(request, runtime);
}

/**
 * @summary Deletes a code file or directory from a workspace.
 *
 * @description This operation permanently removes a specified code file or directory.
 *
 * @param request DeleteWorkspaceCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkspaceCodeResponse
 */
DeleteWorkspaceCodeResponse Client::deleteWorkspaceCodeWithOptions(const DeleteWorkspaceCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasRepo()) {
    query["Repo"] = request.getRepo();
  }

  if (!!request.hasSymlink()) {
    query["Symlink"] = request.getSymlink();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkspaceCode"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkspaceCodeResponse>();
}

/**
 * @summary Deletes a code file or directory from a workspace.
 *
 * @description This operation permanently removes a specified code file or directory.
 *
 * @param request DeleteWorkspaceCodeRequest
 * @return DeleteWorkspaceCodeResponse
 */
DeleteWorkspaceCodeResponse Client::deleteWorkspaceCode(const DeleteWorkspaceCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkspaceCodeWithOptions(request, runtime);
}

/**
 * @summary `DescribeCustomAgent` retrieves the details of a custom agent by its agent ID.
 *
 * @param request DescribeCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomAgentResponse
 */
DescribeCustomAgentResponse Client::describeCustomAgentWithOptions(const DescribeCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomAgentId()) {
    query["CustomAgentId"] = request.getCustomAgentId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomAgent"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomAgentResponse>();
}

/**
 * @summary `DescribeCustomAgent` retrieves the details of a custom agent by its agent ID.
 *
 * @param request DescribeCustomAgentRequest
 * @return DescribeCustomAgentResponse
 */
DescribeCustomAgentResponse Client::describeCustomAgent(const DescribeCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Retrieves the description of a DataAgent session.
 *
 * @param request DescribeDataAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataAgentSessionResponse
 */
DescribeDataAgentSessionResponse Client::describeDataAgentSessionWithOptions(const DescribeDataAgentSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataAgentSession"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataAgentSessionResponse>();
}

/**
 * @summary Retrieves the description of a DataAgent session.
 *
 * @param request DescribeDataAgentSessionRequest
 * @return DescribeDataAgentSessionResponse
 */
DescribeDataAgentSessionResponse Client::describeDataAgentSession(const DescribeDataAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataAgentSessionWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specific document.
 *
 * @param request DescribeDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDocumentResponse
 */
DescribeDocumentResponse Client::describeDocumentWithOptions(const DescribeDocumentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocumentName()) {
    body["DocumentName"] = request.getDocumentName();
  }

  if (!!request.hasKbUuid()) {
    body["KbUuid"] = request.getKbUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeDocument"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDocumentResponse>();
}

/**
 * @summary Retrieves the details of a specific document.
 *
 * @param request DescribeDocumentRequest
 * @return DescribeDocumentResponse
 */
DescribeDocumentResponse Client::describeDocument(const DescribeDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDocumentWithOptions(request, runtime);
}

/**
 * @summary DescribeFileUploadSignature
 *
 * @param request DescribeFileUploadSignatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFileUploadSignatureResponse
 */
DescribeFileUploadSignatureResponse Client::describeFileUploadSignatureWithOptions(const DescribeFileUploadSignatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallFrom()) {
    query["CallFrom"] = request.getCallFrom();
  }

  if (!!request.hasDmsUnit()) {
    query["DmsUnit"] = request.getDmsUnit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFileUploadSignature"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFileUploadSignatureResponse>();
}

/**
 * @summary DescribeFileUploadSignature
 *
 * @param request DescribeFileUploadSignatureRequest
 * @return DescribeFileUploadSignatureResponse
 */
DescribeFileUploadSignatureResponse Client::describeFileUploadSignature(const DescribeFileUploadSignatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFileUploadSignatureWithOptions(request, runtime);
}

/**
 * @summary Retrieves the statistics of a knowledge base.
 *
 * @param request DescribeKnowledgeBaseStatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKnowledgeBaseStatsResponse
 */
DescribeKnowledgeBaseStatsResponse Client::describeKnowledgeBaseStatsWithOptions(const DescribeKnowledgeBaseStatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKbUuid()) {
    query["KbUuid"] = request.getKbUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeKnowledgeBaseStats"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKnowledgeBaseStatsResponse>();
}

/**
 * @summary Retrieves the statistics of a knowledge base.
 *
 * @param request DescribeKnowledgeBaseStatsRequest
 * @return DescribeKnowledgeBaseStatsResponse
 */
DescribeKnowledgeBaseStatsResponse Client::describeKnowledgeBaseStats(const DescribeKnowledgeBaseStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKnowledgeBaseStatsWithOptions(request, runtime);
}

/**
 * @summary Generates a signature to upload a document to a knowledge base.
 *
 * @param request DescribeKnowledgeBaseUploadSignatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKnowledgeBaseUploadSignatureResponse
 */
DescribeKnowledgeBaseUploadSignatureResponse Client::describeKnowledgeBaseUploadSignatureWithOptions(const DescribeKnowledgeBaseUploadSignatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKbUuid()) {
    query["KbUuid"] = request.getKbUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeKnowledgeBaseUploadSignature"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKnowledgeBaseUploadSignatureResponse>();
}

/**
 * @summary Generates a signature to upload a document to a knowledge base.
 *
 * @param request DescribeKnowledgeBaseUploadSignatureRequest
 * @return DescribeKnowledgeBaseUploadSignatureResponse
 */
DescribeKnowledgeBaseUploadSignatureResponse Client::describeKnowledgeBaseUploadSignature(const DescribeKnowledgeBaseUploadSignatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKnowledgeBaseUploadSignatureWithOptions(request, runtime);
}

/**
 * @summary FileUploadCallback
 *
 * @param request FileUploadCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FileUploadCallbackResponse
 */
FileUploadCallbackResponse Client::fileUploadCallbackWithOptions(const FileUploadCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallFrom()) {
    query["CallFrom"] = request.getCallFrom();
  }

  if (!!request.hasDmsUnit()) {
    query["DmsUnit"] = request.getDmsUnit();
  }

  if (!!request.hasFileSize()) {
    query["FileSize"] = request.getFileSize();
  }

  if (!!request.hasFilename()) {
    query["Filename"] = request.getFilename();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.getOssBucket();
  }

  if (!!request.hasUploadLocation()) {
    query["UploadLocation"] = request.getUploadLocation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FileUploadCallback"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FileUploadCallbackResponse>();
}

/**
 * @summary FileUploadCallback
 *
 * @param request FileUploadCallbackRequest
 * @return FileUploadCallbackResponse
 */
FileUploadCallbackResponse Client::fileUploadCallback(const FileUploadCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fileUploadCallbackWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration and status of an Airflow instance.
 *
 * @param request GetAirflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAirflowResponse
 */
GetAirflowResponse Client::getAirflowWithOptions(const GetAirflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAirflowId()) {
    query["AirflowId"] = request.getAirflowId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAirflow"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAirflowResponse>();
}

/**
 * @summary Queries the configuration and status of an Airflow instance.
 *
 * @param request GetAirflowRequest
 * @return GetAirflowResponse
 */
GetAirflowResponse Client::getAirflow(const GetAirflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAirflowWithOptions(request, runtime);
}

/**
 * @summary Retrieves chat content from a specific checkpoint by specifying a session ID and an agent ID.
 *
 * @description ## Request
 * - The response is an SSE stream. Each event follows the`SSEEvent` schema and includes metadata, such as the message level.
 * - The `content` field contains either message text or a JSON object, as determined by the `content_type` field.
 *
 * @param request GetChatContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatContentResponse
 */
FutureGenerator<GetChatContentResponse> Client::getChatContentWithSSE(const GetChatContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasCheckpoint()) {
    query["Checkpoint"] = request.getCheckpoint();
  }

  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatContent"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
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
      })).get<GetChatContentResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Retrieves chat content from a specific checkpoint by specifying a session ID and an agent ID.
 *
 * @description ## Request
 * - The response is an SSE stream. Each event follows the`SSEEvent` schema and includes metadata, such as the message level.
 * - The `content` field contains either message text or a JSON object, as determined by the `content_type` field.
 *
 * @param request GetChatContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatContentResponse
 */
GetChatContentResponse Client::getChatContentWithOptions(const GetChatContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasCheckpoint()) {
    query["Checkpoint"] = request.getCheckpoint();
  }

  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatContent"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatContentResponse>();
}

/**
 * @summary Retrieves chat content from a specific checkpoint by specifying a session ID and an agent ID.
 *
 * @description ## Request
 * - The response is an SSE stream. Each event follows the`SSEEvent` schema and includes metadata, such as the message level.
 * - The `content` field contains either message text or a JSON object, as determined by the `content_type` field.
 *
 * @param request GetChatContentRequest
 * @return GetChatContentResponse
 */
GetChatContentResponse Client::getChatContent(const GetChatContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatContentWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about a RAM user that belongs to an Alibaba Cloud account.
 *
 * @param request GetDataAgentSubAccountInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataAgentSubAccountInfoResponse
 */
GetDataAgentSubAccountInfoResponse Client::getDataAgentSubAccountInfoWithOptions(const GetDataAgentSubAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDmsUnit()) {
    query["DmsUnit"] = request.getDmsUnit();
  }

  if (!!request.hasSubAccountId()) {
    query["SubAccountId"] = request.getSubAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataAgentSubAccountInfo"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataAgentSubAccountInfoResponse>();
}

/**
 * @summary Retrieves information about a RAM user that belongs to an Alibaba Cloud account.
 *
 * @param request GetDataAgentSubAccountInfoRequest
 * @return GetDataAgentSubAccountInfoResponse
 */
GetDataAgentSubAccountInfoResponse Client::getDataAgentSubAccountInfo(const GetDataAgentSubAccountInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataAgentSubAccountInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a collaborative workspace.
 *
 * @param request GetDataAgentWorkspaceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataAgentWorkspaceInfoResponse
 */
GetDataAgentWorkspaceInfoResponse Client::getDataAgentWorkspaceInfoWithOptions(const GetDataAgentWorkspaceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataAgentWorkspaceInfo"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataAgentWorkspaceInfoResponse>();
}

/**
 * @summary Retrieves the details of a collaborative workspace.
 *
 * @param request GetDataAgentWorkspaceInfoRequest
 * @return GetDataAgentWorkspaceInfoResponse
 */
GetDataAgentWorkspaceInfoResponse Client::getDataAgentWorkspaceInfo(const GetDataAgentWorkspaceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataAgentWorkspaceInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the data catalog of a data lake.
 *
 * @param request GetDataLakeCatalogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataLakeCatalogResponse
 */
GetDataLakeCatalogResponse Client::getDataLakeCatalogWithOptions(const GetDataLakeCatalogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataLakeCatalog"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataLakeCatalogResponse>();
}

/**
 * @summary Retrieves the data catalog of a data lake.
 *
 * @param request GetDataLakeCatalogRequest
 * @return GetDataLakeCatalogResponse
 */
GetDataLakeCatalogResponse Client::getDataLakeCatalog(const GetDataLakeCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakeCatalogWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about a database in a data lake.
 *
 * @param request GetDataLakeDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataLakeDatabaseResponse
 */
GetDataLakeDatabaseResponse Client::getDataLakeDatabaseWithOptions(const GetDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataLakeDatabase"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataLakeDatabaseResponse>();
}

/**
 * @summary Retrieves information about a database in a data lake.
 *
 * @param request GetDataLakeDatabaseRequest
 * @return GetDataLakeDatabaseResponse
 */
GetDataLakeDatabaseResponse Client::getDataLakeDatabase(const GetDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a user-defined function in a data lake.
 *
 * @param request GetDataLakeFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataLakeFunctionResponse
 */
GetDataLakeFunctionResponse Client::getDataLakeFunctionWithOptions(const GetDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.getFunctionName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataLakeFunction"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataLakeFunctionResponse>();
}

/**
 * @summary Retrieves the details of a user-defined function in a data lake.
 *
 * @param request GetDataLakeFunctionRequest
 * @return GetDataLakeFunctionResponse
 */
GetDataLakeFunctionResponse Client::getDataLakeFunction(const GetDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a data lakehouse table partition.
 *
 * @param tmpReq GetDataLakePartitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataLakePartitionResponse
 */
GetDataLakePartitionResponse Client::getDataLakePartitionWithOptions(const GetDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDataLakePartitionShrinkRequest request = GetDataLakePartitionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartitionValues()) {
    request.setPartitionValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPartitionValues(), "PartitionValues", "simple"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasPartitionValuesShrink()) {
    query["PartitionValues"] = request.getPartitionValuesShrink();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataLakePartition"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataLakePartitionResponse>();
}

/**
 * @summary Retrieves the details of a data lakehouse table partition.
 *
 * @param request GetDataLakePartitionRequest
 * @return GetDataLakePartitionResponse
 */
GetDataLakePartitionResponse Client::getDataLakePartition(const GetDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about a table in a data lake.
 *
 * @param request GetDataLakeTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataLakeTableResponse
 */
GetDataLakeTableResponse Client::getDataLakeTableWithOptions(const GetDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataLakeTable"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataLakeTableResponse>();
}

/**
 * @summary Retrieves information about a table in a data lake.
 *
 * @param request GetDataLakeTableRequest
 * @return GetDataLakeTableResponse
 */
GetDataLakeTableResponse Client::getDataLakeTable(const GetDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakeTableWithOptions(request, runtime);
}

/**
 * @summary Submits a task to schedule and run a Notebook file.
 *
 * @param request GetNotebookAndSubmitTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNotebookAndSubmitTaskResponse
 */
GetNotebookAndSubmitTaskResponse Client::getNotebookAndSubmitTaskWithOptions(const GetNotebookAndSubmitTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasParams()) {
    body["Params"] = request.getParams();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.getPath();
  }

  if (!!request.hasRetry()) {
    body["Retry"] = request.getRetry();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetNotebookAndSubmitTask"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNotebookAndSubmitTaskResponse>();
}

/**
 * @summary Submits a task to schedule and run a Notebook file.
 *
 * @param request GetNotebookAndSubmitTaskRequest
 * @return GetNotebookAndSubmitTaskResponse
 */
GetNotebookAndSubmitTaskResponse Client::getNotebookAndSubmitTask(const GetNotebookAndSubmitTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNotebookAndSubmitTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves the execution status of a Notebook task.
 *
 * @param request GetNotebookTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNotebookTaskStatusResponse
 */
GetNotebookTaskStatusResponse Client::getNotebookTaskStatusWithOptions(const GetNotebookTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNotebookTaskStatus"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNotebookTaskStatusResponse>();
}

/**
 * @summary Retrieves the execution status of a Notebook task.
 *
 * @param request GetNotebookTaskStatusRequest
 * @return GetNotebookTaskStatusResponse
 */
GetNotebookTaskStatusResponse Client::getNotebookTaskStatus(const GetNotebookTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNotebookTaskStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the operation logs of the SQL window.
 *
 * @param request GetSqlConsoleOperationLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSqlConsoleOperationLogResponse
 */
GetSqlConsoleOperationLogResponse Client::getSqlConsoleOperationLogWithOptions(const GetSqlConsoleOperationLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSchema()) {
    query["Schema"] = request.getSchema();
  }

  if (!!request.hasSqlType()) {
    query["SqlType"] = request.getSqlType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSqlConsoleOperationLog"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSqlConsoleOperationLogResponse>();
}

/**
 * @summary Queries the operation logs of the SQL window.
 *
 * @param request GetSqlConsoleOperationLogRequest
 * @return GetSqlConsoleOperationLogResponse
 */
GetSqlConsoleOperationLogResponse Client::getSqlConsoleOperationLog(const GetSqlConsoleOperationLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSqlConsoleOperationLogWithOptions(request, runtime);
}

/**
 * @summary Reads the content of a code file in the workspace and returns the file content along with mtime (in the header).
 *
 * @description Obtains the resource configuration limit information and the instance purchase status of the workspace.
 *
 * @param request GetWorkspaceCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceCodeResponse
 */
GetWorkspaceCodeResponse Client::getWorkspaceCodeWithOptions(const GetWorkspaceCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIac()) {
    query["Iac"] = request.getIac();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkspaceCode"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspaceCodeResponse>();
}

/**
 * @summary Reads the content of a code file in the workspace and returns the file content along with mtime (in the header).
 *
 * @description Obtains the resource configuration limit information and the instance purchase status of the workspace.
 *
 * @param request GetWorkspaceCodeRequest
 * @return GetWorkspaceCodeResponse
 */
GetWorkspaceCodeResponse Client::getWorkspaceCode(const GetWorkspaceCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkspaceCodeWithOptions(request, runtime);
}

/**
 * @summary Retrieves the deployment configuration of a workspace.
 *
 * @description This operation retrieves the deployment configuration of a workspace. The configuration includes details such as repository and branch information, and directories to exclude.
 *
 * @param request GetWorkspaceCodePublishSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceCodePublishSettingResponse
 */
GetWorkspaceCodePublishSettingResponse Client::getWorkspaceCodePublishSettingWithOptions(const GetWorkspaceCodePublishSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkspaceCodePublishSetting"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspaceCodePublishSettingResponse>();
}

/**
 * @summary Retrieves the deployment configuration of a workspace.
 *
 * @description This operation retrieves the deployment configuration of a workspace. The configuration includes details such as repository and branch information, and directories to exclude.
 *
 * @param request GetWorkspaceCodePublishSettingRequest
 * @return GetWorkspaceCodePublishSettingResponse
 */
GetWorkspaceCodePublishSettingResponse Client::getWorkspaceCodePublishSetting(const GetWorkspaceCodePublishSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkspaceCodePublishSettingWithOptions(request, runtime);
}

/**
 * @summary Returns the quota for a workspace.
 *
 * @description Retrieves the resource quotas and instance status for a workspace.
 *
 * @param request GetWorkspaceQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceQuotaResponse
 */
GetWorkspaceQuotaResponse Client::getWorkspaceQuotaWithOptions(const GetWorkspaceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkspaceQuota"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspaceQuotaResponse>();
}

/**
 * @summary Returns the quota for a workspace.
 *
 * @description Retrieves the resource quotas and instance status for a workspace.
 *
 * @param request GetWorkspaceQuotaRequest
 * @return GetWorkspaceQuotaResponse
 */
GetWorkspaceQuotaResponse Client::getWorkspaceQuota(const GetWorkspaceQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkspaceQuotaWithOptions(request, runtime);
}

/**
 * @summary Lists the available Airflow versions.
 *
 * @description Lists the available Airflow versions.
 *
 * @param request ListAirflowVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAirflowVersionsResponse
 */
ListAirflowVersionsResponse Client::listAirflowVersionsWithOptions(const ListAirflowVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAirflowVersions"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAirflowVersionsResponse>();
}

/**
 * @summary Lists the available Airflow versions.
 *
 * @description Lists the available Airflow versions.
 *
 * @param request ListAirflowVersionsRequest
 * @return ListAirflowVersionsResponse
 */
ListAirflowVersionsResponse Client::listAirflowVersions(const ListAirflowVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAirflowVersionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of Airflow instances in a workspace.
 *
 * @param request ListAirflowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAirflowsResponse
 */
ListAirflowsResponse Client::listAirflowsWithOptions(const ListAirflowsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAirflows"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAirflowsResponse>();
}

/**
 * @summary Retrieves a list of Airflow instances in a workspace.
 *
 * @param request ListAirflowsRequest
 * @return ListAirflowsResponse
 */
ListAirflowsResponse Client::listAirflows(const ListAirflowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAirflowsWithOptions(request, runtime);
}

/**
 * @summary ListCustomAgent returns a list of all custom agents from the personal space and workspaces.
 *
 * @param request ListCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomAgentResponse
 */
ListCustomAgentResponse Client::listCustomAgentWithOptions(const ListCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryAllReleased()) {
    query["QueryAllReleased"] = request.getQueryAllReleased();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomAgent"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomAgentResponse>();
}

/**
 * @summary ListCustomAgent returns a list of all custom agents from the personal space and workspaces.
 *
 * @param request ListCustomAgentRequest
 * @return ListCustomAgentResponse
 */
ListCustomAgentResponse Client::listCustomAgent(const ListCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of historical session descriptions for a Data Agent.
 *
 * @param request ListDataAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataAgentSessionResponse
 */
ListDataAgentSessionResponse Client::listDataAgentSessionWithOptions(const ListDataAgentSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateEndTime()) {
    query["CreateEndTime"] = request.getCreateEndTime();
  }

  if (!!request.hasCreateStartTime()) {
    query["CreateStartTime"] = request.getCreateStartTime();
  }

  if (!!request.hasCustomAgentId()) {
    query["CustomAgentId"] = request.getCustomAgentId();
  }

  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasIsSaved()) {
    query["IsSaved"] = request.getIsSaved();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataAgentSession"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataAgentSessionResponse>();
}

/**
 * @summary Retrieves the list of historical session descriptions for a Data Agent.
 *
 * @param request ListDataAgentSessionRequest
 * @return ListDataAgentSessionResponse
 */
ListDataAgentSessionResponse Client::listDataAgentSession(const ListDataAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataAgentSessionWithOptions(request, runtime);
}

/**
 * @summary Retrieves the collaborative workspaces under the primary account with pagination.
 *
 * @param request ListDataAgentWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataAgentWorkspaceResponse
 */
ListDataAgentWorkspaceResponse Client::listDataAgentWorkspaceWithOptions(const ListDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasWorkspaceName()) {
    query["WorkspaceName"] = request.getWorkspaceName();
  }

  if (!!request.hasWorkspaceType()) {
    query["WorkspaceType"] = request.getWorkspaceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataAgentWorkspace"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataAgentWorkspaceResponse>();
}

/**
 * @summary Retrieves the collaborative workspaces under the primary account with pagination.
 *
 * @param request ListDataAgentWorkspaceRequest
 * @return ListDataAgentWorkspaceResponse
 */
ListDataAgentWorkspaceResponse Client::listDataAgentWorkspace(const ListDataAgentWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataAgentWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Lists all members in a workspace.
 *
 * @param request ListDataAgentWorkspaceMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataAgentWorkspaceMemberResponse
 */
ListDataAgentWorkspaceMemberResponse Client::listDataAgentWorkspaceMemberWithOptions(const ListDataAgentWorkspaceMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchMemberId()) {
    query["SearchMemberId"] = request.getSearchMemberId();
  }

  if (!!request.hasSearchRoleName()) {
    query["SearchRoleName"] = request.getSearchRoleName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataAgentWorkspaceMember"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataAgentWorkspaceMemberResponse>();
}

/**
 * @summary Lists all members in a workspace.
 *
 * @param request ListDataAgentWorkspaceMemberRequest
 * @return ListDataAgentWorkspaceMemberResponse
 */
ListDataAgentWorkspaceMemberResponse Client::listDataAgentWorkspaceMember(const ListDataAgentWorkspaceMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataAgentWorkspaceMemberWithOptions(request, runtime);
}

/**
 * @summary Lists user-uploaded files in a data center, excluding databases.
 *
 * @param request ListDataCenterDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataCenterDatabaseResponse
 */
ListDataCenterDatabaseResponse Client::listDataCenterDatabaseWithOptions(const ListDataCenterDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallFrom()) {
    query["CallFrom"] = request.getCallFrom();
  }

  if (!!request.hasDmsUnit()) {
    query["DmsUnit"] = request.getDmsUnit();
  }

  if (!!request.hasImportType()) {
    query["ImportType"] = request.getImportType();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataCenterDatabase"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataCenterDatabaseResponse>();
}

/**
 * @summary Lists user-uploaded files in a data center, excluding databases.
 *
 * @param request ListDataCenterDatabaseRequest
 * @return ListDataCenterDatabaseResponse
 */
ListDataCenterDatabaseResponse Client::listDataCenterDatabase(const ListDataCenterDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataCenterDatabaseWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of user-uploaded tables from the data center, for file types only.
 *
 * @param request ListDataCenterTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataCenterTableResponse
 */
ListDataCenterTableResponse Client::listDataCenterTableWithOptions(const ListDataCenterTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallFrom()) {
    query["CallFrom"] = request.getCallFrom();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasDmsUnit()) {
    query["DmsUnit"] = request.getDmsUnit();
  }

  if (!!request.hasImportType()) {
    query["ImportType"] = request.getImportType();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataCenterTable"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataCenterTableResponse>();
}

/**
 * @summary Retrieves a list of user-uploaded tables from the data center, for file types only.
 *
 * @param request ListDataCenterTableRequest
 * @return ListDataCenterTableResponse
 */
ListDataCenterTableResponse Client::listDataCenterTable(const ListDataCenterTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataCenterTableWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of data lake catalogs.
 *
 * @param request ListDataLakeCatalogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakeCatalogResponse
 */
ListDataLakeCatalogResponse Client::listDataLakeCatalogWithOptions(const ListDataLakeCatalogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakeCatalog"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakeCatalogResponse>();
}

/**
 * @summary Retrieves a list of data lake catalogs.
 *
 * @param request ListDataLakeCatalogRequest
 * @return ListDataLakeCatalogResponse
 */
ListDataLakeCatalogResponse Client::listDataLakeCatalog(const ListDataLakeCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeCatalogWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of databases in a data lake.
 *
 * @param request ListDataLakeDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakeDatabaseResponse
 */
ListDataLakeDatabaseResponse Client::listDataLakeDatabaseWithOptions(const ListDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakeDatabase"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakeDatabaseResponse>();
}

/**
 * @summary Retrieves a list of databases in a data lake.
 *
 * @param request ListDataLakeDatabaseRequest
 * @return ListDataLakeDatabaseResponse
 */
ListDataLakeDatabaseResponse Client::listDataLakeDatabase(const ListDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of data lake functions.
 *
 * @param request ListDataLakeFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakeFunctionResponse
 */
ListDataLakeFunctionResponse Client::listDataLakeFunctionWithOptions(const ListDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasFunctionNamePattern()) {
    query["FunctionNamePattern"] = request.getFunctionNamePattern();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakeFunction"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakeFunctionResponse>();
}

/**
 * @summary Retrieves a list of data lake functions.
 *
 * @param request ListDataLakeFunctionRequest
 * @return ListDataLakeFunctionResponse
 */
ListDataLakeFunctionResponse Client::listDataLakeFunction(const ListDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of data lake function names.
 *
 * @param request ListDataLakeFunctionNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakeFunctionNameResponse
 */
ListDataLakeFunctionNameResponse Client::listDataLakeFunctionNameWithOptions(const ListDataLakeFunctionNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasFunctionNamePattern()) {
    query["FunctionNamePattern"] = request.getFunctionNamePattern();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakeFunctionName"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakeFunctionNameResponse>();
}

/**
 * @summary Retrieves a list of data lake function names.
 *
 * @param request ListDataLakeFunctionNameRequest
 * @return ListDataLakeFunctionNameResponse
 */
ListDataLakeFunctionNameResponse Client::listDataLakeFunctionName(const ListDataLakeFunctionNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeFunctionNameWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of partitions of a data lake table.
 *
 * @param tmpReq ListDataLakePartitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakePartitionResponse
 */
ListDataLakePartitionResponse Client::listDataLakePartitionWithOptions(const ListDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataLakePartitionShrinkRequest request = ListDataLakePartitionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartNames()) {
    request.setPartNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPartNames(), "PartNames", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasPartNamesShrink()) {
    body["PartNames"] = request.getPartNamesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataLakePartition"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakePartitionResponse>();
}

/**
 * @summary Retrieves the list of partitions of a data lake table.
 *
 * @param request ListDataLakePartitionRequest
 * @return ListDataLakePartitionResponse
 */
ListDataLakePartitionResponse Client::listDataLakePartition(const ListDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of partitions for a data lake table based on filter conditions.
 *
 * @param request ListDataLakePartitionByFilterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakePartitionByFilterResponse
 */
ListDataLakePartitionByFilterResponse Client::listDataLakePartitionByFilterWithOptions(const ListDataLakePartitionByFilterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataLakePartitionByFilter"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakePartitionByFilterResponse>();
}

/**
 * @summary Retrieves a list of partitions for a data lake table based on filter conditions.
 *
 * @param request ListDataLakePartitionByFilterRequest
 * @return ListDataLakePartitionByFilterResponse
 */
ListDataLakePartitionByFilterResponse Client::listDataLakePartitionByFilter(const ListDataLakePartitionByFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakePartitionByFilterWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of partition names for a data lake table.
 *
 * @param request ListDataLakePartitionNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakePartitionNameResponse
 */
ListDataLakePartitionNameResponse Client::listDataLakePartitionNameWithOptions(const ListDataLakePartitionNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakePartitionName"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakePartitionNameResponse>();
}

/**
 * @summary Retrieves a list of partition names for a data lake table.
 *
 * @param request ListDataLakePartitionNameRequest
 * @return ListDataLakePartitionNameResponse
 */
ListDataLakePartitionNameResponse Client::listDataLakePartitionName(const ListDataLakePartitionNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakePartitionNameWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of data lake tables.
 *
 * @param request ListDataLakeTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakeTableResponse
 */
ListDataLakeTableResponse Client::listDataLakeTableWithOptions(const ListDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTableNamePattern()) {
    query["TableNamePattern"] = request.getTableNamePattern();
  }

  if (!!request.hasTableType()) {
    query["TableType"] = request.getTableType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakeTable"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakeTableResponse>();
}

/**
 * @summary Retrieves a list of data lake tables.
 *
 * @param request ListDataLakeTableRequest
 * @return ListDataLakeTableResponse
 */
ListDataLakeTableResponse Client::listDataLakeTable(const ListDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeTableWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of data lake table names.
 *
 * @param request ListDataLakeTableNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakeTableNameResponse
 */
ListDataLakeTableNameResponse Client::listDataLakeTableNameWithOptions(const ListDataLakeTableNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTableNamePattern()) {
    query["TableNamePattern"] = request.getTableNamePattern();
  }

  if (!!request.hasTableType()) {
    query["TableType"] = request.getTableType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakeTableName"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakeTableNameResponse>();
}

/**
 * @summary Retrieves a list of data lake table names.
 *
 * @param request ListDataLakeTableNameRequest
 * @return ListDataLakeTableNameResponse
 */
ListDataLakeTableNameResponse Client::listDataLakeTableName(const ListDataLakeTableNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeTableNameWithOptions(request, runtime);
}

/**
 * @summary Retrieves the basic information about tables in a data lake.
 *
 * @param request ListDataLakeTablebaseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLakeTablebaseInfoResponse
 */
ListDataLakeTablebaseInfoResponse Client::listDataLakeTablebaseInfoWithOptions(const ListDataLakeTablebaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasRows()) {
    query["Rows"] = request.getRows();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLakeTablebaseInfo"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLakeTablebaseInfoResponse>();
}

/**
 * @summary Retrieves the basic information about tables in a data lake.
 *
 * @param request ListDataLakeTablebaseInfoRequest
 * @return ListDataLakeTablebaseInfoResponse
 */
ListDataLakeTablebaseInfoResponse Client::listDataLakeTablebaseInfo(const ListDataLakeTablebaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeTablebaseInfoWithOptions(request, runtime);
}

/**
 * @summary Queries a list of chunks.
 *
 * @param request ListDocumentChunksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDocumentChunksResponse
 */
ListDocumentChunksResponse Client::listDocumentChunksWithOptions(const ListDocumentChunksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChunkTitlePattern()) {
    body["ChunkTitlePattern"] = request.getChunkTitlePattern();
  }

  if (!!request.hasDocumentName()) {
    body["DocumentName"] = request.getDocumentName();
  }

  if (!!request.hasKbUuid()) {
    body["KbUuid"] = request.getKbUuid();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSortFieldName()) {
    body["SortFieldName"] = request.getSortFieldName();
  }

  if (!!request.hasSortOrder()) {
    body["SortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDocumentChunks"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDocumentChunksResponse>();
}

/**
 * @summary Queries a list of chunks.
 *
 * @param request ListDocumentChunksRequest
 * @return ListDocumentChunksResponse
 */
ListDocumentChunksResponse Client::listDocumentChunks(const ListDocumentChunksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDocumentChunksWithOptions(request, runtime);
}

/**
 * @summary Lists the documents in a knowledge base.
 *
 * @param request ListDocumentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDocumentsResponse
 */
ListDocumentsResponse Client::listDocumentsWithOptions(const ListDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFilters()) {
    body["Filters"] = request.getFilters();
  }

  if (!!request.hasKbUuid()) {
    body["KbUuid"] = request.getKbUuid();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNamePattern()) {
    body["NamePattern"] = request.getNamePattern();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSortFieldName()) {
    body["SortFieldName"] = request.getSortFieldName();
  }

  if (!!request.hasSortOrder()) {
    body["SortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDocuments"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDocumentsResponse>();
}

/**
 * @summary Lists the documents in a knowledge base.
 *
 * @param request ListDocumentsRequest
 * @return ListDocumentsResponse
 */
ListDocumentsResponse Client::listDocuments(const ListDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDocumentsWithOptions(request, runtime);
}

/**
 * @summary ListFileUpload
 *
 * @param request ListFileUploadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFileUploadResponse
 */
ListFileUploadResponse Client::listFileUploadWithOptions(const ListFileUploadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallFrom()) {
    query["CallFrom"] = request.getCallFrom();
  }

  if (!!request.hasDmsUnit()) {
    query["DmsUnit"] = request.getDmsUnit();
  }

  if (!!request.hasDownloadLinkExpire()) {
    query["DownloadLinkExpire"] = request.getDownloadLinkExpire();
  }

  if (!!request.hasFileCategory()) {
    query["FileCategory"] = request.getFileCategory();
  }

  if (!!request.hasFileFrom()) {
    query["FileFrom"] = request.getFileFrom();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSortColumn()) {
    query["SortColumn"] = request.getSortColumn();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.getSortDirection();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFileUpload"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFileUploadResponse>();
}

/**
 * @summary ListFileUpload
 *
 * @param request ListFileUploadRequest
 * @return ListFileUploadResponse
 */
ListFileUploadResponse Client::listFileUpload(const ListFileUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFileUploadWithOptions(request, runtime);
}

/**
 * @summary Returns a paginated list of knowledge bases.
 *
 * @param request ListKnowledgeBasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKnowledgeBasesResponse
 */
ListKnowledgeBasesResponse Client::listKnowledgeBasesWithOptions(const ListKnowledgeBasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFilters()) {
    body["Filters"] = request.getFilters();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNamePattern()) {
    body["NamePattern"] = request.getNamePattern();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSortFieldName()) {
    body["SortFieldName"] = request.getSortFieldName();
  }

  if (!!request.hasSortOrder()) {
    body["SortOrder"] = request.getSortOrder();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListKnowledgeBases"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKnowledgeBasesResponse>();
}

/**
 * @summary Returns a paginated list of knowledge bases.
 *
 * @param request ListKnowledgeBasesRequest
 * @return ListKnowledgeBasesResponse
 */
ListKnowledgeBasesResponse Client::listKnowledgeBases(const ListKnowledgeBasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKnowledgeBasesWithOptions(request, runtime);
}

/**
 * @summary Lists code files and directories at a specified path in a workspace.
 *
 * @description This operation lists the code files and directories at a specified path in a workspace.
 *
 * @param request ListWorkspaceCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspaceCodeResponse
 */
ListWorkspaceCodeResponse Client::listWorkspaceCodeWithOptions(const ListWorkspaceCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaceCode"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspaceCodeResponse>();
}

/**
 * @summary Lists code files and directories at a specified path in a workspace.
 *
 * @description This operation lists the code files and directories at a specified path in a workspace.
 *
 * @param request ListWorkspaceCodeRequest
 * @return ListWorkspaceCodeResponse
 */
ListWorkspaceCodeResponse Client::listWorkspaceCode(const ListWorkspaceCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkspaceCodeWithOptions(request, runtime);
}

/**
 * @summary Modify a custom agent in a personal space or workspace
 *
 * @param tmpReq ModifyCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustomAgentResponse
 */
ModifyCustomAgentResponse Client::modifyCustomAgentWithOptions(const ModifyCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyCustomAgentShrinkRequest request = ModifyCustomAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCallbackConfig()) {
    request.setCallbackConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallbackConfig(), "CallbackConfig", "json"));
  }

  if (!!tmpReq.hasExecutionConfig()) {
    request.setExecutionConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExecutionConfig(), "ExecutionConfig", "json"));
  }

  if (!!tmpReq.hasKnowledgeConfigList()) {
    request.setKnowledgeConfigListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKnowledgeConfigList(), "KnowledgeConfigList", "json"));
  }

  if (!!tmpReq.hasScheduleTaskConfig()) {
    request.setScheduleTaskConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScheduleTaskConfig(), "ScheduleTaskConfig", "json"));
  }

  json query = {};
  if (!!request.hasCallbackConfigShrink()) {
    query["CallbackConfig"] = request.getCallbackConfigShrink();
  }

  if (!!request.hasCustomAgentId()) {
    query["CustomAgentId"] = request.getCustomAgentId();
  }

  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasDataJson()) {
    query["DataJson"] = request.getDataJson();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExecutionConfigShrink()) {
    query["ExecutionConfig"] = request.getExecutionConfigShrink();
  }

  if (!!request.hasInstruction()) {
    query["Instruction"] = request.getInstruction();
  }

  if (!!request.hasKnowledge()) {
    query["Knowledge"] = request.getKnowledge();
  }

  if (!!request.hasKnowledgeConfigListShrink()) {
    query["KnowledgeConfigList"] = request.getKnowledgeConfigListShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRelatedSessionId()) {
    query["RelatedSessionId"] = request.getRelatedSessionId();
  }

  if (!!request.hasScheduleTaskConfigShrink()) {
    query["ScheduleTaskConfig"] = request.getScheduleTaskConfigShrink();
  }

  if (!!request.hasTextReportConfig()) {
    query["TextReportConfig"] = request.getTextReportConfig();
  }

  if (!!request.hasWebReportConfig()) {
    query["WebReportConfig"] = request.getWebReportConfig();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCustomAgent"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCustomAgentResponse>();
}

/**
 * @summary Modify a custom agent in a personal space or workspace
 *
 * @param request ModifyCustomAgentRequest
 * @return ModifyCustomAgentResponse
 */
ModifyCustomAgentResponse Client::modifyCustomAgent(const ModifyCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Operate custom agents in personal spaces and workspaces.
 *
 * @param request OperateCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateCustomAgentResponse
 */
OperateCustomAgentResponse Client::operateCustomAgentWithOptions(const OperateCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomAgentId()) {
    query["CustomAgentId"] = request.getCustomAgentId();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.getOperateType();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateCustomAgent"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateCustomAgentResponse>();
}

/**
 * @summary Operate custom agents in personal spaces and workspaces.
 *
 * @param request OperateCustomAgentRequest
 * @return OperateCustomAgentResponse
 */
OperateCustomAgentResponse Client::operateCustomAgent(const OperateCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Redeploy an Airflow instance
 *
 * @description Redeploys an Airflow instance.
 *
 * @param request RedeployAirflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RedeployAirflowResponse
 */
RedeployAirflowResponse Client::redeployAirflowWithOptions(const RedeployAirflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAirflowId()) {
    query["AirflowId"] = request.getAirflowId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RedeployAirflow"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RedeployAirflowResponse>();
}

/**
 * @summary Redeploy an Airflow instance
 *
 * @description Redeploys an Airflow instance.
 *
 * @param request RedeployAirflowRequest
 * @return RedeployAirflowResponse
 */
RedeployAirflowResponse Client::redeployAirflow(const RedeployAirflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return redeployAirflowWithOptions(request, runtime);
}

/**
 * @summary Removes a user from a workspace.
 *
 * @param request RemoveUserToDataAgentWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserToDataAgentWorkspaceResponse
 */
RemoveUserToDataAgentWorkspaceResponse Client::removeUserToDataAgentWorkspaceWithOptions(const RemoveUserToDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.getMemberId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUserToDataAgentWorkspace"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUserToDataAgentWorkspaceResponse>();
}

/**
 * @summary Removes a user from a workspace.
 *
 * @param request RemoveUserToDataAgentWorkspaceRequest
 * @return RemoveUserToDataAgentWorkspaceResponse
 */
RemoveUserToDataAgentWorkspaceResponse Client::removeUserToDataAgentWorkspace(const RemoveUserToDataAgentWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUserToDataAgentWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Query a knowledge base
 *
 * @param request RetrieveKnowledgeBaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetrieveKnowledgeBaseResponse
 */
RetrieveKnowledgeBaseResponse Client::retrieveKnowledgeBaseWithOptions(const RetrieveKnowledgeBaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasHybridSearch()) {
    body["HybridSearch"] = request.getHybridSearch();
  }

  if (!!request.hasHybridSearchArgs()) {
    body["HybridSearchArgs"] = request.getHybridSearchArgs();
  }

  if (!!request.hasIncludeMetadataFields()) {
    body["IncludeMetadataFields"] = request.getIncludeMetadataFields();
  }

  if (!!request.hasIncludeVector()) {
    body["IncludeVector"] = request.getIncludeVector();
  }

  if (!!request.hasKbUuid()) {
    body["KbUuid"] = request.getKbUuid();
  }

  if (!!request.hasMetrics()) {
    body["Metrics"] = request.getMetrics();
  }

  if (!!request.hasOffset()) {
    body["Offset"] = request.getOffset();
  }

  if (!!request.hasOrderBy()) {
    body["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasRecallWindow()) {
    body["RecallWindow"] = request.getRecallWindow();
  }

  if (!!request.hasRerankFactor()) {
    body["RerankFactor"] = request.getRerankFactor();
  }

  if (!!request.hasTopK()) {
    body["TopK"] = request.getTopK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RetrieveKnowledgeBase"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetrieveKnowledgeBaseResponse>();
}

/**
 * @summary Query a knowledge base
 *
 * @param request RetrieveKnowledgeBaseRequest
 * @return RetrieveKnowledgeBaseResponse
 */
RetrieveKnowledgeBaseResponse Client::retrieveKnowledgeBase(const RetrieveKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retrieveKnowledgeBaseWithOptions(request, runtime);
}

/**
 * @summary Saves workspace code. If the file does not exist, a new file is automatically created.
 *
 * @description 发布工作空间的代码
 *
 * @param request SaveWorkspaceCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveWorkspaceCodeResponse
 */
SaveWorkspaceCodeResponse Client::saveWorkspaceCodeWithOptions(const SaveWorkspaceCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasForce()) {
    body["Force"] = request.getForce();
  }

  if (!!request.hasIac()) {
    body["Iac"] = request.getIac();
  }

  if (!!request.hasMtime()) {
    body["Mtime"] = request.getMtime();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.getPath();
  }

  if (!!request.hasRepo()) {
    body["Repo"] = request.getRepo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveWorkspaceCode"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveWorkspaceCodeResponse>();
}

/**
 * @summary Saves workspace code. If the file does not exist, a new file is automatically created.
 *
 * @description 发布工作空间的代码
 *
 * @param request SaveWorkspaceCodeRequest
 * @return SaveWorkspaceCodeResponse
 */
SaveWorkspaceCodeResponse Client::saveWorkspaceCode(const SaveWorkspaceCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveWorkspaceCodeWithOptions(request, runtime);
}

/**
 * @summary Sends a user message to a specified session or cancels a session.
 *
 * @description ## Request description
 * - `agent_id` and `session_id` are required fields.
 * - `message_type` defaults to `primary`. To append information or cancel a session, set it to `additional` or `cancel`.
 * - `reply_to` indicates which Agent message this message is responding to. The default value is `0`.
 * - When `message_type` is `additional`, the `question` field is required.
 * - `quoted_message` can be used to quote the content of a previous user message.
 * - `data_source`, `dms_user`, `db_metadata`, `session_config`, and other fields are optional but provide more detailed context information.
 *
 * @param tmpReq SendChatMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendChatMessageResponse
 */
SendChatMessageResponse Client::sendChatMessageWithOptions(const SendChatMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendChatMessageShrinkRequest request = SendChatMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataSource()) {
    request.setDataSourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataSource(), "DataSource", "json"));
  }

  if (!!tmpReq.hasDataSources()) {
    request.setDataSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataSources(), "DataSources", "json"));
  }

  if (!!tmpReq.hasSessionConfig()) {
    request.setSessionConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSessionConfig(), "SessionConfig", "json"));
  }

  if (!!tmpReq.hasTaskConfig()) {
    request.setTaskConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskConfig(), "TaskConfig", "json"));
  }

  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasDataSourceShrink()) {
    query["DataSource"] = request.getDataSourceShrink();
  }

  if (!!request.hasDataSourcesShrink()) {
    query["DataSources"] = request.getDataSourcesShrink();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.getMessage();
  }

  if (!!request.hasMessageType()) {
    query["MessageType"] = request.getMessageType();
  }

  if (!!request.hasParentSessionId()) {
    query["ParentSessionId"] = request.getParentSessionId();
  }

  if (!!request.hasQuestion()) {
    query["Question"] = request.getQuestion();
  }

  if (!!request.hasQuotedMessage()) {
    query["QuotedMessage"] = request.getQuotedMessage();
  }

  if (!!request.hasReplyTo()) {
    query["ReplyTo"] = request.getReplyTo();
  }

  if (!!request.hasSessionConfigShrink()) {
    query["SessionConfig"] = request.getSessionConfigShrink();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTaskConfigShrink()) {
    query["TaskConfig"] = request.getTaskConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendChatMessage"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendChatMessageResponse>();
}

/**
 * @summary Sends a user message to a specified session or cancels a session.
 *
 * @description ## Request description
 * - `agent_id` and `session_id` are required fields.
 * - `message_type` defaults to `primary`. To append information or cancel a session, set it to `additional` or `cancel`.
 * - `reply_to` indicates which Agent message this message is responding to. The default value is `0`.
 * - When `message_type` is `additional`, the `question` field is required.
 * - `quoted_message` can be used to quote the content of a previous user message.
 * - `data_source`, `dms_user`, `db_metadata`, `session_config`, and other fields are optional but provide more detailed context information.
 *
 * @param request SendChatMessageRequest
 * @return SendChatMessageResponse
 */
SendChatMessageResponse Client::sendChatMessage(const SendChatMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendChatMessageWithOptions(request, runtime);
}

/**
 * @summary Sets the code deployment configuration for a workspace. This is an asynchronous operation that returns a key. Use this key to query the operation\\"s status by calling the WorkspaceActionStatus operation.
 *
 * @description Sets the default code deployment configuration for a workspace. This configuration includes the Git repository branch and the directories to exclude from deployment.
 *
 * @param request SetWorkspaceCodePublishSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetWorkspaceCodePublishSettingResponse
 */
SetWorkspaceCodePublishSettingResponse Client::setWorkspaceCodePublishSettingWithOptions(const SetWorkspaceCodePublishSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetWorkspaceCodePublishSetting"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetWorkspaceCodePublishSettingResponse>();
}

/**
 * @summary Sets the code deployment configuration for a workspace. This is an asynchronous operation that returns a key. Use this key to query the operation\\"s status by calling the WorkspaceActionStatus operation.
 *
 * @description Sets the default code deployment configuration for a workspace. This configuration includes the Git repository branch and the directories to exclude from deployment.
 *
 * @param request SetWorkspaceCodePublishSettingRequest
 * @return SetWorkspaceCodePublishSettingResponse
 */
SetWorkspaceCodePublishSettingResponse Client::setWorkspaceCodePublishSetting(const SetWorkspaceCodePublishSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setWorkspaceCodePublishSettingWithOptions(request, runtime);
}

/**
 * @summary Sets the quota for a workspace.
 *
 * @description Sets the quota for a specific workspace.
 *
 * @param request SetWorkspaceQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetWorkspaceQuotaResponse
 */
SetWorkspaceQuotaResponse Client::setWorkspaceQuotaWithOptions(const SetWorkspaceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCuQuota()) {
    query["CuQuota"] = request.getCuQuota();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetWorkspaceQuota"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetWorkspaceQuotaResponse>();
}

/**
 * @summary Sets the quota for a workspace.
 *
 * @description Sets the quota for a specific workspace.
 *
 * @param request SetWorkspaceQuotaRequest
 * @return SetWorkspaceQuotaResponse
 */
SetWorkspaceQuotaResponse Client::setWorkspaceQuota(const SetWorkspaceQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setWorkspaceQuotaWithOptions(request, runtime);
}

/**
 * @summary Updates the properties of an Airflow instance.
 *
 * @param tmpReq UpdateAirflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAirflowResponse
 */
UpdateAirflowResponse Client::updateAirflowWithOptions(const UpdateAirflowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAirflowShrinkRequest request = UpdateAirflowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataMountInfoList()) {
    request.setDataMountInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataMountInfoList(), "DataMountInfoList", "json"));
  }

  json query = {};
  if (!!request.hasAirflowId()) {
    query["AirflowId"] = request.getAirflowId();
  }

  if (!!request.hasAirflowName()) {
    query["AirflowName"] = request.getAirflowName();
  }

  if (!!request.hasAppSpec()) {
    query["AppSpec"] = request.getAppSpec();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDagsDir()) {
    query["DagsDir"] = request.getDagsDir();
  }

  if (!!request.hasDataMountInfoListShrink()) {
    query["DataMountInfoList"] = request.getDataMountInfoListShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnableServerless()) {
    query["EnableServerless"] = request.getEnableServerless();
  }

  if (!!request.hasGracefulShutdownTimeout()) {
    query["GracefulShutdownTimeout"] = request.getGracefulShutdownTimeout();
  }

  if (!!request.hasPluginsDir()) {
    query["PluginsDir"] = request.getPluginsDir();
  }

  if (!!request.hasRequirementFile()) {
    query["RequirementFile"] = request.getRequirementFile();
  }

  if (!!request.hasStartupFile()) {
    query["StartupFile"] = request.getStartupFile();
  }

  if (!!request.hasWorkerServerlessReplicas()) {
    query["WorkerServerlessReplicas"] = request.getWorkerServerlessReplicas();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAirflow"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAirflowResponse>();
}

/**
 * @summary Updates the properties of an Airflow instance.
 *
 * @param request UpdateAirflowRequest
 * @return UpdateAirflowResponse
 */
UpdateAirflowResponse Client::updateAirflow(const UpdateAirflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAirflowWithOptions(request, runtime);
}

/**
 * @summary Updates workspace information.
 *
 * @param request UpdateDataAgentSpaceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataAgentSpaceInfoResponse
 */
UpdateDataAgentSpaceInfoResponse Client::updateDataAgentSpaceInfoWithOptions(const UpdateDataAgentSpaceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasIsSessionShareEnabled()) {
    query["IsSessionShareEnabled"] = request.getIsSessionShareEnabled();
  }

  if (!!request.hasWorkspaceDesc()) {
    query["WorkspaceDesc"] = request.getWorkspaceDesc();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceName()) {
    query["WorkspaceName"] = request.getWorkspaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataAgentSpaceInfo"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataAgentSpaceInfoResponse>();
}

/**
 * @summary Updates workspace information.
 *
 * @param request UpdateDataAgentSpaceInfoRequest
 * @return UpdateDataAgentSpaceInfoResponse
 */
UpdateDataAgentSpaceInfoResponse Client::updateDataAgentSpaceInfo(const UpdateDataAgentSpaceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataAgentSpaceInfoWithOptions(request, runtime);
}

/**
 * @summary Changes the role of a workspace member.
 *
 * @param request UpdateDataAgentWorkspaceMemberRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataAgentWorkspaceMemberRoleResponse
 */
UpdateDataAgentWorkspaceMemberRoleResponse Client::updateDataAgentWorkspaceMemberRoleWithOptions(const UpdateDataAgentWorkspaceMemberRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDMSUnit()) {
    query["DMSUnit"] = request.getDMSUnit();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.getMemberId();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataAgentWorkspaceMemberRole"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataAgentWorkspaceMemberRoleResponse>();
}

/**
 * @summary Changes the role of a workspace member.
 *
 * @param request UpdateDataAgentWorkspaceMemberRoleRequest
 * @return UpdateDataAgentWorkspaceMemberRoleResponse
 */
UpdateDataAgentWorkspaceMemberRoleResponse Client::updateDataAgentWorkspaceMemberRole(const UpdateDataAgentWorkspaceMemberRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataAgentWorkspaceMemberRoleWithOptions(request, runtime);
}

/**
 * @summary Updates the information of a data lakehouse database.
 *
 * @param tmpReq UpdateDataLakeDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataLakeDatabaseResponse
 */
UpdateDataLakeDatabaseResponse Client::updateDataLakeDatabaseWithOptions(const UpdateDataLakeDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataLakeDatabaseShrinkRequest request = UpdateDataLakeDatabaseShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasLocation()) {
    query["Location"] = request.getLocation();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataLakeDatabase"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataLakeDatabaseResponse>();
}

/**
 * @summary Updates the information of a data lakehouse database.
 *
 * @param request UpdateDataLakeDatabaseRequest
 * @return UpdateDataLakeDatabaseResponse
 */
UpdateDataLakeDatabaseResponse Client::updateDataLakeDatabase(const UpdateDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary Update a user-defined function in a data lake.
 *
 * @param tmpReq UpdateDataLakeFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataLakeFunctionResponse
 */
UpdateDataLakeFunctionResponse Client::updateDataLakeFunctionWithOptions(const UpdateDataLakeFunctionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataLakeFunctionShrinkRequest request = UpdateDataLakeFunctionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFunctionInput()) {
    request.setFunctionInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFunctionInput(), "FunctionInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.getFunctionName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasFunctionInputShrink()) {
    body["FunctionInput"] = request.getFunctionInputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataLakeFunction"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataLakeFunctionResponse>();
}

/**
 * @summary Update a user-defined function in a data lake.
 *
 * @param request UpdateDataLakeFunctionRequest
 * @return UpdateDataLakeFunctionResponse
 */
UpdateDataLakeFunctionResponse Client::updateDataLakeFunction(const UpdateDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary Updates the partition information of a data lake table.
 *
 * @param tmpReq UpdateDataLakePartitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataLakePartitionResponse
 */
UpdateDataLakePartitionResponse Client::updateDataLakePartitionWithOptions(const UpdateDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataLakePartitionShrinkRequest request = UpdateDataLakePartitionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartitionInput()) {
    request.setPartitionInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPartitionInput(), "PartitionInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasPartitionInputShrink()) {
    body["PartitionInput"] = request.getPartitionInputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataLakePartition"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataLakePartitionResponse>();
}

/**
 * @summary Updates the partition information of a data lake table.
 *
 * @param request UpdateDataLakePartitionRequest
 * @return UpdateDataLakePartitionResponse
 */
UpdateDataLakePartitionResponse Client::updateDataLakePartition(const UpdateDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary Updates the information of a data lake table.
 *
 * @param tmpReq UpdateDataLakeTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataLakeTableResponse
 */
UpdateDataLakeTableResponse Client::updateDataLakeTableWithOptions(const UpdateDataLakeTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataLakeTableShrinkRequest request = UpdateDataLakeTableShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTableInput()) {
    request.setTableInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTableInput(), "TableInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.getCatalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.getTid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasTableInputShrink()) {
    body["TableInput"] = request.getTableInputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataLakeTable"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataLakeTableResponse>();
}

/**
 * @summary Updates the information of a data lake table.
 *
 * @param request UpdateDataLakeTableRequest
 * @return UpdateDataLakeTableResponse
 */
UpdateDataLakeTableResponse Client::updateDataLakeTable(const UpdateDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataLakeTableWithOptions(request, runtime);
}

/**
 * @summary Updates the description of a document.
 *
 * @param request UpdateDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDocumentResponse
 */
UpdateDocumentResponse Client::updateDocumentWithOptions(const UpdateDocumentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocumentName()) {
    body["DocumentName"] = request.getDocumentName();
  }

  if (!!request.hasKbUuid()) {
    body["KbUuid"] = request.getKbUuid();
  }

  if (!!request.hasNewDescription()) {
    body["NewDescription"] = request.getNewDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDocument"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDocumentResponse>();
}

/**
 * @summary Updates the description of a document.
 *
 * @param request UpdateDocumentRequest
 * @return UpdateDocumentResponse
 */
UpdateDocumentResponse Client::updateDocument(const UpdateDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDocumentWithOptions(request, runtime);
}

/**
 * @summary Updates a knowledge base.
 *
 * @param request UpdateKnowledgeBaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKnowledgeBaseResponse
 */
UpdateKnowledgeBaseResponse Client::updateKnowledgeBaseWithOptions(const UpdateKnowledgeBaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasKbUuid()) {
    query["KbUuid"] = request.getKbUuid();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBase"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseResponse>();
}

/**
 * @summary Updates a knowledge base.
 *
 * @param request UpdateKnowledgeBaseRequest
 * @return UpdateKnowledgeBaseResponse
 */
UpdateKnowledgeBaseResponse Client::updateKnowledgeBase(const UpdateKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateKnowledgeBaseWithOptions(request, runtime);
}

/**
 * @summary Uploads a document to a knowledge base.
 *
 * @param tmpReq UploadDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadDocumentResponse
 */
UploadDocumentResponse Client::uploadDocumentWithOptions(const UploadDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UploadDocumentShrinkRequest request = UploadDocumentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSeparators()) {
    request.setSeparatorsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSeparators(), "Separators", "json"));
  }

  json body = {};
  if (!!request.hasChunkOverlap()) {
    body["ChunkOverlap"] = request.getChunkOverlap();
  }

  if (!!request.hasChunkSize()) {
    body["ChunkSize"] = request.getChunkSize();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDocumentLoaderName()) {
    body["DocumentLoaderName"] = request.getDocumentLoaderName();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  if (!!request.hasKbUuid()) {
    body["KbUuid"] = request.getKbUuid();
  }

  if (!!request.hasLocation()) {
    body["Location"] = request.getLocation();
  }

  if (!!request.hasSeparatorsShrink()) {
    body["Separators"] = request.getSeparatorsShrink();
  }

  if (!!request.hasSplitterModel()) {
    body["SplitterModel"] = request.getSplitterModel();
  }

  if (!!request.hasTextSplitterName()) {
    body["TextSplitterName"] = request.getTextSplitterName();
  }

  if (!!request.hasVlEnhance()) {
    body["VlEnhance"] = request.getVlEnhance();
  }

  if (!!request.hasZhTitleEnhance()) {
    body["ZhTitleEnhance"] = request.getZhTitleEnhance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UploadDocument"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadDocumentResponse>();
}

/**
 * @summary Uploads a document to a knowledge base.
 *
 * @param request UploadDocumentRequest
 * @return UploadDocumentResponse
 */
UploadDocumentResponse Client::uploadDocument(const UploadDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadDocumentWithOptions(request, runtime);
}

/**
 * @summary Upserts document chunks into a knowledge base.
 *
 * @param request UpsertDocumentChunksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpsertDocumentChunksResponse
 */
UpsertDocumentChunksResponse Client::upsertDocumentChunksWithOptions(const UpsertDocumentChunksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChunks()) {
    body["Chunks"] = request.getChunks();
  }

  if (!!request.hasDocumentName()) {
    body["DocumentName"] = request.getDocumentName();
  }

  if (!!request.hasKbUuid()) {
    body["KbUuid"] = request.getKbUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpsertDocumentChunks"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpsertDocumentChunksResponse>();
}

/**
 * @summary Upserts document chunks into a knowledge base.
 *
 * @param request UpsertDocumentChunksRequest
 * @return UpsertDocumentChunksResponse
 */
UpsertDocumentChunksResponse Client::upsertDocumentChunks(const UpsertDocumentChunksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upsertDocumentChunksWithOptions(request, runtime);
}

/**
 * @summary Queries the log of an asynchronous task in a workspace.
 *
 * @description Pass the `key` to view the execution log of the corresponding asynchronous task. Use this API for troubleshooting.
 *
 * @param request WorkspaceActionLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WorkspaceActionLogResponse
 */
WorkspaceActionLogResponse Client::workspaceActionLogWithOptions(const WorkspaceActionLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WorkspaceActionLog"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WorkspaceActionLogResponse>();
}

/**
 * @summary Queries the log of an asynchronous task in a workspace.
 *
 * @description Pass the `key` to view the execution log of the corresponding asynchronous task. Use this API for troubleshooting.
 *
 * @param request WorkspaceActionLogRequest
 * @return WorkspaceActionLogResponse
 */
WorkspaceActionLogResponse Client::workspaceActionLog(const WorkspaceActionLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return workspaceActionLogWithOptions(request, runtime);
}

/**
 * @summary Queries the status of an asynchronous task in a workspace. Operations such as a deployment return a key. Call this operation with the key to retrieve the task\\"s status.
 *
 * @description Provide the key returned by an asynchronous action, such as a deployment, to retrieve the task\\"s status.
 *
 * @param request WorkspaceActionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WorkspaceActionStatusResponse
 */
WorkspaceActionStatusResponse Client::workspaceActionStatusWithOptions(const WorkspaceActionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WorkspaceActionStatus"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WorkspaceActionStatusResponse>();
}

/**
 * @summary Queries the status of an asynchronous task in a workspace. Operations such as a deployment return a key. Call this operation with the key to retrieve the task\\"s status.
 *
 * @description Provide the key returned by an asynchronous action, such as a deployment, to retrieve the task\\"s status.
 *
 * @param request WorkspaceActionStatusRequest
 * @return WorkspaceActionStatusResponse
 */
WorkspaceActionStatusResponse Client::workspaceActionStatus(const WorkspaceActionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return workspaceActionStatusWithOptions(request, runtime);
}

/**
 * @summary This asynchronous API returns a key. Use this key to query the WorkspaceActionStatus API for the code deployment status.
 *
 * @description Deploys the code in a workspace.
 *
 * @param request WorkspaceCodePublishRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WorkspaceCodePublishResponse
 */
WorkspaceCodePublishResponse Client::workspaceCodePublishWithOptions(const WorkspaceCodePublishRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "WorkspaceCodePublish"},
    {"version" , "2025-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WorkspaceCodePublishResponse>();
}

/**
 * @summary This asynchronous API returns a key. Use this key to query the WorkspaceActionStatus API for the code deployment status.
 *
 * @description Deploys the code in a workspace.
 *
 * @param request WorkspaceCodePublishRequest
 * @return WorkspaceCodePublishResponse
 */
WorkspaceCodePublishResponse Client::workspaceCodePublish(const WorkspaceCodePublishRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return workspaceCodePublishWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dms20250414