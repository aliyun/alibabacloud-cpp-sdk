#include <darabonba/Core.hpp>
#include <alibabacloud/DataLake20200710.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::DataLake20200710::Models;
namespace AlibabaCloud
{
namespace DataLake20200710
{

AlibabaCloud::DataLake20200710::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "datalake-daily.aliyuncs.com"},
    {"ap-northeast-2-pop" , "datalake-daily.aliyuncs.com"},
    {"ap-south-1" , "datalake-daily.aliyuncs.com"},
    {"ap-southeast-1" , "datalake-daily.aliyuncs.com"},
    {"ap-southeast-2" , "datalake-daily.aliyuncs.com"},
    {"ap-southeast-3" , "datalake-daily.aliyuncs.com"},
    {"ap-southeast-5" , "datalake-daily.aliyuncs.com"},
    {"cn-beijing" , "dlf.cn-beijing.aliyuncs.com"},
    {"cn-beijing-finance-1" , "datalake-daily.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "datalake-daily.aliyuncs.com"},
    {"cn-beijing-gov-1" , "datalake-daily.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "datalake-daily.aliyuncs.com"},
    {"cn-chengdu" , "datalake-daily.aliyuncs.com"},
    {"cn-edge-1" , "datalake-daily.aliyuncs.com"},
    {"cn-fujian" , "datalake-daily.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "datalake-daily.aliyuncs.com"},
    {"cn-hangzhou" , "dlf.cn-hangzhou.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "datalake-daily.aliyuncs.com"},
    {"cn-hangzhou-finance" , "datalake-daily.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "datalake-daily.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "datalake-daily.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "datalake-daily.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "datalake-daily.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "datalake-daily.aliyuncs.com"},
    {"cn-hongkong" , "datalake-daily.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "datalake-daily.aliyuncs.com"},
    {"cn-huhehaote" , "datalake-daily.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "datalake-daily.aliyuncs.com"},
    {"cn-north-2-gov-1" , "datalake-daily.aliyuncs.com"},
    {"cn-qingdao" , "datalake-daily.aliyuncs.com"},
    {"cn-qingdao-nebula" , "datalake-daily.aliyuncs.com"},
    {"cn-shanghai" , "dlf.cn-shanghai.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "datalake-daily.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "datalake-daily.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "datalake-daily.aliyuncs.com"},
    {"cn-shanghai-inner" , "datalake-daily.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "datalake-daily.aliyuncs.com"},
    {"cn-shenzhen" , "dlf.cn-shenzhen.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "datalake-daily.aliyuncs.com"},
    {"cn-shenzhen-inner" , "datalake-daily.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "datalake-daily.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "datalake-daily.aliyuncs.com"},
    {"cn-wuhan" , "datalake-daily.aliyuncs.com"},
    {"cn-wulanchabu" , "datalake-daily.aliyuncs.com"},
    {"cn-yushanfang" , "datalake-daily.aliyuncs.com"},
    {"cn-zhangbei" , "datalake-daily.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "datalake-daily.aliyuncs.com"},
    {"cn-zhangjiakou" , "datalake-daily.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "datalake-daily.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "datalake-daily.aliyuncs.com"},
    {"eu-central-1" , "datalake-daily.aliyuncs.com"},
    {"eu-west-1" , "datalake-daily.aliyuncs.com"},
    {"eu-west-1-oxs" , "datalake-daily.aliyuncs.com"},
    {"me-east-1" , "datalake-daily.aliyuncs.com"},
    {"rus-west-1-pop" , "datalake-daily.aliyuncs.com"},
    {"us-east-1" , "datalake-daily.aliyuncs.com"},
    {"us-west-1" , "datalake-daily.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("datalake", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Aborts the specified metadata lock.
 *
 * @param request AbortLockRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbortLockResponse
 */
AbortLockResponse Client::abortLockWithOptions(const AbortLockRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLockId()) {
    query["LockId"] = request.lockId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AbortLock"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/locks/abort")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AbortLockResponse>();
}

/**
 * @summary Aborts the specified metadata lock.
 *
 * @param request AbortLockRequest
 * @return AbortLockResponse
 */
AbortLockResponse Client::abortLock(const AbortLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return abortLockWithOptions(request, headers, runtime);
}

/**
 * @summary Add multiple partitions to a data table in a data lake at a time.
 *
 * @param request BatchCreatePartitionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreatePartitionsResponse
 */
BatchCreatePartitionsResponse Client::batchCreatePartitionsWithOptions(const BatchCreatePartitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasIfNotExists()) {
    body["IfNotExists"] = request.ifNotExists();
  }

  if (!!request.hasNeedResult()) {
    body["NeedResult"] = request.needResult();
  }

  if (!!request.hasPartitionInputs()) {
    body["PartitionInputs"] = request.partitionInputs();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchCreatePartitions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/batchcreate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreatePartitionsResponse>();
}

/**
 * @summary Add multiple partitions to a data table in a data lake at a time.
 *
 * @param request BatchCreatePartitionsRequest
 * @return BatchCreatePartitionsResponse
 */
BatchCreatePartitionsResponse Client::batchCreatePartitions(const BatchCreatePartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchCreatePartitionsWithOptions(request, headers, runtime);
}

/**
 * @summary Add data tables to a data lake at a time.
 *
 * @param request BatchCreateTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateTablesResponse
 */
BatchCreateTablesResponse Client::batchCreateTablesWithOptions(const BatchCreateTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasIfNotExists()) {
    body["IfNotExists"] = request.ifNotExists();
  }

  if (!!request.hasTableInputs()) {
    body["TableInputs"] = request.tableInputs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchCreateTables"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/batchcreate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateTablesResponse>();
}

/**
 * @summary Add data tables to a data lake at a time.
 *
 * @param request BatchCreateTablesRequest
 * @return BatchCreateTablesResponse
 */
BatchCreateTablesResponse Client::batchCreateTables(const BatchCreateTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchCreateTablesWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes multiple partitions of a data table in the data lake.
 *
 * @param request BatchDeletePartitionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeletePartitionsResponse
 */
BatchDeletePartitionsResponse Client::batchDeletePartitionsWithOptions(const BatchDeletePartitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasIfExists()) {
    body["IfExists"] = request.ifExists();
  }

  if (!!request.hasPartitionValueList()) {
    body["PartitionValueList"] = request.partitionValueList();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchDeletePartitions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/batchdelete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeletePartitionsResponse>();
}

/**
 * @summary Deletes multiple partitions of a data table in the data lake.
 *
 * @param request BatchDeletePartitionsRequest
 * @return BatchDeletePartitionsResponse
 */
BatchDeletePartitionsResponse Client::batchDeletePartitions(const BatchDeletePartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchDeletePartitionsWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a specified version of a data table in a data lake at a time.
 *
 * @param request BatchDeleteTableVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteTableVersionsResponse
 */
BatchDeleteTableVersionsResponse Client::batchDeleteTableVersionsWithOptions(const BatchDeleteTableVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  if (!!request.hasVersionIds()) {
    body["VersionIds"] = request.versionIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchDeleteTableVersions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/versions/batchdelete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteTableVersionsResponse>();
}

/**
 * @summary Deletes a specified version of a data table in a data lake at a time.
 *
 * @param request BatchDeleteTableVersionsRequest
 * @return BatchDeleteTableVersionsResponse
 */
BatchDeleteTableVersionsResponse Client::batchDeleteTableVersions(const BatchDeleteTableVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchDeleteTableVersionsWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes multiple data tables in a data lake by name.
 *
 * @param request BatchDeleteTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteTablesResponse
 */
BatchDeleteTablesResponse Client::batchDeleteTablesWithOptions(const BatchDeleteTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasIfExists()) {
    body["IfExists"] = request.ifExists();
  }

  if (!!request.hasTableNames()) {
    body["TableNames"] = request.tableNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchDeleteTables"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/batchdelete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteTablesResponse>();
}

/**
 * @summary Deletes multiple data tables in a data lake by name.
 *
 * @param request BatchDeleteTablesRequest
 * @return BatchDeleteTablesResponse
 */
BatchDeleteTablesResponse Client::batchDeleteTables(const BatchDeleteTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchDeleteTablesWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the field statistics of data table partitions in a data lake at a time.
 *
 * @param request BatchGetPartitionColumnStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetPartitionColumnStatisticsResponse
 */
BatchGetPartitionColumnStatisticsResponse Client::batchGetPartitionColumnStatisticsWithOptions(const BatchGetPartitionColumnStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasColumnNames()) {
    body["ColumnNames"] = request.columnNames();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasPartitionNames()) {
    body["PartitionNames"] = request.partitionNames();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchGetPartitionColumnStatistics"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/columnstatistics/batchget")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetPartitionColumnStatisticsResponse>();
}

/**
 * @summary Obtains the field statistics of data table partitions in a data lake at a time.
 *
 * @param request BatchGetPartitionColumnStatisticsRequest
 * @return BatchGetPartitionColumnStatisticsResponse
 */
BatchGetPartitionColumnStatisticsResponse Client::batchGetPartitionColumnStatistics(const BatchGetPartitionColumnStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchGetPartitionColumnStatisticsWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the details of database partitions in a data lake in batches.
 *
 * @param request BatchGetPartitionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetPartitionsResponse
 */
BatchGetPartitionsResponse Client::batchGetPartitionsWithOptions(const BatchGetPartitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasIsShareSd()) {
    body["IsShareSd"] = request.isShareSd();
  }

  if (!!request.hasPartitionValueList()) {
    body["PartitionValueList"] = request.partitionValueList();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchGetPartitions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/batchget")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetPartitionsResponse>();
}

/**
 * @summary Obtains the details of database partitions in a data lake in batches.
 *
 * @param request BatchGetPartitionsRequest
 * @return BatchGetPartitionsResponse
 */
BatchGetPartitionsResponse Client::batchGetPartitions(const BatchGetPartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchGetPartitionsWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain detailed information about data tables in the data lake in batches.
 *
 * @param request BatchGetTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetTablesResponse
 */
BatchGetTablesResponse Client::batchGetTablesWithOptions(const BatchGetTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasTableNames()) {
    body["TableNames"] = request.tableNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchGetTables"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/batchget")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetTablesResponse>();
}

/**
 * @summary Obtain detailed information about data tables in the data lake in batches.
 *
 * @param request BatchGetTablesRequest
 * @return BatchGetTablesResponse
 */
BatchGetTablesResponse Client::batchGetTables(const BatchGetTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchGetTablesWithOptions(request, headers, runtime);
}

/**
 * @summary Grant the operation permissions on resources to a user or a data lake role at a time.
 *
 * @param request BatchGrantPermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGrantPermissionsResponse
 */
BatchGrantPermissionsResponse Client::batchGrantPermissionsWithOptions(const BatchGrantPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasGrantRevokeEntries()) {
    body["GrantRevokeEntries"] = request.grantRevokeEntries();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchGrantPermissions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/permissions/batchgrant")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGrantPermissionsResponse>();
}

/**
 * @summary Grant the operation permissions on resources to a user or a data lake role at a time.
 *
 * @param request BatchGrantPermissionsRequest
 * @return BatchGrantPermissionsResponse
 */
BatchGrantPermissionsResponse Client::batchGrantPermissions(const BatchGrantPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchGrantPermissionsWithOptions(request, headers, runtime);
}

/**
 * @summary You can call this operation to revoke permissions on resources from a user or data lake role at a time.
 *
 * @param request BatchRevokePermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchRevokePermissionsResponse
 */
BatchRevokePermissionsResponse Client::batchRevokePermissionsWithOptions(const BatchRevokePermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasGrantRevokeEntries()) {
    body["GrantRevokeEntries"] = request.grantRevokeEntries();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchRevokePermissions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/permissions/batchrevoke")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchRevokePermissionsResponse>();
}

/**
 * @summary You can call this operation to revoke permissions on resources from a user or data lake role at a time.
 *
 * @param request BatchRevokePermissionsRequest
 * @return BatchRevokePermissionsResponse
 */
BatchRevokePermissionsResponse Client::batchRevokePermissions(const BatchRevokePermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchRevokePermissionsWithOptions(request, headers, runtime);
}

/**
 * @summary Batch update multiple partitions for a data table in a data lake.
 *
 * @param request BatchUpdatePartitionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUpdatePartitionsResponse
 */
BatchUpdatePartitionsResponse Client::batchUpdatePartitionsWithOptions(const BatchUpdatePartitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasPartitionInputs()) {
    body["PartitionInputs"] = request.partitionInputs();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchUpdatePartitions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/batchupdate")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUpdatePartitionsResponse>();
}

/**
 * @summary Batch update multiple partitions for a data table in a data lake.
 *
 * @param request BatchUpdatePartitionsRequest
 * @return BatchUpdatePartitionsResponse
 */
BatchUpdatePartitionsResponse Client::batchUpdatePartitions(const BatchUpdatePartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchUpdatePartitionsWithOptions(request, headers, runtime);
}

/**
 * @summary Update the details of data tables in the data lake in batches.
 *
 * @param request BatchUpdateTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUpdateTablesResponse
 */
BatchUpdateTablesResponse Client::batchUpdateTablesWithOptions(const BatchUpdateTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasIsAsync()) {
    body["IsAsync"] = request.isAsync();
  }

  if (!!request.hasTableInputs()) {
    body["TableInputs"] = request.tableInputs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchUpdateTables"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/batchupdate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUpdateTablesResponse>();
}

/**
 * @summary Update the details of data tables in the data lake in batches.
 *
 * @param request BatchUpdateTablesRequest
 * @return BatchUpdateTablesResponse
 */
BatchUpdateTablesResponse Client::batchUpdateTables(const BatchUpdateTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchUpdateTablesWithOptions(request, headers, runtime);
}

/**
 * @summary Cancel a query request.
 *
 * @param request CancelQueryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelQueryResponse
 */
CancelQueryResponse Client::cancelQueryWithOptions(const CancelQueryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueryId()) {
    query["QueryId"] = request.queryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelQuery"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/query/cancelQuery")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelQueryResponse>();
}

/**
 * @summary Cancel a query request.
 *
 * @param request CancelQueryRequest
 * @return CancelQueryResponse
 */
CancelQueryResponse Client::cancelQuery(const CancelQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelQueryWithOptions(request, headers, runtime);
}

/**
 * @summary Verify user permissions.
 *
 * @param request CheckPermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckPermissionsResponse
 */
CheckPermissionsResponse Client::checkPermissionsWithOptions(const CheckPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CheckPermissions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/permissions/check")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckPermissionsResponse>();
}

/**
 * @summary Verify user permissions.
 *
 * @param request CheckPermissionsRequest
 * @return CheckPermissionsResponse
 */
CheckPermissionsResponse Client::checkPermissions(const CheckPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkPermissionsWithOptions(request, headers, runtime);
}

/**
 * @summary Create a Data Catalog for Data Lake.
 *
 * @param request CreateCatalogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCatalogResponse
 */
CreateCatalogResponse Client::createCatalogWithOptions(const CreateCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogInput()) {
    body["CatalogInput"] = request.catalogInput();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCatalog"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCatalogResponse>();
}

/**
 * @summary Create a Data Catalog for Data Lake.
 *
 * @param request CreateCatalogRequest
 * @return CreateCatalogResponse
 */
CreateCatalogResponse Client::createCatalog(const CreateCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCatalogWithOptions(request, headers, runtime);
}

/**
 * @summary Create a metadabase in the data lake metadata.
 *
 * @param request CreateDatabaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatabaseResponse
 */
CreateDatabaseResponse Client::createDatabaseWithOptions(const CreateDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseInput()) {
    body["DatabaseInput"] = request.databaseInput();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDatabase"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatabaseResponse>();
}

/**
 * @summary Create a metadabase in the data lake metadata.
 *
 * @param request CreateDatabaseRequest
 * @return CreateDatabaseResponse
 */
CreateDatabaseResponse Client::createDatabase(const CreateDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDatabaseWithOptions(request, headers, runtime);
}

/**
 * @summary Added user-defined functions for databases in the data lake.
 *
 * @param request CreateFunctionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFunctionResponse
 */
CreateFunctionResponse Client::createFunctionWithOptions(const CreateFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasFunctionInput()) {
    body["FunctionInput"] = request.functionInput();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFunction"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/functions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFunctionResponse>();
}

/**
 * @summary Added user-defined functions for databases in the data lake.
 *
 * @param request CreateFunctionRequest
 * @return CreateFunctionResponse
 */
CreateFunctionResponse Client::createFunction(const CreateFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFunctionWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a specified metadata lock.
 *
 * @param request CreateLockRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLockResponse
 */
CreateLockResponse Client::createLockWithOptions(const CreateLockRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLockObjList()) {
    body["LockObjList"] = request.lockObjList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLock"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/locks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLockResponse>();
}

/**
 * @summary Creates a specified metadata lock.
 *
 * @param request CreateLockRequest
 * @return CreateLockResponse
 */
CreateLockResponse Client::createLock(const CreateLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLockWithOptions(request, headers, runtime);
}

/**
 * @summary Add a partition to the data table of the data lake.
 *
 * @param request CreatePartitionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePartitionResponse
 */
CreatePartitionResponse Client::createPartitionWithOptions(const CreatePartitionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasIfNotExists()) {
    body["IfNotExists"] = request.ifNotExists();
  }

  if (!!request.hasNeedResult()) {
    body["NeedResult"] = request.needResult();
  }

  if (!!request.hasPartitionInput()) {
    body["PartitionInput"] = request.partitionInput();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePartition"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePartitionResponse>();
}

/**
 * @summary Add a partition to the data table of the data lake.
 *
 * @param request CreatePartitionRequest
 * @return CreatePartitionResponse
 */
CreatePartitionResponse Client::createPartition(const CreatePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPartitionWithOptions(request, headers, runtime);
}

/**
 * @summary In the Data Lake Permissions section, add a role.
 *
 * @param request CreateRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRoleWithOptions(const CreateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateRole"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/roles")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRoleResponse>();
}

/**
 * @summary In the Data Lake Permissions section, add a role.
 *
 * @param request CreateRoleRequest
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRole(const CreateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRoleWithOptions(request, headers, runtime);
}

/**
 * @summary Add a data table for the data lake.
 *
 * @param request CreateTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTableResponse
 */
CreateTableResponse Client::createTableWithOptions(const CreateTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasTableInput()) {
    body["TableInput"] = request.tableInput();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTable"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTableResponse>();
}

/**
 * @summary Add a data table for the data lake.
 *
 * @param request CreateTableRequest
 * @return CreateTableResponse
 */
CreateTableResponse Client::createTable(const CreateTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTableWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a data directory.
 *
 * @param request DeleteCatalogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCatalogResponse
 */
DeleteCatalogResponse Client::deleteCatalogWithOptions(const DeleteCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasIsAsync()) {
    query["IsAsync"] = request.isAsync();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCatalog"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCatalogResponse>();
}

/**
 * @summary Deletes a data directory.
 *
 * @param request DeleteCatalogRequest
 * @return DeleteCatalogResponse
 */
DeleteCatalogResponse Client::deleteCatalog(const DeleteCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCatalogWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a database in the data lake by name.
 *
 * @param request DeleteDatabaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatabaseResponse
 */
DeleteDatabaseResponse Client::deleteDatabaseWithOptions(const DeleteDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsync()) {
    query["Async"] = request.async();
  }

  if (!!request.hasCascade()) {
    query["Cascade"] = request.cascade();
  }

  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatabase"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatabaseResponse>();
}

/**
 * @summary Deletes a database in the data lake by name.
 *
 * @param request DeleteDatabaseRequest
 * @return DeleteDatabaseResponse
 */
DeleteDatabaseResponse Client::deleteDatabase(const DeleteDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDatabaseWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a user-defined function for a database in the data lake by name.
 *
 * @param request DeleteFunctionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFunctionResponse
 */
DeleteFunctionResponse Client::deleteFunctionWithOptions(const DeleteFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.functionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFunction"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/functions")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFunctionResponse>();
}

/**
 * @summary Deletes a user-defined function for a database in the data lake by name.
 *
 * @param request DeleteFunctionRequest
 * @return DeleteFunctionResponse
 */
DeleteFunctionResponse Client::deleteFunction(const DeleteFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFunctionWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a specified partition from a data table in the data lake.
 *
 * @param request DeletePartitionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePartitionResponse
 */
DeletePartitionResponse Client::deletePartitionWithOptions(const DeletePartitionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasIfExists()) {
    body["IfExists"] = request.ifExists();
  }

  if (!!request.hasPartitionValues()) {
    body["PartitionValues"] = request.partitionValues();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeletePartition"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePartitionResponse>();
}

/**
 * @summary Deletes a specified partition from a data table in the data lake.
 *
 * @param request DeletePartitionRequest
 * @return DeletePartitionResponse
 */
DeletePartitionResponse Client::deletePartition(const DeletePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePartitionWithOptions(request, headers, runtime);
}

/**
 * @summary Reclaim the field statistics of data table partitions in the data lake.
 *
 * @param tmpReq DeletePartitionColumnStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePartitionColumnStatisticsResponse
 */
DeletePartitionColumnStatisticsResponse Client::deletePartitionColumnStatisticsWithOptions(const DeletePartitionColumnStatisticsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeletePartitionColumnStatisticsShrinkRequest request = DeletePartitionColumnStatisticsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasColumnNames()) {
    request.setColumnNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.columnNames(), "ColumnNames", "json"));
  }

  if (!!tmpReq.hasPartitionNames()) {
    request.setPartitionNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.partitionNames(), "PartitionNames", "json"));
  }

  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasColumnNamesShrink()) {
    query["ColumnNames"] = request.columnNamesShrink();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasPartitionNamesShrink()) {
    query["PartitionNames"] = request.partitionNamesShrink();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePartitionColumnStatistics"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/columnstatistics")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePartitionColumnStatisticsResponse>();
}

/**
 * @summary Reclaim the field statistics of data table partitions in the data lake.
 *
 * @param request DeletePartitionColumnStatisticsRequest
 * @return DeletePartitionColumnStatisticsResponse
 */
DeletePartitionColumnStatisticsResponse Client::deletePartitionColumnStatistics(const DeletePartitionColumnStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePartitionColumnStatisticsWithOptions(request, headers, runtime);
}

/**
 * @summary Delete a role from Data Lake Permissions.
 *
 * @param request DeleteRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRoleWithOptions(const DeleteRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleName()) {
    query["RoleName"] = request.roleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRole"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/roles")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRoleResponse>();
}

/**
 * @summary Delete a role from Data Lake Permissions.
 *
 * @param request DeleteRoleRequest
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRole(const DeleteRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRoleWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a data table in a data lake by name.
 *
 * @param request DeleteTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTableResponse
 */
DeleteTableResponse Client::deleteTableWithOptions(const DeleteTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTable"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTableResponse>();
}

/**
 * @summary Deletes a data table in a data lake by name.
 *
 * @param request DeleteTableRequest
 * @return DeleteTableResponse
 */
DeleteTableResponse Client::deleteTable(const DeleteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTableWithOptions(request, headers, runtime);
}

/**
 * @summary Recycle field statistics for data tables in the data lake.
 *
 * @param tmpReq DeleteTableColumnStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTableColumnStatisticsResponse
 */
DeleteTableColumnStatisticsResponse Client::deleteTableColumnStatisticsWithOptions(const DeleteTableColumnStatisticsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteTableColumnStatisticsShrinkRequest request = DeleteTableColumnStatisticsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasColumnNames()) {
    request.setColumnNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.columnNames(), "ColumnNames", "json"));
  }

  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasColumnNamesShrink()) {
    query["ColumnNames"] = request.columnNamesShrink();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTableColumnStatistics"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/columnstatistics")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTableColumnStatisticsResponse>();
}

/**
 * @summary Recycle field statistics for data tables in the data lake.
 *
 * @param request DeleteTableColumnStatisticsRequest
 * @return DeleteTableColumnStatisticsResponse
 */
DeleteTableColumnStatisticsResponse Client::deleteTableColumnStatistics(const DeleteTableColumnStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTableColumnStatisticsWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a specified version of a data table in the data lake.
 *
 * @param request DeleteTableVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTableVersionResponse
 */
DeleteTableVersionResponse Client::deleteTableVersionWithOptions(const DeleteTableVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTableVersion"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/versions")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTableVersionResponse>();
}

/**
 * @summary Deletes a specified version of a data table in the data lake.
 *
 * @param request DeleteTableVersionRequest
 * @return DeleteTableVersionResponse
 */
DeleteTableVersionResponse Client::deleteTableVersion(const DeleteTableVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTableVersionWithOptions(request, headers, runtime);
}

/**
 * @summary Cancel Location registration.
 *
 * @param request DeregisterLocationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeregisterLocationResponse
 */
DeregisterLocationResponse Client::deregisterLocationWithOptions(const DeregisterLocationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLocationId()) {
    query["LocationId"] = request.locationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeregisterLocation"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/locations")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeregisterLocationResponse>();
}

/**
 * @summary Cancel Location registration.
 *
 * @param request DeregisterLocationRequest
 * @return DeregisterLocationResponse
 */
DeregisterLocationResponse Client::deregisterLocation(const DeregisterLocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deregisterLocationWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the list of open regions.
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
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/service/describeRegions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Obtains the list of open regions.
 *
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(headers, runtime);
}

/**
 * @summary Used in metadata-related asynchronous APIs to check the status of asynchronous execution tasks.
 *
 * @param request GetAsyncTaskStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsyncTaskStatusResponse
 */
GetAsyncTaskStatusResponse Client::getAsyncTaskStatusWithOptions(const GetAsyncTaskStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAsyncTaskStatus"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAsyncTaskStatusResponse>();
}

/**
 * @summary Used in metadata-related asynchronous APIs to check the status of asynchronous execution tasks.
 *
 * @param request GetAsyncTaskStatusRequest
 * @return GetAsyncTaskStatusResponse
 */
GetAsyncTaskStatusResponse Client::getAsyncTaskStatus(const GetAsyncTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAsyncTaskStatusWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the details of a data directory.
 *
 * @param request GetCatalogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCatalogResponse
 */
GetCatalogResponse Client::getCatalogWithOptions(const GetCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCatalog"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCatalogResponse>();
}

/**
 * @summary Obtains the details of a data directory.
 *
 * @param request GetCatalogRequest
 * @return GetCatalogResponse
 */
GetCatalogResponse Client::getCatalog(const GetCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCatalogWithOptions(request, headers, runtime);
}

/**
 * @summary To obtain the configurations of Data Lake Catalog, you must assume the admin role or above.
 *
 * @param request GetCatalogSettingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCatalogSettingsResponse
 */
GetCatalogSettingsResponse Client::getCatalogSettingsWithOptions(const GetCatalogSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCatalogSettings"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/settings")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCatalogSettingsResponse>();
}

/**
 * @summary To obtain the configurations of Data Lake Catalog, you must assume the admin role or above.
 *
 * @param request GetCatalogSettingsRequest
 * @return GetCatalogSettingsResponse
 */
GetCatalogSettingsResponse Client::getCatalogSettings(const GetCatalogSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCatalogSettingsWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the details of a database in a data lake.
 *
 * @param request GetDatabaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatabaseResponse
 */
GetDatabaseResponse Client::getDatabaseWithOptions(const GetDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatabase"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatabaseResponse>();
}

/**
 * @summary Obtains the details of a database in a data lake.
 *
 * @param request GetDatabaseRequest
 * @return GetDatabaseResponse
 */
GetDatabaseResponse Client::getDatabase(const GetDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatabaseWithOptions(request, headers, runtime);
}

/**
 * @summary Gets the details of the database data profile.
 *
 * @description To use a data profile, you must first host the OSS bucket of the database.
 *
 * @param request GetDatabaseProfileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatabaseProfileResponse
 */
GetDatabaseProfileResponse Client::getDatabaseProfileWithOptions(const GetDatabaseProfileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatabaseProfile"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/metastorehouse/catalog/database/databaseprofile")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatabaseProfileResponse>();
}

/**
 * @summary Gets the details of the database data profile.
 *
 * @description To use a data profile, you must first host the OSS bucket of the database.
 *
 * @param request GetDatabaseProfileRequest
 * @return GetDatabaseProfileResponse
 */
GetDatabaseProfileResponse Client::getDatabaseProfile(const GetDatabaseProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatabaseProfileWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the user-defined function of the database in the data lake based on the function name.
 *
 * @param request GetFunctionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFunctionResponse
 */
GetFunctionResponse Client::getFunctionWithOptions(const GetFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.functionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFunction"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/functions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFunctionResponse>();
}

/**
 * @summary Obtain the user-defined function of the database in the data lake based on the function name.
 *
 * @param request GetFunctionRequest
 * @return GetFunctionResponse
 */
GetFunctionResponse Client::getFunction(const GetFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFunctionWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the lifecycle rules of a database and table.
 *
 * @param request GetLifecycleRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLifecycleRuleResponse
 */
GetLifecycleRuleResponse Client::getLifecycleRuleWithOptions(const GetLifecycleRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.resourceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLifecycleRule"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/metastorehouse/lifecycle/rule/getLifecycleRule")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLifecycleRuleResponse>();
}

/**
 * @summary Obtains the lifecycle rules of a database and table.
 *
 * @param request GetLifecycleRuleRequest
 * @return GetLifecycleRuleResponse
 */
GetLifecycleRuleResponse Client::getLifecycleRule(const GetLifecycleRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLifecycleRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the specified metadata lock.
 *
 * @param request GetLockRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLockResponse
 */
GetLockResponse Client::getLockWithOptions(const GetLockRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLockId()) {
    query["LockId"] = request.lockId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLock"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/locks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLockResponse>();
}

/**
 * @summary Queries the specified metadata lock.
 *
 * @param request GetLockRequest
 * @return GetLockResponse
 */
GetLockResponse Client::getLock(const GetLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLockWithOptions(request, headers, runtime);
}

/**
 * @summary Get details about the database partitions in the data lake.
 *
 * @param request GetPartitionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPartitionResponse
 */
GetPartitionResponse Client::getPartitionWithOptions(const GetPartitionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasPartitionValues()) {
    body["PartitionValues"] = request.partitionValues();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetPartition"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/get")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPartitionResponse>();
}

/**
 * @summary Get details about the database partitions in the data lake.
 *
 * @param request GetPartitionRequest
 * @return GetPartitionResponse
 */
GetPartitionResponse Client::getPartition(const GetPartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPartitionWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the statistics of a specified field for a data partition in a data lake.
 *
 * @param tmpReq GetPartitionColumnStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPartitionColumnStatisticsResponse
 */
GetPartitionColumnStatisticsResponse Client::getPartitionColumnStatisticsWithOptions(const GetPartitionColumnStatisticsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetPartitionColumnStatisticsShrinkRequest request = GetPartitionColumnStatisticsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasColumnNames()) {
    request.setColumnNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.columnNames(), "ColumnNames", "json"));
  }

  if (!!tmpReq.hasPartitionNames()) {
    request.setPartitionNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.partitionNames(), "PartitionNames", "json"));
  }

  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasColumnNamesShrink()) {
    query["ColumnNames"] = request.columnNamesShrink();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasPartitionNamesShrink()) {
    query["PartitionNames"] = request.partitionNamesShrink();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPartitionColumnStatistics"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/columnstatistics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPartitionColumnStatisticsResponse>();
}

/**
 * @summary Obtains the statistics of a specified field for a data partition in a data lake.
 *
 * @param request GetPartitionColumnStatisticsRequest
 * @return GetPartitionColumnStatisticsResponse
 */
GetPartitionColumnStatisticsResponse Client::getPartitionColumnStatistics(const GetPartitionColumnStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPartitionColumnStatisticsWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the results of a data exploration query.
 *
 * @param request GetQueryResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueryResultResponse
 */
GetQueryResultResponse Client::getQueryResultWithOptions(const GetQueryResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryId()) {
    query["QueryId"] = request.queryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueryResult"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/query/getQueryResult")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueryResultResponse>();
}

/**
 * @summary Obtains the results of a data exploration query.
 *
 * @param request GetQueryResultRequest
 * @return GetQueryResultResponse
 */
GetQueryResultResponse Client::getQueryResult(const GetQueryResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getQueryResultWithOptions(request, headers, runtime);
}

/**
 * @summary You can Data Lake Formation the activation status of the service in the specified region.
 *
 * @param request GetRegionStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegionStatusResponse
 */
GetRegionStatusResponse Client::getRegionStatusWithOptions(const GetRegionStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRegionStatus"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/service/getRegionStatus")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRegionStatusResponse>();
}

/**
 * @summary You can Data Lake Formation the activation status of the service in the specified region.
 *
 * @param request GetRegionStatusRequest
 * @return GetRegionStatusResponse
 */
GetRegionStatusResponse Client::getRegionStatus(const GetRegionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRegionStatusWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the role in Data Lake Permissions based on the role name.
 *
 * @param request GetRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRoleWithOptions(const GetRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleName()) {
    query["RoleName"] = request.roleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRole"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/roles")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoleResponse>();
}

/**
 * @summary Obtain the role in Data Lake Permissions based on the role name.
 *
 * @param request GetRoleRequest
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRole(const GetRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRoleWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the service activation status of a Data Lake Formation user.
 *
 * @param request GetServiceStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceStatusResponse
 */
GetServiceStatusResponse Client::getServiceStatusWithOptions(const GetServiceStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceStatus"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/service/getServiceStatus")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceStatusResponse>();
}

/**
 * @summary Obtains the service activation status of a Data Lake Formation user.
 *
 * @param request GetServiceStatusRequest
 * @return GetServiceStatusResponse
 */
GetServiceStatusResponse Client::getServiceStatus(const GetServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceStatusWithOptions(request, headers, runtime);
}

/**
 * @summary Get detailed information about the data tables in the data lake.
 *
 * @param request GetTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableResponse
 */
GetTableResponse Client::getTableWithOptions(const GetTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTable"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableResponse>();
}

/**
 * @summary Get detailed information about the data tables in the data lake.
 *
 * @param request GetTableRequest
 * @return GetTableResponse
 */
GetTableResponse Client::getTable(const GetTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableWithOptions(request, headers, runtime);
}

/**
 * @summary You can call this operation to obtain statistics about a specified field in a data table in a data lake.
 *
 * @param tmpReq GetTableColumnStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableColumnStatisticsResponse
 */
GetTableColumnStatisticsResponse Client::getTableColumnStatisticsWithOptions(const GetTableColumnStatisticsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetTableColumnStatisticsShrinkRequest request = GetTableColumnStatisticsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasColumnNames()) {
    request.setColumnNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.columnNames(), "ColumnNames", "json"));
  }

  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasColumnNamesShrink()) {
    query["ColumnNames"] = request.columnNamesShrink();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableColumnStatistics"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/columnstatistics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableColumnStatisticsResponse>();
}

/**
 * @summary You can call this operation to obtain statistics about a specified field in a data table in a data lake.
 *
 * @param request GetTableColumnStatisticsRequest
 * @return GetTableColumnStatisticsResponse
 */
GetTableColumnStatisticsResponse Client::getTableColumnStatistics(const GetTableColumnStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableColumnStatisticsWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the details of a table data profile.
 *
 * @description To use a data profile, you must first host the OSS bucket of the table.
 *
 * @param request GetTableProfileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableProfileResponse
 */
GetTableProfileResponse Client::getTableProfileWithOptions(const GetTableProfileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableProfile"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/metastorehouse/catalog/database/tableprofile")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableProfileResponse>();
}

/**
 * @summary Obtains the details of a table data profile.
 *
 * @description To use a data profile, you must first host the OSS bucket of the table.
 *
 * @param request GetTableProfileRequest
 * @return GetTableProfileResponse
 */
GetTableProfileResponse Client::getTableProfile(const GetTableProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableProfileWithOptions(request, headers, runtime);
}

/**
 * @summary Gets a specified version of a data table in the data lake.
 *
 * @param request GetTableVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableVersionResponse
 */
GetTableVersionResponse Client::getTableVersionWithOptions(const GetTableVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableVersion"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableVersionResponse>();
}

/**
 * @summary Gets a specified version of a data table in the data lake.
 *
 * @param request GetTableVersionRequest
 * @return GetTableVersionResponse
 */
GetTableVersionResponse Client::getTableVersion(const GetTableVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableVersionWithOptions(request, headers, runtime);
}

/**
 * @summary Grant the operation permissions on resources to the User /Data Lake role.
 *
 * @param request GrantPermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantPermissionsResponse
 */
GrantPermissionsResponse Client::grantPermissionsWithOptions(const GrantPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccesses()) {
    body["Accesses"] = request.accesses();
  }

  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDelegateAccesses()) {
    body["DelegateAccesses"] = request.delegateAccesses();
  }

  if (!!request.hasMetaResource()) {
    body["MetaResource"] = request.metaResource();
  }

  if (!!request.hasPrincipal()) {
    body["Principal"] = request.principal();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GrantPermissions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/permissions/grant")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantPermissionsResponse>();
}

/**
 * @summary Grant the operation permissions on resources to the User /Data Lake role.
 *
 * @param request GrantPermissionsRequest
 * @return GrantPermissionsResponse
 */
GrantPermissionsResponse Client::grantPermissions(const GrantPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return grantPermissionsWithOptions(request, headers, runtime);
}

/**
 * @summary Grant a Data Lake role to multiple users.
 *
 * @param request GrantRoleToUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantRoleToUsersResponse
 */
GrantRoleToUsersResponse Client::grantRoleToUsersWithOptions(const GrantRoleToUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoleName()) {
    body["RoleName"] = request.roleName();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.users();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GrantRoleToUsers"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/roles/grantusers")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantRoleToUsersResponse>();
}

/**
 * @summary Grant a Data Lake role to multiple users.
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
 * @summary Grant multiple roles to a single user.
 *
 * @param request GrantRolesToUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantRolesToUserResponse
 */
GrantRolesToUserResponse Client::grantRolesToUserWithOptions(const GrantRolesToUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoleNames()) {
    body["RoleNames"] = request.roleNames();
  }

  if (!!request.hasUser()) {
    body["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GrantRolesToUser"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/roles/grantroles")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantRolesToUserResponse>();
}

/**
 * @summary Grant multiple roles to a single user.
 *
 * @param request GrantRolesToUserRequest
 * @return GrantRolesToUserResponse
 */
GrantRolesToUserResponse Client::grantRolesToUser(const GrantRolesToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return grantRolesToUserWithOptions(request, headers, runtime);
}

/**
 * @summary You can call this operation to query the list of metabase namespaces (catalogs).
 *
 * @param request ListCatalogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCatalogsResponse
 */
ListCatalogsResponse Client::listCatalogsWithOptions(const ListCatalogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdPattern()) {
    query["IdPattern"] = request.idPattern();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCatalogs"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCatalogsResponse>();
}

/**
 * @summary You can call this operation to query the list of metabase namespaces (catalogs).
 *
 * @param request ListCatalogsRequest
 * @return ListCatalogsResponse
 */
ListCatalogsResponse Client::listCatalogs(const ListCatalogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCatalogsWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains a list of databases in the data lake and queries them by page. You can match them based on the database name.
 *
 * @param request ListDatabasesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabasesWithOptions(const ListDatabasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasNamePattern()) {
    query["NamePattern"] = request.namePattern();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabases"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabasesResponse>();
}

/**
 * @summary Obtains a list of databases in the data lake and queries them by page. You can match them based on the database name.
 *
 * @param request ListDatabasesRequest
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabases(const ListDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDatabasesWithOptions(request, headers, runtime);
}

/**
 * @summary Paged query to obtain the list of function names of the database.
 *
 * @param request ListFunctionNamesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFunctionNamesResponse
 */
ListFunctionNamesResponse Client::listFunctionNamesWithOptions(const ListFunctionNamesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasFunctionNamePattern()) {
    query["FunctionNamePattern"] = request.functionNamePattern();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFunctionNames"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/functions/names")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFunctionNamesResponse>();
}

/**
 * @summary Paged query to obtain the list of function names of the database.
 *
 * @param request ListFunctionNamesRequest
 * @return ListFunctionNamesResponse
 */
ListFunctionNamesResponse Client::listFunctionNames(const ListFunctionNamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFunctionNamesWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains a list of user-defined functions for databases in the data lake in bulk.
 *
 * @param request ListFunctionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFunctionsResponse
 */
ListFunctionsResponse Client::listFunctionsWithOptions(const ListFunctionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasFunctionNamePattern()) {
    query["FunctionNamePattern"] = request.functionNamePattern();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFunctions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/functions/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFunctionsResponse>();
}

/**
 * @summary Obtains a list of user-defined functions for databases in the data lake in bulk.
 *
 * @param request ListFunctionsRequest
 * @return ListFunctionsResponse
 */
ListFunctionsResponse Client::listFunctions(const ListFunctionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFunctionsWithOptions(request, headers, runtime);
}

/**
 * @summary You can call this operation to obtain a list of partition names of data tables in a data lake. This method is usually used for multi-level partitioning.
 *
 * @param request ListPartitionNamesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPartitionNamesResponse
 */
ListPartitionNamesResponse Client::listPartitionNamesWithOptions(const ListPartitionNamesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasNextPageToken()) {
    body["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasPartialPartValues()) {
    body["PartialPartValues"] = request.partialPartValues();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPartitionNames"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/names")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPartitionNamesResponse>();
}

/**
 * @summary You can call this operation to obtain a list of partition names of data tables in a data lake. This method is usually used for multi-level partitioning.
 *
 * @param request ListPartitionNamesRequest
 * @return ListPartitionNamesResponse
 */
ListPartitionNamesResponse Client::listPartitionNames(const ListPartitionNamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPartitionNamesWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains a list of database partition details in the data lake.
 *
 * @param request ListPartitionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPartitionsResponse
 */
ListPartitionsResponse Client::listPartitionsWithOptions(const ListPartitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasIsShareSd()) {
    body["IsShareSd"] = request.isShareSd();
  }

  if (!!request.hasNextPageToken()) {
    body["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasPartialPartValues()) {
    body["PartialPartValues"] = request.partialPartValues();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPartitions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPartitionsResponse>();
}

/**
 * @summary Obtains a list of database partition details in the data lake.
 *
 * @param request ListPartitionsRequest
 * @return ListPartitionsResponse
 */
ListPartitionsResponse Client::listPartitions(const ListPartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPartitionsWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains a list of data table partitions in the data lake and queries them by condition.
 *
 * @description You cannot specify expr to filter partitions. Currently, you need to call the listpartitionsbyfilter to complete the corresponding function.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPartitionsByExprResponse
 */
ListPartitionsByExprResponse Client::listPartitionsByExprWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPartitionsByExpr"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/listbyexpr")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPartitionsByExprResponse>();
}

/**
 * @summary Obtains a list of data table partitions in the data lake and queries them by condition.
 *
 * @description You cannot specify expr to filter partitions. Currently, you need to call the listpartitionsbyfilter to complete the corresponding function.
 *
 * @return ListPartitionsByExprResponse
 */
ListPartitionsByExprResponse Client::listPartitionsByExpr() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPartitionsByExprWithOptions(headers, runtime);
}

/**
 * @summary Obtain the list of data table partitions in the data lake and query them by filter condition.
 *
 * @param request ListPartitionsByFilterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPartitionsByFilterResponse
 */
ListPartitionsByFilterResponse Client::listPartitionsByFilterWithOptions(const ListPartitionsByFilterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.filter();
  }

  if (!!request.hasIsShareSd()) {
    body["IsShareSd"] = request.isShareSd();
  }

  if (!!request.hasNextPageToken()) {
    body["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPartitionsByFilter"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/listbyfilter")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPartitionsByFilterResponse>();
}

/**
 * @summary Obtain the list of data table partitions in the data lake and query them by filter condition.
 *
 * @param request ListPartitionsByFilterRequest
 * @return ListPartitionsByFilterResponse
 */
ListPartitionsByFilterResponse Client::listPartitionsByFilter(const ListPartitionsByFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPartitionsByFilterWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the details of a partition data profile.
 *
 * @description To use a data profile, you must first host the OSS bucket of the table.
 *
 * @param tmpReq ListPartitionsProfileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPartitionsProfileResponse
 */
ListPartitionsProfileResponse Client::listPartitionsProfileWithOptions(const ListPartitionsProfileRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPartitionsProfileShrinkRequest request = ListPartitionsProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPartitionNames()) {
    request.setPartitionNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.partitionNames(), "PartitionNames", "simple"));
  }

  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPartitionNamesShrink()) {
    query["PartitionNames"] = request.partitionNamesShrink();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPartitionsProfile"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/metastorehouse/catalog/database/tableprofile/partitionprofile/listPartitionsProfile")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPartitionsProfileResponse>();
}

/**
 * @summary Obtains the details of a partition data profile.
 *
 * @description To use a data profile, you must first host the OSS bucket of the table.
 *
 * @param request ListPartitionsProfileRequest
 * @return ListPartitionsProfileResponse
 */
ListPartitionsProfileResponse Client::listPartitionsProfile(const ListPartitionsProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPartitionsProfileWithOptions(request, headers, runtime);
}

/**
 * @summary Queries permissions.
 *
 * @param request ListPermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPermissionsResponse
 */
ListPermissionsResponse Client::listPermissionsWithOptions(const ListPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasIsListUserRolePermissions()) {
    body["IsListUserRolePermissions"] = request.isListUserRolePermissions();
  }

  if (!!request.hasMetaResource()) {
    body["MetaResource"] = request.metaResource();
  }

  if (!!request.hasMetaResourceType()) {
    body["MetaResourceType"] = request.metaResourceType();
  }

  if (!!request.hasNextPageToken()) {
    body["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasPrincipal()) {
    body["Principal"] = request.principal();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPermissions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/permissions/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPermissionsResponse>();
}

/**
 * @summary Queries permissions.
 *
 * @param request ListPermissionsRequest
 * @return ListPermissionsResponse
 */
ListPermissionsResponse Client::listPermissions(const ListPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPermissionsWithOptions(request, headers, runtime);
}

/**
 * @summary Gets the list of users for a single role.
 *
 * @param request ListRoleUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRoleUsersResponse
 */
ListRoleUsersResponse Client::listRoleUsersWithOptions(const ListRoleUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.roleName();
  }

  if (!!request.hasUserNamePattern()) {
    query["UserNamePattern"] = request.userNamePattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRoleUsers"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/roles/roleusers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRoleUsersResponse>();
}

/**
 * @summary Gets the list of users for a single role.
 *
 * @param request ListRoleUsersRequest
 * @return ListRoleUsersResponse
 */
ListRoleUsersResponse Client::listRoleUsers(const ListRoleUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRoleUsersWithOptions(request, headers, runtime);
}

/**
 * @summary You can query the list of data lake roles.
 *
 * @param request ListRolesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRolesWithOptions(const ListRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRoleNamePattern()) {
    query["RoleNamePattern"] = request.roleNamePattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRoles"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/roles/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRolesResponse>();
}

/**
 * @summary You can query the list of data lake roles.
 *
 * @param request ListRolesRequest
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRoles(const ListRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRolesWithOptions(request, headers, runtime);
}

/**
 * @summary This function is used only to query the names of data tables in Data Lake.
 *
 * @param request ListTableNamesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTableNamesResponse
 */
ListTableNamesResponse Client::listTableNamesWithOptions(const ListTableNamesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTableNamePattern()) {
    query["TableNamePattern"] = request.tableNamePattern();
  }

  if (!!request.hasTableType()) {
    query["TableType"] = request.tableType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTableNames"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/names")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTableNamesResponse>();
}

/**
 * @summary This function is used only to query the names of data tables in Data Lake.
 *
 * @param request ListTableNamesRequest
 * @return ListTableNamesResponse
 */
ListTableNamesResponse Client::listTableNames(const ListTableNamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTableNamesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of specified versions of data tables in a data lake by page.
 *
 * @param request ListTableVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTableVersionsResponse
 */
ListTableVersionsResponse Client::listTableVersionsWithOptions(const ListTableVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTableVersions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/versions/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTableVersionsResponse>();
}

/**
 * @summary Queries the list of specified versions of data tables in a data lake by page.
 *
 * @param request ListTableVersionsRequest
 * @return ListTableVersionsResponse
 */
ListTableVersionsResponse Client::listTableVersions(const ListTableVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTableVersionsWithOptions(request, headers, runtime);
}

/**
 * @summary You can call this operation to obtain a list of data tables in the data lake.
 *
 * @param request ListTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTablesWithOptions(const ListTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTableNamePattern()) {
    query["TableNamePattern"] = request.tableNamePattern();
  }

  if (!!request.hasTableType()) {
    query["TableType"] = request.tableType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTables"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/databases/tables/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTablesResponse>();
}

/**
 * @summary You can call this operation to obtain a list of data tables in the data lake.
 *
 * @param request ListTablesRequest
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTables(const ListTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTablesWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the list of data lake roles for a single user.
 *
 * @param request ListUserRolesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserRolesResponse
 */
ListUserRolesResponse Client::listUserRolesWithOptions(const ListUserRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPrincipalArn()) {
    query["PrincipalArn"] = request.principalArn();
  }

  if (!!request.hasRoleNamePattern()) {
    query["RoleNamePattern"] = request.roleNamePattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserRoles"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/roles/userroles")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserRolesResponse>();
}

/**
 * @summary Obtains the list of data lake roles for a single user.
 *
 * @param request ListUserRolesRequest
 * @return ListUserRolesResponse
 */
ListUserRolesResponse Client::listUserRoles(const ListUserRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserRolesWithOptions(request, headers, runtime);
}

/**
 * @summary Refreshes the specified metadata lock.
 *
 * @param request RefreshLockRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshLockResponse
 */
RefreshLockResponse Client::refreshLockWithOptions(const RefreshLockRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLockId()) {
    query["LockId"] = request.lockId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshLock"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/locks")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshLockResponse>();
}

/**
 * @summary Refreshes the specified metadata lock.
 *
 * @param request RefreshLockRequest
 * @return RefreshLockResponse
 */
RefreshLockResponse Client::refreshLock(const RefreshLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return refreshLockWithOptions(request, headers, runtime);
}

/**
 * @summary Register the OSS path to be managed by DLF.
 *
 * @param request RegisterLocationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterLocationResponse
 */
RegisterLocationResponse Client::registerLocationWithOptions(const RegisterLocationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInventoryCollectEnabled()) {
    body["InventoryCollectEnabled"] = request.inventoryCollectEnabled();
  }

  if (!!request.hasLocation()) {
    body["Location"] = request.location();
  }

  if (!!request.hasOssLogCollectEnabled()) {
    body["OssLogCollectEnabled"] = request.ossLogCollectEnabled();
  }

  if (!!request.hasRoleName()) {
    body["RoleName"] = request.roleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RegisterLocation"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/locations")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterLocationResponse>();
}

/**
 * @summary Register the OSS path to be managed by DLF.
 *
 * @param request RegisterLocationRequest
 * @return RegisterLocationResponse
 */
RegisterLocationResponse Client::registerLocation(const RegisterLocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return registerLocationWithOptions(request, headers, runtime);
}

/**
 * @summary Update the partition name of the data table in the data lake.
 *
 * @param request RenamePartitionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenamePartitionResponse
 */
RenamePartitionResponse Client::renamePartitionWithOptions(const RenamePartitionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasPartitionInput()) {
    body["PartitionInput"] = request.partitionInput();
  }

  if (!!request.hasPartitionValues()) {
    body["PartitionValues"] = request.partitionValues();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RenamePartition"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/rename")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenamePartitionResponse>();
}

/**
 * @summary Update the partition name of the data table in the data lake.
 *
 * @param request RenamePartitionRequest
 * @return RenamePartitionResponse
 */
RenamePartitionResponse Client::renamePartition(const RenamePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renamePartitionWithOptions(request, headers, runtime);
}

/**
 * @summary is used only to update the name of a data table in the data lake.
 *
 * @param request RenameTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenameTableResponse
 */
RenameTableResponse Client::renameTableWithOptions(const RenameTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasIsAsync()) {
    body["IsAsync"] = request.isAsync();
  }

  if (!!request.hasTableInput()) {
    body["TableInput"] = request.tableInput();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RenameTable"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/rename")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenameTableResponse>();
}

/**
 * @summary is used only to update the name of a data table in the data lake.
 *
 * @param request RenameTableRequest
 * @return RenameTableResponse
 */
RenameTableResponse Client::renameTable(const RenameTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renameTableWithOptions(request, headers, runtime);
}

/**
 * @summary Cancels the operation permissions on resources granted to a User /Data Lake role.
 *
 * @param request RevokePermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokePermissionsResponse
 */
RevokePermissionsResponse Client::revokePermissionsWithOptions(const RevokePermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccesses()) {
    body["Accesses"] = request.accesses();
  }

  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDelegateAccesses()) {
    body["DelegateAccesses"] = request.delegateAccesses();
  }

  if (!!request.hasMetaResource()) {
    body["MetaResource"] = request.metaResource();
  }

  if (!!request.hasPrincipal()) {
    body["Principal"] = request.principal();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RevokePermissions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/permissions/revoke")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokePermissionsResponse>();
}

/**
 * @summary Cancels the operation permissions on resources granted to a User /Data Lake role.
 *
 * @param request RevokePermissionsRequest
 * @return RevokePermissionsResponse
 */
RevokePermissionsResponse Client::revokePermissions(const RevokePermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revokePermissionsWithOptions(request, headers, runtime);
}

/**
 * @summary Removes multiple users from a single data lake role.
 *
 * @param request RevokeRoleFromUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeRoleFromUsersResponse
 */
RevokeRoleFromUsersResponse Client::revokeRoleFromUsersWithOptions(const RevokeRoleFromUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoleName()) {
    body["RoleName"] = request.roleName();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.users();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RevokeRoleFromUsers"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/roles/revokeusers")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeRoleFromUsersResponse>();
}

/**
 * @summary Removes multiple users from a single data lake role.
 *
 * @param request RevokeRoleFromUsersRequest
 * @return RevokeRoleFromUsersResponse
 */
RevokeRoleFromUsersResponse Client::revokeRoleFromUsers(const RevokeRoleFromUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revokeRoleFromUsersWithOptions(request, headers, runtime);
}

/**
 * @summary Removes multiple roles from a single user.
 *
 * @param request RevokeRolesFromUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeRolesFromUserResponse
 */
RevokeRolesFromUserResponse Client::revokeRolesFromUserWithOptions(const RevokeRolesFromUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoleNames()) {
    body["RoleNames"] = request.roleNames();
  }

  if (!!request.hasUser()) {
    body["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RevokeRolesFromUser"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/roles/revokeroles")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeRolesFromUserResponse>();
}

/**
 * @summary Removes multiple roles from a single user.
 *
 * @param request RevokeRolesFromUserRequest
 * @return RevokeRolesFromUserResponse
 */
RevokeRolesFromUserResponse Client::revokeRolesFromUser(const RevokeRolesFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revokeRolesFromUserWithOptions(request, headers, runtime);
}

/**
 * @summary Runs a metadata migration task.
 *
 * @param request RunMigrationWorkflowRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunMigrationWorkflowResponse
 */
RunMigrationWorkflowResponse Client::runMigrationWorkflowWithOptions(const RunMigrationWorkflowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunMigrationWorkflow"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/migration/workflow/run")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunMigrationWorkflowResponse>();
}

/**
 * @summary Runs a metadata migration task.
 *
 * @param request RunMigrationWorkflowRequest
 * @return RunMigrationWorkflowResponse
 */
RunMigrationWorkflowResponse Client::runMigrationWorkflow(const RunMigrationWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runMigrationWorkflowWithOptions(request, headers, runtime);
}

/**
 * @summary Metadata retrieval.
 *
 * @description Metadata search
 *
 * @param request SearchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchResponse
 */
SearchResponse Client::searchWithOptions(const SearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchText()) {
    body["SearchText"] = request.searchText();
  }

  if (!!request.hasSearchType()) {
    body["SearchType"] = request.searchType();
  }

  if (!!request.hasSortCriteria()) {
    body["SortCriteria"] = request.sortCriteria();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Search"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/search")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchResponse>();
}

/**
 * @summary Metadata retrieval.
 *
 * @description Metadata search
 *
 * @param request SearchRequest
 * @return SearchResponse
 */
SearchResponse Client::search(const SearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchWithOptions(request, headers, runtime);
}

/**
 * @summary Search across catalogs for content such as libraries, tables, and fields.
 *
 * @param request SearchAcrossCatalogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchAcrossCatalogResponse
 */
SearchAcrossCatalogResponse Client::searchAcrossCatalogWithOptions(const SearchAcrossCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogIds()) {
    body["CatalogIds"] = request.catalogIds();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchText()) {
    body["SearchText"] = request.searchText();
  }

  if (!!request.hasSearchTypes()) {
    body["SearchTypes"] = request.searchTypes();
  }

  if (!!request.hasSortCriteria()) {
    body["SortCriteria"] = request.sortCriteria();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchAcrossCatalog"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/search/search-across-catalog")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchAcrossCatalogResponse>();
}

/**
 * @summary Search across catalogs for content such as libraries, tables, and fields.
 *
 * @param request SearchAcrossCatalogRequest
 * @return SearchAcrossCatalogResponse
 */
SearchAcrossCatalogResponse Client::searchAcrossCatalog(const SearchAcrossCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchAcrossCatalogWithOptions(request, headers, runtime);
}

/**
 * @summary Stop the metadata migration task.
 *
 * @param request StopMigrationWorkflowRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopMigrationWorkflowResponse
 */
StopMigrationWorkflowResponse Client::stopMigrationWorkflowWithOptions(const StopMigrationWorkflowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopMigrationWorkflow"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/migration/workflow/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopMigrationWorkflowResponse>();
}

/**
 * @summary Stop the metadata migration task.
 *
 * @param request StopMigrationWorkflowRequest
 * @return StopMigrationWorkflowResponse
 */
StopMigrationWorkflowResponse Client::stopMigrationWorkflow(const StopMigrationWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopMigrationWorkflowWithOptions(request, headers, runtime);
}

/**
 * @summary Submit an SQL query task.
 *
 * @description *   Only suitable for submitting small and medium-sized queries. The execution time cannot exceed 1 hour.
 * *   A maximum of 10000 query results can be returned.
 * *   There are limits on concurrent execution under a single master account. If multiple queries are submitted at the same time, they will be queued.
 *
 * @param request SubmitQueryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitQueryResponse
 */
SubmitQueryResponse Client::submitQueryWithOptions(const SubmitQueryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["catalogId"] = request.catalogId();
  }

  if (!!request.hasSql()) {
    body["sql"] = request.sql();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitQuery"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/query/submitQueryRequestBody")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitQueryResponse>();
}

/**
 * @summary Submit an SQL query task.
 *
 * @description *   Only suitable for submitting small and medium-sized queries. The execution time cannot exceed 1 hour.
 * *   A maximum of 10000 query results can be returned.
 * *   There are limits on concurrent execution under a single master account. If multiple queries are submitted at the same time, they will be queued.
 *
 * @param request SubmitQueryRequest
 * @return SubmitQueryResponse
 */
SubmitQueryResponse Client::submitQuery(const SubmitQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitQueryWithOptions(request, headers, runtime);
}

/**
 * @summary Unlocks the specified metadata lock.
 *
 * @param request UnLockRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnLockResponse
 */
UnLockResponse Client::unLockWithOptions(const UnLockRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLockId()) {
    query["LockId"] = request.lockId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnLock"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/locks")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnLockResponse>();
}

/**
 * @summary Unlocks the specified metadata lock.
 *
 * @param request UnLockRequest
 * @return UnLockResponse
 */
UnLockResponse Client::unLock(const UnLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unLockWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the contents of the Data Catalog.
 *
 * @param request UpdateCatalogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCatalogResponse
 */
UpdateCatalogResponse Client::updateCatalogWithOptions(const UpdateCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogInput()) {
    body["CatalogInput"] = request.catalogInput();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCatalog"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCatalogResponse>();
}

/**
 * @summary Updates the contents of the Data Catalog.
 *
 * @param request UpdateCatalogRequest
 * @return UpdateCatalogResponse
 */
UpdateCatalogResponse Client::updateCatalog(const UpdateCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCatalogWithOptions(request, headers, runtime);
}

/**
 * @summary To update the configurations of Data Lake Catalog, you must assume the admin role or more.
 *
 * @param request UpdateCatalogSettingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCatalogSettingsResponse
 */
UpdateCatalogSettingsResponse Client::updateCatalogSettingsWithOptions(const UpdateCatalogSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasCatalogSettings()) {
    body["CatalogSettings"] = request.catalogSettings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCatalogSettings"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/settings")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCatalogSettingsResponse>();
}

/**
 * @summary To update the configurations of Data Lake Catalog, you must assume the admin role or more.
 *
 * @param request UpdateCatalogSettingsRequest
 * @return UpdateCatalogSettingsResponse
 */
UpdateCatalogSettingsResponse Client::updateCatalogSettings(const UpdateCatalogSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCatalogSettingsWithOptions(request, headers, runtime);
}

/**
 * @summary Update the details of a database in the data lake.
 *
 * @param request UpdateDatabaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatabaseResponse
 */
UpdateDatabaseResponse Client::updateDatabaseWithOptions(const UpdateDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseInput()) {
    body["DatabaseInput"] = request.databaseInput();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDatabase"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatabaseResponse>();
}

/**
 * @summary Update the details of a database in the data lake.
 *
 * @param request UpdateDatabaseRequest
 * @return UpdateDatabaseResponse
 */
UpdateDatabaseResponse Client::updateDatabase(const UpdateDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDatabaseWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the user-defined function information for a database in the data lake by name.
 *
 * @param request UpdateFunctionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFunctionResponse
 */
UpdateFunctionResponse Client::updateFunctionWithOptions(const UpdateFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasFunctionInput()) {
    body["FunctionInput"] = request.functionInput();
  }

  if (!!request.hasFunctionName()) {
    body["FunctionName"] = request.functionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateFunction"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/functions")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFunctionResponse>();
}

/**
 * @summary Updates the user-defined function information for a database in the data lake by name.
 *
 * @param request UpdateFunctionRequest
 * @return UpdateFunctionResponse
 */
UpdateFunctionResponse Client::updateFunction(const UpdateFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFunctionWithOptions(request, headers, runtime);
}

/**
 * @summary Creates or updates the field statistics of a data table partition.
 *
 * @param request UpdatePartitionColumnStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePartitionColumnStatisticsResponse
 */
UpdatePartitionColumnStatisticsResponse Client::updatePartitionColumnStatisticsWithOptions(const UpdatePartitionColumnStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.updateTablePartitionColumnStatisticsRequest())}
  }));
  Params params = Params(json({
    {"action" , "UpdatePartitionColumnStatistics"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/partitions/columnstatistics")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePartitionColumnStatisticsResponse>();
}

/**
 * @summary Creates or updates the field statistics of a data table partition.
 *
 * @param request UpdatePartitionColumnStatisticsRequest
 * @return UpdatePartitionColumnStatisticsResponse
 */
UpdatePartitionColumnStatisticsResponse Client::updatePartitionColumnStatistics(const UpdatePartitionColumnStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePartitionColumnStatisticsWithOptions(request, headers, runtime);
}

/**
 * @summary Update the permissions of the User /Data Lake role.
 *
 * @param request UpdatePermissionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePermissionsResponse
 */
UpdatePermissionsResponse Client::updatePermissionsWithOptions(const UpdatePermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccesses()) {
    body["Accesses"] = request.accesses();
  }

  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDelegateAccesses()) {
    body["DelegateAccesses"] = request.delegateAccesses();
  }

  if (!!request.hasMetaResource()) {
    body["MetaResource"] = request.metaResource();
  }

  if (!!request.hasPrincipal()) {
    body["Principal"] = request.principal();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePermissions"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/permissions/")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePermissionsResponse>();
}

/**
 * @summary Update the permissions of the User /Data Lake role.
 *
 * @param request UpdatePermissionsRequest
 * @return UpdatePermissionsResponse
 */
UpdatePermissionsResponse Client::updatePermissions(const UpdatePermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePermissionsWithOptions(request, headers, runtime);
}

/**
 * @summary Edit a Registered Location.
 *
 * @param request UpdateRegisteredLocationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRegisteredLocationResponse
 */
UpdateRegisteredLocationResponse Client::updateRegisteredLocationWithOptions(const UpdateRegisteredLocationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInventoryCollectEnabled()) {
    body["InventoryCollectEnabled"] = request.inventoryCollectEnabled();
  }

  if (!!request.hasLocationId()) {
    body["LocationId"] = request.locationId();
  }

  if (!!request.hasOssLogCollectEnabled()) {
    body["OssLogCollectEnabled"] = request.ossLogCollectEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRegisteredLocation"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/locations")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRegisteredLocationResponse>();
}

/**
 * @summary Edit a Registered Location.
 *
 * @param request UpdateRegisteredLocationRequest
 * @return UpdateRegisteredLocationResponse
 */
UpdateRegisteredLocationResponse Client::updateRegisteredLocation(const UpdateRegisteredLocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRegisteredLocationWithOptions(request, headers, runtime);
}

/**
 * @summary Updates a role that has the data lake permissions.
 *
 * @param request UpdateRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRoleWithOptions(const UpdateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoleInput()) {
    body["RoleInput"] = request.roleInput();
  }

  if (!!request.hasRoleName()) {
    body["RoleName"] = request.roleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRole"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/roles")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRoleResponse>();
}

/**
 * @summary Updates a role that has the data lake permissions.
 *
 * @param request UpdateRoleRequest
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRole(const UpdateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRoleWithOptions(request, headers, runtime);
}

/**
 * @summary Update the user in the role to include ram user/ram role.
 *
 * @param request UpdateRoleUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRoleUsersResponse
 */
UpdateRoleUsersResponse Client::updateRoleUsersWithOptions(const UpdateRoleUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoleName()) {
    body["RoleName"] = request.roleName();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.users();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRoleUsers"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/auth/updateroleusers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRoleUsersResponse>();
}

/**
 * @summary Update the user in the role to include ram user/ram role.
 *
 * @param request UpdateRoleUsersRequest
 * @return UpdateRoleUsersResponse
 */
UpdateRoleUsersResponse Client::updateRoleUsers(const UpdateRoleUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRoleUsersWithOptions(request, headers, runtime);
}

/**
 * @summary Update the data table information in the data lake based on the name.
 *
 * @param request UpdateTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTableResponse
 */
UpdateTableResponse Client::updateTableWithOptions(const UpdateTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAllowPartitionKeyChange()) {
    body["AllowPartitionKeyChange"] = request.allowPartitionKeyChange();
  }

  if (!!request.hasCatalogId()) {
    body["CatalogId"] = request.catalogId();
  }

  if (!!request.hasDatabaseName()) {
    body["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasIsAsync()) {
    body["IsAsync"] = request.isAsync();
  }

  if (!!request.hasSkipArchive()) {
    body["SkipArchive"] = request.skipArchive();
  }

  if (!!request.hasTableInput()) {
    body["TableInput"] = request.tableInput();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTable"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTableResponse>();
}

/**
 * @summary Update the data table information in the data lake based on the name.
 *
 * @param request UpdateTableRequest
 * @return UpdateTableResponse
 */
UpdateTableResponse Client::updateTable(const UpdateTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTableWithOptions(request, headers, runtime);
}

/**
 * @summary Creates or updates field statistics for a data table.
 *
 * @param request UpdateTableColumnStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTableColumnStatisticsResponse
 */
UpdateTableColumnStatisticsResponse Client::updateTableColumnStatisticsWithOptions(const UpdateTableColumnStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.updateTablePartitionColumnStatisticsRequest())}
  }));
  Params params = Params(json({
    {"action" , "UpdateTableColumnStatistics"},
    {"version" , "2020-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/metastore/catalogs/databases/tables/columnstatistics")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTableColumnStatisticsResponse>();
}

/**
 * @summary Creates or updates field statistics for a data table.
 *
 * @param request UpdateTableColumnStatisticsRequest
 * @return UpdateTableColumnStatisticsResponse
 */
UpdateTableColumnStatisticsResponse Client::updateTableColumnStatistics(const UpdateTableColumnStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTableColumnStatisticsWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace DataLake20200710