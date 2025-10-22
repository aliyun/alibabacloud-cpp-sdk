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
    request.setPartitionInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.partitionInputs(), "PartitionInputs", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasIfNotExists()) {
    query["IfNotExists"] = request.ifNotExists();
  }

  if (!!request.hasNeedResult()) {
    query["NeedResult"] = request.needResult();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasPartitionInputsShrink()) {
    body["PartitionInputs"] = request.partitionInputsShrink();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasIfExists()) {
    query["IfExists"] = request.ifExists();
  }

  if (!!request.hasPartitionValuesList()) {
    query["PartitionValuesList"] = request.partitionValuesList();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    request.setPartitionInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.partitionInputs(), "PartitionInputs", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasPartitionInputsShrink()) {
    body["PartitionInputs"] = request.partitionInputsShrink();
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
    query["AirflowName"] = request.airflowName();
  }

  if (!!request.hasAppSpec()) {
    query["AppSpec"] = request.appSpec();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDagsDir()) {
    query["DagsDir"] = request.dagsDir();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.ossBucketName();
  }

  if (!!request.hasOssPath()) {
    query["OssPath"] = request.ossPath();
  }

  if (!!request.hasPluginsDir()) {
    query["PluginsDir"] = request.pluginsDir();
  }

  if (!!request.hasRequirementFile()) {
    query["RequirementFile"] = request.requirementFile();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasStartupFile()) {
    query["StartupFile"] = request.startupFile();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasWorkerServerlessReplicas()) {
    query["WorkerServerlessReplicas"] = request.workerServerlessReplicas();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
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
    query["AirflowId"] = request.airflowId();
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
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasLocation()) {
    query["Location"] = request.location();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    request.setFunctionInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.functionInput(), "FunctionInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasFunctionInputShrink()) {
    body["FunctionInput"] = request.functionInputShrink();
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
    request.setPartitionInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.partitionInput(), "PartitionInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasIfNotExists()) {
    query["IfNotExists"] = request.ifNotExists();
  }

  if (!!request.hasNeedResult()) {
    query["NeedResult"] = request.needResult();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasPartitionInputShrink()) {
    body["PartitionInput"] = request.partitionInputShrink();
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
    request.setTableInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tableInput(), "TableInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasTableInputShrink()) {
    body["TableInput"] = request.tableInputShrink();
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
    query["AirflowId"] = request.airflowId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.functionName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    request.setPartitionValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.partitionValues(), "PartitionValues", "simple"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasIfExists()) {
    query["IfExists"] = request.ifExists();
  }

  if (!!request.hasPartitionValuesShrink()) {
    query["PartitionValues"] = request.partitionValuesShrink();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["AirflowId"] = request.airflowId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.functionName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    request.setPartitionValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.partitionValues(), "PartitionValues", "simple"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasPartitionValuesShrink()) {
    query["PartitionValues"] = request.partitionValuesShrink();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasParams()) {
    body["Params"] = request.params();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.path();
  }

  if (!!request.hasRetry()) {
    body["Retry"] = request.retry();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
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
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.skip();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["SearchKey"] = request.searchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.searchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasFunctionNamePattern()) {
    query["FunctionNamePattern"] = request.functionNamePattern();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasFunctionNamePattern()) {
    query["FunctionNamePattern"] = request.functionNamePattern();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    request.setPartNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.partNames(), "PartNames", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasPartNamesShrink()) {
    body["PartNames"] = request.partNamesShrink();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasFilter()) {
    body["Filter"] = request.filter();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasTableNamePattern()) {
    query["TableNamePattern"] = request.tableNamePattern();
  }

  if (!!request.hasTableType()) {
    query["TableType"] = request.tableType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasTableNamePattern()) {
    query["TableNamePattern"] = request.tableNamePattern();
  }

  if (!!request.hasTableType()) {
    query["TableType"] = request.tableType();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasRows()) {
    query["Rows"] = request.rows();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.searchKey();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    query["AirflowId"] = request.airflowId();
  }

  if (!!request.hasAirflowName()) {
    query["AirflowName"] = request.airflowName();
  }

  if (!!request.hasAppSpec()) {
    query["AppSpec"] = request.appSpec();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDagsDir()) {
    query["DagsDir"] = request.dagsDir();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasPluginsDir()) {
    query["PluginsDir"] = request.pluginsDir();
  }

  if (!!request.hasRequirementFile()) {
    query["RequirementFile"] = request.requirementFile();
  }

  if (!!request.hasStartupFile()) {
    query["StartupFile"] = request.startupFile();
  }

  if (!!request.hasWorkerServerlessReplicas()) {
    query["WorkerServerlessReplicas"] = request.workerServerlessReplicas();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasLocation()) {
    query["Location"] = request.location();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
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
    request.setFunctionInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.functionInput(), "FunctionInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.functionName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasFunctionInputShrink()) {
    body["FunctionInput"] = request.functionInputShrink();
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
    request.setPartitionInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.partitionInput(), "PartitionInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasPartitionInputShrink()) {
    body["PartitionInput"] = request.partitionInputShrink();
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
    request.setTableInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tableInput(), "TableInput", "json"));
  }

  json query = {};
  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTid()) {
    query["Tid"] = request.tid();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasTableInputShrink()) {
    body["TableInput"] = request.tableInputShrink();
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