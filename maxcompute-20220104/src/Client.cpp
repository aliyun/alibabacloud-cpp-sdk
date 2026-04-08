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
 * @summary Creates a quota plan.
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
    body["name"] = request.getName();
  }

  if (!!request.hasQuota()) {
    body["quota"] = request.getQuota();
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
 * @summary Creates a quota plan.
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
 * @summary Creates a data source and uses MaxCompute Migration Assist (MMA) to migrate data from the data source to MaxCompute.
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
    body["config"] = request.getConfig();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNetworklink()) {
    body["networklink"] = request.getNetworklink();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
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
 * @summary Creates a data source and uses MaxCompute Migration Assist (MMA) to migrate data from the data source to MaxCompute.
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
 * @summary Creates a MaxCompute Migration Assist (MMA) job to pull the metadata from a data source.
 *
 * @param request CreateMmsFetchMetadataJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMmsFetchMetadataJobResponse
 */
CreateMmsFetchMetadataJobResponse Client::createMmsFetchMetadataJobWithOptions(const string &sourceId, const CreateMmsFetchMetadataJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDbName()) {
    body["dbName"] = request.getDbName();
  }

  if (!!request.hasTableNames()) {
    body["tableNames"] = request.getTableNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
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
 * @summary Creates a MaxCompute Migration Assist (MMA) job to pull the metadata from a data source.
 *
 * @param request CreateMmsFetchMetadataJobRequest
 * @return CreateMmsFetchMetadataJobResponse
 */
CreateMmsFetchMetadataJobResponse Client::createMmsFetchMetadataJob(const string &sourceId, const CreateMmsFetchMetadataJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMmsFetchMetadataJobWithOptions(sourceId, request, headers, runtime);
}

/**
 * @summary Creates a data migration task.
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
    body["columnMapping"] = request.getColumnMapping();
  }

  if (!!request.hasDstDbName()) {
    body["dstDbName"] = request.getDstDbName();
  }

  if (!!request.hasDstSchemaName()) {
    body["dstSchemaName"] = request.getDstSchemaName();
  }

  if (!!request.hasEnableDataMigration()) {
    body["enableDataMigration"] = request.getEnableDataMigration();
  }

  if (!!request.hasEnableSchemaMigration()) {
    body["enableSchemaMigration"] = request.getEnableSchemaMigration();
  }

  if (!!request.hasEnableVerification()) {
    body["enableVerification"] = request.getEnableVerification();
  }

  if (!!request.hasEta()) {
    body["eta"] = request.getEta();
  }

  if (!!request.hasIncrement()) {
    body["increment"] = request.getIncrement();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOthers()) {
    body["others"] = request.getOthers();
  }

  if (!!request.hasPartitionFilters()) {
    body["partitionFilters"] = request.getPartitionFilters();
  }

  if (!!request.hasPartitions()) {
    body["partitions"] = request.getPartitions();
  }

  if (!!request.hasSchemaOnly()) {
    body["schemaOnly"] = request.getSchemaOnly();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  if (!!request.hasSourceName()) {
    body["sourceName"] = request.getSourceName();
  }

  if (!!request.hasSrcDbName()) {
    body["srcDbName"] = request.getSrcDbName();
  }

  if (!!request.hasSrcSchemaName()) {
    body["srcSchemaName"] = request.getSrcSchemaName();
  }

  if (!!request.hasTableBlackList()) {
    body["tableBlackList"] = request.getTableBlackList();
  }

  if (!!request.hasTableMapping()) {
    body["tableMapping"] = request.getTableMapping();
  }

  if (!!request.hasTableWhiteList()) {
    body["tableWhiteList"] = request.getTableWhiteList();
  }

  if (!!request.hasTables()) {
    body["tables"] = request.getTables();
  }

  if (!!request.hasTaskType()) {
    body["taskType"] = request.getTaskType();
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
 * @summary Creates a data migration task.
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
 * @summary CreateMmsTimer
 *
 * @param request CreateMmsTimerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMmsTimerResponse
 */
CreateMmsTimerResponse Client::createMmsTimerWithOptions(const string &sourceId, const CreateMmsTimerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasColumnMapping()) {
    body["columnMapping"] = request.getColumnMapping();
  }

  if (!!request.hasEnableDataMigration()) {
    body["enableDataMigration"] = request.getEnableDataMigration();
  }

  if (!!request.hasEnableSchemaMigration()) {
    body["enableSchemaMigration"] = request.getEnableSchemaMigration();
  }

  if (!!request.hasEnableVerification()) {
    body["enableVerification"] = request.getEnableVerification();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOthers()) {
    body["others"] = request.getOthers();
  }

  if (!!request.hasPartitionFilters()) {
    body["partitionFilters"] = request.getPartitionFilters();
  }

  if (!!request.hasPartitions()) {
    body["partitions"] = request.getPartitions();
  }

  if (!!request.hasScheduleType()) {
    body["scheduleType"] = request.getScheduleType();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  if (!!request.hasSrcDbName()) {
    body["srcDbName"] = request.getSrcDbName();
  }

  if (!!request.hasTableBlackList()) {
    body["tableBlackList"] = request.getTableBlackList();
  }

  if (!!request.hasTableMapping()) {
    body["tableMapping"] = request.getTableMapping();
  }

  if (!!request.hasTableWhiteList()) {
    body["tableWhiteList"] = request.getTableWhiteList();
  }

  if (!!request.hasTables()) {
    body["tables"] = request.getTables();
  }

  if (!!request.hasValue()) {
    body["value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMmsTimer"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/timers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMmsTimerResponse>();
}

/**
 * @summary CreateMmsTimer
 *
 * @param request CreateMmsTimerRequest
 * @return CreateMmsTimerResponse
 */
CreateMmsTimerResponse Client::createMmsTimer(const string &sourceId, const CreateMmsTimerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMmsTimerWithOptions(sourceId, request, headers, runtime);
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
    query["isInstall"] = request.getIsInstall();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
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
    {"body" , request.getBody()}
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
 * @summary CreateQuota
 *
 * @param request CreateQuotaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQuotaResponse
 */
CreateQuotaResponse Client::createQuotaWithOptions(const CreateQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChargeType()) {
    query["chargeType"] = request.getChargeType();
  }

  if (!!request.hasCommodityCode()) {
    query["commodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasCommodityData()) {
    query["commodityData"] = request.getCommodityData();
  }

  if (!!request.hasPartNickName()) {
    query["partNickName"] = request.getPartNickName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateQuota"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQuotaResponse>();
}

/**
 * @summary CreateQuota
 *
 * @param request CreateQuotaRequest
 * @return CreateQuotaResponse
 */
CreateQuotaResponse Client::createQuota(const CreateQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createQuotaWithOptions(request, headers, runtime);
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
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
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
    {"body" , request.getBody()}
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
 * @summary Deletes a MaxCompute quota plan.
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
 * @summary Deletes a MaxCompute quota plan.
 *
 * @return DeleteComputeQuotaPlanResponse
 */
DeleteComputeQuotaPlanResponse Client::deleteComputeQuotaPlan(const string &nickname, const string &planName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteComputeQuotaPlanWithOptions(nickname, planName, headers, runtime);
}

/**
 * @summary Deletes a MaxCompute Migration Assist (MMA) data source. For example, you can call this operation to delete the migration plan or metadata of a data source.
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
 * @summary Deletes a MaxCompute Migration Assist (MMA) data source. For example, you can call this operation to delete the migration plan or metadata of a data source.
 *
 * @return DeleteMmsDataSourceResponse
 */
DeleteMmsDataSourceResponse Client::deleteMmsDataSource(const string &sourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMmsDataSourceWithOptions(sourceId, headers, runtime);
}

/**
 * @summary Deletes a MaxCompute Migration Assist (MMA) migration job.
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
 * @summary Deletes a MaxCompute Migration Assist (MMA) migration job.
 *
 * @return DeleteMmsJobResponse
 */
DeleteMmsJobResponse Client::deleteMmsJob(const string &sourceId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMmsJobWithOptions(sourceId, jobId, headers, runtime);
}

/**
 * @summary DeleteMmsTimer
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMmsTimerResponse
 */
DeleteMmsTimerResponse Client::deleteMmsTimerWithOptions(const string &sourceId, const string &timerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMmsTimer"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/timers/" , Darabonba::Encode::Encoder::percentEncode(timerId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMmsTimerResponse>();
}

/**
 * @summary DeleteMmsTimer
 *
 * @return DeleteMmsTimerResponse
 */
DeleteMmsTimerResponse Client::deleteMmsTimer(const string &sourceId, const string &timerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMmsTimerWithOptions(sourceId, timerId, headers, runtime);
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
    query["isLogical"] = request.getIsLogical();
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
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
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
    query["displayTimezone"] = request.getDisplayTimezone();
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
    request.setJobOwnerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJobOwnerList(), "jobOwnerList", "simple"));
  }

  if (!!tmpReq.hasQuotaNicknameList()) {
    request.setQuotaNicknameListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuotaNicknameList(), "quotaNicknameList", "simple"));
  }

  json query = {};
  if (!!request.hasDate()) {
    query["date"] = request.getDate();
  }

  if (!!request.hasJobOwnerListShrink()) {
    query["jobOwnerList"] = request.getJobOwnerListShrink();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasQuotaNicknameListShrink()) {
    query["quotaNicknameList"] = request.getQuotaNicknameListShrink();
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
 * @summary Queries a MaxCompute Migration Assist (MMA) asynchronous task.
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
 * @summary Queries a MaxCompute Migration Assist (MMA) asynchronous task.
 *
 * @return GetMmsAsyncTaskResponse
 */
GetMmsAsyncTaskResponse Client::getMmsAsyncTask(const string &sourceId, const string &asyncTaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsAsyncTaskWithOptions(sourceId, asyncTaskId, headers, runtime);
}

/**
 * @summary Queries the information about a MaxCompute Migration Assist (MMA) data source.
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
    query["lang"] = request.getLang();
  }

  if (!!request.hasWithConfig()) {
    query["withConfig"] = request.getWithConfig();
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
 * @summary Queries the information about a MaxCompute Migration Assist (MMA) data source.
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
 * @summary Queries a database in a MaxCompute Migration Assist (MMA) data source.
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
 * @summary Queries a database in a MaxCompute Migration Assist (MMA) data source.
 *
 * @return GetMmsDbResponse
 */
GetMmsDbResponse Client::getMmsDb(const string &sourceId, const string &dbId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsDbWithOptions(sourceId, dbId, headers, runtime);
}

/**
 * @summary Queries the details of a MaxCompute Migration Assist (MMA) job that is used to query the metadata of a data source.
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
 * @summary Queries the details of a MaxCompute Migration Assist (MMA) job that is used to query the metadata of a data source.
 *
 * @return GetMmsFetchMetadataJobResponse
 */
GetMmsFetchMetadataJobResponse Client::getMmsFetchMetadataJob(const string &sourceId, const string &scanId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsFetchMetadataJobWithOptions(sourceId, scanId, headers, runtime);
}

/**
 * @summary Queries the details of a MaxCompute Migration Assist (MMA) migration job.
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
 * @summary Queries the details of a MaxCompute Migration Assist (MMA) migration job.
 *
 * @return GetMmsJobResponse
 */
GetMmsJobResponse Client::getMmsJob(const string &sourceId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsJobWithOptions(sourceId, jobId, headers, runtime);
}

/**
 * @summary Queries a partition from a MaxCompute Migration Assist (MMA) data source.
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
 * @summary Queries a partition from a MaxCompute Migration Assist (MMA) data source.
 *
 * @return GetMmsPartitionResponse
 */
GetMmsPartitionResponse Client::getMmsPartition(const string &sourceId, const string &partitionId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsPartitionWithOptions(sourceId, partitionId, headers, runtime);
}

/**
 * @summary Queries a table in a MaxCompute Migration Assist (MMA) data source.
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
 * @summary Queries a table in a MaxCompute Migration Assist (MMA) data source.
 *
 * @return GetMmsTableResponse
 */
GetMmsTableResponse Client::getMmsTable(const string &sourceId, const string &tableId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsTableWithOptions(sourceId, tableId, headers, runtime);
}

/**
 * @summary Queries the details of a migration task.
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
 * @summary Queries the details of a migration task.
 *
 * @return GetMmsTaskResponse
 */
GetMmsTaskResponse Client::getMmsTask(const string &sourceId, const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsTaskWithOptions(sourceId, taskId, headers, runtime);
}

/**
 * @summary GetMmsTimer
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMmsTimerResponse
 */
GetMmsTimerResponse Client::getMmsTimerWithOptions(const string &sourceId, const string &timerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMmsTimer"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/timers/" , Darabonba::Encode::Encoder::percentEncode(timerId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMmsTimerResponse>();
}

/**
 * @summary GetMmsTimer
 *
 * @return GetMmsTimerResponse
 */
GetMmsTimerResponse Client::getMmsTimer(const string &sourceId, const string &timerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMmsTimerWithOptions(sourceId, timerId, headers, runtime);
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
    query["sourceProject"] = request.getSourceProject();
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
    query["verbose"] = request.getVerbose();
  }

  if (!!request.hasWithQuotaProductType()) {
    query["withQuotaProductType"] = request.getWithQuotaProductType();
  }

  if (!!request.hasWithStorageTierInfo()) {
    query["withStorageTierInfo"] = request.getWithStorageTierInfo();
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
    query["AkProven"] = request.getAkProven();
  }

  if (!!request.hasMock()) {
    query["mock"] = request.getMock();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
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
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
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
    query["displayTimezone"] = request.getDisplayTimezone();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
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
    request.setPlotTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPlotTypes(), "plotTypes", "simple"));
  }

  if (!!tmpReq.hasYAxisTypes()) {
    request.setYAxisTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getYAxisTypes(), "yAxisTypes", "simple"));
  }

  json query = {};
  if (!!request.hasAggMethod()) {
    query["aggMethod"] = request.getAggMethod();
  }

  if (!!request.hasFrom()) {
    query["from"] = request.getFrom();
  }

  if (!!request.hasPlotTypesShrink()) {
    query["plotTypes"] = request.getPlotTypesShrink();
  }

  if (!!request.hasProductId()) {
    query["productId"] = request.getProductId();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasSubQuotaNickname()) {
    query["subQuotaNickname"] = request.getSubQuotaNickname();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  if (!!request.hasTo()) {
    query["to"] = request.getTo();
  }

  if (!!request.hasYAxisTypesShrink()) {
    query["yAxisTypes"] = request.getYAxisTypesShrink();
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
    query["objectName"] = request.getObjectName();
  }

  if (!!request.hasObjectType()) {
    query["objectType"] = request.getObjectType();
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
    request.setJobOwnerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJobOwnerList(), "jobOwnerList", "simple"));
  }

  if (!!tmpReq.hasQuotaNicknameList()) {
    request.setQuotaNicknameListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuotaNicknameList(), "quotaNicknameList", "simple"));
  }

  json query = {};
  if (!!request.hasFrom()) {
    query["from"] = request.getFrom();
  }

  if (!!request.hasJobOwnerListShrink()) {
    query["jobOwnerList"] = request.getJobOwnerListShrink();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasQuotaNicknameListShrink()) {
    query["quotaNicknameList"] = request.getQuotaNicknameListShrink();
  }

  if (!!request.hasTo()) {
    query["to"] = request.getTo();
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
    query["date"] = request.getDate();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
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
    query["date"] = request.getDate();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
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
    request.setProjectsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProjects(), "projects", "simple"));
  }

  json query = {};
  if (!!request.hasBeginDate()) {
    query["beginDate"] = request.getBeginDate();
  }

  if (!!request.hasEndDate()) {
    query["endDate"] = request.getEndDate();
  }

  if (!!request.hasProjectsShrink()) {
    query["projects"] = request.getProjectsShrink();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
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
    query["schemaName"] = request.getSchemaName();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
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
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
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
 * @summary Queries a list of computing resources used by a pay-as-you-go job.
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
    body["endDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobOwner()) {
    body["jobOwner"] = request.getJobOwner();
  }

  if (!!request.hasPageNumber()) {
    body["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectNames()) {
    body["projectNames"] = request.getProjectNames();
  }

  if (!!request.hasRegion()) {
    body["region"] = request.getRegion();
  }

  if (!!request.hasSignature()) {
    body["signature"] = request.getSignature();
  }

  if (!!request.hasSpecCodes()) {
    body["specCodes"] = request.getSpecCodes();
  }

  if (!!request.hasStartDate()) {
    body["startDate"] = request.getStartDate();
  }

  if (!!request.hasTypes()) {
    body["types"] = request.getTypes();
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
 * @summary Queries a list of computing resources used by a pay-as-you-go job.
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
    query["marker"] = request.getMarker();
  }

  if (!!request.hasMaxItem()) {
    query["maxItem"] = request.getMaxItem();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.getPrefix();
  }

  if (!!request.hasSchemaName()) {
    query["schemaName"] = request.getSchemaName();
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
    query["ascOrder"] = request.getAscOrder();
  }

  if (!!request.hasOrderColumn()) {
    query["orderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasExtNodeIdList()) {
    body["extNodeIdList"] = request.getExtNodeIdList();
  }

  if (!!request.hasExtNodeNameList()) {
    body["extNodeNameList"] = request.getExtNodeNameList();
  }

  if (!!request.hasFrom()) {
    body["from"] = request.getFrom();
  }

  if (!!request.hasInstanceIdList()) {
    body["instanceIdList"] = request.getInstanceIdList();
  }

  if (!!request.hasJobOwnerList()) {
    body["jobOwnerList"] = request.getJobOwnerList();
  }

  if (!!request.hasPriorityList()) {
    body["priorityList"] = request.getPriorityList();
  }

  if (!!request.hasProjectList()) {
    body["projectList"] = request.getProjectList();
  }

  if (!!request.hasQuotaNickname()) {
    body["quotaNickname"] = request.getQuotaNickname();
  }

  if (!!request.hasSceneTagList()) {
    body["sceneTagList"] = request.getSceneTagList();
  }

  if (!!request.hasSignatureList()) {
    body["signatureList"] = request.getSignatureList();
  }

  if (!!request.hasSortByList()) {
    body["sortByList"] = request.getSortByList();
  }

  if (!!request.hasSortOrderList()) {
    body["sortOrderList"] = request.getSortOrderList();
  }

  if (!!request.hasStatusList()) {
    body["statusList"] = request.getStatusList();
  }

  if (!!request.hasTaskNameList()) {
    body["taskNameList"] = request.getTaskNameList();
  }

  if (!!request.hasTo()) {
    body["to"] = request.getTo();
  }

  if (!!request.hasTypeList()) {
    body["typeList"] = request.getTypeList();
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
 * @summary Queries a performance metric of the job that is complete.
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
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  json body = {};
  if (!!request.hasGroup()) {
    body["group"] = request.getGroup();
  }

  if (!!request.hasMetric()) {
    body["metric"] = request.getMetric();
  }

  if (!!request.hasPeriod()) {
    body["period"] = request.getPeriod();
  }

  if (!!request.hasProject()) {
    body["project"] = request.getProject();
  }

  if (!!request.hasQuota()) {
    body["quota"] = request.getQuota();
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
 * @summary Queries a performance metric of the job that is complete.
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
    query["ascOrder"] = request.getAscOrder();
  }

  if (!!request.hasOrderColumn()) {
    query["orderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  json body = {};
  if (!!request.hasExtNodeIdList()) {
    body["extNodeIdList"] = request.getExtNodeIdList();
  }

  if (!!request.hasFrom()) {
    body["from"] = request.getFrom();
  }

  if (!!request.hasInstanceIdList()) {
    body["instanceIdList"] = request.getInstanceIdList();
  }

  if (!!request.hasJobOwnerList()) {
    body["jobOwnerList"] = request.getJobOwnerList();
  }

  if (!!request.hasPriorityList()) {
    body["priorityList"] = request.getPriorityList();
  }

  if (!!request.hasProjectList()) {
    body["projectList"] = request.getProjectList();
  }

  if (!!request.hasQuotaNickname()) {
    body["quotaNickname"] = request.getQuotaNickname();
  }

  if (!!request.hasSignatureList()) {
    body["signatureList"] = request.getSignatureList();
  }

  if (!!request.hasSortByList()) {
    body["sortByList"] = request.getSortByList();
  }

  if (!!request.hasSortOrderList()) {
    body["sortOrderList"] = request.getSortOrderList();
  }

  if (!!request.hasStatusList()) {
    body["statusList"] = request.getStatusList();
  }

  if (!!request.hasTo()) {
    body["to"] = request.getTo();
  }

  if (!!request.hasTypeList()) {
    body["typeList"] = request.getTypeList();
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
 * @summary ListMmsDataSourceConfigItems
 *
 * @param request ListMmsDataSourceConfigItemsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMmsDataSourceConfigItemsResponse
 */
ListMmsDataSourceConfigItemsResponse Client::listMmsDataSourceConfigItemsWithOptions(const ListMmsDataSourceConfigItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["lang"] = request.getLang();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMmsDataSourceConfigItems"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/configItems")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMmsDataSourceConfigItemsResponse>();
}

/**
 * @summary ListMmsDataSourceConfigItems
 *
 * @param request ListMmsDataSourceConfigItemsRequest
 * @return ListMmsDataSourceConfigItemsResponse
 */
ListMmsDataSourceConfigItemsResponse Client::listMmsDataSourceConfigItems(const ListMmsDataSourceConfigItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMmsDataSourceConfigItemsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of MaxCompute Migration Assist (MMA) data sources.
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
    query["name"] = request.getName();
  }

  if (!!request.hasPageNum()) {
    query["pageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
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
 * @summary Queries a list of MaxCompute Migration Assist (MMA) data sources.
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
 * @summary Queries a list of databases in a MaxCompute Migration Assist (MMA) data source.
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
    request.setSorterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSorter(), "sorter", "json"));
  }

  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageNum()) {
    query["pageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSorterShrink()) {
    query["sorter"] = request.getSorterShrink();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
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
 * @summary Queries a list of databases in a MaxCompute Migration Assist (MMA) data source.
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
 * @summary Queries a list of migration jobs.
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
    query["dstDbName"] = request.getDstDbName();
  }

  if (!!request.hasDstTableName()) {
    query["dstTableName"] = request.getDstTableName();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageNum()) {
    query["pageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSrcDbName()) {
    query["srcDbName"] = request.getSrcDbName();
  }

  if (!!request.hasSrcTableName()) {
    query["srcTableName"] = request.getSrcTableName();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasStopped()) {
    query["stopped"] = request.getStopped();
  }

  if (!!request.hasTimerId()) {
    query["timerId"] = request.getTimerId();
  }

  if (!!request.hasSorter()) {
    query["sorter"] = request.getSorter();
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
 * @summary Queries a list of migration jobs.
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
 * @summary Queries a list of partitions in a MaxCompute Migration Assist (MMA) data source.
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
    request.setStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatus(), "status", "json"));
  }

  json query = {};
  if (!!request.hasDbId()) {
    query["dbId"] = request.getDbId();
  }

  if (!!request.hasDbName()) {
    query["dbName"] = request.getDbName();
  }

  if (!!request.hasLastDdlTimeEnd()) {
    query["lastDdlTimeEnd"] = request.getLastDdlTimeEnd();
  }

  if (!!request.hasLastDdlTimeStart()) {
    query["lastDdlTimeStart"] = request.getLastDdlTimeStart();
  }

  if (!!request.hasPageNum()) {
    query["pageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatusShrink()) {
    query["status"] = request.getStatusShrink();
  }

  if (!!request.hasTableId()) {
    query["tableId"] = request.getTableId();
  }

  if (!!request.hasTableName()) {
    query["tableName"] = request.getTableName();
  }

  if (!!request.hasUpdated()) {
    query["updated"] = request.getUpdated();
  }

  if (!!request.hasValue()) {
    query["value"] = request.getValue();
  }

  if (!!request.hasSorter()) {
    query["sorter"] = request.getSorter();
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
 * @summary Queries a list of partitions in a MaxCompute Migration Assist (MMA) data source.
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
 * @summary Queries a list of tables in a MaxCompute Migration Assist (MMA) data source.
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
    request.setStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatus(), "status", "json"));
  }

  json query = {};
  if (!!request.hasDbId()) {
    query["dbId"] = request.getDbId();
  }

  if (!!request.hasDbName()) {
    query["dbName"] = request.getDbName();
  }

  if (!!request.hasDstName()) {
    query["dstName"] = request.getDstName();
  }

  if (!!request.hasDstProjectName()) {
    query["dstProjectName"] = request.getDstProjectName();
  }

  if (!!request.hasDstSchemaName()) {
    query["dstSchemaName"] = request.getDstSchemaName();
  }

  if (!!request.hasHasPartitions()) {
    query["hasPartitions"] = request.getHasPartitions();
  }

  if (!!request.hasLastDdlTimeEnd()) {
    query["lastDdlTimeEnd"] = request.getLastDdlTimeEnd();
  }

  if (!!request.hasLastDdlTimeStart()) {
    query["lastDdlTimeStart"] = request.getLastDdlTimeStart();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOnlyName()) {
    query["onlyName"] = request.getOnlyName();
  }

  if (!!request.hasPageNum()) {
    query["pageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatusShrink()) {
    query["status"] = request.getStatusShrink();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  if (!!request.hasSorter()) {
    query["sorter"] = request.getSorter();
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
 * @summary Queries a list of tables in a MaxCompute Migration Assist (MMA) data source.
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
 * @summary Queries a list of the execution logs of a single migration task.
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
 * @summary Queries a list of the execution logs of a single migration task.
 *
 * @return ListMmsTaskLogsResponse
 */
ListMmsTaskLogsResponse Client::listMmsTaskLogs(const string &sourceId, const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMmsTaskLogsWithOptions(sourceId, taskId, headers, runtime);
}

/**
 * @summary Queries a list of migration tasks.
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
    query["dstDbName"] = request.getDstDbName();
  }

  if (!!request.hasDstTableName()) {
    query["dstTableName"] = request.getDstTableName();
  }

  if (!!request.hasJobId()) {
    query["jobId"] = request.getJobId();
  }

  if (!!request.hasJobName()) {
    query["jobName"] = request.getJobName();
  }

  if (!!request.hasPageNum()) {
    query["pageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPartition()) {
    query["partition"] = request.getPartition();
  }

  if (!!request.hasSrcDbName()) {
    query["srcDbName"] = request.getSrcDbName();
  }

  if (!!request.hasSrcTableName()) {
    query["srcTableName"] = request.getSrcTableName();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasSorter()) {
    query["sorter"] = request.getSorter();
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
 * @summary Queries a list of migration tasks.
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
 * @summary ListMmsTimerLogs
 *
 * @param request ListMmsTimerLogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMmsTimerLogsResponse
 */
ListMmsTimerLogsResponse Client::listMmsTimerLogsWithOptions(const string &sourceId, const string &timerId, const ListMmsTimerLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["pageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMmsTimerLogs"},
    {"version" , "2022-01-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/mms/datasources/" , Darabonba::Encode::Encoder::percentEncode(sourceId) , "/timers/" , Darabonba::Encode::Encoder::percentEncode(timerId) , "/logs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMmsTimerLogsResponse>();
}

/**
 * @summary ListMmsTimerLogs
 *
 * @param request ListMmsTimerLogsRequest
 * @return ListMmsTimerLogsResponse
 */
ListMmsTimerLogsResponse Client::listMmsTimerLogs(const string &sourceId, const string &timerId, const ListMmsTimerLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMmsTimerLogsWithOptions(sourceId, timerId, request, headers, runtime);
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
    query["listSystemCatalog"] = request.getListSystemCatalog();
  }

  if (!!request.hasMarker()) {
    query["marker"] = request.getMarker();
  }

  if (!!request.hasMaxItem()) {
    query["maxItem"] = request.getMaxItem();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.getPrefix();
  }

  if (!!request.hasQuotaName()) {
    query["quotaName"] = request.getQuotaName();
  }

  if (!!request.hasQuotaNickName()) {
    query["quotaNickName"] = request.getQuotaNickName();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasSaleTags()) {
    query["saleTags"] = request.getSaleTags();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
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
    query["billingType"] = request.getBillingType();
  }

  if (!!request.hasMarker()) {
    query["marker"] = request.getMarker();
  }

  if (!!request.hasMaxItem()) {
    query["maxItem"] = request.getMaxItem();
  }

  if (!!request.hasProductId()) {
    query["productId"] = request.getProductId();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasSaleTags()) {
    query["saleTags"] = request.getSaleTags();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
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
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
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
    query["marker"] = request.getMarker();
  }

  if (!!request.hasMaxItem()) {
    query["maxItem"] = request.getMaxItem();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasSchemaName()) {
    query["schemaName"] = request.getSchemaName();
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
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTypes(), "types", "json"));
  }

  json query = {};
  if (!!request.hasAscOrder()) {
    query["ascOrder"] = request.getAscOrder();
  }

  if (!!request.hasDate()) {
    query["date"] = request.getDate();
  }

  if (!!request.hasOrderColumn()) {
    query["orderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPartitionPrefix()) {
    query["partitionPrefix"] = request.getPartitionPrefix();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasSchema()) {
    query["schema"] = request.getSchema();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  if (!!request.hasTypesShrink()) {
    query["types"] = request.getTypesShrink();
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
    query["ascOrder"] = request.getAscOrder();
  }

  if (!!request.hasDate()) {
    query["date"] = request.getDate();
  }

  if (!!request.hasOrderColumn()) {
    query["orderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectPrefix()) {
    query["projectPrefix"] = request.getProjectPrefix();
  }

  if (!!request.hasRecentDays()) {
    query["recentDays"] = request.getRecentDays();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
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
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTypes(), "types", "simple"));
  }

  json query = {};
  if (!!request.hasAscOrder()) {
    query["ascOrder"] = request.getAscOrder();
  }

  if (!!request.hasDate()) {
    query["date"] = request.getDate();
  }

  if (!!request.hasOrderColumn()) {
    query["orderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRecentDays()) {
    query["recentDays"] = request.getRecentDays();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasSchema()) {
    query["schema"] = request.getSchema();
  }

  if (!!request.hasTablePrefix()) {
    query["tablePrefix"] = request.getTablePrefix();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  if (!!request.hasTypesShrink()) {
    query["types"] = request.getTypesShrink();
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
    query["marker"] = request.getMarker();
  }

  if (!!request.hasMaxItem()) {
    query["maxItem"] = request.getMaxItem();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.getPrefix();
  }

  if (!!request.hasSchemaName()) {
    query["schemaName"] = request.getSchemaName();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
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
 * @summary Obtains users in a MaxCompute project.
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
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
 * @summary Obtains users in a MaxCompute project.
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
    query["AkProven"] = request.getAkProven();
  }

  if (!!request.hasMock()) {
    query["mock"] = request.getMock();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
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
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasStrategy()) {
    query["strategy"] = request.getStrategy();
  }

  json body = {};
  if (!!request.hasInterval()) {
    body["interval"] = request.getInterval();
  }

  if (!!request.hasNickname()) {
    body["nickname"] = request.getNickname();
  }

  if (!!request.hasSubMetric()) {
    body["subMetric"] = request.getSubMetric();
  }

  if (!!request.hasSubQuotaNickname()) {
    body["subQuotaNickname"] = request.getSubQuotaNickname();
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
 * @summary Queries time series metrics of stored data.
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
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  json body = {};
  if (!!request.hasProjectList()) {
    body["projectList"] = request.getProjectList();
  }

  if (!!request.hasTypeList()) {
    body["typeList"] = request.getTypeList();
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
 * @summary Queries time series metrics of stored data.
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
 * @summary Queries the metrics of the Tunnel service within a specified time range.
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
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasStrategy()) {
    query["strategy"] = request.getStrategy();
  }

  json body = {};
  if (!!request.hasCodeList()) {
    body["codeList"] = request.getCodeList();
  }

  if (!!request.hasGroupList()) {
    body["groupList"] = request.getGroupList();
  }

  if (!!request.hasOperationList()) {
    body["operationList"] = request.getOperationList();
  }

  if (!!request.hasProject()) {
    body["project"] = request.getProject();
  }

  if (!!request.hasQuotaNickname()) {
    body["quotaNickname"] = request.getQuotaNickname();
  }

  if (!!request.hasTableList()) {
    body["tableList"] = request.getTableList();
  }

  if (!!request.hasTopN()) {
    body["topN"] = request.getTopN();
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
 * @summary Queries the metrics of the Tunnel service within a specified time range.
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
 * @summary Queries the metrics of the Tunnel service within a specified time range.
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
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  json body = {};
  if (!!request.hasAscOrder()) {
    body["ascOrder"] = request.getAscOrder();
  }

  if (!!request.hasGroupList()) {
    body["groupList"] = request.getGroupList();
  }

  if (!!request.hasLimit()) {
    body["limit"] = request.getLimit();
  }

  if (!!request.hasOperationList()) {
    body["operationList"] = request.getOperationList();
  }

  if (!!request.hasOrderColumn()) {
    body["orderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasProject()) {
    body["project"] = request.getProject();
  }

  if (!!request.hasQuotaNickname()) {
    body["quotaNickname"] = request.getQuotaNickname();
  }

  if (!!request.hasTableList()) {
    body["tableList"] = request.getTableList();
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
 * @summary Queries the metrics of the Tunnel service within a specified time range.
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
 * @summary Retries a migration job.
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
 * @summary Retries a migration job.
 *
 * @return RetryMmsJobResponse
 */
RetryMmsJobResponse Client::retryMmsJob(const string &sourceId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retryMmsJobWithOptions(sourceId, jobId, headers, runtime);
}

/**
 * @summary Starts a migration job.
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
 * @summary Starts a migration job.
 *
 * @return StartMmsJobResponse
 */
StartMmsJobResponse Client::startMmsJob(const string &sourceId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startMmsJobWithOptions(sourceId, jobId, headers, runtime);
}

/**
 * @summary Stops a migration job.
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
 * @summary Stops a migration job.
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
    body["endDate"] = request.getEndDate();
  }

  if (!!request.hasProjectNames()) {
    body["projectNames"] = request.getProjectNames();
  }

  if (!!request.hasRegion()) {
    body["region"] = request.getRegion();
  }

  if (!!request.hasStartDate()) {
    body["startDate"] = request.getStartDate();
  }

  if (!!request.hasStatsType()) {
    body["statsType"] = request.getStatsType();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
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
    body["name"] = request.getName();
  }

  if (!!request.hasQuota()) {
    body["quota"] = request.getQuota();
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
    query["scheduleTimezone"] = request.getScheduleTimezone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.getBody())}
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
 * @summary Updates the basic configuration of a MaxCompute quota. For example, you can call this operation to add or delete a level-2 quota, define the basic attributes of a level-2 quota, and define the configuration of compute units (CUs) for a quota plan that is in effect.
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
    body["subQuotaInfoList"] = request.getSubQuotaInfoList();
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
 * @summary Updates the basic configuration of a MaxCompute quota. For example, you can call this operation to add or delete a level-2 quota, define the basic attributes of a level-2 quota, and define the configuration of compute units (CUs) for a quota plan that is in effect.
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
 * @summary Updates the metadata of a MaxCompute Migration Assist (MMA) data source.
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
    body["action"] = request.getAction();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasTest()) {
    body["test"] = request.getTest();
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
 * @summary Updates the metadata of a MaxCompute Migration Assist (MMA) data source.
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
    {"body" , request.getBody()}
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
    body["comment"] = request.getComment();
  }

  if (!!request.hasProperties()) {
    body["properties"] = request.getProperties();
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
 * @summary Updates the default computing quota of a project.
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
    body["quota"] = request.getQuota();
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
 * @summary Updates the default computing quota of a project.
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
    {"body" , request.getBody()}
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
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
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
    query["region"] = request.getRegion();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
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
    query["timezone"] = request.getTimezone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.getBody())}
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
    body["add"] = request.getAdd();
  }

  if (!!request.hasRemove()) {
    body["remove"] = request.getRemove();
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