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
  this->_endpointRule = "";
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
 * @summary 为空间添加用户
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
 * @summary 为空间添加用户
 *
 * @param request AddUserToDataAgentWorkspaceRequest
 * @return AddUserToDataAgentWorkspaceResponse
 */
AddUserToDataAgentWorkspaceResponse Client::addUserToDataAgentWorkspace(const AddUserToDataAgentWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserToDataAgentWorkspaceWithOptions(request, runtime);
}

/**
 * @summary 批量新建湖仓表分区
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
 * @summary 批量新建湖仓表分区
 *
 * @param request BatchCreateDataLakePartitionsRequest
 * @return BatchCreateDataLakePartitionsResponse
 */
BatchCreateDataLakePartitionsResponse Client::batchCreateDataLakePartitions(const BatchCreateDataLakePartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateDataLakePartitionsWithOptions(request, runtime);
}

/**
 * @summary 批量删除湖仓表分区
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
 * @summary 批量删除湖仓表分区
 *
 * @param request BatchDeleteDataLakePartitionsRequest
 * @return BatchDeleteDataLakePartitionsResponse
 */
BatchDeleteDataLakePartitionsResponse Client::batchDeleteDataLakePartitions(const BatchDeleteDataLakePartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteDataLakePartitionsWithOptions(request, runtime);
}

/**
 * @summary 批量更新湖仓表分区
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
 * @summary 批量更新湖仓表分区
 *
 * @param request BatchUpdateDataLakePartitionsRequest
 * @return BatchUpdateDataLakePartitionsResponse
 */
BatchUpdateDataLakePartitionsResponse Client::batchUpdateDataLakePartitions(const BatchUpdateDataLakePartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUpdateDataLakePartitionsWithOptions(request, runtime);
}

/**
 * @summary 创建Airflow
 *
 * @param request CreateAirflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAirflowResponse
 */
CreateAirflowResponse Client::createAirflowWithOptions(const CreateAirflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
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
 * @summary 创建Airflow
 *
 * @param request CreateAirflowRequest
 * @return CreateAirflowResponse
 */
CreateAirflowResponse Client::createAirflow(const CreateAirflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAirflowWithOptions(request, runtime);
}

/**
 * @summary Queries the Airflow logon credential. You can use this credential to log on to the DMS-managed Airflow instance.
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
 * @summary Queries the Airflow logon credential. You can use this credential to log on to the DMS-managed Airflow instance.
 *
 * @param request CreateAirflowLoginTokenRequest
 * @return CreateAirflowLoginTokenResponse
 */
CreateAirflowLoginTokenResponse Client::createAirflowLoginToken(const CreateAirflowLoginTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAirflowLoginTokenWithOptions(request, runtime);
}

/**
 * @summary CreateDataAgentSession
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
 * @summary CreateDataAgentSession
 *
 * @param request CreateDataAgentSessionRequest
 * @return CreateDataAgentSessionResponse
 */
CreateDataAgentSessionResponse Client::createDataAgentSession(const CreateDataAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataAgentSessionWithOptions(request, runtime);
}

/**
 * @summary 创建DataAgent工作空间
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
 * @summary 创建DataAgent工作空间
 *
 * @param request CreateDataAgentWorkspaceRequest
 * @return CreateDataAgentWorkspaceResponse
 */
CreateDataAgentWorkspaceResponse Client::createDataAgentWorkspace(const CreateDataAgentWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataAgentWorkspaceWithOptions(request, runtime);
}

/**
 * @summary 新建湖仓数据库
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
 * @summary 新建湖仓数据库
 *
 * @param request CreateDataLakeDatabaseRequest
 * @return CreateDataLakeDatabaseResponse
 */
CreateDataLakeDatabaseResponse Client::createDataLakeDatabase(const CreateDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary 新建湖仓自定义函数
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
 * @summary 新建湖仓自定义函数
 *
 * @param request CreateDataLakeFunctionRequest
 * @return CreateDataLakeFunctionResponse
 */
CreateDataLakeFunctionResponse Client::createDataLakeFunction(const CreateDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary 新建湖仓表分区
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
 * @summary 新建湖仓表分区
 *
 * @param request CreateDataLakePartitionRequest
 * @return CreateDataLakePartitionResponse
 */
CreateDataLakePartitionResponse Client::createDataLakePartition(const CreateDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary 新建湖仓表
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
 * @summary 新建湖仓表
 *
 * @param request CreateDataLakeTableRequest
 * @return CreateDataLakeTableResponse
 */
CreateDataLakeTableResponse Client::createDataLakeTable(const CreateDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataLakeTableWithOptions(request, runtime);
}

/**
 * @summary 删除Airflow
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
 * @summary 删除Airflow
 *
 * @param request DeleteAirflowRequest
 * @return DeleteAirflowResponse
 */
DeleteAirflowResponse Client::deleteAirflow(const DeleteAirflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAirflowWithOptions(request, runtime);
}

/**
 * @summary 删除DataAgent工作空间
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
 * @summary 删除DataAgent工作空间
 *
 * @param request DeleteDataAgentWorkspaceRequest
 * @return DeleteDataAgentWorkspaceResponse
 */
DeleteDataAgentWorkspaceResponse Client::deleteDataAgentWorkspace(const DeleteDataAgentWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataAgentWorkspaceWithOptions(request, runtime);
}

/**
 * @summary 删除湖仓数据库
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
 * @summary 删除湖仓数据库
 *
 * @param request DeleteDataLakeDatabaseRequest
 * @return DeleteDataLakeDatabaseResponse
 */
DeleteDataLakeDatabaseResponse Client::deleteDataLakeDatabase(const DeleteDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary 删除湖仓自定义函数
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
 * @summary 删除湖仓自定义函数
 *
 * @param request DeleteDataLakeFunctionRequest
 * @return DeleteDataLakeFunctionResponse
 */
DeleteDataLakeFunctionResponse Client::deleteDataLakeFunction(const DeleteDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary 删除湖仓表分区
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
 * @summary 删除湖仓表分区
 *
 * @param request DeleteDataLakePartitionRequest
 * @return DeleteDataLakePartitionResponse
 */
DeleteDataLakePartitionResponse Client::deleteDataLakePartition(const DeleteDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary 删除湖仓表
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
 * @summary 删除湖仓表
 *
 * @param request DeleteDataLakeTableRequest
 * @return DeleteDataLakeTableResponse
 */
DeleteDataLakeTableResponse Client::deleteDataLakeTable(const DeleteDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLakeTableWithOptions(request, runtime);
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
 * @summary DescribeCustomAgent
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
 * @summary DescribeCustomAgent
 *
 * @param request DescribeCustomAgentRequest
 * @return DescribeCustomAgentResponse
 */
DescribeCustomAgentResponse Client::describeCustomAgent(const DescribeCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomAgentWithOptions(request, runtime);
}

/**
 * @summary DescribeDataAgentSession
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
 * @summary DescribeDataAgentSession
 *
 * @param request DescribeDataAgentSessionRequest
 * @return DescribeDataAgentSessionResponse
 */
DescribeDataAgentSessionResponse Client::describeDataAgentSession(const DescribeDataAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataAgentSessionWithOptions(request, runtime);
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
 * @summary 查询 Airflow
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
 * @summary 查询 Airflow
 *
 * @param request GetAirflowRequest
 * @return GetAirflowResponse
 */
GetAirflowResponse Client::getAirflow(const GetAirflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAirflowWithOptions(request, runtime);
}

/**
 * @summary GetChatContent
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
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<GetChatContentResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary GetChatContent
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
 * @summary GetChatContent
 *
 * @param request GetChatContentRequest
 * @return GetChatContentResponse
 */
GetChatContentResponse Client::getChatContent(const GetChatContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatContentWithOptions(request, runtime);
}

/**
 * @summary 获取主账号下的子账号信息
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
 * @summary 获取主账号下的子账号信息
 *
 * @param request GetDataAgentSubAccountInfoRequest
 * @return GetDataAgentSubAccountInfoResponse
 */
GetDataAgentSubAccountInfoResponse Client::getDataAgentSubAccountInfo(const GetDataAgentSubAccountInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataAgentSubAccountInfoWithOptions(request, runtime);
}

/**
 * @summary 获取空间信息
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
 * @summary 获取空间信息
 *
 * @param request GetDataAgentWorkspaceInfoRequest
 * @return GetDataAgentWorkspaceInfoResponse
 */
GetDataAgentWorkspaceInfoResponse Client::getDataAgentWorkspaceInfo(const GetDataAgentWorkspaceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataAgentWorkspaceInfoWithOptions(request, runtime);
}

/**
 * @summary 获取uc的数据库目录
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
 * @summary 获取uc的数据库目录
 *
 * @param request GetDataLakeCatalogRequest
 * @return GetDataLakeCatalogResponse
 */
GetDataLakeCatalogResponse Client::getDataLakeCatalog(const GetDataLakeCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakeCatalogWithOptions(request, runtime);
}

/**
 * @summary 获取UC的数据库
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
 * @summary 获取UC的数据库
 *
 * @param request GetDataLakeDatabaseRequest
 * @return GetDataLakeDatabaseResponse
 */
GetDataLakeDatabaseResponse Client::getDataLakeDatabase(const GetDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary 获取湖仓自定义函数详细信息
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
 * @summary 获取湖仓自定义函数详细信息
 *
 * @param request GetDataLakeFunctionRequest
 * @return GetDataLakeFunctionResponse
 */
GetDataLakeFunctionResponse Client::getDataLakeFunction(const GetDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary 获取湖仓表分区详情
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
 * @summary 获取湖仓表分区详情
 *
 * @param request GetDataLakePartitionRequest
 * @return GetDataLakePartitionResponse
 */
GetDataLakePartitionResponse Client::getDataLakePartition(const GetDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary 获取表信息
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
 * @summary 获取表信息
 *
 * @param request GetDataLakeTableRequest
 * @return GetDataLakeTableResponse
 */
GetDataLakeTableResponse Client::getDataLakeTable(const GetDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataLakeTableWithOptions(request, runtime);
}

/**
 * @summary 调度运行Notebook文件
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
 * @summary 调度运行Notebook文件
 *
 * @param request GetNotebookAndSubmitTaskRequest
 * @return GetNotebookAndSubmitTaskResponse
 */
GetNotebookAndSubmitTaskResponse Client::getNotebookAndSubmitTask(const GetNotebookAndSubmitTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNotebookAndSubmitTaskWithOptions(request, runtime);
}

/**
 * @summary 查看Notebook任务运行结果
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
 * @summary 查看Notebook任务运行结果
 *
 * @param request GetNotebookTaskStatusRequest
 * @return GetNotebookTaskStatusResponse
 */
GetNotebookTaskStatusResponse Client::getNotebookTaskStatus(const GetNotebookTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNotebookTaskStatusWithOptions(request, runtime);
}

/**
 * @summary 列出资源Airflow
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
 * @summary 列出资源Airflow
 *
 * @param request ListAirflowsRequest
 * @return ListAirflowsResponse
 */
ListAirflowsResponse Client::listAirflows(const ListAirflowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAirflowsWithOptions(request, runtime);
}

/**
 * @summary ListCustomAgent
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
 * @summary ListCustomAgent
 *
 * @param request ListCustomAgentRequest
 * @return ListCustomAgentResponse
 */
ListCustomAgentResponse Client::listCustomAgent(const ListCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomAgentWithOptions(request, runtime);
}

/**
 * @summary 获取主账号下的空间（分页）
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
 * @summary 获取主账号下的空间（分页）
 *
 * @param request ListDataAgentWorkspaceRequest
 * @return ListDataAgentWorkspaceResponse
 */
ListDataAgentWorkspaceResponse Client::listDataAgentWorkspace(const ListDataAgentWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataAgentWorkspaceWithOptions(request, runtime);
}

/**
 * @summary 获取空间所有成员
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
 * @summary 获取空间所有成员
 *
 * @param request ListDataAgentWorkspaceMemberRequest
 * @return ListDataAgentWorkspaceMemberResponse
 */
ListDataAgentWorkspaceMemberResponse Client::listDataAgentWorkspaceMember(const ListDataAgentWorkspaceMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataAgentWorkspaceMemberWithOptions(request, runtime);
}

/**
 * @summary 获取uc的数据库目录列表
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
 * @summary 获取uc的数据库目录列表
 *
 * @param request ListDataLakeCatalogRequest
 * @return ListDataLakeCatalogResponse
 */
ListDataLakeCatalogResponse Client::listDataLakeCatalog(const ListDataLakeCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeCatalogWithOptions(request, runtime);
}

/**
 * @summary 获取数据库列表
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
 * @summary 获取数据库列表
 *
 * @param request ListDataLakeDatabaseRequest
 * @return ListDataLakeDatabaseResponse
 */
ListDataLakeDatabaseResponse Client::listDataLakeDatabase(const ListDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary 获取数据湖函数列表
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
 * @summary 获取数据湖函数列表
 *
 * @param request ListDataLakeFunctionRequest
 * @return ListDataLakeFunctionResponse
 */
ListDataLakeFunctionResponse Client::listDataLakeFunction(const ListDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary 获取数据湖函数名列表
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
 * @summary 获取数据湖函数名列表
 *
 * @param request ListDataLakeFunctionNameRequest
 * @return ListDataLakeFunctionNameResponse
 */
ListDataLakeFunctionNameResponse Client::listDataLakeFunctionName(const ListDataLakeFunctionNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeFunctionNameWithOptions(request, runtime);
}

/**
 * @summary 获取数据湖表分区列表
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
 * @summary 获取数据湖表分区列表
 *
 * @param request ListDataLakePartitionRequest
 * @return ListDataLakePartitionResponse
 */
ListDataLakePartitionResponse Client::listDataLakePartition(const ListDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary 根据筛选条件获取数据湖表分区列表
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
 * @summary 根据筛选条件获取数据湖表分区列表
 *
 * @param request ListDataLakePartitionByFilterRequest
 * @return ListDataLakePartitionByFilterResponse
 */
ListDataLakePartitionByFilterResponse Client::listDataLakePartitionByFilter(const ListDataLakePartitionByFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakePartitionByFilterWithOptions(request, runtime);
}

/**
 * @summary 获取数据湖表分区名列表
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
 * @summary 获取数据湖表分区名列表
 *
 * @param request ListDataLakePartitionNameRequest
 * @return ListDataLakePartitionNameResponse
 */
ListDataLakePartitionNameResponse Client::listDataLakePartitionName(const ListDataLakePartitionNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakePartitionNameWithOptions(request, runtime);
}

/**
 * @summary 获取数据湖表列表
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
 * @summary 获取数据湖表列表
 *
 * @param request ListDataLakeTableRequest
 * @return ListDataLakeTableResponse
 */
ListDataLakeTableResponse Client::listDataLakeTable(const ListDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeTableWithOptions(request, runtime);
}

/**
 * @summary 获取数据湖表名列表
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
 * @summary 获取数据湖表名列表
 *
 * @param request ListDataLakeTableNameRequest
 * @return ListDataLakeTableNameResponse
 */
ListDataLakeTableNameResponse Client::listDataLakeTableName(const ListDataLakeTableNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeTableNameWithOptions(request, runtime);
}

/**
 * @summary 获取表信息
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
 * @summary 获取表信息
 *
 * @param request ListDataLakeTablebaseInfoRequest
 * @return ListDataLakeTablebaseInfoResponse
 */
ListDataLakeTablebaseInfoResponse Client::listDataLakeTablebaseInfo(const ListDataLakeTablebaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLakeTablebaseInfoWithOptions(request, runtime);
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
 * @summary 从空间中移除用户
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
 * @summary 从空间中移除用户
 *
 * @param request RemoveUserToDataAgentWorkspaceRequest
 * @return RemoveUserToDataAgentWorkspaceResponse
 */
RemoveUserToDataAgentWorkspaceResponse Client::removeUserToDataAgentWorkspace(const RemoveUserToDataAgentWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUserToDataAgentWorkspaceWithOptions(request, runtime);
}

/**
 * @summary SendChatMessage
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

  if (!!tmpReq.hasSessionConfig()) {
    request.setSessionConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSessionConfig(), "SessionConfig", "json"));
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
 * @summary SendChatMessage
 *
 * @param request SendChatMessageRequest
 * @return SendChatMessageResponse
 */
SendChatMessageResponse Client::sendChatMessage(const SendChatMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendChatMessageWithOptions(request, runtime);
}

/**
 * @summary 更新UpdateAirflow
 *
 * @param request UpdateAirflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAirflowResponse
 */
UpdateAirflowResponse Client::updateAirflowWithOptions(const UpdateAirflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
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
 * @summary 更新UpdateAirflow
 *
 * @param request UpdateAirflowRequest
 * @return UpdateAirflowResponse
 */
UpdateAirflowResponse Client::updateAirflow(const UpdateAirflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAirflowWithOptions(request, runtime);
}

/**
 * @summary 更新空间的信息
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
 * @summary 更新空间的信息
 *
 * @param request UpdateDataAgentSpaceInfoRequest
 * @return UpdateDataAgentSpaceInfoResponse
 */
UpdateDataAgentSpaceInfoResponse Client::updateDataAgentSpaceInfo(const UpdateDataAgentSpaceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataAgentSpaceInfoWithOptions(request, runtime);
}

/**
 * @summary 调整空间成员的角色
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
 * @summary 调整空间成员的角色
 *
 * @param request UpdateDataAgentWorkspaceMemberRoleRequest
 * @return UpdateDataAgentWorkspaceMemberRoleResponse
 */
UpdateDataAgentWorkspaceMemberRoleResponse Client::updateDataAgentWorkspaceMemberRole(const UpdateDataAgentWorkspaceMemberRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataAgentWorkspaceMemberRoleWithOptions(request, runtime);
}

/**
 * @summary 更新湖仓数据库
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
 * @summary 更新湖仓数据库
 *
 * @param request UpdateDataLakeDatabaseRequest
 * @return UpdateDataLakeDatabaseResponse
 */
UpdateDataLakeDatabaseResponse Client::updateDataLakeDatabase(const UpdateDataLakeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataLakeDatabaseWithOptions(request, runtime);
}

/**
 * @summary 更新湖仓自定义函数
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
 * @summary 更新湖仓自定义函数
 *
 * @param request UpdateDataLakeFunctionRequest
 * @return UpdateDataLakeFunctionResponse
 */
UpdateDataLakeFunctionResponse Client::updateDataLakeFunction(const UpdateDataLakeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataLakeFunctionWithOptions(request, runtime);
}

/**
 * @summary 更新湖仓表分区
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
 * @summary 更新湖仓表分区
 *
 * @param request UpdateDataLakePartitionRequest
 * @return UpdateDataLakePartitionResponse
 */
UpdateDataLakePartitionResponse Client::updateDataLakePartition(const UpdateDataLakePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataLakePartitionWithOptions(request, runtime);
}

/**
 * @summary 更新湖仓表信息
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
 * @summary 更新湖仓表信息
 *
 * @param request UpdateDataLakeTableRequest
 * @return UpdateDataLakeTableResponse
 */
UpdateDataLakeTableResponse Client::updateDataLakeTable(const UpdateDataLakeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataLakeTableWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dms20250414