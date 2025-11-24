#include <darabonba/Core.hpp>
#include <alibabacloud/MaxCompute20220104.hpp>
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
using namespace AlibabaCloud::MaxCompute20220104::Models;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{

AlibabaCloud::MaxCompute20220104::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "maxcompute.aliyuncs.com"},
    {"ap-northeast-2-pop" , "maxcompute.aliyuncs.com"},
    {"ap-south-1" , "maxcompute.aliyuncs.com"},
    {"ap-southeast-1" , "maxcompute.aliyuncs.com"},
    {"ap-southeast-2" , "maxcompute.aliyuncs.com"},
    {"ap-southeast-3" , "maxcompute.aliyuncs.com"},
    {"ap-southeast-5" , "maxcompute.aliyuncs.com"},
    {"cn-beijing" , "maxcompute.aliyuncs.com"},
    {"cn-beijing-finance-1" , "maxcompute.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "maxcompute.aliyuncs.com"},
    {"cn-beijing-gov-1" , "maxcompute.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "maxcompute.aliyuncs.com"},
    {"cn-chengdu" , "maxcompute.aliyuncs.com"},
    {"cn-edge-1" , "maxcompute.aliyuncs.com"},
    {"cn-fujian" , "maxcompute.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "maxcompute.aliyuncs.com"},
    {"cn-hangzhou" , "maxcompute.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "maxcompute.aliyuncs.com"},
    {"cn-hangzhou-finance" , "maxcompute.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "maxcompute.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "maxcompute.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "maxcompute.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "maxcompute.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "maxcompute.aliyuncs.com"},
    {"cn-hongkong" , "maxcompute.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "maxcompute.aliyuncs.com"},
    {"cn-huhehaote" , "maxcompute.aliyuncs.com"},
    {"cn-north-2-gov-1" , "maxcompute.aliyuncs.com"},
    {"cn-qingdao" , "maxcompute.aliyuncs.com"},
    {"cn-qingdao-nebula" , "maxcompute.aliyuncs.com"},
    {"cn-shanghai" , "maxcompute.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "maxcompute.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "maxcompute.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "maxcompute.aliyuncs.com"},
    {"cn-shanghai-inner" , "maxcompute.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "maxcompute.aliyuncs.com"},
    {"cn-shenzhen" , "maxcompute.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "maxcompute.aliyuncs.com"},
    {"cn-shenzhen-inner" , "maxcompute.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "maxcompute.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "maxcompute.aliyuncs.com"},
    {"cn-wuhan" , "maxcompute.aliyuncs.com"},
    {"cn-yushanfang" , "maxcompute.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "maxcompute.aliyuncs.com"},
    {"cn-zhangjiakou" , "maxcompute.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "maxcompute.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "maxcompute.aliyuncs.com"},
    {"eu-central-1" , "maxcompute.aliyuncs.com"},
    {"eu-west-1" , "maxcompute.aliyuncs.com"},
    {"eu-west-1-oxs" , "maxcompute.aliyuncs.com"},
    {"me-east-1" , "maxcompute.aliyuncs.com"},
    {"rus-west-1-pop" , "maxcompute.aliyuncs.com"},
    {"us-east-1" , "maxcompute.aliyuncs.com"},
    {"us-west-1" , "maxcompute.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("maxcompute", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Activate a Quota Plan Immediately.
 *
 * @description Please ensure that before using this interface, you have fully understood the <props="china">[Pricing and Charges](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
 * <props="intl">[Pricing and Charges](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyComputeQuotaPlanResponse
 */
ApplyComputeQuotaPlanResponse Client::applyComputeQuotaPlanWithOptions(const string &nickname, const string &planName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyComputeQuotaPlan"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/computeQuotaPlan/" , Darabonba::Encode::Encoder::percentEncode(planName) , "/apply")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyComputeQuotaPlanResponse>();
}

/**
 * @summary Activate a Quota Plan Immediately.
 *
 * @description Please ensure that before using this interface, you have fully understood the <props="china">[Pricing and Charges](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
 * <props="intl">[Pricing and Charges](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
 *
 * @return ApplyComputeQuotaPlanResponse
 */
ApplyComputeQuotaPlanResponse Client::applyComputeQuotaPlan(const string &nickname, const string &planName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return applyComputeQuotaPlanWithOptions(nickname, planName, headers, runtime);
}

/**
 * @summary Create MaxCompute ComputeQuotaPlan.
 *
 * @description Please ensure that before using this interface, you have fully understood the <props="china">[Pricing and Charges](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
 * <props="intl">[Pricing and Charges](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
 *
 * @param request CreateComputeQuotaPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComputeQuotaPlanResponse
 */
CreateComputeQuotaPlanResponse Client::createComputeQuotaPlanWithOptions(const string &nickname, const CreateComputeQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasQuota()) {
    body["quota"] = request.quota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateComputeQuotaPlan"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/computeQuotaPlan")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComputeQuotaPlanResponse>();
}

/**
 * @summary Create MaxCompute ComputeQuotaPlan.
 *
 * @description Please ensure that before using this interface, you have fully understood the <props="china">[Pricing and Charges](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
 * <props="intl">[Pricing and Charges](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
 *
 * @param request CreateComputeQuotaPlanRequest
 * @return CreateComputeQuotaPlanResponse
 */
CreateComputeQuotaPlanResponse Client::createComputeQuotaPlan(const string &nickname, const CreateComputeQuotaPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createComputeQuotaPlanWithOptions(nickname, request, headers, runtime);
}

/**
 * @summary CreateMmsDataSource
 *
 * @param request CreateMmsDataSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMmsDataSourceResponse
 */
CreateMmsDataSourceResponse Client::createMmsDataSourceWithOptions(const CreateMmsDataSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["config"] = request.config();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasNetworklink()) {
    body["networklink"] = request.networklink();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMmsDataSource"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMmsDataSourceResponse>();
}

/**
 * @summary CreateMmsDataSource
 *
 * @param request CreateMmsDataSourceRequest
 * @return CreateMmsDataSourceResponse
 */
CreateMmsDataSourceResponse Client::createMmsDataSource(const CreateMmsDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMmsDataSourceWithOptions(request, headers, runtime);
}

/**
 * @summary 创建数据源的更新元数据操作
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMmsFetchMetadataJobResponse
 */
CreateMmsFetchMetadataJobResponse Client::createMmsFetchMetadataJobWithOptions(const string &sourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMmsFetchMetadataJob"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/scans")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMmsFetchMetadataJobResponse>();
}

/**
 * @summary 创建数据源的更新元数据操作
 *
 * @return CreateMmsFetchMetadataJobResponse
 */
CreateMmsFetchMetadataJobResponse Client::createMmsFetchMetadataJob(const string &sourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMmsFetchMetadataJobWithOptions(sourceId, headers, runtime);
}

/**
 * @summary 创建迁移任务
 *
 * @param request CreateMmsJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMmsJobResponse
 */
CreateMmsJobResponse Client::createMmsJobWithOptions(const string &sourceId, const CreateMmsJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasColumnMapping()) {
    body["columnMapping"] = request.columnMapping();
  }

  if (!!request.hasDstDbName()) {
    body["dstDbName"] = request.dstDbName();
  }

  if (!!request.hasDstSchemaName()) {
    body["dstSchemaName"] = request.dstSchemaName();
  }

  if (!!request.hasEnableDataMigration()) {
    body["enableDataMigration"] = request.enableDataMigration();
  }

  if (!!request.hasEnableSchemaMigration()) {
    body["enableSchemaMigration"] = request.enableSchemaMigration();
  }

  if (!!request.hasEnableVerification()) {
    body["enableVerification"] = request.enableVerification();
  }

  if (!!request.hasEta()) {
    body["eta"] = request.eta();
  }

  if (!!request.hasIncrement()) {
    body["increment"] = request.increment();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasOthers()) {
    body["others"] = request.others();
  }

  if (!!request.hasPartitionFilters()) {
    body["partitionFilters"] = request.partitionFilters();
  }

  if (!!request.hasPartitions()) {
    body["partitions"] = request.partitions();
  }

  if (!!request.hasSchemaOnly()) {
    body["schemaOnly"] = request.schemaOnly();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.sourceId();
  }

  if (!!request.hasSourceName()) {
    body["sourceName"] = request.sourceName();
  }

  if (!!request.hasSrcDbName()) {
    body["srcDbName"] = request.srcDbName();
  }

  if (!!request.hasSrcSchemaName()) {
    body["srcSchemaName"] = request.srcSchemaName();
  }

  if (!!request.hasTableBlackList()) {
    body["tableBlackList"] = request.tableBlackList();
  }

  if (!!request.hasTableMapping()) {
    body["tableMapping"] = request.tableMapping();
  }

  if (!!request.hasTableWhiteList()) {
    body["tableWhiteList"] = request.tableWhiteList();
  }

  if (!!request.hasTables()) {
    body["tables"] = request.tables();
  }

  if (!!request.hasTaskType()) {
    body["taskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMmsJob"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/jobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMmsJobResponse>();
}

/**
 * @summary 创建迁移任务
 *
 * @param request CreateMmsJobRequest
 * @return CreateMmsJobResponse
 */
CreateMmsJobResponse Client::createMmsJob(const string &sourceId, const CreateMmsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMmsJobWithOptions(sourceId, request, headers, runtime);
}

/**
 * @summary Creates a package.
 *
 * @param request CreatePackageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePackageResponse
 */
CreatePackageResponse Client::createPackageWithOptions(const string &projectName, const CreatePackageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsInstall()) {
    query["isInstall"] = request.isInstall();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "CreatePackage"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/packages")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePackageResponse>();
}

/**
 * @summary Creates a package.
 *
 * @param request CreatePackageRequest
 * @return CreatePackageResponse
 */
CreatePackageResponse Client::createPackage(const string &projectName, const CreatePackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPackageWithOptions(projectName, request, headers, runtime);
}

/**
 * @summary Creates a MaxCompute project.
 *
 * @param request CreateProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProjectWithOptions(const CreateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "CreateProject"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectResponse>();
}

/**
 * @summary Creates a MaxCompute project.
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createProjectWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a quota plan.
 *
 * @param request CreateQuotaPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQuotaPlanResponse
 */
CreateQuotaPlanResponse Client::createQuotaPlanWithOptions(const string &nickname, const CreateQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "CreateQuotaPlan"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/plans")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQuotaPlanResponse>();
}

/**
 * @summary Creates a quota plan.
 *
 * @param request CreateQuotaPlanRequest
 * @return CreateQuotaPlanResponse
 */
CreateQuotaPlanResponse Client::createQuotaPlan(const string &nickname, const CreateQuotaPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createQuotaPlanWithOptions(nickname, request, headers, runtime);
}

/**
 * @summary Creates a role at the MaxCompute project level.
 *
 * @param request CreateRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRoleWithOptions(const string &projectName, const CreateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "CreateRole"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/roles")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRoleResponse>();
}

/**
 * @summary Creates a role at the MaxCompute project level.
 *
 * @param request CreateRoleRequest
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRole(const string &projectName, const CreateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRoleWithOptions(projectName, request, headers, runtime);
}

/**
 * @summary Delete MaxCompute compute quota plan.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComputeQuotaPlanResponse
 */
DeleteComputeQuotaPlanResponse Client::deleteComputeQuotaPlanWithOptions(const string &nickname, const string &planName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteComputeQuotaPlan"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/computeQuotaPlan/" , Darabonba::Encode::Encoder::percentEncode(planName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComputeQuotaPlanResponse>();
}

/**
 * @summary Delete MaxCompute compute quota plan.
 *
 * @return DeleteComputeQuotaPlanResponse
 */
DeleteComputeQuotaPlanResponse Client::deleteComputeQuotaPlan(const string &nickname, const string &planName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteComputeQuotaPlanWithOptions(nickname, planName, headers, runtime);
}

/**
 * @summary 删除数据源
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMmsDataSourceResponse
 */
DeleteMmsDataSourceResponse Client::deleteMmsDataSourceWithOptions(const string &sourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMmsDataSource"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMmsDataSourceResponse>();
}

/**
 * @summary 删除数据源
 *
 * @return DeleteMmsDataSourceResponse
 */
DeleteMmsDataSourceResponse Client::deleteMmsDataSource(const string &sourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMmsDataSourceWithOptions(sourceId, headers, runtime);
}

/**
 * @summary 删除迁移计划
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMmsJobResponse
 */
DeleteMmsJobResponse Client::deleteMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMmsJob"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMmsJobResponse>();
}

/**
 * @summary 删除迁移计划
 *
 * @return DeleteMmsJobResponse
 */
DeleteMmsJobResponse Client::deleteMmsJob(const string &sourceId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMmsJobWithOptions(sourceId, jobId, headers, runtime);
}

/**
 * @summary Deletes a MaxCompute project.
 *
 * @param request DeleteProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProjectWithOptions(const string &projectName, const DeleteProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsLogical()) {
    query["isLogical"] = request.isLogical();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProject"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectResponse>();
}

/**
 * @summary Deletes a MaxCompute project.
 *
 * @param request DeleteProjectRequest
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProject(const string &projectName, const DeleteProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteProjectWithOptions(projectName, request, headers, runtime);
}

/**
 * @summary Deletes a quota plan.
 *
 * @param request DeleteQuotaPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQuotaPlanResponse
 */
DeleteQuotaPlanResponse Client::deleteQuotaPlanWithOptions(const string &nickname, const string &planName, const DeleteQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteQuotaPlan"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/plans/" , Darabonba::Encode::Encoder::percentEncode(planName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQuotaPlanResponse>();
}

/**
 * @summary Deletes a quota plan.
 *
 * @param request DeleteQuotaPlanRequest
 * @return DeleteQuotaPlanResponse
 */
DeleteQuotaPlanResponse Client::deleteQuotaPlan(const string &nickname, const string &planName, const DeleteQuotaPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteQuotaPlanWithOptions(nickname, planName, request, headers, runtime);
}

/**
 * @summary GetComputeEffectivePlan.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetComputeEffectivePlanResponse
 */
GetComputeEffectivePlanResponse Client::getComputeEffectivePlanWithOptions(const string &nickname, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetComputeEffectivePlan"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/computeEffectivePlan/")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetComputeEffectivePlanResponse>();
}

/**
 * @summary GetComputeEffectivePlan.
 *
 * @return GetComputeEffectivePlanResponse
 */
GetComputeEffectivePlanResponse Client::getComputeEffectivePlan(const string &nickname) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getComputeEffectivePlanWithOptions(nickname, headers, runtime);
}

/**
 * @summary Get detailed information of a single compute quota plan.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetComputeQuotaPlanResponse
 */
GetComputeQuotaPlanResponse Client::getComputeQuotaPlanWithOptions(const string &nickname, const string &planName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetComputeQuotaPlan"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/computeQuotaPlan/" , Darabonba::Encode::Encoder::percentEncode(planName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetComputeQuotaPlanResponse>();
}

/**
 * @summary Get detailed information of a single compute quota plan.
 *
 * @return GetComputeQuotaPlanResponse
 */
GetComputeQuotaPlanResponse Client::getComputeQuotaPlan(const string &nickname, const string &planName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getComputeQuotaPlanWithOptions(nickname, planName, headers, runtime);
}

/**
 * @summary Displays the time-specific configuration of compute quota.
 *
 * @param request GetComputeQuotaScheduleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetComputeQuotaScheduleResponse
 */
GetComputeQuotaScheduleResponse Client::getComputeQuotaScheduleWithOptions(const string &nickname, const GetComputeQuotaScheduleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayTimezone()) {
    query["displayTimezone"] = request.displayTimezone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetComputeQuotaSchedule"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/computeQuotaSchedule")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetComputeQuotaScheduleResponse>();
}

/**
 * @summary Displays the time-specific configuration of compute quota.
 *
 * @param request GetComputeQuotaScheduleRequest
 * @return GetComputeQuotaScheduleResponse
 */
GetComputeQuotaScheduleResponse Client::getComputeQuotaSchedule(const string &nickname, const GetComputeQuotaScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getComputeQuotaScheduleWithOptions(nickname, request, headers, runtime);
}

/**
 * @summary Queries the basic information about a job.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobInfoResponse
 */
GetJobInfoResponse Client::getJobInfoWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobInfo"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/info")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobInfoResponse>();
}

/**
 * @summary Queries the basic information about a job.
 *
 * @return GetJobInfoResponse
 */
GetJobInfoResponse Client::getJobInfo(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getJobInfoWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Performs statistics on all jobs that are complete on a specified day and obtains the total resource usage of each job executor on a daily basis.
 *
 * @param tmpReq GetJobResourceUsageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobResourceUsageResponse
 */
GetJobResourceUsageResponse Client::getJobResourceUsageWithOptions(const GetJobResourceUsageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetJobResourceUsageShrinkRequest request = GetJobResourceUsageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJobOwnerList()) {
    request.setJobOwnerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.jobOwnerList(), "jobOwnerList", "simple"));
  }

  if (!!tmpReq.hasQuotaNicknameList()) {
    request.setQuotaNicknameListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.quotaNicknameList(), "quotaNicknameList", "simple"));
  }

  json query = {};
  if (!!request.hasDate()) {
    query["date"] = request.date();
  }

  if (!!request.hasJobOwnerListShrink()) {
    query["jobOwnerList"] = request.jobOwnerListShrink();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasQuotaNicknameListShrink()) {
    query["quotaNicknameList"] = request.quotaNicknameListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobResourceUsage"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/resourceUsage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobResourceUsageResponse>();
}

/**
 * @summary Performs statistics on all jobs that are complete on a specified day and obtains the total resource usage of each job executor on a daily basis.
 *
 * @param request GetJobResourceUsageRequest
 * @return GetJobResourceUsageResponse
 */
GetJobResourceUsageResponse Client::getJobResourceUsage(const GetJobResourceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getJobResourceUsageWithOptions(request, headers, runtime);
}

/**
 * @summary GetMmsAsyncTask
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMmsAsyncTaskResponse
 */
GetMmsAsyncTaskResponse Client::getMmsAsyncTaskWithOptions(const string &sourceId, const string &asyncTaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMmsAsyncTask"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/asyncTasks/" , Darabonba::Encode::Encoder::percentEncode(asyncTaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMmsAsyncTaskResponse>();
}

/**
 * @summary GetMmsAsyncTask
 *
 * @return GetMmsAsyncTaskResponse
 */
GetMmsAsyncTaskResponse Client::getMmsAsyncTask(const string &sourceId, const string &asyncTaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsAsyncTaskWithOptions(sourceId, asyncTaskId, headers, runtime);
}

/**
 * @summary 获取数据源
 *
 * @param request GetMmsDataSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMmsDataSourceResponse
 */
GetMmsDataSourceResponse Client::getMmsDataSourceWithOptions(const string &sourceId, const GetMmsDataSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["lang"] = request.lang();
  }

  if (!!request.hasWithConfig()) {
    query["withConfig"] = request.withConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMmsDataSource"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMmsDataSourceResponse>();
}

/**
 * @summary 获取数据源
 *
 * @param request GetMmsDataSourceRequest
 * @return GetMmsDataSourceResponse
 */
GetMmsDataSourceResponse Client::getMmsDataSource(const string &sourceId, const GetMmsDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsDataSourceWithOptions(sourceId, request, headers, runtime);
}

/**
 * @summary GetMmsDb
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMmsDbResponse
 */
GetMmsDbResponse Client::getMmsDbWithOptions(const string &sourceId, const string &dbId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMmsDb"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/dbs/" , Darabonba::Encode::Encoder::percentEncode(dbId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMmsDbResponse>();
}

/**
 * @summary GetMmsDb
 *
 * @return GetMmsDbResponse
 */
GetMmsDbResponse Client::getMmsDb(const string &sourceId, const string &dbId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsDbWithOptions(sourceId, dbId, headers, runtime);
}

/**
 * @summary GetMmsFetchMetadataJob
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMmsFetchMetadataJobResponse
 */
GetMmsFetchMetadataJobResponse Client::getMmsFetchMetadataJobWithOptions(const string &sourceId, const string &scanId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMmsFetchMetadataJob"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/scans/" , Darabonba::Encode::Encoder::percentEncode(scanId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMmsFetchMetadataJobResponse>();
}

/**
 * @summary GetMmsFetchMetadataJob
 *
 * @return GetMmsFetchMetadataJobResponse
 */
GetMmsFetchMetadataJobResponse Client::getMmsFetchMetadataJob(const string &sourceId, const string &scanId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsFetchMetadataJobWithOptions(sourceId, scanId, headers, runtime);
}

/**
 * @summary 获取迁移计划
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMmsJobResponse
 */
GetMmsJobResponse Client::getMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMmsJob"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMmsJobResponse>();
}

/**
 * @summary 获取迁移计划
 *
 * @return GetMmsJobResponse
 */
GetMmsJobResponse Client::getMmsJob(const string &sourceId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsJobWithOptions(sourceId, jobId, headers, runtime);
}

/**
 * @summary GetMmsPartition
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMmsPartitionResponse
 */
GetMmsPartitionResponse Client::getMmsPartitionWithOptions(const string &sourceId, const string &partitionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMmsPartition"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/partitions/" , Darabonba::Encode::Encoder::percentEncode(partitionId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMmsPartitionResponse>();
}

/**
 * @summary GetMmsPartition
 *
 * @return GetMmsPartitionResponse
 */
GetMmsPartitionResponse Client::getMmsPartition(const string &sourceId, const string &partitionId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsPartitionWithOptions(sourceId, partitionId, headers, runtime);
}

/**
 * @summary GetMmsTable
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMmsTableResponse
 */
GetMmsTableResponse Client::getMmsTableWithOptions(const string &sourceId, const string &tableId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMmsTable"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(tableId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMmsTableResponse>();
}

/**
 * @summary GetMmsTable
 *
 * @return GetMmsTableResponse
 */
GetMmsTableResponse Client::getMmsTable(const string &sourceId, const string &tableId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsTableWithOptions(sourceId, tableId, headers, runtime);
}

/**
 * @summary GetMmsTask
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMmsTaskResponse
 */
GetMmsTaskResponse Client::getMmsTaskWithOptions(const string &sourceId, const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMmsTask"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMmsTaskResponse>();
}

/**
 * @summary GetMmsTask
 *
 * @return GetMmsTaskResponse
 */
GetMmsTaskResponse Client::getMmsTask(const string &sourceId, const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsTaskWithOptions(sourceId, taskId, headers, runtime);
}

/**
 * @summary Obtains the information about a package.
 *
 * @param request GetPackageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPackageResponse
 */
GetPackageResponse Client::getPackageWithOptions(const string &projectName, const string &packageName, const GetPackageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSourceProject()) {
    query["sourceProject"] = request.sourceProject();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPackage"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/packages/" , Darabonba::Encode::Encoder::percentEncode(packageName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPackageResponse>();
}

/**
 * @summary Obtains the information about a package.
 *
 * @param request GetPackageRequest
 * @return GetPackageResponse
 */
GetPackageResponse Client::getPackage(const string &projectName, const string &packageName, const GetPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPackageWithOptions(projectName, packageName, request, headers, runtime);
}

/**
 * @summary Queries the information about a MaxCompute project.
 *
 * @param request GetProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProjectWithOptions(const string &projectName, const GetProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVerbose()) {
    query["verbose"] = request.verbose();
  }

  if (!!request.hasWithQuotaProductType()) {
    query["withQuotaProductType"] = request.withQuotaProductType();
  }

  if (!!request.hasWithStorageTierInfo()) {
    query["withStorageTierInfo"] = request.withStorageTierInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProject"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectResponse>();
}

/**
 * @summary Queries the information about a MaxCompute project.
 *
 * @param request GetProjectRequest
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProject(const string &projectName, const GetProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProjectWithOptions(projectName, request, headers, runtime);
}

/**
 * @summary Obtains the information about a specified level-1 quota.
 *
 * @param request GetQuotaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaResponse
 */
GetQuotaResponse Client::getQuotaWithOptions(const string &nickname, const GetQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAkProven()) {
    query["AkProven"] = request.akProven();
  }

  if (!!request.hasMock()) {
    query["mock"] = request.mock();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQuota"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQuotaResponse>();
}

/**
 * @summary Obtains the information about a specified level-1 quota.
 *
 * @param request GetQuotaRequest
 * @return GetQuotaResponse
 */
GetQuotaResponse Client::getQuota(const string &nickname, const GetQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getQuotaWithOptions(nickname, request, headers, runtime);
}

/**
 * @summary Obtains the information of a quota plan.
 *
 * @param request GetQuotaPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaPlanResponse
 */
GetQuotaPlanResponse Client::getQuotaPlanWithOptions(const string &nickname, const string &planName, const GetQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQuotaPlan"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/plans/" , Darabonba::Encode::Encoder::percentEncode(planName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQuotaPlanResponse>();
}

/**
 * @summary Obtains the information of a quota plan.
 *
 * @param request GetQuotaPlanRequest
 * @return GetQuotaPlanResponse
 */
GetQuotaPlanResponse Client::getQuotaPlan(const string &nickname, const string &planName, const GetQuotaPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getQuotaPlanWithOptions(nickname, planName, request, headers, runtime);
}

/**
 * @summary Obtains the scheduling plan for a quota plan.
 *
 * @param request GetQuotaScheduleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaScheduleResponse
 */
GetQuotaScheduleResponse Client::getQuotaScheduleWithOptions(const string &nickname, const GetQuotaScheduleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayTimezone()) {
    query["displayTimezone"] = request.displayTimezone();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQuotaSchedule"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/schedule")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQuotaScheduleResponse>();
}

/**
 * @summary Obtains the scheduling plan for a quota plan.
 *
 * @param request GetQuotaScheduleRequest
 * @return GetQuotaScheduleResponse
 */
GetQuotaScheduleResponse Client::getQuotaSchedule(const string &nickname, const GetQuotaScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getQuotaScheduleWithOptions(nickname, request, headers, runtime);
}

/**
 * @summary Queries quota resource consumption information.
 *
 * @param tmpReq GetQuotaUsageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaUsageResponse
 */
GetQuotaUsageResponse Client::getQuotaUsageWithOptions(const string &nickname, const GetQuotaUsageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetQuotaUsageShrinkRequest request = GetQuotaUsageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPlotTypes()) {
    request.setPlotTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.plotTypes(), "plotTypes", "simple"));
  }

  if (!!tmpReq.hasYAxisTypes()) {
    request.setYAxisTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.yAxisTypes(), "yAxisTypes", "simple"));
  }

  json query = {};
  if (!!request.hasAggMethod()) {
    query["aggMethod"] = request.aggMethod();
  }

  if (!!request.hasFrom()) {
    query["from"] = request.from();
  }

  if (!!request.hasPlotTypesShrink()) {
    query["plotTypes"] = request.plotTypesShrink();
  }

  if (!!request.hasProductId()) {
    query["productId"] = request.productId();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasSubQuotaNickname()) {
    query["subQuotaNickname"] = request.subQuotaNickname();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  if (!!request.hasTo()) {
    query["to"] = request.to();
  }

  if (!!request.hasYAxisTypesShrink()) {
    query["yAxisTypes"] = request.yAxisTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQuotaUsage"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/usage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQuotaUsageResponse>();
}

/**
 * @summary Queries quota resource consumption information.
 *
 * @param request GetQuotaUsageRequest
 * @return GetQuotaUsageResponse
 */
GetQuotaUsageResponse Client::getQuotaUsage(const string &nickname, const GetQuotaUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getQuotaUsageWithOptions(nickname, request, headers, runtime);
}

/**
 * @summary Obtains the ACL-based permissions that is granted to a project-level role.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoleAclResponse
 */
GetRoleAclResponse Client::getRoleAclWithOptions(const string &projectName, const string &roleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRoleAcl"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/roles/" , Darabonba::Encode::Encoder::percentEncode(roleName) , "/roleAcl")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoleAclResponse>();
}

/**
 * @summary Obtains the ACL-based permissions that is granted to a project-level role.
 *
 * @return GetRoleAclResponse
 */
GetRoleAclResponse Client::getRoleAcl(const string &projectName, const string &roleName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRoleAclWithOptions(projectName, roleName, headers, runtime);
}

/**
 * @summary Obtains ACL-based permissions on an object that are granted to a project-level role.
 *
 * @param request GetRoleAclOnObjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoleAclOnObjectResponse
 */
GetRoleAclOnObjectResponse Client::getRoleAclOnObjectWithOptions(const string &projectName, const string &roleName, const GetRoleAclOnObjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasObjectName()) {
    query["objectName"] = request.objectName();
  }

  if (!!request.hasObjectType()) {
    query["objectType"] = request.objectType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRoleAclOnObject"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/roles/" , Darabonba::Encode::Encoder::percentEncode(roleName) , "/acl")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoleAclOnObjectResponse>();
}

/**
 * @summary Obtains ACL-based permissions on an object that are granted to a project-level role.
 *
 * @param request GetRoleAclOnObjectRequest
 * @return GetRoleAclOnObjectResponse
 */
GetRoleAclOnObjectResponse Client::getRoleAclOnObject(const string &projectName, const string &roleName, const GetRoleAclOnObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRoleAclOnObjectWithOptions(projectName, roleName, request, headers, runtime);
}

/**
 * @summary Obtains the policy that is attached to a project-level role.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRolePolicyResponse
 */
GetRolePolicyResponse Client::getRolePolicyWithOptions(const string &projectName, const string &roleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRolePolicy"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/roles/" , Darabonba::Encode::Encoder::percentEncode(roleName) , "/policy")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRolePolicyResponse>();
}

/**
 * @summary Obtains the policy that is attached to a project-level role.
 *
 * @return GetRolePolicyResponse
 */
GetRolePolicyResponse Client::getRolePolicy(const string &projectName, const string &roleName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRolePolicyWithOptions(projectName, roleName, headers, runtime);
}

/**
 * @summary Obtains the running state data of jobs that are in the running state in a specified period of time.
 *
 * @param tmpReq GetRunningJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRunningJobsResponse
 */
GetRunningJobsResponse Client::getRunningJobsWithOptions(const GetRunningJobsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetRunningJobsShrinkRequest request = GetRunningJobsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJobOwnerList()) {
    request.setJobOwnerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.jobOwnerList(), "jobOwnerList", "simple"));
  }

  if (!!tmpReq.hasQuotaNicknameList()) {
    request.setQuotaNicknameListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.quotaNicknameList(), "quotaNicknameList", "simple"));
  }

  json query = {};
  if (!!request.hasFrom()) {
    query["from"] = request.from();
  }

  if (!!request.hasJobOwnerListShrink()) {
    query["jobOwnerList"] = request.jobOwnerListShrink();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasQuotaNicknameListShrink()) {
    query["quotaNicknameList"] = request.quotaNicknameListShrink();
  }

  if (!!request.hasTo()) {
    query["to"] = request.to();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRunningJobs"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/runningJobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRunningJobsResponse>();
}

/**
 * @summary Obtains the running state data of jobs that are in the running state in a specified period of time.
 *
 * @param request GetRunningJobsRequest
 * @return GetRunningJobsResponse
 */
GetRunningJobsResponse Client::getRunningJobs(const GetRunningJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRunningJobsWithOptions(request, headers, runtime);
}

/**
 * @param request GetStorageAmountSummaryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStorageAmountSummaryResponse
 */
GetStorageAmountSummaryResponse Client::getStorageAmountSummaryWithOptions(const GetStorageAmountSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDate()) {
    query["date"] = request.date();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStorageAmountSummary"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/observations/analysis/storage/amount")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStorageAmountSummaryResponse>();
}

/**
 * @param request GetStorageAmountSummaryRequest
 * @return GetStorageAmountSummaryResponse
 */
GetStorageAmountSummaryResponse Client::getStorageAmountSummary(const GetStorageAmountSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getStorageAmountSummaryWithOptions(request, headers, runtime);
}

/**
 * @param request GetStorageSizeSummaryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStorageSizeSummaryResponse
 */
GetStorageSizeSummaryResponse Client::getStorageSizeSummaryWithOptions(const GetStorageSizeSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDate()) {
    query["date"] = request.date();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStorageSizeSummary"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/observations/analysis/storage/size")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStorageSizeSummaryResponse>();
}

/**
 * @param request GetStorageSizeSummaryRequest
 * @return GetStorageSizeSummaryResponse
 */
GetStorageSizeSummaryResponse Client::getStorageSizeSummary(const GetStorageSizeSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getStorageSizeSummaryWithOptions(request, headers, runtime);
}

/**
 * @param tmpReq GetStorageSummaryComparedRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStorageSummaryComparedResponse
 */
GetStorageSummaryComparedResponse Client::getStorageSummaryComparedWithOptions(const string &type, const GetStorageSummaryComparedRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetStorageSummaryComparedShrinkRequest request = GetStorageSummaryComparedShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProjects()) {
    request.setProjectsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.projects(), "projects", "simple"));
  }

  json query = {};
  if (!!request.hasBeginDate()) {
    query["beginDate"] = request.beginDate();
  }

  if (!!request.hasEndDate()) {
    query["endDate"] = request.endDate();
  }

  if (!!request.hasProjectsShrink()) {
    query["projects"] = request.projectsShrink();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStorageSummaryCompared"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/observations/analysis/storage/" , Darabonba::Encode::Encoder::percentEncode(type) , "/compared")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStorageSummaryComparedResponse>();
}

/**
 * @param request GetStorageSummaryComparedRequest
 * @return GetStorageSummaryComparedResponse
 */
GetStorageSummaryComparedResponse Client::getStorageSummaryCompared(const string &type, const GetStorageSummaryComparedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getStorageSummaryComparedWithOptions(type, request, headers, runtime);
}

/**
 * @summary Views the information about MaxCompute internal tables, views, external tables, clustered tables, or transactional tables.
 *
 * @param request GetTableInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableInfoResponse
 */
GetTableInfoResponse Client::getTableInfoWithOptions(const string &projectName, const string &tableName, const GetTableInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSchemaName()) {
    query["schemaName"] = request.schemaName();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableInfo"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(tableName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableInfoResponse>();
}

/**
 * @summary Views the information about MaxCompute internal tables, views, external tables, clustered tables, or transactional tables.
 *
 * @param request GetTableInfoRequest
 * @return GetTableInfoResponse
 */
GetTableInfoResponse Client::getTableInfo(const string &projectName, const string &tableName, const GetTableInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableInfoWithOptions(projectName, tableName, request, headers, runtime);
}

/**
 * @summary Obtains the trusted projects of the current project.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrustedProjectsResponse
 */
GetTrustedProjectsResponse Client::getTrustedProjectsWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrustedProjects"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/trustedProjects")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTrustedProjectsResponse>();
}

/**
 * @summary Obtains the trusted projects of the current project.
 *
 * @return GetTrustedProjectsResponse
 */
GetTrustedProjectsResponse Client::getTrustedProjects(const string &projectName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTrustedProjectsWithOptions(projectName, headers, runtime);
}

/**
 * @summary Terminates a running job.
 *
 * @param request KillJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return KillJobsResponse
 */
KillJobsResponse Client::killJobsWithOptions(const KillJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "KillJobs"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/kill")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KillJobsResponse>();
}

/**
 * @summary Terminates a running job.
 *
 * @param request KillJobsRequest
 * @return KillJobsResponse
 */
KillJobsResponse Client::killJobs(const KillJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return killJobsWithOptions(request, headers, runtime);
}

/**
 * @summary Get compute usage of pay-as-you-go jobs.
 *
 * @param request ListComputeMetricsByInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComputeMetricsByInstanceResponse
 */
ListComputeMetricsByInstanceResponse Client::listComputeMetricsByInstanceWithOptions(const ListComputeMetricsByInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndDate()) {
    body["endDate"] = request.endDate();
  }

  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.instanceId();
  }

  if (!!request.hasJobOwner()) {
    body["jobOwner"] = request.jobOwner();
  }

  if (!!request.hasPageNumber()) {
    body["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.pageSize();
  }

  if (!!request.hasProjectNames()) {
    body["projectNames"] = request.projectNames();
  }

  if (!!request.hasRegion()) {
    body["region"] = request.region();
  }

  if (!!request.hasSignature()) {
    body["signature"] = request.signature();
  }

  if (!!request.hasSpecCodes()) {
    body["specCodes"] = request.specCodes();
  }

  if (!!request.hasStartDate()) {
    body["startDate"] = request.startDate();
  }

  if (!!request.hasTypes()) {
    body["types"] = request.types();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListComputeMetricsByInstance"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/computeMetrics/listByInstance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComputeMetricsByInstanceResponse>();
}

/**
 * @summary Get compute usage of pay-as-you-go jobs.
 *
 * @param request ListComputeMetricsByInstanceRequest
 * @return ListComputeMetricsByInstanceResponse
 */
ListComputeMetricsByInstanceResponse Client::listComputeMetricsByInstance(const ListComputeMetricsByInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listComputeMetricsByInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary Get computeQuotaPlan list.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComputeQuotaPlanResponse
 */
ListComputeQuotaPlanResponse Client::listComputeQuotaPlanWithOptions(const string &nickname, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComputeQuotaPlan"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/computeQuotaPlan")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComputeQuotaPlanResponse>();
}

/**
 * @summary Get computeQuotaPlan list.
 *
 * @return ListComputeQuotaPlanResponse
 */
ListComputeQuotaPlanResponse Client::listComputeQuotaPlan(const string &nickname) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listComputeQuotaPlanWithOptions(nickname, headers, runtime);
}

/**
 * @summary Obtains functions in a MaxCompute project.
 *
 * @param request ListFunctionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFunctionsResponse
 */
ListFunctionsResponse Client::listFunctionsWithOptions(const string &projectName, const ListFunctionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["marker"] = request.marker();
  }

  if (!!request.hasMaxItem()) {
    query["maxItem"] = request.maxItem();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.prefix();
  }

  if (!!request.hasSchemaName()) {
    query["schemaName"] = request.schemaName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFunctions"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/functions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFunctionsResponse>();
}

/**
 * @summary Obtains functions in a MaxCompute project.
 *
 * @param request ListFunctionsRequest
 * @return ListFunctionsResponse
 */
ListFunctionsResponse Client::listFunctions(const string &projectName, const ListFunctionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFunctionsWithOptions(projectName, request, headers, runtime);
}

/**
 * @summary Views a list of jobs.
 *
 * @param request ListJobInfosRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobInfosResponse
 */
ListJobInfosResponse Client::listJobInfosWithOptions(const ListJobInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAscOrder()) {
    query["ascOrder"] = request.ascOrder();
  }

  if (!!request.hasOrderColumn()) {
    query["orderColumn"] = request.orderColumn();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  json body = {};
  if (!!request.hasExtNodeIdList()) {
    body["extNodeIdList"] = request.extNodeIdList();
  }

  if (!!request.hasFrom()) {
    body["from"] = request.from();
  }

  if (!!request.hasInstanceIdList()) {
    body["instanceIdList"] = request.instanceIdList();
  }

  if (!!request.hasJobOwnerList()) {
    body["jobOwnerList"] = request.jobOwnerList();
  }

  if (!!request.hasPriorityList()) {
    body["priorityList"] = request.priorityList();
  }

  if (!!request.hasProjectList()) {
    body["projectList"] = request.projectList();
  }

  if (!!request.hasQuotaNickname()) {
    body["quotaNickname"] = request.quotaNickname();
  }

  if (!!request.hasSceneTagList()) {
    body["sceneTagList"] = request.sceneTagList();
  }

  if (!!request.hasSignatureList()) {
    body["signatureList"] = request.signatureList();
  }

  if (!!request.hasSortByList()) {
    body["sortByList"] = request.sortByList();
  }

  if (!!request.hasSortOrderList()) {
    body["sortOrderList"] = request.sortOrderList();
  }

  if (!!request.hasStatusList()) {
    body["statusList"] = request.statusList();
  }

  if (!!request.hasTo()) {
    body["to"] = request.to();
  }

  if (!!request.hasTypeList()) {
    body["typeList"] = request.typeList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListJobInfos"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobInfosResponse>();
}

/**
 * @summary Views a list of jobs.
 *
 * @param request ListJobInfosRequest
 * @return ListJobInfosResponse
 */
ListJobInfosResponse Client::listJobInfos(const ListJobInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listJobInfosWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieve performance metrics for completed jobs.
 *
 * @param request ListJobMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobMetricResponse
 */
ListJobMetricResponse Client::listJobMetricWithOptions(const ListJobMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  json body = {};
  if (!!request.hasGroup()) {
    body["group"] = request.group();
  }

  if (!!request.hasMetric()) {
    body["metric"] = request.metric();
  }

  if (!!request.hasPeriod()) {
    body["period"] = request.period();
  }

  if (!!request.hasProject()) {
    body["project"] = request.project();
  }

  if (!!request.hasQuota()) {
    body["quota"] = request.quota();
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
    {"action" , "ListJobMetric"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/metric")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobMetricResponse>();
}

/**
 * @summary Retrieve performance metrics for completed jobs.
 *
 * @param request ListJobMetricRequest
 * @return ListJobMetricResponse
 */
ListJobMetricResponse Client::listJobMetric(const ListJobMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listJobMetricWithOptions(request, headers, runtime);
}

/**
 * @summary Views a list of job snapshot data at a specific point in time.
 *
 * @param request ListJobSnapshotInfosRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobSnapshotInfosResponse
 */
ListJobSnapshotInfosResponse Client::listJobSnapshotInfosWithOptions(const ListJobSnapshotInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAscOrder()) {
    query["ascOrder"] = request.ascOrder();
  }

  if (!!request.hasOrderColumn()) {
    query["orderColumn"] = request.orderColumn();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  json body = {};
  if (!!request.hasExtNodeIdList()) {
    body["extNodeIdList"] = request.extNodeIdList();
  }

  if (!!request.hasFrom()) {
    body["from"] = request.from();
  }

  if (!!request.hasInstanceIdList()) {
    body["instanceIdList"] = request.instanceIdList();
  }

  if (!!request.hasJobOwnerList()) {
    body["jobOwnerList"] = request.jobOwnerList();
  }

  if (!!request.hasPriorityList()) {
    body["priorityList"] = request.priorityList();
  }

  if (!!request.hasProjectList()) {
    body["projectList"] = request.projectList();
  }

  if (!!request.hasQuotaNickname()) {
    body["quotaNickname"] = request.quotaNickname();
  }

  if (!!request.hasSignatureList()) {
    body["signatureList"] = request.signatureList();
  }

  if (!!request.hasSortByList()) {
    body["sortByList"] = request.sortByList();
  }

  if (!!request.hasSortOrderList()) {
    body["sortOrderList"] = request.sortOrderList();
  }

  if (!!request.hasStatusList()) {
    body["statusList"] = request.statusList();
  }

  if (!!request.hasTo()) {
    body["to"] = request.to();
  }

  if (!!request.hasTypeList()) {
    body["typeList"] = request.typeList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListJobSnapshotInfos"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/snapshot")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobSnapshotInfosResponse>();
}

/**
 * @summary Views a list of job snapshot data at a specific point in time.
 *
 * @param request ListJobSnapshotInfosRequest
 * @return ListJobSnapshotInfosResponse
 */
ListJobSnapshotInfosResponse Client::listJobSnapshotInfos(const ListJobSnapshotInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listJobSnapshotInfosWithOptions(request, headers, runtime);
}

/**
 * @summary ListMmsDataSources
 *
 * @param request ListMmsDataSourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMmsDataSourcesResponse
 */
ListMmsDataSourcesResponse Client::listMmsDataSourcesWithOptions(const ListMmsDataSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPageNum()) {
    query["pageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMmsDataSources"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMmsDataSourcesResponse>();
}

/**
 * @summary ListMmsDataSources
 *
 * @param request ListMmsDataSourcesRequest
 * @return ListMmsDataSourcesResponse
 */
ListMmsDataSourcesResponse Client::listMmsDataSources(const ListMmsDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMmsDataSourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取一个数据源内“库”列表
 *
 * @param tmpReq ListMmsDbsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMmsDbsResponse
 */
ListMmsDbsResponse Client::listMmsDbsWithOptions(const string &sourceId, const ListMmsDbsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListMmsDbsShrinkRequest request = ListMmsDbsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSorter()) {
    request.setSorterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sorter(), "sorter", "json"));
  }

  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPageNum()) {
    query["pageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasSorterShrink()) {
    query["sorter"] = request.sorterShrink();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMmsDbs"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/dbs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMmsDbsResponse>();
}

/**
 * @summary 获取一个数据源内“库”列表
 *
 * @param request ListMmsDbsRequest
 * @return ListMmsDbsResponse
 */
ListMmsDbsResponse Client::listMmsDbs(const string &sourceId, const ListMmsDbsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMmsDbsWithOptions(sourceId, request, headers, runtime);
}

/**
 * @summary ListMmsJobs
 *
 * @param request ListMmsJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMmsJobsResponse
 */
ListMmsJobsResponse Client::listMmsJobsWithOptions(const string &sourceId, const ListMmsJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDstDbName()) {
    query["dstDbName"] = request.dstDbName();
  }

  if (!!request.hasDstTableName()) {
    query["dstTableName"] = request.dstTableName();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPageNum()) {
    query["pageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasSrcDbName()) {
    query["srcDbName"] = request.srcDbName();
  }

  if (!!request.hasSrcTableName()) {
    query["srcTableName"] = request.srcTableName();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasStopped()) {
    query["stopped"] = request.stopped();
  }

  if (!!request.hasTimerId()) {
    query["timerId"] = request.timerId();
  }

  if (!!request.hasSorter()) {
    query["sorter"] = request.sorter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMmsJobs"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/jobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMmsJobsResponse>();
}

/**
 * @summary ListMmsJobs
 *
 * @param request ListMmsJobsRequest
 * @return ListMmsJobsResponse
 */
ListMmsJobsResponse Client::listMmsJobs(const string &sourceId, const ListMmsJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMmsJobsWithOptions(sourceId, request, headers, runtime);
}

/**
 * @summary 获取元数据-分区
 *
 * @param tmpReq ListMmsPartitionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMmsPartitionsResponse
 */
ListMmsPartitionsResponse Client::listMmsPartitionsWithOptions(const string &sourceId, const ListMmsPartitionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListMmsPartitionsShrinkRequest request = ListMmsPartitionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStatus()) {
    request.setStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.status(), "status", "json"));
  }

  json query = {};
  if (!!request.hasDbId()) {
    query["dbId"] = request.dbId();
  }

  if (!!request.hasDbName()) {
    query["dbName"] = request.dbName();
  }

  if (!!request.hasLastDdlTimeEnd()) {
    query["lastDdlTimeEnd"] = request.lastDdlTimeEnd();
  }

  if (!!request.hasLastDdlTimeStart()) {
    query["lastDdlTimeStart"] = request.lastDdlTimeStart();
  }

  if (!!request.hasPageNum()) {
    query["pageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasStatusShrink()) {
    query["status"] = request.statusShrink();
  }

  if (!!request.hasTableId()) {
    query["tableId"] = request.tableId();
  }

  if (!!request.hasTableName()) {
    query["tableName"] = request.tableName();
  }

  if (!!request.hasUpdated()) {
    query["updated"] = request.updated();
  }

  if (!!request.hasValue()) {
    query["value"] = request.value();
  }

  if (!!request.hasSorter()) {
    query["sorter"] = request.sorter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMmsPartitions"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/partitions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMmsPartitionsResponse>();
}

/**
 * @summary 获取元数据-分区
 *
 * @param request ListMmsPartitionsRequest
 * @return ListMmsPartitionsResponse
 */
ListMmsPartitionsResponse Client::listMmsPartitions(const string &sourceId, const ListMmsPartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMmsPartitionsWithOptions(sourceId, request, headers, runtime);
}

/**
 * @summary ListMmsTables
 *
 * @param tmpReq ListMmsTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMmsTablesResponse
 */
ListMmsTablesResponse Client::listMmsTablesWithOptions(const string &sourceId, const ListMmsTablesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListMmsTablesShrinkRequest request = ListMmsTablesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStatus()) {
    request.setStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.status(), "status", "json"));
  }

  json query = {};
  if (!!request.hasDbId()) {
    query["dbId"] = request.dbId();
  }

  if (!!request.hasDbName()) {
    query["dbName"] = request.dbName();
  }

  if (!!request.hasDstName()) {
    query["dstName"] = request.dstName();
  }

  if (!!request.hasDstProjectName()) {
    query["dstProjectName"] = request.dstProjectName();
  }

  if (!!request.hasDstSchemaName()) {
    query["dstSchemaName"] = request.dstSchemaName();
  }

  if (!!request.hasHasPartitions()) {
    query["hasPartitions"] = request.hasPartitions();
  }

  if (!!request.hasLastDdlTimeEnd()) {
    query["lastDdlTimeEnd"] = request.lastDdlTimeEnd();
  }

  if (!!request.hasLastDdlTimeStart()) {
    query["lastDdlTimeStart"] = request.lastDdlTimeStart();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasOnlyName()) {
    query["onlyName"] = request.onlyName();
  }

  if (!!request.hasPageNum()) {
    query["pageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasStatusShrink()) {
    query["status"] = request.statusShrink();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  if (!!request.hasSorter()) {
    query["sorter"] = request.sorter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMmsTables"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/tables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMmsTablesResponse>();
}

/**
 * @summary ListMmsTables
 *
 * @param request ListMmsTablesRequest
 * @return ListMmsTablesResponse
 */
ListMmsTablesResponse Client::listMmsTables(const string &sourceId, const ListMmsTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMmsTablesWithOptions(sourceId, request, headers, runtime);
}

/**
 * @summary ListMmsTaskLogs
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMmsTaskLogsResponse
 */
ListMmsTaskLogsResponse Client::listMmsTaskLogsWithOptions(const string &sourceId, const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMmsTaskLogs"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId) , "/logs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMmsTaskLogsResponse>();
}

/**
 * @summary ListMmsTaskLogs
 *
 * @return ListMmsTaskLogsResponse
 */
ListMmsTaskLogsResponse Client::listMmsTaskLogs(const string &sourceId, const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMmsTaskLogsWithOptions(sourceId, taskId, headers, runtime);
}

/**
 * @summary ListMmsTasks
 *
 * @param request ListMmsTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMmsTasksResponse
 */
ListMmsTasksResponse Client::listMmsTasksWithOptions(const string &sourceId, const ListMmsTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDstDbName()) {
    query["dstDbName"] = request.dstDbName();
  }

  if (!!request.hasDstTableName()) {
    query["dstTableName"] = request.dstTableName();
  }

  if (!!request.hasJobId()) {
    query["jobId"] = request.jobId();
  }

  if (!!request.hasJobName()) {
    query["jobName"] = request.jobName();
  }

  if (!!request.hasPageNum()) {
    query["pageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPartition()) {
    query["partition"] = request.partition();
  }

  if (!!request.hasSrcDbName()) {
    query["srcDbName"] = request.srcDbName();
  }

  if (!!request.hasSrcTableName()) {
    query["srcTableName"] = request.srcTableName();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasSorter()) {
    query["sorter"] = request.sorter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMmsTasks"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMmsTasksResponse>();
}

/**
 * @summary ListMmsTasks
 *
 * @param request ListMmsTasksRequest
 * @return ListMmsTasksResponse
 */
ListMmsTasksResponse Client::listMmsTasks(const string &sourceId, const ListMmsTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMmsTasksWithOptions(sourceId, request, headers, runtime);
}

/**
 * @summary Queries the packages in a MaxCompute project.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPackagesResponse
 */
ListPackagesResponse Client::listPackagesWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPackages"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/packages")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPackagesResponse>();
}

/**
 * @summary Queries the packages in a MaxCompute project.
 *
 * @return ListPackagesResponse
 */
ListPackagesResponse Client::listPackages(const string &projectName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPackagesWithOptions(projectName, headers, runtime);
}

/**
 * @summary Queries a list of users in a project.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectUsersResponse
 */
ListProjectUsersResponse Client::listProjectUsersWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectUsers"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/users")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectUsersResponse>();
}

/**
 * @summary Queries a list of users in a project.
 *
 * @return ListProjectUsersResponse
 */
ListProjectUsersResponse Client::listProjectUsers(const string &projectName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProjectUsersWithOptions(projectName, headers, runtime);
}

/**
 * @summary Queries a list of MaxCompute projects.
 *
 * @param request ListProjectsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjectsWithOptions(const ListProjectsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListSystemCatalog()) {
    query["listSystemCatalog"] = request.listSystemCatalog();
  }

  if (!!request.hasMarker()) {
    query["marker"] = request.marker();
  }

  if (!!request.hasMaxItem()) {
    query["maxItem"] = request.maxItem();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.prefix();
  }

  if (!!request.hasQuotaName()) {
    query["quotaName"] = request.quotaName();
  }

  if (!!request.hasQuotaNickName()) {
    query["quotaNickName"] = request.quotaNickName();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasSaleTags()) {
    query["saleTags"] = request.saleTags();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjects"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectsResponse>();
}

/**
 * @summary Queries a list of MaxCompute projects.
 *
 * @param request ListProjectsRequest
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjects(const ListProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProjectsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries quotas.
 *
 * @param request ListQuotasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotasResponse
 */
ListQuotasResponse Client::listQuotasWithOptions(const ListQuotasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillingType()) {
    query["billingType"] = request.billingType();
  }

  if (!!request.hasMarker()) {
    query["marker"] = request.marker();
  }

  if (!!request.hasMaxItem()) {
    query["maxItem"] = request.maxItem();
  }

  if (!!request.hasProductId()) {
    query["productId"] = request.productId();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasSaleTags()) {
    query["saleTags"] = request.saleTags();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQuotas"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQuotasResponse>();
}

/**
 * @summary Queries quotas.
 *
 * @param request ListQuotasRequest
 * @return ListQuotasResponse
 */
ListQuotasResponse Client::listQuotas(const ListQuotasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listQuotasWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains quota plans.
 *
 * @param request ListQuotasPlansRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotasPlansResponse
 */
ListQuotasPlansResponse Client::listQuotasPlansWithOptions(const string &nickname, const ListQuotasPlansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQuotasPlans"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/plans")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQuotasPlansResponse>();
}

/**
 * @summary Obtains quota plans.
 *
 * @param request ListQuotasPlansRequest
 * @return ListQuotasPlansResponse
 */
ListQuotasPlansResponse Client::listQuotasPlans(const string &nickname, const ListQuotasPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listQuotasPlansWithOptions(nickname, request, headers, runtime);
}

/**
 * @summary Obtains resources in a MaxCompute project.
 *
 * @param request ListResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResourcesWithOptions(const string &projectName, const ListResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["marker"] = request.marker();
  }

  if (!!request.hasMaxItem()) {
    query["maxItem"] = request.maxItem();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasSchemaName()) {
    query["schemaName"] = request.schemaName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResources"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourcesResponse>();
}

/**
 * @summary Obtains resources in a MaxCompute project.
 *
 * @param request ListResourcesRequest
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResources(const string &projectName, const ListResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourcesWithOptions(projectName, request, headers, runtime);
}

/**
 * @summary Obtains MaxCompute project-level roles.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRolesWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRoles"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/roles")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRolesResponse>();
}

/**
 * @summary Obtains MaxCompute project-level roles.
 *
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRoles(const string &projectName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRolesWithOptions(projectName, headers, runtime);
}

/**
 * @summary Queries the storage details of a specific partition in a partitioned table in a MaxCompute project.
 *
 * @param tmpReq ListStoragePartitionsInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStoragePartitionsInfoResponse
 */
ListStoragePartitionsInfoResponse Client::listStoragePartitionsInfoWithOptions(const string &project, const string &table, const ListStoragePartitionsInfoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListStoragePartitionsInfoShrinkRequest request = ListStoragePartitionsInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTypes()) {
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.types(), "types", "json"));
  }

  json query = {};
  if (!!request.hasAscOrder()) {
    query["ascOrder"] = request.ascOrder();
  }

  if (!!request.hasDate()) {
    query["date"] = request.date();
  }

  if (!!request.hasOrderColumn()) {
    query["orderColumn"] = request.orderColumn();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPartitionPrefix()) {
    query["partitionPrefix"] = request.partitionPrefix();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasSchema()) {
    query["schema"] = request.schema();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  if (!!request.hasTypesShrink()) {
    query["types"] = request.typesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStoragePartitionsInfo"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/observations/analysis/storage/projects/" , Darabonba::Encode::Encoder::percentEncode(project) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(table) , "/partitionsInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStoragePartitionsInfoResponse>();
}

/**
 * @summary Queries the storage details of a specific partition in a partitioned table in a MaxCompute project.
 *
 * @param request ListStoragePartitionsInfoRequest
 * @return ListStoragePartitionsInfoResponse
 */
ListStoragePartitionsInfoResponse Client::listStoragePartitionsInfo(const string &project, const string &table, const ListStoragePartitionsInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listStoragePartitionsInfoWithOptions(project, table, request, headers, runtime);
}

/**
 * @param request ListStorageProjectsInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStorageProjectsInfoResponse
 */
ListStorageProjectsInfoResponse Client::listStorageProjectsInfoWithOptions(const ListStorageProjectsInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAscOrder()) {
    query["ascOrder"] = request.ascOrder();
  }

  if (!!request.hasDate()) {
    query["date"] = request.date();
  }

  if (!!request.hasOrderColumn()) {
    query["orderColumn"] = request.orderColumn();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasProjectPrefix()) {
    query["projectPrefix"] = request.projectPrefix();
  }

  if (!!request.hasRecentDays()) {
    query["recentDays"] = request.recentDays();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStorageProjectsInfo"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/observations/analysis/storage/projectsInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStorageProjectsInfoResponse>();
}

/**
 * @param request ListStorageProjectsInfoRequest
 * @return ListStorageProjectsInfoResponse
 */
ListStorageProjectsInfoResponse Client::listStorageProjectsInfo(const ListStorageProjectsInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listStorageProjectsInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the table storage details of a MaxCompute project.
 *
 * @param tmpReq ListStorageTablesInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStorageTablesInfoResponse
 */
ListStorageTablesInfoResponse Client::listStorageTablesInfoWithOptions(const string &project, const ListStorageTablesInfoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListStorageTablesInfoShrinkRequest request = ListStorageTablesInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTypes()) {
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.types(), "types", "simple"));
  }

  json query = {};
  if (!!request.hasAscOrder()) {
    query["ascOrder"] = request.ascOrder();
  }

  if (!!request.hasDate()) {
    query["date"] = request.date();
  }

  if (!!request.hasOrderColumn()) {
    query["orderColumn"] = request.orderColumn();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRecentDays()) {
    query["recentDays"] = request.recentDays();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasSchema()) {
    query["schema"] = request.schema();
  }

  if (!!request.hasTablePrefix()) {
    query["tablePrefix"] = request.tablePrefix();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  if (!!request.hasTypesShrink()) {
    query["types"] = request.typesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStorageTablesInfo"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/observations/analysis/storage/projects/" , Darabonba::Encode::Encoder::percentEncode(project) , "/tablesInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStorageTablesInfoResponse>();
}

/**
 * @summary Queries the table storage details of a MaxCompute project.
 *
 * @param request ListStorageTablesInfoRequest
 * @return ListStorageTablesInfoResponse
 */
ListStorageTablesInfoResponse Client::listStorageTablesInfo(const string &project, const ListStorageTablesInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listStorageTablesInfoWithOptions(project, request, headers, runtime);
}

/**
 * @summary Obtains tables in a MaxCompute project.
 *
 * @param request ListTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTablesWithOptions(const string &projectName, const ListTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["marker"] = request.marker();
  }

  if (!!request.hasMaxItem()) {
    query["maxItem"] = request.maxItem();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.prefix();
  }

  if (!!request.hasSchemaName()) {
    query["schemaName"] = request.schemaName();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTables"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/tables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTablesResponse>();
}

/**
 * @summary Obtains tables in a MaxCompute project.
 *
 * @param request ListTablesRequest
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTables(const string &projectName, const ListTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTablesWithOptions(projectName, request, headers, runtime);
}

/**
 * @summary Displays the time-specific configuration of an exclusive resource group for Tunnel (referred to as Tunnel quota).
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTunnelQuotaTimerResponse
 */
ListTunnelQuotaTimerResponse Client::listTunnelQuotaTimerWithOptions(const string &nickname, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTunnelQuotaTimer"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tunnel/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/timers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTunnelQuotaTimerResponse>();
}

/**
 * @summary Displays the time-specific configuration of an exclusive resource group for Tunnel (referred to as Tunnel quota).
 *
 * @return ListTunnelQuotaTimerResponse
 */
ListTunnelQuotaTimerResponse Client::listTunnelQuotaTimer(const string &nickname) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTunnelQuotaTimerWithOptions(nickname, headers, runtime);
}

/**
 * @summary Queries a list of all users under a tenant.
 *
 * @param request ListUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/users")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary Queries a list of all users under a tenant.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUsersWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains information about the users who are assigned a project-level role.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersByRoleResponse
 */
ListUsersByRoleResponse Client::listUsersByRoleWithOptions(const string &projectName, const string &roleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsersByRole"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/roles/" , Darabonba::Encode::Encoder::percentEncode(roleName) , "/users")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersByRoleResponse>();
}

/**
 * @summary Obtains information about the users who are assigned a project-level role.
 *
 * @return ListUsersByRoleResponse
 */
ListUsersByRoleResponse Client::listUsersByRole(const string &projectName, const string &roleName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUsersByRoleWithOptions(projectName, roleName, headers, runtime);
}

/**
 * @summary Queries the information about a specified level-1 quota group.
 *
 * @param request QueryQuotaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryQuotaResponse
 */
QueryQuotaResponse Client::queryQuotaWithOptions(const string &nickname, const QueryQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAkProven()) {
    query["AkProven"] = request.akProven();
  }

  if (!!request.hasMock()) {
    query["mock"] = request.mock();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryQuota"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/query")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryQuotaResponse>();
}

/**
 * @summary Queries the information about a specified level-1 quota group.
 *
 * @param request QueryQuotaRequest
 * @return QueryQuotaResponse
 */
QueryQuotaResponse Client::queryQuota(const string &nickname, const QueryQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryQuotaWithOptions(nickname, request, headers, runtime);
}

/**
 * @summary 查询quota的资源使用信息
 *
 * @param request QueryQuotaMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryQuotaMetricResponse
 */
QueryQuotaMetricResponse Client::queryQuotaMetricWithOptions(const string &metric, const QueryQuotaMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  if (!!request.hasStrategy()) {
    query["strategy"] = request.strategy();
  }

  json body = {};
  if (!!request.hasInterval()) {
    body["interval"] = request.interval();
  }

  if (!!request.hasNickname()) {
    body["nickname"] = request.nickname();
  }

  if (!!request.hasSubQuotaNickname()) {
    body["subQuotaNickname"] = request.subQuotaNickname();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryQuotaMetric"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/observations/quota/" , Darabonba::Encode::Encoder::percentEncode(metric))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryQuotaMetricResponse>();
}

/**
 * @summary 查询quota的资源使用信息
 *
 * @param request QueryQuotaMetricRequest
 * @return QueryQuotaMetricResponse
 */
QueryQuotaMetricResponse Client::queryQuotaMetric(const string &metric, const QueryQuotaMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryQuotaMetricWithOptions(metric, request, headers, runtime);
}

/**
 * @summary 查看存储数据的时序指标
 *
 * @param request QueryStorageMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryStorageMetricResponse
 */
QueryStorageMetricResponse Client::queryStorageMetricWithOptions(const string &metric, const QueryStorageMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  json body = {};
  if (!!request.hasProjectList()) {
    body["projectList"] = request.projectList();
  }

  if (!!request.hasTypeList()) {
    body["typeList"] = request.typeList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryStorageMetric"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/observations/storage/" , Darabonba::Encode::Encoder::percentEncode(metric))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryStorageMetricResponse>();
}

/**
 * @summary 查看存储数据的时序指标
 *
 * @param request QueryStorageMetricRequest
 * @return QueryStorageMetricResponse
 */
QueryStorageMetricResponse Client::queryStorageMetric(const string &metric, const QueryStorageMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryStorageMetricWithOptions(metric, request, headers, runtime);
}

/**
 * @summary 查询tunnel资源使用信息
 *
 * @param request QueryTunnelMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTunnelMetricResponse
 */
QueryTunnelMetricResponse Client::queryTunnelMetricWithOptions(const string &metric, const QueryTunnelMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  if (!!request.hasStrategy()) {
    query["strategy"] = request.strategy();
  }

  json body = {};
  if (!!request.hasCodeList()) {
    body["codeList"] = request.codeList();
  }

  if (!!request.hasGroupList()) {
    body["groupList"] = request.groupList();
  }

  if (!!request.hasOperationList()) {
    body["operationList"] = request.operationList();
  }

  if (!!request.hasProject()) {
    body["project"] = request.project();
  }

  if (!!request.hasQuotaNickname()) {
    body["quotaNickname"] = request.quotaNickname();
  }

  if (!!request.hasTableList()) {
    body["tableList"] = request.tableList();
  }

  if (!!request.hasTopN()) {
    body["topN"] = request.topN();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryTunnelMetric"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/observations/tunnel/" , Darabonba::Encode::Encoder::percentEncode(metric))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTunnelMetricResponse>();
}

/**
 * @summary 查询tunnel资源使用信息
 *
 * @param request QueryTunnelMetricRequest
 * @return QueryTunnelMetricResponse
 */
QueryTunnelMetricResponse Client::queryTunnelMetric(const string &metric, const QueryTunnelMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryTunnelMetricWithOptions(metric, request, headers, runtime);
}

/**
 * @summary 查询tunnel资源使用详情
 *
 * @param request QueryTunnelMetricDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTunnelMetricDetailResponse
 */
QueryTunnelMetricDetailResponse Client::queryTunnelMetricDetailWithOptions(const string &metric, const QueryTunnelMetricDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  json body = {};
  if (!!request.hasAscOrder()) {
    body["ascOrder"] = request.ascOrder();
  }

  if (!!request.hasGroupList()) {
    body["groupList"] = request.groupList();
  }

  if (!!request.hasLimit()) {
    body["limit"] = request.limit();
  }

  if (!!request.hasOperationList()) {
    body["operationList"] = request.operationList();
  }

  if (!!request.hasOrderColumn()) {
    body["orderColumn"] = request.orderColumn();
  }

  if (!!request.hasProject()) {
    body["project"] = request.project();
  }

  if (!!request.hasQuotaNickname()) {
    body["quotaNickname"] = request.quotaNickname();
  }

  if (!!request.hasTableList()) {
    body["tableList"] = request.tableList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryTunnelMetricDetail"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/observations/tunnel/" , Darabonba::Encode::Encoder::percentEncode(metric) , "/detail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTunnelMetricDetailResponse>();
}

/**
 * @summary 查询tunnel资源使用详情
 *
 * @param request QueryTunnelMetricDetailRequest
 * @return QueryTunnelMetricDetailResponse
 */
QueryTunnelMetricDetailResponse Client::queryTunnelMetricDetail(const string &metric, const QueryTunnelMetricDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryTunnelMetricDetailWithOptions(metric, request, headers, runtime);
}

/**
 * @summary RetryMmsJob
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryMmsJobResponse
 */
RetryMmsJobResponse Client::retryMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryMmsJob"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId) , "/retry")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryMmsJobResponse>();
}

/**
 * @summary RetryMmsJob
 *
 * @return RetryMmsJobResponse
 */
RetryMmsJobResponse Client::retryMmsJob(const string &sourceId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retryMmsJobWithOptions(sourceId, jobId, headers, runtime);
}

/**
 * @summary StartMmsJob
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartMmsJobResponse
 */
StartMmsJobResponse Client::startMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartMmsJob"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId) , "/start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartMmsJobResponse>();
}

/**
 * @summary StartMmsJob
 *
 * @return StartMmsJobResponse
 */
StartMmsJobResponse Client::startMmsJob(const string &sourceId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startMmsJobWithOptions(sourceId, jobId, headers, runtime);
}

/**
 * @summary StopMmsJob
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopMmsJobResponse
 */
StopMmsJobResponse Client::stopMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopMmsJob"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId) , "/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopMmsJobResponse>();
}

/**
 * @summary StopMmsJob
 *
 * @return StopMmsJobResponse
 */
StopMmsJobResponse Client::stopMmsJob(const string &sourceId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopMmsJobWithOptions(sourceId, jobId, headers, runtime);
}

/**
 * @param request SumStorageMetricsByDateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SumStorageMetricsByDateResponse
 */
SumStorageMetricsByDateResponse Client::sumStorageMetricsByDateWithOptions(const SumStorageMetricsByDateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndDate()) {
    body["endDate"] = request.endDate();
  }

  if (!!request.hasProjectNames()) {
    body["projectNames"] = request.projectNames();
  }

  if (!!request.hasRegion()) {
    body["region"] = request.region();
  }

  if (!!request.hasStartDate()) {
    body["startDate"] = request.startDate();
  }

  if (!!request.hasStatsType()) {
    body["statsType"] = request.statsType();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SumStorageMetricsByDate"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/storageMetrics/sumByDate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SumStorageMetricsByDateResponse>();
}

/**
 * @param request SumStorageMetricsByDateRequest
 * @return SumStorageMetricsByDateResponse
 */
SumStorageMetricsByDateResponse Client::sumStorageMetricsByDate(const SumStorageMetricsByDateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sumStorageMetricsByDateWithOptions(request, headers, runtime);
}

/**
 * @summary Update the ComputeQuotaPlan.
 *
 * @description Please ensure that before using this interface, you have fully understood the <props="china">[Pricing and Charges](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
 * <props="intl">[Pricing and Charges](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
 *
 * @param request UpdateComputeQuotaPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComputeQuotaPlanResponse
 */
UpdateComputeQuotaPlanResponse Client::updateComputeQuotaPlanWithOptions(const string &nickname, const UpdateComputeQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasQuota()) {
    body["quota"] = request.quota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateComputeQuotaPlan"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/computeQuotaPlan")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComputeQuotaPlanResponse>();
}

/**
 * @summary Update the ComputeQuotaPlan.
 *
 * @description Please ensure that before using this interface, you have fully understood the <props="china">[Pricing and Charges](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
 * <props="intl">[Pricing and Charges](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
 *
 * @param request UpdateComputeQuotaPlanRequest
 * @return UpdateComputeQuotaPlanResponse
 */
UpdateComputeQuotaPlanResponse Client::updateComputeQuotaPlan(const string &nickname, const UpdateComputeQuotaPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateComputeQuotaPlanWithOptions(nickname, request, headers, runtime);
}

/**
 * @summary Update the time-based plan for computing quota.
 *
 * @description Please ensure that before using this interface, you have fully understood the<props="china">[Pricing and Billing](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
 * <props="intl">[Pricing and Billing](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
 *
 * @param request UpdateComputeQuotaScheduleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComputeQuotaScheduleResponse
 */
UpdateComputeQuotaScheduleResponse Client::updateComputeQuotaScheduleWithOptions(const string &nickname, const UpdateComputeQuotaScheduleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScheduleTimezone()) {
    query["scheduleTimezone"] = request.scheduleTimezone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateComputeQuotaSchedule"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/computeQuotaSchedule")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComputeQuotaScheduleResponse>();
}

/**
 * @summary Update the time-based plan for computing quota.
 *
 * @description Please ensure that before using this interface, you have fully understood the<props="china">[Pricing and Billing](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
 * <props="intl">[Pricing and Billing](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
 *
 * @param request UpdateComputeQuotaScheduleRequest
 * @return UpdateComputeQuotaScheduleResponse
 */
UpdateComputeQuotaScheduleResponse Client::updateComputeQuotaSchedule(const string &nickname, const UpdateComputeQuotaScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateComputeQuotaScheduleWithOptions(nickname, request, headers, runtime);
}

/**
 * @summary Update the basic configuration of the calculation quota, including adding or deleting the sub quota, modifying the basic properties of the secondary quota, and the CU configuration of the effective quota plan.
 *
 * @param request UpdateComputeSubQuotaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComputeSubQuotaResponse
 */
UpdateComputeSubQuotaResponse Client::updateComputeSubQuotaWithOptions(const string &nickname, const UpdateComputeSubQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSubQuotaInfoList()) {
    body["subQuotaInfoList"] = request.subQuotaInfoList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateComputeSubQuota"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/computeSubQuota")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComputeSubQuotaResponse>();
}

/**
 * @summary Update the basic configuration of the calculation quota, including adding or deleting the sub quota, modifying the basic properties of the secondary quota, and the CU configuration of the effective quota plan.
 *
 * @param request UpdateComputeSubQuotaRequest
 * @return UpdateComputeSubQuotaResponse
 */
UpdateComputeSubQuotaResponse Client::updateComputeSubQuota(const string &nickname, const UpdateComputeSubQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateComputeSubQuotaWithOptions(nickname, request, headers, runtime);
}

/**
 * @summary 更新数据源配置、名称，启/停数据源实例
 *
 * @param request UpdateMmsDataSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMmsDataSourceResponse
 */
UpdateMmsDataSourceResponse Client::updateMmsDataSourceWithOptions(const string &sourceId, const UpdateMmsDataSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.action();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.config();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasTest()) {
    body["test"] = request.test();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMmsDataSource"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMmsDataSourceResponse>();
}

/**
 * @summary 更新数据源配置、名称，启/停数据源实例
 *
 * @param request UpdateMmsDataSourceRequest
 * @return UpdateMmsDataSourceResponse
 */
UpdateMmsDataSourceResponse Client::updateMmsDataSource(const string &sourceId, const UpdateMmsDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMmsDataSourceWithOptions(sourceId, request, headers, runtime);
}

/**
 * @summary Updates the objects in a package and projects in which the package can be installed.
 *
 * @param request UpdatePackageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePackageResponse
 */
UpdatePackageResponse Client::updatePackageWithOptions(const string &projectName, const string &packageName, const UpdatePackageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdatePackage"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/packages/" , Darabonba::Encode::Encoder::percentEncode(packageName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePackageResponse>();
}

/**
 * @summary Updates the objects in a package and projects in which the package can be installed.
 *
 * @param request UpdatePackageRequest
 * @return UpdatePackageResponse
 */
UpdatePackageResponse Client::updatePackage(const string &projectName, const string &packageName, const UpdatePackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePackageWithOptions(projectName, packageName, request, headers, runtime);
}

/**
 * @summary Update Project Basic Information
 *
 * @param request UpdateProjectBasicMetaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectBasicMetaResponse
 */
UpdateProjectBasicMetaResponse Client::updateProjectBasicMetaWithOptions(const string &projectName, const UpdateProjectBasicMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComment()) {
    body["comment"] = request.comment();
  }

  if (!!request.hasProperties()) {
    body["properties"] = request.properties();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateProjectBasicMeta"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/meta")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectBasicMetaResponse>();
}

/**
 * @summary Update Project Basic Information
 *
 * @param request UpdateProjectBasicMetaRequest
 * @return UpdateProjectBasicMetaResponse
 */
UpdateProjectBasicMetaResponse Client::updateProjectBasicMeta(const string &projectName, const UpdateProjectBasicMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProjectBasicMetaWithOptions(projectName, request, headers, runtime);
}

/**
 * @summary Modify Default Project Compute Quota
 *
 * @param request UpdateProjectDefaultQuotaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectDefaultQuotaResponse
 */
UpdateProjectDefaultQuotaResponse Client::updateProjectDefaultQuotaWithOptions(const string &projectName, const UpdateProjectDefaultQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasQuota()) {
    body["quota"] = request.quota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateProjectDefaultQuota"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/quota")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectDefaultQuotaResponse>();
}

/**
 * @summary Modify Default Project Compute Quota
 *
 * @param request UpdateProjectDefaultQuotaRequest
 * @return UpdateProjectDefaultQuotaResponse
 */
UpdateProjectDefaultQuotaResponse Client::updateProjectDefaultQuota(const string &projectName, const UpdateProjectDefaultQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProjectDefaultQuotaWithOptions(projectName, request, headers, runtime);
}

/**
 * @summary Modifies the IP address whitelist of a MaxCompute project.
 *
 * @param request UpdateProjectIpWhiteListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectIpWhiteListResponse
 */
UpdateProjectIpWhiteListResponse Client::updateProjectIpWhiteListWithOptions(const string &projectName, const UpdateProjectIpWhiteListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateProjectIpWhiteList"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/ipWhiteList")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectIpWhiteListResponse>();
}

/**
 * @summary Modifies the IP address whitelist of a MaxCompute project.
 *
 * @param request UpdateProjectIpWhiteListRequest
 * @return UpdateProjectIpWhiteListResponse
 */
UpdateProjectIpWhiteListResponse Client::updateProjectIpWhiteList(const string &projectName, const UpdateProjectIpWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProjectIpWhiteListWithOptions(projectName, request, headers, runtime);
}

/**
 * @summary 将project的二层模型升级为三层模型
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectModelTierResponse
 */
UpdateProjectModelTierResponse Client::updateProjectModelTierWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateProjectModelTier"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/modelTier")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectModelTierResponse>();
}

/**
 * @summary 将project的二层模型升级为三层模型
 *
 * @return UpdateProjectModelTierResponse
 */
UpdateProjectModelTierResponse Client::updateProjectModelTier(const string &projectName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProjectModelTierWithOptions(projectName, headers, runtime);
}

/**
 * @summary Updates a quota plan.
 *
 * @param request UpdateQuotaPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQuotaPlanResponse
 */
UpdateQuotaPlanResponse Client::updateQuotaPlanWithOptions(const string &nickname, const string &planName, const UpdateQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateQuotaPlan"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/plans/" , Darabonba::Encode::Encoder::percentEncode(planName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQuotaPlanResponse>();
}

/**
 * @summary Updates a quota plan.
 *
 * @param request UpdateQuotaPlanRequest
 * @return UpdateQuotaPlanResponse
 */
UpdateQuotaPlanResponse Client::updateQuotaPlan(const string &nickname, const string &planName, const UpdateQuotaPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateQuotaPlanWithOptions(nickname, planName, request, headers, runtime);
}

/**
 * @summary Updates the scheduling plan for a quota plan.
 *
 * @param request UpdateQuotaScheduleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQuotaScheduleResponse
 */
UpdateQuotaScheduleResponse Client::updateQuotaScheduleWithOptions(const string &nickname, const UpdateQuotaScheduleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateQuotaSchedule"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/schedule")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQuotaScheduleResponse>();
}

/**
 * @summary Updates the scheduling plan for a quota plan.
 *
 * @param request UpdateQuotaScheduleRequest
 * @return UpdateQuotaScheduleResponse
 */
UpdateQuotaScheduleResponse Client::updateQuotaSchedule(const string &nickname, const UpdateQuotaScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateQuotaScheduleWithOptions(nickname, request, headers, runtime);
}

/**
 * @summary Updates the time-specific configuration of an exclusive resource group for Tunnel (referred to as Tunnel quota).
 *
 * @description Before you call this operation, make sure that you are familiar with the [billing and prices](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) of Tunnel quotas and elastically reserved computing resources.
 *
 * @param request UpdateTunnelQuotaTimerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTunnelQuotaTimerResponse
 */
UpdateTunnelQuotaTimerResponse Client::updateTunnelQuotaTimerWithOptions(const string &nickname, const UpdateTunnelQuotaTimerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTimezone()) {
    query["timezone"] = request.timezone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateTunnelQuotaTimer"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tunnel/" , Darabonba::Encode::Encoder::percentEncode(nickname) , "/timers")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTunnelQuotaTimerResponse>();
}

/**
 * @summary Updates the time-specific configuration of an exclusive resource group for Tunnel (referred to as Tunnel quota).
 *
 * @description Before you call this operation, make sure that you are familiar with the [billing and prices](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) of Tunnel quotas and elastically reserved computing resources.
 *
 * @param request UpdateTunnelQuotaTimerRequest
 * @return UpdateTunnelQuotaTimerResponse
 */
UpdateTunnelQuotaTimerResponse Client::updateTunnelQuotaTimer(const string &nickname, const UpdateTunnelQuotaTimerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTunnelQuotaTimerWithOptions(nickname, request, headers, runtime);
}

/**
 * @summary Add or remove users from a project role.
 *
 * @param request UpdateUsersToRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUsersToRoleResponse
 */
UpdateUsersToRoleResponse Client::updateUsersToRoleWithOptions(const string &projectName, const string &roleName, const UpdateUsersToRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdd()) {
    body["add"] = request.add();
  }

  if (!!request.hasRemove()) {
    body["remove"] = request.remove();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUsersToRole"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectName) , "/roles/" , Darabonba::Encode::Encoder::percentEncode(roleName) , "/users")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUsersToRoleResponse>();
}

/**
 * @summary Add or remove users from a project role.
 *
 * @param request UpdateUsersToRoleRequest
 * @return UpdateUsersToRoleResponse
 */
UpdateUsersToRoleResponse Client::updateUsersToRole(const string &projectName, const string &roleName, const UpdateUsersToRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateUsersToRoleWithOptions(projectName, roleName, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace MaxCompute20220104